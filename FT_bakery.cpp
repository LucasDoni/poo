#include "myProgram.hpp"
#include "FT_bakery.hpp"


void verifyArguments(int argc, char* argv[], MyProgram * m)
   {
   if(m->verboseMode)                     { delete m->verboseMode;         }; 
   if(m->shortMessageMode)                { delete m->shortMessageMode;    };  

   m->verboseMode      = NULL;
   m->shortMessageMode = NULL;
   
   for(int count = 1; count < argc; count++)
      {
      if(string(argv[count]) == "-v") { m->verboseMode      = new MyBooleanClass(true); };
      if(string(argv[count]) == "-s") { m->shortMessageMode = new MyBooleanClass(true); };
      };
   
   if(!m->verboseMode)                    { m->verboseMode      = new MyBooleanClass();     };  // default is false
   if(!m->shortMessageMode)               { m->shortMessageMode = new MyBooleanClass();     };  // default is false
   }
   
   int main(int argc, char* argv[])
   {
	   
	   MyProgram * m = new MyProgram();
	   verifyArguments(argc, argv, m);
	   m->start();

   };
