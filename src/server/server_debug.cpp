/* License As per License.txt in the Root Folder*/
#include "server_debug.h"

Server_Debug::Server_Debug(){
}

Server_Debug::~Server_Debug(){
}

void Server_Debug::Debug(int argc, char * message, char *argv[]){

	std::cout<<message;
	for(int i = 0; i < argc; i++ ) std::cout<<argv[i];

	std::cout<<std::endl;


}
