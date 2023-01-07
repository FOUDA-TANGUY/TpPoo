#include <iostream>
#include <iomanip>
#include <string>
#include <regex>
#include <cstdlib>
#include <fstream>

using namespace std;

class Date
{
    private:
        int mJour;
        int mMois;
        int mAnne;
    public:
        Date(void);
        Date(int, int, int);
        void setDate(int, int, int);
        int getJour();
        int getMois();
        int getAnne();
        void next(void);
        void prev(void);
        string getDate();  
        ~Date();      
};


int main(int argc,char **argv)
{
    if(argc != 4)
    {
        cerr << "Parametre invalide!!\n";
        cout << "format: ./prog xx/xx/xxxx [nombre de mois] [nom ficheir sortie]\n";
        cout << "EX:./prog 1/9/2022 9 ficheir\n";
        return 0;
    }

    string x(argv[1]);
    regex datepath("((\\d{1,2})[-/](\\d{1,2})[-/](\\d{1,5}))");
    smatch m;
    
    if(!regex_search(x,m,datepath))
    {
        cerr << "Parametre date invalide !!\n";
        cout << "format: ./prog xx/xx/xxxx [nombre de mois] [nom ficheir sortie]\n";
        cout << "EX:./prog 1/9/2022 9 ficheir\n";
        return 0;
    }
    cout << m[1].str()<< ":"<< m[2].str() << ":"<< m[3].str() <<"\n";
    Date g(stoi(m[2].str()),stoi(m[3].str()),stoi(m[4].str()));
    x = argv[2];
    int nbMois = stoi(x);
    x = argv[3];
    x = x + ".collect";
    ofstream fic(x);
    srandom(time(NULL));
    string aliments[8] = {"mais","manioc","plantain","riz","poison","viande","oeuf","haricot"};
    string mfl[5] = {"mangue","banane","orange","aucun","avocat"};
    string pb[12] = {"ballonnement","crampe","gaz","abdominales","diarrhe","constipation","aucun","aucun","aucun","aucun","aucun","aucun"};
    
    fic << left;
    fic << setfill('*');
    fic << "#" << setw(15) <<""<<"+"<< setw(15) <<""<<"+"<< setw(10) <<""<<"+"<< setw(10) <<""<<"+"<< setw(10) <<""<<"+"<< setw(15) <<""<<"+"<< setw(15) <<""<<"#\n";
    fic << setfill(' ');
    fic << "#" << setw(15) <<""<<"|"<< setw(15) <<""<<"|"<< setw(10) <<""<<"|"<< setw(10) <<""<<"|"<< setw(10) <<""<<"|"<< setw(15) <<""<<"|"<< setw(15) <<""<<"#\n";
    fic << "#" << setw(15) <<"DATE"<<"|"<< setw(15) <<"ALIMENTS"<<"|"<< setw(10) <<"NBF"<<"|"<< setw(10) <<"QTeau(ml)"<<"|"<< setw(10) <<"QTO(ml)"<<"|"<< setw(15) <<"MFL"<<"|"<< setw(15) <<"PROBLEME"<<"#\n";
    fic << "#" << setw(15) <<""<<"|"<< setw(15) <<""<<"|"<< setw(10) <<""<<"|"<< setw(10) <<""<<"|"<< setw(10) <<""<<"|"<< setw(15) <<""<<"|"<< setw(15) <<""<<"#\n";
    fic << setfill('_');
    fic << "#" << setw(15) <<""<<"+"<< setw(15) <<""<<"+"<< setw(10) <<""<<"+"<< setw(10) <<""<<"+"<< setw(10) <<""<<"+"<< setw(15) <<""<<"+"<< setw(15) <<""<<"#\n";
    int nbCons;
    for(int i = 0; i < nbMois*30;i++)
    {
        nbCons = 4 + random()%4;
        while(nbCons)
        {
            fic << setfill('-');
            fic << "+" << setw(15) <<""<<"+"<< setw(15) <<""<<"+"<< setw(10) <<""<<"+"<< setw(10) <<""<<"+"<< setw(10) <<""<<"+"<< setw(15) <<""<<"+"<< setw(15) <<""<<"+\n";
            fic << setfill(' ');
            fic << "|" << setw(15) <<g.getDate()<<"|"<< setw(15) << aliments[random()%8] <<"|"<< setw(10) << random()%3+1 <<"|"<< setw(10) <<random()%150<<"|"<< setw(10) <<random()%150<<"|"<< setw(15) << mfl[random()%5] <<"|"<< setw(15) << pb[random()%12] <<"|\n";
            fic << setfill('-');
            fic << "+" << setw(15) <<""<<"+"<< setw(15) <<""<<"+"<< setw(10) <<""<<"+"<< setw(10) <<""<<"+"<< setw(10) <<""<<"+"<< setw(15) <<""<<"+"<< setw(15) <<""<<"+\n";
            nbCons--;
        }
        g.next();
    }
    
    return 0;
}

Date::Date(void)
{
    this->setDate(1,1,1);
}
Date::Date(int jour, int mois, int anne)
{
    this->setDate(jour,mois,anne);
}
void Date::setDate(int jour, int mois, int anne)
{
    if(anne < 1 || mois < 1 || jour < 1)
        this->setDate(1,1,1);
    else
    {
        if(jour > 30)
        {
            mois += jour / 30;
            jour = jour%30;
        }
        
        if(mois > 12)
        {
            anne += mois / 12;
            mois = mois%12;
        }
        
        this->mJour = jour;
        this->mMois = mois;
        this->mAnne = anne;
    } 
}
int Date::getJour()
{
    return this->mJour;
}
int Date::getMois()
{
    return this->mMois;
}
int Date::getAnne()
{
    return this->mAnne;
}
void Date::next(void)
{
    this->setDate(this->getJour() + 1,this->getMois(),this->getAnne());
}
void Date::prev(void)
{

}
string Date::getDate()
{
    string jour[7] = {"Lun","Mar","Mer","Jeu","Ven","Sam","Dim"};
    return jour[this->getJour()%7]+" "+to_string(this->getJour())+"/"+to_string(this->getMois()) + "/" + to_string(this->getAnne()) ;
} 
Date::~Date()
{

}