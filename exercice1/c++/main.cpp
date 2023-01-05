#include <iostream>
#include "aliment.hpp"
#include "alimentcons.hpp"
#include "alimentprot.hpp"
#include "alimentener.hpp"
#include "plat.hpp"

int main()
{
    Aliment a;
    Alimentcons ac;
    Alimentener ae;
    AlimentProd ap;
    Plat p("atieke");
    p.add(new Aliment("okok","cereale",0.5));
    
    std::cout << "hello world!!\n";
    return 0;
}