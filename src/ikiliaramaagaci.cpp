#include "ikiliaramaagaci.hpp"
IkiliAramaAgaci::IkiliAramaAgaci(Kuyruk Veri)
{
	pSol= pSag = NULL;
	this->Veri = Veri;
}
IkiliAramaAgaci::~IkiliAramaAgaci()
{
	delete pSol;
	delete pSag;
}
void IkiliAramaAgaci::heapTemizle(IkiliAramaAgaci* tmp)
{
	if(tmp->pSol)
		heapTemizle(tmp->pSol);
	if(tmp->pSag)
		heapTemizle(tmp->pSag);
	delete tmp;
}
void IkiliAramaAgaci::Ekle(Kuyruk item)
{
	int veriToplam = Veri.getToplam();
	int itemToplam = item.getToplam();
	if(veriToplam>itemToplam)
	{
		if(pSol)
			return pSol->Ekle(item);
		
		IkiliAramaAgaci* pYeni = new IkiliAramaAgaci(item);
		pSol = pYeni;
	}
	if(veriToplam<itemToplam)
	{
		if(pSag)
			return pSag->Ekle(item);
		
		IkiliAramaAgaci* pYeni = new IkiliAramaAgaci(item);
		pSag = pYeni;
	}
	
}
void IkiliAramaAgaci::inOrder(IkiliAramaAgaci* IAA)
{
	if(IAA != NULL)
    {
        inOrder(IAA->pSol);
        cout << IAA->getToplam()<< " ";
        inOrder(IAA->pSag);
    }
}
void IkiliAramaAgaci::preOrder(IkiliAramaAgaci* IAA)
{
	if(IAA != NULL)
    {
        cout << IAA->getToplam()<< " ";
        preOrder(IAA->pSol);
        preOrder(IAA->pSag);
    }
}
void IkiliAramaAgaci::postOrder(IkiliAramaAgaci* IAA)
{
	if(IAA != NULL)
    {
        postOrder(IAA->pSol);
        postOrder(IAA->pSag);
        cout << IAA->getToplam()<< " ";
    }
}
int	IkiliAramaAgaci::getToplam()
{
	return this->Veri.getToplam();
}