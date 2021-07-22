#include<iostream>
#include<string.h>
using namespace std;
int main(){
char kalimat[100];
cout<<"Input Kalimat : "; cin.getline (kalimat , sizeof (kalimat) );
cout<<"Hasil kebalikannya : ";
int x = strlen(kalimat);
for(int i=x-1;i>=0;i--){
  cout<<kalimat[i];
 }
}
