#ifndef islem_hpp
#define islem_hpp

#include <fstream>
#include <sstream>
#include "ikiliaramaagaci.hpp"

class Islem
{
	public:
		Islem();
		~Islem();
		void kuyruklariOlustur();
		void ikiliAramaAgaciOlustur();
		void orders();
		int getCountOfFile();
	private:
		Kuyruk* kuyruklar;
		IkiliAramaAgaci* IAA;
		
};

#endif