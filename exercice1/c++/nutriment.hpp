#ifndef __NUTRIMENT__H__
#define __NUTRIMENT__H__

class Nutriment
{
    private:
        std::string mCouleur;
        int mPoids;
        std::string mName;
    
    public:
        Nutriment(void);
        Nutriment(std::string couleur,int poids,std::string name);
        void set(std::string couleur,int poids,std::string name);
        std::string getCouleur(void);
        int getPoids(void);
        std::string getName(void);
        void presenter(void);    
        ~Nutriment();
};

#endif