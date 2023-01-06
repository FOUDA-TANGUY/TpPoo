#ifndef __ALIMENTPROT__H__
#define __ALIMENTPROT__H__

class AlimentProd:Aliment
{
    private:
        std::string mVitamine;
        float mFibre;
        std::string mSelmineraux;
    public:
        AlimentProd();
        void setProt(std::string,float,float);
        std::string getVitamine(void);
        std::string getSelmineraux(void);
        float getFibre(void);
        ~AlimentProd();
};

AlimentProd::AlimentProd()
{
    
}
void AlimentProd::setProt(std::string vitamine,float fibre,float selmineraux)
{
    this->mVitamine=vitamine;
    this->mFibre=fibre;
    this->mSelmineraux=selmineraux;
}
std::string AlimentProd::getVitamine(void)
{
    return this->mVitamine;
}
std::string AlimentProd::getSelmineraux(void)
{
    return this->mSelmineraux;
}
float AlimentProd::getFibre(void)
{
    return this->mFibre;
}
AlimentProd::~AlimentProd()
{
    
}
#endif