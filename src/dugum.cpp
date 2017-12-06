#include "dugum.hpp"

Dugum::Dugum(int veri)
{
	this->veri = veri;
	this->sonraki = sonraki;
}
void Dugum::setSonraki(Dugum* sonraki)
{
	this->sonraki = sonraki;
}
Dugum* Dugum::getSonraki()
{
	return this->sonraki;
}
void Dugum::setVeri(int veri)
{
	this->veri = veri;
}
int Dugum::getVeri()
{
	return this->veri;
}