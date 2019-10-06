#include <iostream>
using namespace std;

 int main(){
 	menu:
 		system ("cls");
	float nilai;
 	char skor;
 	
 	cout<<"GRADE NILAI\n";
	cout<<"Oleh akbar rakasiwi\n";
	cout<<"\n\n";
 	cout<<"masukkan nilai anda: ";
 	cin>>nilai;
 	 if (nilai>=90 && nilai<=100) {
 	 	skor='A'; }
 	 	else if (nilai >100) {
 	 		cout<<"nilai tidak valid\n";
 	 		system ("pause");
 	 		goto menu;
		  }
	else if(nilai>=80) {
		skor='B';
	}
	else if (nilai>=70){
		skor='C';
	}
	else if (nilai>=60) {
		skor='D';
	}
	else if (nilai <=60) {
		skor='E';
	}
	char izin;
	cout<< "Grade anda adalah "<<skor<<endl;
	cout<<"apakah anda ingin melihat grade nilai lagi? y/n\n";
	cout<<"masukkan: ";
	cin>>izin;
	if (izin=='y'){
		
		goto menu;
	}
	else {
		cout<<"TERIMA KASIH\n\n";
		system ("pause");
	}
	  
    return 0;
 }

