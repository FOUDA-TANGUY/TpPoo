#ifndef __ALIMENTCONS__H__
#define __ALIMENTCONS__H__

class Alimentcons:Aliment
{
    
    private:
        float mCalcium;
        float mProteine;
    public:
        Alimentcons();
        void setCons(float,float);
        float getCalcium(void);
        float getProteine(void);
        ~Alimentcons();
};

Alimentcons::Alimentcons()
{
    std::cout <<"constructon d'un aliment constructeur sans parametre\n";
}
void Alimentcons::setCons(float calcium,float proteine)
{
    this->mCalcium = calcium;
    this->mProteine = proteine;
}
float Alimentcons::getCalcium(void)
{
    return this->mCalcium;
}
float Alimentcons:: getProteine(void)
{
    return this->mProteine;
}
Alimentcons::~Alimentcons()
{
    std::cout <<"destruction d'un alimentconstructeur sans parametre\n";
}
#endif