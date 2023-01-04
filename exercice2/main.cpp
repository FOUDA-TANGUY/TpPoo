#include <iostream>
#include <cstdlib>

class data
{
    private:
        int date;
        std::string alimentName;
        int nbCons;
        float qteEau;
        float qteLiquide;
        bool manger;
        int nb;
        std::string pb;

    public:
        data(void);
        void alea(int date);
        void ecrire(FILE*);
        ~data();
};
std::string pbs[] = {"ballonement","crampes","gaz","douleur","diarrhee","constipation"};

data::data(void)
{

}
void data::ecrire(FILE* fic)
{
    fprintf(fic,"%d %s %d %.2f %.2f %d %d %s\n",this->date,this->alimentName,this->nbCons,this->qteEau,this->qteLiquide,this->manger,this->nb,this->pb);
}
void data::alea(int date)
{
    this->date = date;
    this->alimentName = "noName";
    this->nbCons = (int)(rand()*10%5);
    this->qteEau = (int)(rand()*10%5);
    this->qteLiquide = (int)(rand()*10%5);
    this->manger = (int)(rand()*10%2);
    this->nb = (int)(rand()*10%5);
    this->pb = pbs[(rand()*10%6)];
}

data::~data()
{

}

int main(void)
{
    data temps;
    FILE *fic = fopen("data.txt","w");
    int stat = 43200;

    temps.alea(stat);

    while(stat  != 0)
    {
        temps.alea(stat);
        temps.ecrire(fic);
        stat--;
    }
    fclose(fic);

    return 0;
}