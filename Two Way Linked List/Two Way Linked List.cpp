
#include <iostream>
using namespace std;
class loop {
public : 
    loop(int data) {
        this->data = data;
        next = NULL;

    }
    int data;
    loop* next;
};
int main()
{
    //eleman ekleme
   //Geçici bir işaretçi oluşturuluyor ve ilk düğümün adresi atanıyor

    //listenin elemalarını geziyoruz 
    loop* l1 = new loop(15);
    loop* l2 = new loop(22);
    loop* l3 = new loop(33);
    loop* l4 = new loop(55);
    loop* late = l1;
    while (l1->next!=0)
    {
        l1 = l1->next;
    }
    //yedek olarak kullanılan işaretçiyle devam edeceğiz
    cout << late->data << endl;// geç son düğüm 
  //  l1->next = l2;
  //  l2->next = l3;
  //  l3->next = l4;


}
