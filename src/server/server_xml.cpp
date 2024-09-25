/* License As per License.txt in the Root Folder*/
#ifndef __LIBXMLPP_FILE_MYPARSER_H
#define __LIBXMLPP_FILE_MYPARSER_H

#include "server_xml.h"

#ifdef _XML_
FileSaxParser::FileSaxParser()
	  : xmlpp::SaxParser()
{	
}	

FileSaxParser::~FileSaxParser()
{	
}

FileSaxParser::returnIndex(){
	return xml_index;
}

FileSaxParser::getFileName(){
		return str;
}	

#ifdef LIBXMLCPP_EXCEPTIONS_ENABLED
void FileSaxParser::on_start_document()
{	
	  std::cout << "on_start_document()" << std::endl;
}

void FileSaxParser::on_end_document()
	{
	  std::cout << "on_end_document()" << std::endl;
	}

	void FileSaxParser::on_start_element(const Glib::ustring& name,
                                   const AttributeList& attributes)
	{


	  std::cout << "node name=" << name << std::endl;

  // Print attributes:

	  for(xmlpp::SaxParser::AttributeList::const_iterator iter = attributes.begin(); iter != attributes.end(); ++iter)
	  {
	    try
	    {
	      std::cout << "  Attribute name=" << iter->name << std::endl;
	    }
	    catch(const Glib::ConvertError& ex)
	    {
	      std::cerr << "FileSaxParser::on_start_element(): Exception caught while converting name for std::cout: " << ex.what() << std::endl;
	    }

	    try
	    {
	      std::cout << "    , value= " << iter->value << std::endl;
	      strcpy(str[FileSaxParser::index++], iter->value->c_str())
	    }
	    catch(const Glib::ConvertError& ex)
	    {
	      std::cerr << "FileSaxParser::on_start_element(): Exception caught while converting value for std::cout: " << ex.what() << std::endl;
	    }
	  }
	}

	void FileSaxParser::on_end_element(const Glib::ustring& /* name */)
	{
	  std::cout << "on_end_element()" << std::endl;
	}	

	void FileSaxParser::on_characters(const Glib::ustring& text)
	{
	  try
	  {
	    std::cout << "on_characters(): " << text << std::endl;
	  }
	  catch(const Glib::ConvertError& ex)
	  {
	    std::cerr << "FileSaxParser::on_characters(): Exception caught while converting text for std::cout: " << ex.what() << std::endl;
	  }
	}

	void FileSaxParser::on_comment(const Glib::ustring& text)
	{
	  try
	  {
	    std::cout << "on_comment(): " << text << std::endl;
	  }
	  catch(const Glib::ConvertError& ex)
	  {
	    std::cerr << "FileSaxParser::on_comment(): Exception caught while converting text for std::cout: " << ex.what() << std::endl;
	  }
	}

	void FileSaxParser::on_warning(const Glib::ustring& text)
	{
	  try
	  {
	    std::cout << "on_warning(): " << text << std::endl;
	  }
	  catch(const Glib::ConvertError& ex)
	  {
	    std::cerr << "FileSaxParser::on_warning(): Exception caught while converting text for std::cout: " << ex.what() << std::endl;
	  }
	}

	void FileSaxParser::on_error(const Glib::ustring& text)
	{
	  try
	  {
	    std::cout << "on_error(): " << text << std::endl;
	  }
	  catch(const Glib::ConvertError& ex)
	  {
	    std::cerr << "FileSaxParser::on_error(): Exception caught while converting text for std::cout: " << ex.what() << std::endl;
	  }
	}

	void FileSaxParser::on_fatal_error(const Glib::ustring& text)
	{
	  try
	  {
	    std::cout << "on_fatal_error(): " << text << std::endl;
  	  }
	  catch(const Glib::ConvertError& ex)
	  {
	    std::cerr << "FileSaxParser::on_characters(): Exception caught while converting value for std::cout: " << ex.what() << std::endl;
	  }
	}
#endif

#endif

#endif
