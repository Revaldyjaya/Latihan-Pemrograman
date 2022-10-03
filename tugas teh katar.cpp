#include <iostream>
using namespace std;

int main (){
char nama [20];
char hadiah [300];
float nilai1 = 0, nilai2 = 0, nilai3 = 0, total = 0, rata;

cout <<"***program hitung nilai rata rata***" << endl;

cout << " nama siswa : "; cin >> nama;
cout << "nilai pertandingan 1 :";
cin >> nilai1;
cout << "nilai pertandingan 2 :";
cin >> nilai2;
cout << "nilai pertandingan 3 :";
cin >> nilai3;

  rata= (nilai1+nilai2+nilai3)/3;

cout << endl;
cout <<"siswa yang bernama " << nama << endl;
cout << "memperoleh nilai rata rata " << rata << endl;
cout << " dari hasil perlombaan yang diikutinya " << endl;
if (rata >=85)
  cout << "hadiah yang didapat adalah komputer icore5" << hadiah << endl;
else if (rata >=70)
  cout << "hadiah yang didapat adalah uang sebesar Rp.2500000" << hadiah << endl;
else if ( rata <70 )
  cout << "hadiah yang didapat adalah hiburan " << hadiah << endl;
getchar ();
}