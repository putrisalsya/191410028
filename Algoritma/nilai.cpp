
#include<iostream>
#include<conio.h>
using namespace std;
main ()
{
float Nilai;
     
cout<<" Masukan Nilai : ";
cin>>Nilai;

if(Nilai >= 80 && Nilai <=100)
{ cout<< "A"; }

else if(Nilai >= 68 && Nilai <=79)
{ cout<< "B"; }

else if(Nilai >= 56 && Nilai <=67)
{ cout<< "C"; }

else if(Nilai >= 45 && Nilai <=55)
{ cout<< "D"; }

else if(Nilai >= 0 && Nilai <=44)
{ cout<< "E"; }

else
{ cout<<"error";	}    
getch () ;
}


