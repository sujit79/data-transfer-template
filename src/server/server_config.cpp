/* License As per License.txt in the Root Folder*/
#include "server_config.h"

Server_Config::Server_Config(){
	Server_DB *server = new Server_DB();
	server->Server_DB_Main(1, NULL);
}

Server_Config::~Server_Config(){
}
