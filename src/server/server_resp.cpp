/* License As per License.txt in the Root Folder*/
#include "server_resp.h"

Server_Response::Server_Response(){
}

Server_Response::~Server_Response(){
}

void Server_Response::Check_Server_Response(Server_Response *response){
	Server_Debug::Debug(response->getCount(), response->getMessage(), response->getStrings());
}

int Server_Response::getCount(){
	return this->count;
}

char * Server_Response::getMessage(){
	return this->message;
}

char ** Server_Response::getStrings(){
	return this->sta;
}
