#include <iostream>
using namespace std;
int n;
int main(){
	cout<<"masukan angka : ";
	cin>>n;
    for(int i = 1; i <= n; i++){
    	
        if((i%3!=0) && (i%5!=0))
		{
		cout<<i<<endl;
		}
        if(i%3==0)
		{
        cout<<"upin"<<endl;
		}
		if(i%5==0)
		{
        	cout<<"ipin"<<endl;
		}
    }
    return 0;
}
