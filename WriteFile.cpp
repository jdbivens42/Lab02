#include "WriteFile.h"
#include <sstream>

WriteFile* createWriteFile(const char* file_name)
{
   WriteFile* wf = new WriteFile;
   wf->output_file.open(file_name);
   wf->closed = false;
   return wf;
}

void WriteFile :: destroyWriteFile()
{
   close(wf);
   delete wf;
}

void WriteFile :: close()
{
   if (!wf->closed)
   {
      wf->output_file.close();
      wf->closed = true;
   }
}

void WriteFile :: writeLine()
{
   if (!wf->closed && line->length() > 0)
   {
      wf->output_file << line->getText() << endl;
   }
}
