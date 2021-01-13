#include <iostream>

using namespace std;
struct jam{
int jam;
int menit;
int detik;
};

int main(){
	jam jam1;
	cout <<"Masukkan jam 1" <<endl;
	cout <<" Jam : "; cin >>jam1.jam;
	cout <<" Menit : "; cin >>jam1.menit;
	cout <<" Detik : "; cin >>jam1.detik;

	cout<<endl;

	jam jam2;
	cout <<"Masukan jam 2" <<endl;
	cout <<" Jam : "; cin >>jam2.jam;
	cout <<" Menit : "; cin >>jam2.menit;
	cout <<" Detik : "; cin >>jam2.detik;
	
	jam jam3;
	if ((jam2.detik - jam1.detik) < 0) {
		jam3.detik = (60 + jam2.detik) - jam1.detik;
		jam2.menit;
		}
	else {
		jam3.detik = jam2.detik - jam1.detik;
		}
	if ((jam2.menit- jam1.menit) < 0) {
		jam3.menit= (60 + jam2.menit) - jam1.menit;
		jam2.jam;
		jam3.jam = jam2.jam - jam1.jam-1;
		}
	else {
		jam3.menit = jam2.menit- jam1.menit;
		jam3.jam = jam2.jam - jam1.jam;
		}

	cout <<endl;

	cout <<"Selisih dalam detik = " << jam3.jam*3600 + jam3.menit*60 + jam3.detik <<endl;

	cout<<endl;

	cout <<"Selisih Jam" <<endl;
	cout <<" Jam : " << jam3.jam <<endl;
	cout <<" Menit : " << jam3.menit <<endl;
	cout <<" Detik : " << jam3.detik <<endl;

return 0;
}

