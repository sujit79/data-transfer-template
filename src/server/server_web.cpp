/* License As per License.txt in the Root Folder*/
#include "server_web.h"
#include "server_db.h"
	Server_Web::Server_Web(){
		Server_DB *db = new Server_DB();
		db->Server_DB_Main(0, NULL);
	}	

	Server_Web::~Server_Web(){

	}
