/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/
#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 

#include "information.hpp"
#include "myBooleanClass.hpp"
#include "menu.hpp"
#include "food.hpp"
#include "bread.hpp"
#include "cracker.hpp"
#include "mortadella.hpp"
#include "ham.hpp"
#include "cheese.hpp"
#include "cottageCheese.hpp"
#include "filledWafer.hpp"
#include "liquid.hpp"
#include "milk.hpp"
#include "soda.hpp"
#include "water.hpp"
#include "brahma.hpp"
#include "budweiser.hpp"
#include "corona.hpp"
#include "stellaArtois.hpp"
#include "myProgram.hpp"
#include "information.hpp"


void MyProgram::process()
{
    vector<string> opcoes({ "Exit", "List Database", "Insert Items" });
    Menu menu("Main Menu", opcoes);
    int escolha = -1;

    while(escolha)
    {
        escolha = menu.getEscolha();

        switch(escolha)
        {
            case 1: { listItems();    }; break;
            case 2: { insertItems();  }; break;
        };
    };
};

void MyProgram::clearAll()
{
    for(int i = 0; i < myMainList.size(); i++){
        Food * aux = myMainList[i];
        myMainList[i] = NULL;
        delete aux;
    }

    myMainList.clear();

    delete verboseMode;
    delete shortMessageMode;

};

void MyProgram::listItems()
{
    double total = 0.00;

    cout << "------------------------------\nItems in Database:\n------------------------------\n";
    vector<Food *>::iterator scan = myMainList.begin();

    while(scan != myMainList.end())
    {
        cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl;
        total +=  (*scan)->getValor();
        scan++;
    };
    cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
};

void MyProgram::insertItems()
{
    cout << "------------------------------\nInset New Items:\n------------------------------\n";

    Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella","Milk", "Water", "Soda", "Beer" });
    int escolha = -1;

    while(escolha)
    {
        escolha = menu.getEscolha();

        switch(escolha)
        {
            case 1: { insertBread();        }; break;
            case 2: { insertCheese();       }; break;
            case 3: { insertCottageCheese();}; break;
            case 4: { insertCracker();      }; break;
            case 5: { insertFilledWafer();  }; break;
            case 6: { insertHam();          }; break;
            case 7: { insertMortadella();   }; break;
            case 8: { insertMilk();        }; break;
            case 9: { insertWater();       }; break;
            case 10:{ insertSoda();        }; break;
            case 11:{ insertBeer();        }; break;

        };
    };
};

void MyProgram::insertBread()
{
    Bread * bread;
    string buffer;
    string type;
    float  weight;
    double cost;

    cout << "------------------------------\nInsert Bread:\n------------------------------\n";
    cout << "Type ......: "; getline(cin, buffer); type   = buffer;
    cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cin.clear();

    bread = new Bread(type, weight,cost);
    myMainList.insert(myMainList.end(), bread);

    cout << endl << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getValor() << endl;   
};

