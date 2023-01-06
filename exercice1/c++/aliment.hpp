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
        void afficher(void);
        std::string getName(void);
        float getMasse(void);
        std::string getCategorie(void);
        ~Aliment();
};

Aliment::Aliment()
{
    
}
Aliment::Aliment(std::string name,std::string categorie,float masse)
{
    this->setAliment(name,categorie,masse);
}
void Aliment::afficher(void)
{
    std::cout << std::setfill('-');
    std::cout << "+" << std::setw(25) << std::left<<""<< "+" <<std::setw(10)<<""<<"+"<<std::setw(10) << "" <<"+\n";
    std::cout << std::setfill(' ');
    std::cout << "|" << std::setw(25) << std::left<< this->mName << "|" <<std::setw(10)<<  this->mCategorie<<"|"<<std::setw(10)<< this->mMasse << "" <<"|\n";
    std::cout << std::setfill('-');
    std::cout << "+" << std::setw(25) << std::left<<""<< "+" <<std::setw(10)<<""<<"+"<<std::setw(10)<<""<<"+\n";
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

}


#endif