#ifndef __PLAT__H__
#define __PLAT__H__

class Plat
{
    private:
        std::vector <Aliment> mListe;
        std::string mName;
        int mCapacity;

    public:
        Plat(void);
        Aliment popAliment(void);
        bool addAliment(Aliment&);
        void videPlat(void);
};

#endif