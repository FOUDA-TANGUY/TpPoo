#ifndef __ALIMENT__H__
#define __ALIMENT__H__

class Aliment
{
    private:
        std::vector<Nutriment> mListe;
        std::string mName; 
    public:
        Aliment(void);
        ~Aliment();
};

#endif