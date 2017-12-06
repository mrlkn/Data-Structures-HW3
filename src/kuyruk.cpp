#include "kuyruk.hpp"

Kuyruk::Kuyruk()
{
	this->ondeki 	= NULL;
	this->arkadaki 	= NULL;
	this->toplam 	= 0;
}
Kuyruk::~Kuyruk()
{
	delete arkadaki;
	delete ondeki;
}
void Kuyruk::Ekle(string veri)
{
	for(int i=0;i<veri.length();i++)
	{
		this->toplam += veri[i] - '0';
		if(ondeki == NULL)
		{
			ondeki=arkadaki= new Dugum(veri[i] - '0');
		}
		else
		{
			Dugum* eskiVeri = arkadaki;
			arkadaki = new Dugum(veri[i] - '0');
			eskiVeri->setSonraki(arkadaki);		
		}
	}
}
int Kuyruk::getToplam()
{
	return this->toplam;
}