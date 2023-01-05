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
    std::cout << "Creation du plat\n";
}
void Plat::setName(std::string name) 
{
    this->mName = name;
}
std::string Plat::getName(void)
{
    return this->mName;
}
float Plat::getQuantite(void)
{
    return this->mQuantite;
}
void Plat::add(Aliment* alim)
{
    element* elmt = new element();
    elmt->valeur = alim;
    elmt->next = nullptr;
    if(this->liste != nullptr)
    {
        element* temp = this->liste;
        while(temp->next != nullptr)
            temp = temp->next;
        temp->next = elmt;
    }
    else
        this->liste = elmt;
    
}
Aliment* Plat::pop(void)
{
    if(this->liste == nullptr)
        return nullptr;
    element* elmt = this->liste;
    this->liste = elmt->next;
    Aliment* temp = elmt->valeur;
    delete elmt;
    return temp;
}
Plat::~Plat()
{
    while(this->liste != nullptr)
        this->pop();
    std::cout << "destruction du plat\n";
}

#endif