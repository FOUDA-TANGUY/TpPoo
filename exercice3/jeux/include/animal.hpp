#ifndef __ANIMAL__H__
#define __ANIMAL__H__

	class Animal : public Agent
	{
		private:
			char mSexe;
			void setSexe();

		public:
			Animal();
			void presenter(void);
			char getSexe(void);
			void seDeplacer(void);
			void manger(void);
			void seReproduire(void);
			virtual bool isAnimal();
			bool isFemele();
			void voir(void);
			~Animal();
			
			
	};

#endif