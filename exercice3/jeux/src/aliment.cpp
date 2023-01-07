#include <iostream>
#include <agent.hpp>
#include <aliment.hpp>
#include <string>

using namespace std;

Aliment::Aliment()
{
	//cout << "Creation de l'aliment : "<< this << "\n";
}
void Aliment::presenter()
{
    cout << "******************************************************\n";
    cout<<"je suis un aliment!"<<this<<"\n";
    cout << "******************************************************\n";
}
bool Aliment::isAliment()
{
    return true;
}
Aliment::~Aliment()
{
	//cout << "Destruction de l'aliment : "<< this << "\n";
}
