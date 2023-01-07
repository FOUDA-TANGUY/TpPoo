#include <iostream>
#include <agent.hpp>
#include <animal.hpp>
#include <chat.hpp>
#include <souris.hpp>
#include <aliment.hpp>
#include <mais.hpp>
#include <visuel.hpp>
#include <jeu.hpp>
#include <string>
#include <unistd.h>

using namespace std;

void initListe(liste *a)
{
    *a = NULL;  
}
bool estVide(liste *a)
{
    if(*a == NULL)
        return true;
    return false;
}
void ajouter(liste *a,Agent *b)
{
    element *nouveau = (element*)malloc(sizeof(element));
    nouveau->suiv = NULL;
    nouveau->agent = b;

    if(estVide(a))
    {
        nouveau->prec = NULL;
        *a = nouveau;
    }
    else
    {
        element *temp;
        temp = *a;
        while(temp->suiv != NULL)
            temp  = temp->suiv;
        nouveau->prec = temp;
        temp->suiv = nouveau;
    }

}
void supprimer(liste *a, Agent *b)
{
    element *ancien;
    ancien = *a;
    if(estVide(a))
        return ;
    else
    {
        while(ancien->agent != b && ancien != NULL)
            ancien = ancien->suiv;
    }
    if(ancien->agent == b)
        free(ancien);
}

Jeu::Jeu()
{
    initListe(&this->mAll);
    this->mRendu = new Visuel();
    this->mNbChat = 0;
    this->mNbSouris = 0;
    this->mLancerJeu = false;
}
void Jeu::creerAgent(int t)
{
    bool correct = false;
    Agent *a;
    switch(t)
    {
        case 1:
            a = new Chat();
            break;
        case 2:
            a = new Souris();
            break;
        default:
            a =  new Mais();
            break;
    }
    element *e ;
    while(!correct)
    {
        e = this->mAll;
        while(e!=NULL && (e->agent->getPositionX() != a->getPositionX()) && (e->agent->getPositionY() != a->getPositionY()))
        {
            if((e->agent->getPositionX() != a->getPositionX()) || (e->agent->getPositionY() != a->getPositionY()))
                correct = true;
            else
                ((Animal*)a)->seDeplacer();
        }
    }
}
void Jeu::initJeu(int x, int y,int a)
{
    this->mRendu = new Visuel();
    this->mRendu->init();
    this->setNbChat(x);
    this->setNbSouris(y);
    this->setDuree(a);
    this->mLancerJeu = true;
    int i;
    for(i=0; i<this->getNbChat(); i++)
        ajouter(&this->mAll,new Chat());
    for(i=0; i<this->getNbSouris(); i++)
        ajouter(&this->mAll,new Souris());
    for(i=0; i<15; i++)
        ajouter(&this->mAll,new Mais());
    
}
bool Jeu::lancer()
{
    return this->mLancerJeu;
}
void Jeu::afficherJeu()
{
    if(this->mAll!=NULL)
    {
        element *temp;
        temp = this->mAll;
        while(temp != NULL)
        {
            this->mRendu->draw(temp->agent->getPositionX(),temp->agent->getPositionY(),temp->agent->getRepresentation());
            temp = temp->suiv;
        }
    }
    
    this->mRendu->afficherMatrice();
}
void Jeu::setJeu()
{
    element *temp = this->mAll;
    while(temp != NULL)
    {
        if(temp->agent->isAnimal())
            ((Animal*)(temp->agent))->seDeplacer();
        temp = temp->suiv;
    }
    
}
void Jeu::upDate()
{
    this->mRendu->init();//ca efface et ca reecrit dans le cadre
    sleep(2);
    this->setDuree(this->getDuree() - 1);
    if(this->getDuree() == 0)
        this->mLancerJeu = false;
}
int Jeu::getNbChat()
{
    return this->mNbChat;
}
int Jeu::getNbSouris()
{
    return this->mNbSouris;
}
int Jeu::getNbAliment()
{
    return 0;
}
int Jeu::getDuree()
{
    return this->mDuree;
}
void Jeu::setNbChat(int x)
{
    this->mNbChat = x;
}
void Jeu::setNbSouris(int x)
{
    this->mNbSouris = x;
}
void Jeu::setDuree(int x)
{
    this->mDuree = x;
}
Jeu::~Jeu()
{
   element *temp = this->mAll;
   while(temp != NULL)
   {
        delete temp->agent;
        temp = temp->suiv;
   }
   delete this->mRendu;
    
}