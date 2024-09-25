bin_PROGRAMS=micro_install

src=
src+=client/client.cpp
src+=client/media.c
src+=compress/server_compress.cpp
src+=compress/client_decompress.cpp
src+=crypto/server_crypt.cpp
src+=crypto/client_decrypt.cpp
src+=infra/infra.cpp
src+=server/server_config.cpp  
src+=server/server_db_mysql.cpp   
src+=server/server_debug.cpp  
src+=server/server_resp.cpp
src+=server/server_db.cpp      
src+=server/server_db_pgsql.cpp    
src+=server/server_init.cpp   
src+=server/server_web.cpp
src+=server/server_db_gdm.cpp  
src+=server/server_db_sqllite.cpp  
src+=server/server_parse.cpp  
src+=server/server_xml.cpp
src+=main.cpp


flags=
flags+=-I@top_srcdir@/include
AM_CXXFLAGS=$(MICRO_INSTALL_LIBXML_CFLAGS) $(MICRO_INSTALL_GTK_MM_CFLAGS) $(MICRO_INSTALL_ACE_CFLAGS)  -g3 

micro_install_SOURCES=$(src)
micro_install_CFLAGS=$(flags) $(INCL)
micro_install_LDFLAGS=$(MICRO_INSTALL_LIBXML_LIBS) $(MICRO_INSTALL_GTK_MM_LIBS) $(MICRO_INSTALL_ACE_LIBS)
