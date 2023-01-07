#ifndef __VISUEL__H__
#define __VISUEL__H__

	class Visuel
	{
		private:
			unsigned char** mMatrice;//pointeur de pointeurs;
                  int mLongueur;
                  int mLargeur;
                  void creerTexture();
		public:
                  Visuel();
                  Visuel(int n,int m);
                  int getLongueur();
                  int getLargeur();
                  void init();
                  void afficherMatrice();
                  void setLongueur(int m);
                  void setLargeur(int n);
                  bool draw(int x,int y, unsigned char c);
                  ~Visuel();
			
	};

#endif