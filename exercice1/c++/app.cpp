#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

int main(int argc, char *argv[])
{
    
    if(argc != 2)
    {
        cerr << "Nombre argument invalide !!\n";
    }
    else
    {
        string x(argv[1]);
        regex path("(.)*\\.xml");
        if(regex_match(x,path))
        {
            ifstream fic(x);
            if(fic.is_open())
            {
                cout << "lecture\n";
                path = "(<([a-z])*>)";
                string text;
                smatch math;
                int con = 0;
                cout << "lecture\n";
                cout << setfill('-');
                cout << "+"<<setw(16)<<left<<""<<"+"<<setw(10)<<right<<""<<"+\n";
                cout << setfill(' ');
                cout << "|"<<setw(16)<<left<<"TAG"<<"|"<<setw(10)<<right<<"OCCURENCE"<<"|\n";
                cout << setfill('-');
                cout << "+"<<setw(16)<<left<<""<<"+"<<setw(10)<<right<<""<<"+\n";
                cout << setfill(' ');
                
                while (getline(fic,text))
                {
                    while(text != "")
                    {
                        if(regex_search(text,math,path))
                        {
                            cout << "|"<<setw(16)<<left<<math.str()<<"|"<<setw(10)<<right<<con<<"|\n";
                            
                            con++;
                        }

                        text = math.suffix(); 
                    }
                }
                cout << setfill('-');
                cout << "+"<<setw(16)<<left<<""<<"+"<<setw(10)<<right<<""<<"+\n";
                cout << setfill(' ');
        
                fic.close();
                cout << "fin lecture\n";
                  
            }
            else
            {
                cerr << "Fichier not exit !\n";
            }
        }
        else
        {
            cerr << "ERREUR de fichier entre un ficheir XML\n";
        }
    }

        
    /*cout << argc << "\n";
    string x("object");
    string text = " <objetct>bonjour</objetct> vhdfhfghf";
    regex const path{"(<objetct>([a-z ]){7}</objetct>)"};
    cout << text << "\n";
    smatch get;
    if(regex_search(text,get,path))
    {
        for(int i = 0; i< get.size();i++)
            cout << get[i].str() <<"\n";
        text = get.suffix();
        cout << text << "\n";
        
    }
        

    while (argc != 1)
    {
        argc--;
        x = argv[argc];
        cout << x << "\n";
        fic.open(x);
        if(fic.is_open())
        {
            fic<< x << " : " << argc;
            fic.close();
        }
        else
            cerr << "Echec de creation !!\n" << x;
    }*/
    return 0;
}