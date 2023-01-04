#ifndef __ALIMENT__H__
#define __ALIMENT__H__

class Aliment
{
    private:
        std::vector<Nutriment*> mListe;
        std::string mName; 
    public:
        Aliment(void);
        Aliment(std::string name);
        Nutriment pop(void);
        std::string getName(void);
        void setName(std::string name);
        bool add(Nutriment*);
        void presenter(void);
        ~Aliment();
};

#endif