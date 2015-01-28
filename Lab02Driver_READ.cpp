#include "ReadFile.h"
//#include "WriteFile.h"
#include "String.h"
#include "Tokens.h"

#include <iostream>
#include <fstream>
using namespace std;


void writeLine(ofstream& wf, String* line)
{
   if (wf && line->length() > 0)
      wf << line->getText() << endl;
   
}



int main()
{
	ofstream fout;
	fout.open("ReadFileTest.txt");
	
	// Test
   ReadFile* rf = new ReadFile("cds.txt");
  // WriteFile* wf = new WriteFile("out.txt");

   while(!rf->eof())
   {
      String* line = rf->readLine();
      writeLine(fout, line);
  //   wf->writeLine(line);
      delete line;
   }

   rf->close();
 //  wf->close();
   delete rf;
 //  delete wf;

   fout.close();
   fout.clear();
   return 0;
}

