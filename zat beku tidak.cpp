#include <iostream>
#include <conio.h>
using namespace std;

main(){
int bil;

cout<<"masukkan derajat suhu = ";
cin>>bil;

if (bil < 0)
   cout<<bil<<" bentuk dari zat tersebut adalah zat beku";
else if (bil > 0 )
   {
     cout<<bil<<" bentuk dari zat tersebut adalah zat tidak beku";
   }
else if (bil==0)
    {
     cout<<"inputan salah";
   }
getch();}
