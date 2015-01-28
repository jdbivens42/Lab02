#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
   public:
   
   ReadFile(const char* file_name);
   
   ~ReadFile();
   
   //String* readLine()

   //test comment
   
   bool eof()
   {
      return _eof;
   }
   
   
   
   void close()
   {
      if (!closed)
      {
         input_file.close();
         closed = true;
      }
   }
	



   private:
   ifstream input_file;
   bool _eof;
   bool closed;
   	
};




#endif
