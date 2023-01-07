#ifndef __PLAT__H__
#define __PLAT__H__

typedef struct element
{
    Aliment* valeur;
    struct element *next;
}element;



class Plat
{
    private:
        std::string mName;
        float mQuantite;
        element* liste;
    public:
        Plat(std::string);
        void setName(std::string);
        std::string getName(void);
        void presenter(void);
        float getQuantite(void);
        void add(Aliment*);
        Aliment* pop(void);
        ~Plat();
  
};

Plat::Plat(std::string name)
{
    
    this->setName(name);
    this->mQuantite = 0;
    this->liste = nullptr;
}
void Plat::setName(std::string name) 
{
    this->mName = name;
}
std::string Plat::getName(void)
{
    return this->mName;
}
void Plat::presenter(void)
{
    element* temp = this->liste;
    std::cout << std::setfill('*');
    std::cout << std::left;
    std::cout <<"*"<< std::setw(8)<<""<<"*"<< std::setw(16)<<""<<"*"<< std::setw(10)<<""<<"*"<< std::setw(10)<<""<<"*\n";
    std::cout << std::setfill(' ');
    std::cout <<"|"<< std::setw(8)<<"PLATNAME"<<"|"<< std::setw(16)<<this->getName()<<"|"<< std::setw(10)<<"QUANTITY"<<"|"<< std::setw(10)<<this->getQuantite()<<"|\n";
    std::cout << std::setfill('*');
    std::cout <<"*"<< std::setw(8)<<""<<"*"<< std::setw(16)<<""<<"*"<< std::setw(10)<<""<<"*"<< std::setw(10)<<""<<"*\n";
    std::cout << std::setfill('-');
    std::cout << "+" << std::setw(25) << std::left<<""<< "+" <<std::setw(10)<<""<<"+"<<std::setw(10) << "" <<"+\n";
    std::cout << std::setfill(' ');
    std::cout << "|" << std::setw(25) << std::left<< "NAME" << "|" <<std::setw(10)<<  "CATEGORIE"<<"|"<<std::setw(10)<< "MASSE" << "" <<"|\n";
    std::cout << std::setfill('-');
    std::cout << "+" << std::setw(25) << std::left<<""<< "+" <<std::setw(10)<<""<<"+"<<std::setw(10)<<""<<"+\n";
    while(temp != nullptr)
    {
        temp->valeur->afficher();
        temp = temp->next;
    }
}
float Plat::getQuantite(void)
{
    return this->mQuantite;
}
void Plat::add(Aliment* alim)
{
    if(alim == nullptr)
        return;
    element* elmt = new element();
    elmt->valeur = alim;
    elmt->next = nullptr;
    this->mQuantite+= alim->getMasse();
    if(this->liste != nullptr)
    {
        element* temp = this->liste;
        while(temp->next != nullptr)
            temp = temp->next;
        temp->next = elmt;
    }
    else
        this->liste = elmt;
    return;
}
Aliment* Plat::pop(void)
{
    if(this->liste == nullptr)
        return nullptr;
    element* elmt = this->liste;
    this->liste = elmt->next;
    this->mQuantite -= elmt->valeur->getMasse();
    Aliment* temp = elmt->valeur;
    //delete elmt;
    return temp;
}
Plat::~Plat()
{
    while(this->liste != nullptr)
        delete this->pop();
}

#endif