Pseudocode (rekursif dengan penjumlahan dua buah bilangan):

fungsi faktorial adalah:integer suku
Input: integer i sehingga i>= 0
Output: [i + (i ke-1) + (i ke-2) + ... +i ke-suku]

    1. jika i adalah 0, kembali 1
    2. jika tidak, kembali [i × faktorial (suku-1)]

Kode programnya :

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
