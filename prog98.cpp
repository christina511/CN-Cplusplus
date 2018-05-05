#include<iostream>
using namespace std;
//May 5,2018
//prog 98 the sum of the array
int main(){
	int sum;
	sum=0;
	int A[5]={5,6,-9,-11,4};
	for (int i=0; i<5;i++){
		sum = sum+ A[i];
	}
	cout<<"The sum of the array is "<<sum<<endl;
}
