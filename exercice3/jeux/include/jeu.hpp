#ifndef __GAME__H__
#define __GAME__H__

typedef struct element//cellule
{
    struct element *prec;
    Agent  *agent;
    struct element *suiv;
}element, *liste;

void initListe(liste*);
bool estVide(liste*);
void ajouter(liste*,Agent*);
void supprimer(liste*, Agent*);

class Jeu //constructeur de notre visuel;
{
    private:
        liste mAll;//liste de chaque agent;
        Visuel *mRendu;//creer dynamiquement le visuel, le rendu;
        int mNbChat;// creer le nombre d'agent entres lors de l'initialisation;
        int mNbSouris;
        bool mLancerJeu;// determine l'etat du jeu : en cours ou en arret;
        int mDuree; //determine la duree du jeu;
        void creerAgent(int);//permet de creer un agent et une position dans la liste
    public:
        Jeu();//constructeur de notre classe
        void initJeu(int x, int y, int a);//creer le cadre de depart avec tous les agents avec en parametre le nombre d'agents et la duréé du jeu;
        bool lancer();//retourne la valeur de mlancerjeu;
        void afficherJeu();// affiche le visuel;
        int getNbChat();
        int getNbSouris();
        int getNbAliment();
        int getDuree();
        void setNbChat(int);
        void setNbSouris(int);
        void setNbAliment(int);
        void setDuree(int);
        void setJeu();// determine ce qu'il faut faire dans une situation ;
        void upDate();// mise a jour du rendu lorsqu'il y a une modif. exple création d'un chat;
        ~Jeu();

};
#endif