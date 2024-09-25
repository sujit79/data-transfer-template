/* License As per License.txt in the Root Folder*/
#ifndef __LIBXMLPP_FILE_MYPARSER_H
#define __LIBXMLPP_FILE_MYPARSER_H

#include <libxml++/libxml++.h>
#include <glibmm/convert.h> //For Glib::ConvertError

static int xml_index = 0;

class FileSaxParser : public xmlpp::SaxParser
{
private:
	char str[128][256];

public:
#ifdef _XML_
  FileSaxParser();
  virtual ~FileSaxParser();

  char**  getFileName();
  int returnIndex();


protected:
  //overrides:
#ifdef LIBXMLCPP_EXCEPTIONS_ENABLED
  virtual void on_start_document();
  virtual void on_end_document();
  virtual void on_start_element(const Glib::ustring& name,
                                const AttributeList& properties);
  virtual void on_end_element(const Glib::ustring& name);
  virtual void on_characters(const Glib::ustring& characters);
  virtual void on_comment(const Glib::ustring& text);
  virtual void on_warning(const Glib::ustring& text);
  virtual void on_error(const Glib::ustring& text);
  virtual void on_fatal_error(const Glib::ustring& text);
#endif
#endif
};

#endif
