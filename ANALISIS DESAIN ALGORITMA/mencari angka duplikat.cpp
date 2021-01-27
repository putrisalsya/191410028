#include<iostream>
using namespace std;

int a[10] = {6,2,2,3,1,6,4,7,10,4},tmp,jumlah;
int main ()
{
	for(int p=0; p<10; p++)
	{
		for(int q=p+1; q<10; q++)
		{
			if(a[p] > a[q])
			{
				tmp = a[q];
				a[q] = a[p];
				a[p] = tmp;
			}
		}
		cout << a[p] << " ";
	}
	cout << "\nAngka yang duplikat adalah : " ;
	for(int p=0; p<10; p++)
	{
		jumlah = 0;
		for(int q=0; q<10; q++)
			{
				if(a[p] == a[q])
				jumlah++;		
			}
		if(jumlah != 1 && a[p] != a[p-1])
		cout <<a[p]<<" ";
	}
	return 0;
}
