#include<iostream>
#include<conio.h>

int main()
{
int a, b, c;
for(a=6;a>=1;a--)
{
for(b=1;b<a;b++)
{
std::cout << " ";
}
for (c=6;c>=a;c--)
{
std::cout << "*";
}
std::cout<<std::endl;
}
getch();
}
