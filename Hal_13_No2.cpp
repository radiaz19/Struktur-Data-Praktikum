#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main(){
	int i,n,ta=0,x,xi2=0;
	float rata,sd,sdf,r;
	
	cout<<"Masukan Jumlah Data = ";cin>>n;
	int a[n];
	
	for(i=0;i<n;i++){
		cout<<"Masukkan Data Ke-"<<i+1<<" = ";cin>>a[n];
		ta=ta+a[n];	
		xi2=xi2+pow(a[n],2);
	}
	rata=ta/n;
	x=pow(ta,2);
	r=(n*xi2-x)/(n*(n-1));
	sd=sqrt(r);
	cout<<endl;
	cout<<"Rata-rata = "<<rata<<endl;
	cout<<"Varian = "<<r<<endl;
	cout<<"Standar Deviasi = "<<sd;

	getch();
	return 0;
}
