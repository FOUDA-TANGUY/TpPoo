#ifndef __PLAT__H__
#define __PLAT__H__

class Plat
{
    private:
        std::vector <Aliment*> mListe;
        std::string mName;
        int mCapacity;

    public:
        Plat(void)
        {
            std::cout << "creation du plat " << this;
        }
        Plat(std::string name,int capacity);
        Aliment pop();
        bool add(Aliment*);
        void prensenter(void);
        void videPlat(void);
        
};

#endif