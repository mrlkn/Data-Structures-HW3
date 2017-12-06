#ifndef dugum_hpp
#define dugum_hpp
#include <iostream>
using namespace std;
class Dugum
{
	public:
		Dugum(int);
		
		void setSonraki(Dugum*);
		void setVeri(int);
		Dugum* getSonraki();
		int getVeri();
		
	private:
		int veri;
		Dugum* sonraki;
};

#endif