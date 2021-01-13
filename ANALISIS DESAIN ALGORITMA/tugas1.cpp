#include <iostream>

using namespace std;

int main() {

	int x[7] = {1,2,2,5,4,4,1};

	int j = 1000000;

	int f = 0;

	
	for(int i=0; i<7; i++) {

		f = x[i] * j;

		cout<<f<<endl;

		j = j/10;

	}

	return 0;

}
