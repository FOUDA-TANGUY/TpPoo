#include <iostream>
#include <string>

#include <agent.hpp>
#include <animal.hpp>
#include <souris.hpp>

using namespace std;


Souris::Souris()
{
	if(this->getSexe() == 'M')
		this->setRepresentation('S');
	else
		this->setRepresentation('s');
	//cout << "Creation de la souris : " << this << "\n";
}
void Souris::presenter()
{
	cout << "******************************************************\n";
    cout<<"je suis " << this << "  la souris"<<"\n";
    cout << "******************************************************\n";
}
bool Souris::isSouris()
{
	return true;
}

Souris::~Souris()
{
	//cout << "Destruction de la souris : " << this << "\n";
}