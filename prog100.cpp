#include<iostream>
#include<iomanip>
using namespace std;
//May 5,2018
//prog 100 the sum of the array
int main(){
	int n[10];
	cout<<"Enter the elements of the array: ";
	for (int i=0; i<10;i++)
		cin>>n[i];
	cout<<"Index"<<setw(13)<<"Element"<<endl;
	for (int j=0;j<10;j++)
		cout<<setw(7)<<j<<setw(13)<<n[j]<<endl;
}
