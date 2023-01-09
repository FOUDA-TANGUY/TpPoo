#include <iostream>
#include <iomanip>
#include <cstdlib>

#include <visuel.hpp>

using namespace std;

Visuel::Visuel()
{
    this->setLongueur(60);
    this->setLargeur(30);
    this->creerTexture();
}
Visuel::Visuel(int n, int m)
{
    this->setLongueur(n);
    this->setLargeur(m);
    this->creerTexture();

}
void Visuel::creerTexture()
{
    int i;
    this->mMatrice = (unsigned char**)malloc(sizeof(unsigned char*)*this->getLargeur());//creer un tableau de pointeur;
    for(i=0;i<this->getLargeur();i++)
        this->mMatrice[i] = (unsigned char*)malloc(sizeof(unsigned char)*this->getLongueur());//cree un tableau pour case du tableau de pointeur;
    
}
int Visuel::getLongueur()
{
    return this->mLongueur;
}
int Visuel::getLargeur()
{
    return this->mLargeur;
}
void Visuel::init()
{
    int i, j;
    for(i=0;i<this->getLargeur();i++)
    {
        for(j=0;j<this->getLongueur();j++)
        {
            if(i==0 || i==this->getLargeur()-1)
                this->mMatrice[i][j] = '*';

            else if(j==0 || j==this->getLongueur()-1)
                this->mMatrice[i][j]='|';

            else
                this->mMatrice[i][j]=' ';
        }
    }
}
void Visuel::afficherMatrice()
{
    int i,j;
    for(i=0;i<this->getLargeur();i++)
    {
        for(j=0;j<this->getLongueur();j++)
            cout<<this->mMatrice[i][j];

        cout<<"\n";
    }
    
}
void Visuel::setLongueur(int n)
{
    this->mLongueur = n;
}
void Visuel::setLargeur(int m)
{
    this->mLargeur = m;
}
bool Visuel::draw(int x,int y, unsigned char c)
{
    if((0<x && x<this->getLargeur()) && (0<y && y<this->getLongueur()))
    {
        this->mMatrice[x][y] = c;
        return true;
    }
    return false;
}
Visuel::~Visuel()
{
    int i;
    for(i=0;i<this->getLargeur();i++)
        free(this->mMatrice[i]);//libérer les tableaux du tableau de pointeurs;
    free(this->mMatrice);//libére le tableau des pointeurs;
}
