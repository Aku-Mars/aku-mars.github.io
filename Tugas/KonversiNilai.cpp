#include <iostream>
using namespace std;

int main(){
	float Nilai;
	string nama;
	cout << "=============================="<<endl;
	cout << "    Program Konversi Nilai    "<<endl;
	cout << "=============================="<<endl;
	
	for (int i = 0; i < 2; i++){
		cout << endl;
		cout << "Masukkan Nama	: ";
		cin >> nama;
		cout << "Masukkan Nilai	: ";
		cin >> Nilai;
		
	if(Nilai>=76){
		cout<<"Nilai = A" << endl;}
	else if (Nilai>=71 && Nilai<76){
		cout<<"Nilai = B+" << endl;}
	else if (Nilai>=66 && Nilai<71){
		cout<<"Nilai = B" << endl;}
	else if (Nilai>=61 && Nilai<66){
		cout<<"Nilai = C+" << endl;}
	else if (Nilai>=56 && Nilai<61){
		cout<<"Nilai = C" << endl;}
	else if (Nilai>=51 && Nilai<56){
		cout<<"Nilai = D" << endl;}
	else if (Nilai>=0 && Nilai<51){
		cout<<"Nilai = E" << endl;}
}
	return 0;
}
