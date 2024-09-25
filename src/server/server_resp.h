/* License As per License.txt in the Root Folder*/
#ifndef _S_RESP_
#define _S_RESP_

#include "server_debug.h"

class Server_Response{
	private:
		char *message;
		char **sta;
		int count;
	public:
		Server_Response();
		~Server_Response();

		void Check_Server_Response(Server_Response *resp);
		int getCount();
		char *getMessage();
		char **getStrings();
};

#endif
