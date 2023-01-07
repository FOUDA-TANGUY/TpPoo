#include <iostream>
#include <string>

#include <agent.hpp>
#include <aliment.hpp>
#include <mais.hpp>

using namespace std;

Mais::Mais()
{
	this->setRepresentation('M');

	//cout << "Creation du mais : "<< this << "\n";
}
void Mais::presenter()
{
	cout << "******************************************************\n";
    cout<<"je suis le " << this << "  mais"<<"\n";
    cout << "******************************************************\n";
}
Mais::~Mais()
{
	//cout << "Destruction du mais : "<< this << "\n";
}
