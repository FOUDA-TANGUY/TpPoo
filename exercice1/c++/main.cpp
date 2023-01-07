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
    regex path("(([a-z_]{1,25})[\\s](\\d{1,11})[\\s]([a-z_]{1,25}))");
    regex cons("((\\d{1,11})[\\s](\\d{1,11}))");
    regex ener("((\\d{1,25})[\\s](\\d{1,11})[\\s](\\d{1,25}))");
    regex prot("(([a-z_]{1,25})[\\s](\\d{1,11})[\\s](\\d{1,25}))");
    string x;
    Aliment* a;
    Plat p("ALL");
    
    if(fic.is_open())
    {
        smatch m;
        while(getline(fic,x))
        {
            a = nullptr;
            if(regex_search(x,m,path))
            {
                if(m[4].str() == "animale" || m[4].str() == "vegetale")
                {
                    a = new Alimentcons();
                    a->setAliment(m[2].str(),m[4].str(),(float)stoi((m[3].str())));
                    if(regex_search(x,m,cons))
                    {
                        ((Alimentcons*)a)->setCons(stof(m[2].str()),stof(m[3].str()));
                    }

                }
                if(m[4].str() == "cereale" || m[4].str() == "tubercule")
                {
                    a = new Alimentener();
                    a->setAliment(m[2].str(),m[4].str(),(float)stoi((m[3].str())));
                    if(regex_search(x,m,ener))
                        ((Alimentener*)a)->setEner(stof(m[2].str()),stof(m[3].str()),stof(m[4].str()));

                }
                if(m[4].str() == "legume" || m[4].str() == "tubercule")
                {
                    a = new AlimentProd();
                    a->setAliment(m[2].str(),m[4].str(),(float)stoi((m[3].str())));
                    if(regex_search(x,m,prot))
                        ((AlimentProd*)a)->setProt(m[2].str(),stof(m[3].str()),stof(m[4].str()));

                }
                p.add(a);
            }
        }       
    }
    p.presenter();

    return 0;
}