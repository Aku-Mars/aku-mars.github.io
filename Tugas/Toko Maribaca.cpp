//Tugas Toko Buku Maribaca
//Sebuah toko buku “MARIBACA’” sedangkan mengadakan diskon

#include <iostream>
using namespace std;

int main () {
cout << "======================================"  << endl;
cout << "            TOKO MARIBACA             "  << endl;
cout << "  Menjual Buku Dengan Harga Termurah  "  << endl;
cout << "======================================"  << endl;

//kamus
int a,b,c,total,uang,harga,diskon;
	
//algoritma
cout << "Harga Buku Ke-1 = Rp. ";
cin >> a ;
cout << "Harga Buku Ke-2 = Rp. ";
cin >> b ;
cout << "Harga Buku Ke-3 = Rp. ";
cin >> c ;

total = a + b + c ;

if (total <= 100000){
	cout << "======================================"	<< endl;
	cout << "Harga Buku Yang Harus Dibayar = Rp. " << total << endl;
	cout << "======================================"	<< endl;
	cout << "Masukan Jumlah Uang Anda      = Rp. " ;
	cin >> uang ;
	cout << "======================================"	<< endl;
	cout << "Uang Kembalian Anda           = Rp. " 	<< uang-total << endl;
}

else if (total <= 150000) {
	diskon = total*7/100;
	harga  = total-diskon;
	cout << "======================================"	<< endl;
	cout << "Total Harga Buku Yang Dibeli  = Rp. " 	<< total  << endl;
	cout << "Diskon Yang Didapatkan        = Rp. " 	<< diskon << endl ;
	cout << "Harga Buku Yang Harus Dibayar = Rp. " 	<< harga  << endl ;
	cout << "======================================"	<< endl;
	cout << "Masukan Jumlah Uang Anda      = Rp. " ;
	cin >> uang ;
	cout << "======================================"	<< endl;
	cout << "Uang Kembalian Anda           = Rp. " 	<< uang - harga << endl;
}
 else if (total <= 250000) {
 diskon = total*10/100;
	harga  = total-diskon;
	cout << "======================================"	<< endl;
	cout << "Total Harga Buku Yang Dibeli  = Rp. " 	<< total  << endl;
	cout << "Diskon Yang Didapatkan        = Rp. " 	<< diskon << endl ;
	cout << "Harga Buku Yang Harus Dibayar = Rp. " 	<< harga  << endl ;
	cout << "======================================"	<< endl;
	cout << "Masukan Jumlah Uang Anda      = Rp. " ;
	cin >> uang ;
	cout << "======================================"	<< endl;
	cout << "Uang Kembalian Anda           = Rp. " 	<< uang - harga << endl;
}
else {
	diskon = total*12/100;
	harga  = total-diskon;
	cout << "======================================"	<< endl;
	cout << "Total Harga Buku Yang Dibeli  = Rp. " 	<< total  << endl;
	cout << "Diskon Yang Didapatkan        = Rp. " 	<< diskon << endl ;
	cout << "Harga Buku Yang Harus Dibayar = Rp. " 	<< harga  << endl ;
	cout << "======================================"	<< endl;
	cout << "Masukan Jumlah Uang Anda      = Rp. " ;
	cin >> uang ;
	cout << "======================================"	<< endl;
	cout << "Uang Kembalian Anda           = Rp. " 	<< uang - harga << endl;
}

return 0;
	
}	
