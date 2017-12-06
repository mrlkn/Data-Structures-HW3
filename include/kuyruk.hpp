#ifndef kuyruk_hpp
#define kuyruk_hpp
#include <string>
#include "dugum.hpp"
using namespace std;
class Kuyruk
{
	public:
		Kuyruk();
		~Kuyruk();
		void	Ekle(string);
		int		getToplam();
	private:
		Dugum*	ondeki;
		Dugum*	arkadaki;
		int 	toplam;
};

#endif