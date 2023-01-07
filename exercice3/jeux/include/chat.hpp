#ifndef __CHAT__H__
#define __CHAT__H__

	class Chat : public Animal
	{
		private:
			std::string mNom;

		public:
			Chat();
			void presenter();
			virtual bool isChat();
			~Chat();
	};

#endif