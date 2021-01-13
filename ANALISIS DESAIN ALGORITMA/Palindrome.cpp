#include <iostream>
#include <string.h>
using namespace std;

void Palindrome(char hasil[]) {
int c, d , e;
    for (d = 0, e = strlen(hasil)-1; d < e; d++, e--) {
	
	c 		 = hasil[d];
	hasil[d] = hasil[e];
	hasil[e] = c;
	 }
}

int main() {

	char a [100];
	char b [100];

	cout<<"Program Palindrome"<<endl;
	cout<<"Masukan kata : ";cin>>a;

	strcpy(b,a);
	Palindrome(b);

	if(strcmp(a,b)==0) {

		cout<<"Merupakan kata Palindrome, "<<a;
	} else {
		cout<<"Bukan merupakan kata Palindrome, "<<a;
	}

	return 0;

}
