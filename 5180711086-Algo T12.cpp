#include<time.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main ()
{
    string pil, ap;
    int ja, arr[50], mini, temp, ketemu, cari;
    cout<<"Selamat datang, silahkan pilih menu yang diinginkan :";
    do {
    cout<<"\n1. Input data \n2. Sorting data \n3. Searching data";
    cout<<"\n4. Edit data \n5. Hapus data"<<endl;
    cout<<"Masukkan menu yang dipilih : "; cin>>pil;
    if (pil=="1")
    {
        system("cls");
        cout<<"Input data";
        cout<<endl<< "================="<<endl<<endl;
        cout<<"Masukan jumlah angka = "; cin>>ja;
        for(int i=0; i<ja; i++) {
        cout<<"Angka ke "<<i+1<<" = "; cin>>arr[i];}
    }
    else if (pil=="2")
    {
        system("cls");
        cout<<"Sorting data";
        cout<<endl<< "================="<<endl<<endl;
        cout<<"Angka sebelum di sortir = ";
        for(int j=0; j<ja; j++) {
        cout<<arr[j]<<"  ";}
        for(int r1=0;r1<ja-1;r1++) {
        mini=r1;
        for(int r2=r1+1; r2<ja; r2++)
        if(arr[r2]>arr[mini])
        mini=r2;
        if(mini !=r1) {
        temp=arr[r1];
        arr[r1]=arr[mini];
        arr[mini]=temp;} }
        cout<<"\n\nSetelah di sortir = ";
        for(int q=0; q<ja; q++) {
        cout<<arr[q]<< "  " ;}
        cout<<endl;
    }
    else if (pil=="3")
    {
        system("cls");
        cout<<"Searching data";
        cout<<endl<< "================="<<endl<<endl;
        cout<<"Data yang dicari : "; cin>>cari;
        ketemu=0;
        for ( int i=0; i<ja; i++)
        {
            if (arr[i]==cari)
            {
                ketemu=1;
                cout<<"\nData ditemukan pada indeks ke-"<<i+1;
                cout<<endl;
            }
        }
        if (ketemu==0)
        {
            cout<<"Data tidak ditemukan"<<endl;
        }
    }
    else if (pil=="4")
    {
        system("cls");
        cout<<"Edit data";
        cout<<endl<< "================="<<endl<<endl;
        cout<<"Data yang akan diubah :"<<endl;
        for(int x=0; x<ja; x++)
        {
            cout<<"Angka ke "<<x+1<<" = "; cin>>arr[x];
        }
    }
    else if (pil=="5")
    {
        system ("cls");
        cout<<"Semua data telah terhapus"<<endl;
    }
        cout<<"\nApakah ingin memilih menu lainnya? (y/t) : "; cin>>ap;}
        while (ap=="y");
}