void MyProgram::insertCottageCheese()
{
    CottageCheese * cottageCheese;
    string buffer;
    string type;
    float  weight;
    double cost;
    string marca;

    cout << "------------------------------\nInsert CottageCheese:\n------------------------------\n";
    cout << "Type ......: "; getline(cin, buffer); type    = buffer;
    cout << "Weight ....: "; getline(cin, buffer); weight  = stof(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost    = stod(buffer);
    cout << "Marca .....: "; getline(cin, buffer); marca    = buffer;
    cin.clear();

    cottageCheese = new CottageCheese(type, weight,cost, marca);
    myMainList.insert(myMainList.end(), cottageCheese);

    cout << endl << cottageCheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cottageCheese->getValor() << endl;   
};

void MyProgram::insertMortadella()
{
    Mortadella * mortadella;
    string buffer;
    string type;
    float  weight;
    double cost;

    cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
    cout << "Type ......: "; getline(cin, buffer); type   = buffer;
    cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cin.clear();

    mortadella = new Mortadella(type, weight,cost);
    myMainList.insert(myMainList.end(), mortadella);

    cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor() << endl;   
};

void MyProgram::insertHam()
{
    Ham * ham;
    string buffer;
    string type;
    float  weight;
    double cost;

    cout << "------------------------------\nInsert Ham:\n------------------------------\n";
    cout << "Type ......: "; getline(cin, buffer); type   = buffer;
    cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cin.clear();

    ham = new Ham(type, weight,cost);
    myMainList.insert(myMainList.end(), ham);

    cout << endl << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getValor() << endl;   
};


void MyProgram::insertCheese()
{
    Cheese * cheese;
    string buffer;
    string type;
    float  weight;
    double cost;

    cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
    cout << "Type ......: "; getline(cin, buffer); type   = buffer;
    cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cin.clear();

    cheese = new Cheese(type, weight,cost);
    myMainList.insert(myMainList.end(), cheese);

    cout << endl << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getValor() << endl;   
};

void MyProgram::insertCracker()
{
    Cracker * cracker;
    string buffer;
    string type;
    int    amount;
    double cost;

    cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
    cout << "Type ......: "; getline(cin, buffer); type   = buffer;
    cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cin.clear();

    cracker = new Cracker(type, amount,cost);
    myMainList.insert(myMainList.end(), cracker);

    cout << endl << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getValor() << endl;   
};

void MyProgram::insertFilledWafer()
{
    FilledWafer * filledWafer;
    string buffer;
    string type;
    string filling;
    int    amount;
    double cost;

    cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
    cout << "Type ......: "; getline(cin, type); 
    cout << "Filling ...: "; getline(cin, filling);
    cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cin.clear();

    filledWafer = new FilledWafer(type, filling, amount,cost);
    myMainList.insert(myMainList.end(), filledWafer);

    cout << endl << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getValor() << endl;   
};

void MyProgram::start(){
    process();
    Information::bye(shortMessageMode->getStatus());
    clearAll();
}

void MyProgram::insertMilk()
{
    Milk * milk;
    string buffer;
    double ml;
    int    units;
    double cost;

    cout << "------------------------------\nInsert Milk:\n------------------------------\n";
    cout << "ML ......: "; getline(cin, buffer); ml   = stod(buffer);
    cout << "Units .....: "; getline(cin, buffer); units = stoi(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cin.clear();

    milk = new Milk(ml, units, cost);
    myMainList.insert(myMainList.end(), milk);

    cout << endl << milk->getDescricao() << " - US$ " << fixed << setprecision(2) << milk->getValor() << endl;
};


void MyProgram::insertWater()
{
    Water * water;
    string buffer;
    double ml;
    int    units;
    double cost;

    cout << "------------------------------\nInsert Water:\n------------------------------\n";
    cout << "ML ......: "; getline(cin, buffer); ml   = stod(buffer);
    cout << "Units .....: "; getline(cin, buffer); units = stoi(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cin.clear();

    water = new Water(ml, units, cost);
    myMainList.insert(myMainList.end(), water);

    cout << endl << water->getDescricao() << " - US$ " << fixed << setprecision(2) << water->getValor() << endl;
};


void MyProgram::insertSoda()
{
    Soda * soda;
    string buffer;
    double ml;
    int    units;
    double cost;

    cout << "------------------------------\nInsert Soda:\n------------------------------\n";
    cout << "ML ......: "; getline(cin, buffer); ml   = stod(buffer);
    cout << "Units .....: "; getline(cin, buffer); units = stoi(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cin.clear();

    soda = new Soda(ml, units, cost);
    myMainList.insert(myMainList.end(), soda);

    cout << endl << soda->getDescricao() << " - US$ " << fixed << setprecision(2) << soda->getValor() << endl;
};

void MyProgram::insertBeer()
{


    cout << "------------------------------\nChoose a beer:\n--------------------------------\n";

    Menu menu("Beers", {
        "Exit",
        "Brahma", "Budweiser", "Corona", "Stella Artois"
    });
    int escolha = -1;

    while(escolha)
    {
        escolha = menu.getEscolha();

        switch(escolha)
        {
            case 1: { insertBrahma();       }; break;
            case 2: { insertBudweiser();    }; break;
            case 3: { insertCorona();       }; break;
            case 4: { insertStellaArtois(); }; break;
        };
    };
};



void MyProgram::insertBrahma()
{
    Brahma * brahma;
    string buffer;
    double ml;
    int    units;
    double cost;
    string tipo;

    cout << "------------------------------\nInsert Brahma:\n------------------------------\n";
    cout << "ML ......: "; getline(cin, buffer); ml   = stod(buffer);
    cout << "Units .....: "; getline(cin, buffer); units = stoi(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cout << "Tipo ......: "; getline(cin, buffer); tipo   = buffer;
    cin.clear();

    brahma = new Brahma(ml, units, cost, tipo);
    myMainList.insert(myMainList.end(), brahma);

    cout << endl << brahma->getDescricao() << " - US$ " << fixed << setprecision(2) << brahma->getValor() << endl;
};



void MyProgram::insertBudweiser()
{
    Budweiser * budweiser;
    string buffer;
    double ml;
    int    units;
    double cost;
    string tipo;

    cout << "------------------------------\nInsert Budweiser:\n------------------------------\n";
    cout << "ML ......: "; getline(cin, buffer); ml   = stod(buffer);
    cout << "Units .....: "; getline(cin, buffer); units = stoi(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cout << "Tipo ......: "; getline(cin, buffer); tipo   = buffer;
    cin.clear();

    budweiser = new Budweiser(ml, units, cost,tipo);
    myMainList.insert(myMainList.end(), budweiser);

    cout << endl << budweiser->getDescricao() << " - US$ " << fixed << setprecision(2) << budweiser->getValor() << endl;
};



void MyProgram::insertCorona()
{
    Corona * corona;
    string buffer;
    double ml;
    int    units;
    double cost;
    string tipo;

    cout << "------------------------------\nInsert Corona:\n------------------------------\n";
    cout << "ML ......: "; getline(cin, buffer); ml   = stod(buffer);
    cout << "Units .....: "; getline(cin, buffer); units = stoi(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cout << "Tipo ......: "; getline(cin, buffer); tipo   = buffer;
    cin.clear();

    corona = new Corona(ml, units, cost, tipo);
    myMainList.insert(myMainList.end(), corona);

    cout << endl << corona->getDescricao() << " - US$ " << fixed << setprecision(2) << corona->getValor() << endl;
};


void MyProgram::insertStellaArtois()
{
    StellaArtois * stellaArtois;
    string buffer;
    double ml;
    int    units;
    double cost;
    string tipo;

    cout << "------------------------------\nInsert Stella Artois:\n------------------------------\n";
    cout << "ML ......: "; getline(cin, buffer); ml   = stod(buffer);
    cout << "Units .....: "; getline(cin, buffer); units = stoi(buffer);
    cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
    cout << "Tipo ......: "; getline(cin, buffer); tipo   = buffer;
    cin.clear();

    stellaArtois = new StellaArtois(ml, units, cost, tipo);
    myMainList.insert(myMainList.end(), stellaArtois);

    cout << endl << stellaArtois->getDescricao() << " - US$ " << fixed << setprecision(2) << stellaArtois->getValor() << endl;
};


void MyProgram::verifyArguments(int argc, char* argv[])
{
    if(verboseMode)                     { delete verboseMode;         };
    if(shortMessageMode)                { delete shortMessageMode;    };

    verboseMode      = NULL;
    shortMessageMode = NULL;

    for(int count = 1; count < argc; count++)
    {
        if(string(argv[count]) == "-v") { verboseMode      = new MyBooleanClass(true); };
        if(string(argv[count]) == "-s") { shortMessageMode = new MyBooleanClass(true); };
    };

    if(!verboseMode)                    { verboseMode      = new MyBooleanClass();     };  // default is false
    if(!shortMessageMode)               { shortMessageMode = new MyBooleanClass();     };  // default is false
    
    Information::wellcome("C++ Program " + string(argv[0]) + " running!", shortMessageMode->getStatus());
}

/* fim de arquivo */
