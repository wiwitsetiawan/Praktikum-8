#include <iostream>

using namespace std;

 int suku, a, b, c;

     int main()
     {
     cout<<"Membuat fungsi rekursif dengan cara penjumlahan\n";
     cout<<"Masukkan nilai suku ke-: ";cin>>suku;

     cout<<"Bilangannya adalah: \n";
     a=0;b=1;

     for(int i=1; i<=suku; i++)
    {
    c = a + b;
    a = b;
    b = c;

     cout<<c<<endl;
     }
    return 0;
     }
