#ifndef __SOURIS__H__
#define __SOURIS__H__

	class Souris : public Animal
	{
		private:
			void setSexe();
			
		public:
			Souris();
			void presenter();
			virtual bool isSouris();
			~Souris();
	};

#endif