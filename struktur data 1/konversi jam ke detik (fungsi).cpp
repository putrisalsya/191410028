#include <iostream>
using namespace std;

int kj(int j,int m, int d){
    int k;
    k = (j*3600)+(m*60)+d;
    return k;
}
int main()
{
    int jam1,menit1,detik1;

    cout << "masukkan jam 1: "; cin >> jam1;
    cout << "masukkan menit 1: "; cin >> menit1;
    cout << "masukkan detik 1: "; cin >> detik1;

    int jam2,menit2,detik2;

    cout << "masukkan jam 2: "; cin >> jam2;
    cout << "masukkan menit 2: "; cin >> menit2;
    cout << "masukkan detik 2: "; cin >> detik2;

	cout << "Jumlah detik 1: " << kj(jam1,menit1,detik1)<<endl;
    cout << "Jumlah detik 2: " << kj(jam2,menit2,detik2)<<endl;
    int selisih;
    selisih = kj(jam2,menit2,detik2) - kj(jam1,menit1,detik1);
    cout<<"hasil :"<<selisih;
    return 0;
 }
