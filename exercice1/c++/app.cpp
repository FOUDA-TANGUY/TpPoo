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
        cerr << "Nombre argument invalide !\n";
        cerr << "EX:./prog [nom ficher].xml\n";
        return 0;
    }

    regex patherne;
    string temps(argv[1]);
    patherne = "*.xml";

    if(!regex_match(temps,patherne))
    {
        cerr << "argument invalide !\n";
        cerr << "EX:./prog [nom ficher].xml\n";
        return 0;
    }
    ifstream fic(temps);
    if(!fic.is_open())
    {
        cerr << "fichier :"<<temps<<"not  found !\n";
        return 0;
    }
    string text("");
    while(getline(fic,temps))
        text += temps;
    fic.close();
    patherne  = "<filename>([a-z '_]{1,16}).png</filename>";
    smatch m;
    if(!regex_search(text,m,patherne))
    {
        cerr << "erreur de format !\n";
        return 0;
    }


    return 0;
}