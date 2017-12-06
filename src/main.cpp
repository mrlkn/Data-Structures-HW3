#include "islem.hpp"
#include <cstdlib>
int main()
{
	Islem* islemlerim = new Islem();
	islemlerim->kuyruklariOlustur();
	islemlerim->ikiliAramaAgaciOlustur();
	system("cls");
	islemlerim->orders();
	
	return 0;
}