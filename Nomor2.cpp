#include<iostream>
using namespace std;

struct data_mhs
{
  string nama;
  int nim;
  float ipk;
} a,b;

int main()
{

    a.nama = "Ajis Gagap";
    a.nim =102904049;
    a.ipk = 2.5;
    b.nama="Tumming";
    b.nim =102904050;
    b.ipk = 3.0;
    
    cout <<"nama : "<< a.nama <<endl;
    cout<<"Nim :" << a.nim << endl;
    cout<< "ipk :" <<a.ipk << endl;
    cout<<"\n";
    
    cout<<"Nama :"<<a.nama <<endl;
    cout << "nim :" << a.nim<<endl;
    cout<< "ipk:" <<a. ipk << endl;
    cout <<"\n";
    cout << " nama : " << b.nama<< endl;
    cout <<"nim : " << b.nim << endl;
    cout << "ipk:" << b.ipk << endl;
    
 return 0;
 }
