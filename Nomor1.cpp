#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int angka;
	cout<<"Input angka : ";
	cin>>angka;
	cout<<"| "<<angka<<" | = ";
	if(angka%3==0 && angka%5!=0)
	cout<<"Hello";
	else if(angka%3!=0 && angka%5==0)
	cout<<"World";
	else if(angka%3==0 && angka%5==0)
	cout<<"Hello World";
	else
	cout<<"Tidak termasuk Hello, World, maupun Hello World";
}
