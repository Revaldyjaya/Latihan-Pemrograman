#include <iostream>
#include <stdlib.h>
using namespace std;

int main()

{
  float jumlah, harga, total;
  cout <<"Masukkan jumlah barang    = ";
  cin >>jumlah;
  cout <<"Harga barang              = ";
  cin >> harga;
  
  total = harga*jumlah;

  cout << "total yang harus di bayar ="
  <<total<< endl;
}