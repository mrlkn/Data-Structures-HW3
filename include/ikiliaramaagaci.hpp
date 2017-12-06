#ifndef ikiliaramaagaci_hpp
#define ikiliaramaagaci_hpp
#include<iostream>
#include "kuyruk.hpp"

class IkiliAramaAgaci
{
	private:
		Kuyruk			Veri;
		IkiliAramaAgaci*	pSol;
		IkiliAramaAgaci*	pSag;
		
	public:
		IkiliAramaAgaci(Kuyruk Veri);
		~IkiliAramaAgaci();
		void heapTemizle(IkiliAramaAgaci*);
		
		void		Ekle(Kuyruk item);
		int			getToplam();
		
		void inOrder(IkiliAramaAgaci*);
		void preOrder(IkiliAramaAgaci*);
		void postOrder(IkiliAramaAgaci*);
};

#endif
