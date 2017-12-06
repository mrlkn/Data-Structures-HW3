#include <cstdlib>
#include "islem.hpp"

Islem::Islem()
{
	kuyruklar = NULL;
	IAA = NULL;
}
Islem::~Islem()
{
	IAA->heapTemizle(IAA);
	delete kuyruklar;
	delete IAA;
}
void Islem::kuyruklariOlustur()
{
	ifstream oku("sayilar.txt");
	if(oku.is_open())
	{
		int lines_count = getCountOfFile();
		kuyruklar = new Kuyruk[lines_count];
		for(int i=0; i<lines_count; i++, oku.good())
		{
			string line = "";
			
			getline(oku,line);
			kuyruklar[i].Ekle(line);
		}
	}
	else
	{
		cout<<"dosya okutulamadı";
	}
	return;
}

void Islem::ikiliAramaAgaciOlustur()
{
	IAA = new IkiliAramaAgaci(kuyruklar[0]);
	for(int i=1;i<getCountOfFile();i++)
	{
		IAA->Ekle(kuyruklar[i]);
	}
}
void Islem::orders()
{
	cout<<"inorder:"<<endl;
	IAA->inOrder(IAA);
	cout<<endl;
	cout<<"preorder:"<<endl;
	IAA->preOrder(IAA);
	cout<<endl;
	cout<<"postorder:"<<endl;
	IAA->postOrder(IAA);
	cout<<endl;
}
int Islem::getCountOfFile()
{
	ifstream oku("sayilar.txt");
	if(oku.is_open())
	{
		int lines_count = 0;
		string line;
		
		while (getline(oku,line))
			++lines_count;
		oku.close();
		return lines_count;
	}
	oku.close();
	return 0;
}