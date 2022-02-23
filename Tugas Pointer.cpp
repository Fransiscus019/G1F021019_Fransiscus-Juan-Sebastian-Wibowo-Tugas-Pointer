#include<iostream>
using namespace std;

int main(){
	int A, B, C;
	int *P1, *P2, *P3;
	A=10;
	cout<<"Nilai A :"<<A<<endl;
	cout<<"Alamat A :"<<&A<<endl;
	B=15;
	cout<<"Nilai B :"<<B<<endl;
	cout<<"Alamat B :"<<&B<<endl;
	P1=&B;
	cout<<"Nilai P1 :"<<*P1<<endl;
	cout<<"Alamat P1 :"<<P1<<endl;
	P2=P1;
	cout<<"Nilai P2 :"<<*P2<<endl;
	cout<<"Alamat P2 :"<<P2<<endl;
	C=27;
	cout<<"Nilai C :"<<C<<endl;
	cout<<"Alamat C :"<<&C<<endl;
	P1=&C;
	cout<<"Nilai P1 :"<<*P1<<endl;
	cout<<"Alamat P1 :"<<P1<<endl;
	A=*P1;
	cout<<"Nilai A :"<<A<<endl;
	cout<<"Alamat A :"<<&A<<endl;
	P3=&B;
	cout<<"Nilai P3 :"<<*P3<<endl;
	cout<<"Alamat P3 :"<<P3<<endl;
	*P2=8;
	cout<<"Nilai P2 :"<<*P2<<endl;
	cout<<"Alamat P2 :"<<P2<<endl;
	P1=&A;
	cout<<"Nilai P1 :"<<*P1<<endl;
	cout<<"Alamat P1 :"<<P1<<endl;
	P2=&B;
	cout<<"Nilai P2 :"<<*P2<<endl;
	cout<<"Alamat P2 :"<<P2<<endl;
	*P1=C;
	cout<<"Nilai P1 :"<<*P1<<endl;
	cout<<"Alamat P1 :"<<P1<<endl;
	A=*P2;
	cout<<"Nilai A :"<<A<<endl;
	cout<<"Alamat A :"<<&A<<endl;
	B=6;
	cout<<"Nilai B :"<<B<<endl;
	cout<<"Alamat B :"<<&B<<endl;
	P3=&B;
	cout<<"Nilai P3 :"<<*P3<<endl;
	cout<<"Alamat P3 :"<<P3<<endl;
	P3=&C;
	cout<<"Nilai P3 :"<<*P3<<endl;
	cout<<"Alamat P3 :"<<P3<<endl;
	*P1=*P3;
	cout<<"Nilai P1 :"<<*P1<<endl;
	cout<<"Alamat P1 :"<<P1<<endl;
	A=B;
	cout<<"Nilai A :"<<A<<endl;
	cout<<"Alamat A :"<<&A<<endl;
	*P2=*P3;
	cout<<"Nilai P2 :"<<*P2<<endl;
	cout<<"Alamat P2 :"<<P2<<endl;
	
	return 0;
}

