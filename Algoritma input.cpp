#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main ()
{
	int absen;
	int tugas;
	int mid;
	int final;
	int hasil;
	int i;
	int a;
	char nama[100];
	cout << "Masukan Jumlah Inputan : ";cin>>a;
	for (i=1; i<=a;i++) {
	cout << "masukan nama :";gets(nama);cin.getline(nama,100);
	cout << "Nilai absen : ";cin>>absen;
	cout << "Nilai tugas : ";cin>>tugas;
	cout << "Nilai mid : ";cin>>mid;
	cout << "Nilai final : ";cin>>final; 
	hasil = (absen*0.1) + (tugas*0.2) + (mid*0.3) + (final*0.4);
	cout << "hasil " <<hasil<<"\n";
	if (hasil >= 81 ) {
		cout << "Grade A \n";
	} else if (hasil >=71) {
		cout << "Grade B \n";
	} else if (hasil >= 60) {
		cout << "Grade C \n";
	} else if (hasil >= 50) {
		cout << "Grade D \n";
	} else {
		cout << "Grade E \n";
	}
}

}
