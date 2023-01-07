#ifndef __ALIMENTENER__H__
#define __ALIMENTENER__H__

class Alimentener:public Aliment
{
    private:
        float mLipide;
        float mGlucide;
        float mProteine;
    public:
        Alimentener();
        void setEner(float, float, float);
        float getLipide(void);
        float getGlucide(void);
        float getProteine(void);
        ~Alimentener();
};

Alimentener::Alimentener()
{
    
}
void  Alimentener::setEner(float lipide, float glucide, float proteine)
{
    this->mLipide=lipide;
    this->mGlucide=glucide;
    this->mProteine=proteine;
}
float  Alimentener::getLipide(void)
{
    return this->mLipide;
}
float  Alimentener::getGlucide(void)
{
    return this->mGlucide;
}
float  Alimentener::getProteine(void)
{
    return this->mProteine;
}
Alimentener::~Alimentener()
{
    
}

#endif