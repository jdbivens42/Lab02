#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

/*
	The WriteFile class accepts a string literal ( const char* ) through the constructor
	It will attempt to open a a file in output mode
	The Destructor is going to close the file if it is not already closed.

*/

class WriteFile
{
	private:
		ofstream output_file;
		bool closed;
	
	public:
// Constructor, used to open the file
		WriteFile(const char* file_name);
// Destructor, calls close function to close the file	
		~WriteFile();
// Accepts a String* to text and writes that text to an output file
		void writeLine( String* line); 
// closes the file
		void close();

};

#endif
