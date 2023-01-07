#ifndef __AGENT__H__
#define __AGENT__H__

	class Agent
	{
		private:
			int mDureeVie;
			int mPositionX;
			int mPositionY;
			unsigned char mRepresentation;
			std::string mNom;
		protected:
			void setRepresentation(unsigned char x);
		public:
			Agent();
			void presenter(void) ;
			void mourir(void);
			void setPosition(int x,int y);
			unsigned char getRepresentation();
			virtual bool isChat();// lorsqu'on crée un pointeur agent de type chat on va faire appel a ischat dans chat;
			virtual bool isSouris();
			virtual bool isAliment();
			virtual bool isAnimal();
			int getPositionX();
			int getPositionY();
			virtual ~Agent();

	};

#endif