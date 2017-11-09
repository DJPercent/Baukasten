#include <iostream>
#include <windows.h>
#include <fstream>

#define CONSOLE_VISIBLE "N"
#define CREATE_LOGFILE "Y"
#define FILENAME_LOGFILE "logfile.txt"

using namespace std;

int init(void) {
	if(CONSOLE_VISIBLE == "N") {
		FreeConsole();
	}
	if(CREATE_LOGFILE == "Y") {
		ofstream(FILENAME_LOGFILE);
	}
		
}

int main(int argc, char** argv) {
	init();
	
	return 0;
}
