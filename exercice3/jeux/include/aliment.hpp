#ifndef __ALIMENT__H__
#define __ALIMENT__H__

class Aliment : public Agent
{
    private:
        std::string mNom;
    public:
        Aliment();
        void presenter(void);
        virtual bool isAliment();
        ~Aliment();


};
#endif