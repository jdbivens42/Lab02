#include "ReadFile.h"
#include <iostream>
#include <string>

using namespace ReadFile;

ReadFile(const char* file_name)
{
      input_file.open(file_name);
	  if (input_file)
	  {
	     _eof = false;
		 closed = false;
	  }
	  else
	  {
	     _eof = true;
		 closed = true;
	  }
	  
	  
}

~ReadFile()
{
  close();
}

String* readLine()
{
  if (closed || _eof) return NULL;


  string text;
  _eof = !(getline(input_file, text)); 

  String* str = new String((const char*) text.c_str());
  return str;
	  
		
}

