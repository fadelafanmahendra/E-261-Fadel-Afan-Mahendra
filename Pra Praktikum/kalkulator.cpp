#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int penjumlahan (int a, int b)
{
	int hasil = a + b;
	return hasil;
}

int main(){
	
	int bil1,bil2, pil;
	float hasil;
	string operasi;
	
	cout<<"=== PROGAM KALKULATOR SEDERHANA ==="<<endl;
	cout<<"Menu Operasi"<<endl;
	cout<<" 1. Penjumlahan"<<endl;
	cout<<" 2. Pengurangan"<<endl;
	cout<<" 3. Perkalian"<<endl;
	cout<<" 4. Pembagian"<<endl;
	cout<<endl;
	
	cout<<"Pilih Menu No : ";
	cin>>pil;
	cout<<"Bilangan pertama : ";
	cin>>bil1;
	cout<<"Bilangan kedua : ";
	cin>>bil2;	
	
	switch(pil){
	        case 1 : hasil=bil1+bil2;
			operasi='+';
			break;
		case 2 : hasil=bil1-bil2;
			operasi='-';
			break;
		case 3 : hasil=bil1*bil2;
			operasi='*';
			break;
		case 4 : hasil=bil1/bil2;
			operasi='/';
			break;
		default :
			cout<<"Salah Masukan Operator"<<endl;
	}
	cout << "\nHasil " << bil1 << " " << operasi << " " << bil2 << " = " << hasil << endl;
	
	getch();
}
