#include <iostream>
//#pragma comment (lib, "ws2_32.lib")

using namespace std;

void main()
{

	//Initialize winsock
	//WSADATA wsData;
	//WORD ver = MAKEWORD(2, 2);

	//int wsOk = WSAStartup(ver, &wsData);
	//if (wsOk != 0)
	//{
	//	cerr << "Can't Initialize Winsock! Quitting" << endl;
	//	return;
	//}

	//Create a socket
	//SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);
	//if (listening == INVALID_SOCKET)
	//{
	//	cerr << "Can't create a socket! Quitting" << endl;
	//	return;
	//}

	//Bind the socket to IP address and port
	//sockaddr_in hint;
	//hint.sin_family = AF_INET;
	//hint.sin_port = htons(54000);
	//hint.sin_addr.S_un.S_addr = INADDR_ANY;	//Could also use inet_pton

	//bind(listening, (sockaddr*)&hint, sizeof(hint));

	//Tell winsock the socket id for listening
	//listen(listening, SOMAXCONN);

	//Wait for a connection
	//sockaddr_in client;
	//int clientSize = sizeof(client);

	//SOCKET clientSocket = accept(listening, (sockaddr*)&client, &clientSize);

	//char host[NI_MAXHOST];
	//char service[NI_MAXSERV];

	//ZeroMemory(host, NI_MAXHOST);
	//ZeroMemory(service, NI_MAXSERV);

	//if (getnameinfo((sockaddr*)&client, sizeof(client), host, NI_MAXHOST, service, NI_MAXSERV, 0) == 0)
	//{
	//	cout << host << " connected on port " << service << endl;
	//}
	//else
	//{
	//	inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
	//	cout << host << " connected on port " <<
	//		ntohs(client.sin_port) << endl;
	//}

	//Close Listening socket
	//closesocket(listening);

	//while loop: accept and echo message back to client
	//char buf[4096];

	//while (true)
	//{
		//ZeroMemory(buf, 4096);

		//Wait For Client To Send Data
		//int bytesReceived = recv(clientSocket, buf, 4096, 0);
		//if (bytesReceived == SOCKET_ERROR)
		//{
		//	cerr << "Error in recv(). Quitting" << endl;
		//	break;
		//}

		//if (bytesReceived == 0)
		//{
		//	cout << "Client disconnected " << endl;
		//	break;
		//}

		//Echo Message Back To Client
		//send(clientSocket, buf, bytesReceived + 1, 0);
		//cout << "SERVER> " << string(buf, 0, bytesReceived) << endl;

	//}

	//Close the socket
	//closesocket(clientSocket);

	// Cleanup winsock
	//WSACleanup();

}