/* License As per License.txt in the Root Folder*/
#ifndef _SDEBUG_
#define _SDEBUG_

#include<iostream>

class Server_Debug{
	public :
		Server_Debug();
		~Server_Debug();
		static void Debug(int argc, char * message, char *argv[]);
};

#endif
