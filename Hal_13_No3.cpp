#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
main(){
	char word[20];
	int i,j,wn;
	cout<<"Masukan Kata = ";cin>>word;
	cout<<endl;
	wn=strlen(word);
	
	for(i=wn;i>=0;i--){
		for(j=0;j<i;j++){
			cout<<word[j];
		}
	cout<<endl;
	}
}
