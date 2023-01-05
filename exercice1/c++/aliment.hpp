#ifndef __ALIMENT__H__
#define __ALIMENT__H__

class Aliment
{
    protected:
        std::string mName;
        std::string mCategorie;
        float mMasse;
    public:
        Aliment();
        Aliment(std::string,std::string,float);
        void setAliment(std::string,std::string,float);
        std::string getName(void);
        float getMasse(void);
        std::string getCategorie(void);
        ~Aliment();
};

Aliment::Aliment()
{
    std::cout << "creation de l'aliment sans parametre\n";
}
Aliment::Aliment(std::string name,std::string categorie,float masse)
{
    this->setAliment(name,categorie,masse);
    std::cout << "creation de l'aliment avec parametre\n";
}
void Aliment::setAliment(std::string name,std::string categorie,float masse)
{
    this->mName = name;
    this->mCategorie = categorie;
    this->mMasse = masse;
}
std::string Aliment::getName(void)
{
    return this->mName;
}
float Aliment::getMasse(void)
{
    return this->mMasse;
}
std::string Aliment::getCategorie(void)
{
    return this->mCategorie;
}
Aliment::~Aliment()
{
    std::cout << "Destruction de l'aliment\n";
}


#endif