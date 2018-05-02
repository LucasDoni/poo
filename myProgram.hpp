/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef DD
   #define DD

   #include "myBooleanClass.hpp"
   #include <iostream>
   #include <vector>
   #include "food.hpp"
   using namespace std;
   

class MyProgram
   {
   private:
       void process(void);
	   
	   void clearAll(void);
	   
	   void listItems(void);
	   void insertItems(void);
	   void insertBread(void);
	   void insertCracker(void);
	   void insertFilledWafer(void);
	   void insertCheese(void);
	   void insertHam(void);
	   void insertMortadella(void);
	   void insertCottageCheese(void);
	   

		
	public:
			MyBooleanClass * verboseMode       = NULL;
		MyBooleanClass * shortMessageMode  = NULL;

		vector<Food *> myMainList;
	
		const bool getVerboseMode(void);
		void setVerboseMode(bool);
		const bool getShortMessageMode(void);
		void setShortMessageMode(bool);
		void start();
   };
   
#endif
   
/* fim de arquivo */