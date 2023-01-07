#include <iostream>
#include <agent.hpp>
#include <animal.hpp>
#include <string>

using namespace std;

Animal::Animal()
{
	this->setSexe();
	//cout << "Creation de l'animal : "<< this << "\n";
}
void Animal::presenter()
{
	cout << "******************************************************\n";
    cout<<"je suis un animal!"<<this<<"\n";
    cout << "******************************************************\n";
}
void Animal::setSexe()
{
	this->mSexe = (rand()%4==1)?'M':'F';
}
char Animal::getSexe()
{
	return this->mSexe;
}                                            
void Animal::seDeplacer(void)
{
	int x = 1;
	int deplacementX;
	int deplacementY;
	deplacementX = (rand()%2)*x;
	deplacementY = (rand()%2)*x;
	deplacementX = (rand()%2)?-deplacementX:deplacementX;
	deplacementY = (rand()%2)?-deplacementY:deplacementY;
	this->setPosition(this->getPositionX()+deplacementX,this->getPositionY()+deplacementY);

}
void Animal::manger(void)
{

}
void Animal::seReproduire(void)
{

}
bool Animal::isFemele()
{
	if(this->getSexe() == 'M')
		return false;
	return true;
}
bool Animal::isAnimal()
{
	return true;
}
Animal::~Animal()
{
	//cout << "Destruction de l'animal : "<< this << "\n";
}
