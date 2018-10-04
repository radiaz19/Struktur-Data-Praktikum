#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int i,n;
	float rata,ta;
	
	cout<<"Masukan Jumlah Angka Yang Akan Dirata-rata kan = ";cin>>n;
	int a[n];
	
	for(i=0;i<n;i++){
		cout<<"Masukkan Angka Indeks Ke-"<<1+i<<" = ";cin>>a[n];
		ta=ta+a[n];
	}
	cout<<endl;
	rata=ta/n;
	cout<<"Rata-rata Dari Angka-angka Diatas = "<<rata;
	
	getch();
	return 0;
}
