#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>

#include <agent.hpp>
#include <animal.hpp>
#include <aliment.hpp>
#include <mais.hpp>
#include <visuel.hpp>
#include <souris.hpp>
#include <chat.hpp>
#include <jeu.hpp>

#define MAX 5
#define LONG 50
#define LARGE 25

using namespace std;

int main()
{
	int i;
	Jeu jeu;
	int a, b, c;
	srand((unsigned int)time(0));
	do
	{
		cout<< "1.configuration du jeu\n2.lancer le jeu\n3.statistique du jeu\n0.sortir\n";
		cin >>i;
		switch(i)
		{
			case 1:
				cout<<"entrez le nombre de chat et le nombre de souris, ainsi que la duree\n";
				cin>>a >>b >>c;
				jeu.initJeu(a,b,c);
				jeu.afficherJeu();
				break;
			case 2:
				while(jeu.lancer())
				{
					jeu.setJeu();
					jeu.upDate();
					jeu.afficherJeu();
				}
				break;
			case 3:
				cout<<"en cours de developpement\n";
				break;
			case 0:
				cout<<"merci d'avoir utilise notre app.\n";
				break;
			default : 
				cout<<"OPTION INVALIDE\n";
				break;
		}
		
	}while(i);

	/*Agent *a = new Chat();
	Agent *s = new Souris();
	cout<<a->isChat()<<":"<<a->isSouris()<<"\n";
	cout<<s->isChat()<<":"<<s->isSouris()<<"\n";*/
	
}	