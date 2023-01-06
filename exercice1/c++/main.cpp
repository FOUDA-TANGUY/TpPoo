#include <iostream>
#include <string>
#include <regex>
#include <fstream>
#include <iomanip>
#include "aliment.hpp"
#include "alimentcons.hpp"
#include "alimentprot.hpp"
#include "alimentener.hpp"
#include "plat.hpp"

using namespace std;
int main()
{
    ifstream fic("AlimentInfo.data");
    regex path("[ ]");
    string x;
    
    if(fic.is_open())
    {
        cout << "lecture\n";
        getline(fic,x);
        smatch m;
        regex_search(x,m,path);
        cout << x << "\n";
        cout << m.prefix()<<"\n";
    }

    Plat p("atieke");
    p.add(new Aliment("okok","cereale",0.5));
    p.add(new Aliment("dfg","cereale",0.5));
    p.add(new Aliment("sdf","cereale",0.5));
    p.add(new Aliment("dsd","cereale",0.5));
    p.add(new Aliment("dsff","cereale",0.5));
    
    
    return 0;
}