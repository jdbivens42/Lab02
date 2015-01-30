#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//! Class to allow read access to a file.
/*!
 * The ReadFile class accepts a string literal (const char*) through the constructor.
 * The constructor will attempt to open the file in input mode.
 * Error opening file will set _eof and closed to true, making member function eof() true.
 * Destructor will close the file passed to ReadFile's Constructor, if it was not already closed.
 */

class ReadFile
{
   private:
   ifstream input_file;
   bool _eof;
   bool closed;

   public:
   
   //Construct ReadFile. Input file named file_name is opened.
   //Member function eof() will return false if error occurred.
   ReadFile(const char* file_name);
   
   //Destructor calls member function close().
   ~ReadFile(); 
   
   //Get line of text from input file; return String* to that text.
   //Returns NULL if read fails.
   String* readLine();
   
   //Tests (programmer defined) EOF status. False if constructor failed.
   bool eof();
   
   //If ReadFile is not closed, this function closes it.
   void close();	
};

#endif
