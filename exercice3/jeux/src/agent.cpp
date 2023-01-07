#include <iostream>
#include <agent.hpp>
#include <string>

using namespace std;

Agent::Agent()
{
	//cout << "Creation de l'agent : " << this << "\n";
	
	this->setPosition(1 + rand()%100,1 + rand()%50);
}
void Agent::presenter(void)
{
	cout << "******************************************************\n";
	cout << "Je suis l'agent : " << this << "\n";
	cout << "******************************************************\n";
}
void Agent::setPosition(int x,int y)
{
	this->mPositionX = x;
	this->mPositionY = y;
}
int Agent::getPositionX()
{
	return this->mPositionX;
}
int Agent::getPositionY()
{
	return this->mPositionY;
}
void Agent::setRepresentation(unsigned char x)
{
	this->mRepresentation = x;
}
unsigned char Agent::getRepresentation()
{
	return this->mRepresentation;
}
bool Agent::isChat()
{
	return false;
}
bool Agent::isSouris()
{
	return false;
}

bool Agent::isAliment()
{
	return false;
}
bool Agent::isAnimal()
{
	return false;
}


Agent::~Agent()
{
	//cout << "Destruction de l'agent : " << this << "\n";
}