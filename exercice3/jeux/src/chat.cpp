#include <iostream>
#include <string>

#include <agent.hpp>
#include <animal.hpp>
#include <chat.hpp>

using namespace std;

Chat::Chat()
{
	if(this->getSexe() == 'F')
		this->setRepresentation('c');
	else
		this->setRepresentation('C');
	//cout << "Creation du chat : "<< this << "\n";
}
void Chat::presenter()
{
	cout << "******************************************************\n";
    cout<<"je suis le chat! "<< this << "\n";
    cout << "******************************************************\n";
}
bool Chat::isChat()
{
	return true;
}
Chat::~Chat()
{
	//cout << "Destruction du chat : "<< this << "\n";
}