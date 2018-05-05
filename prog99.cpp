#include<iostream>
using namespace std;
//May 5,2018
//prog 99 the sum of even numbers in the array
int main(){
	int sum;
	sum=0;
	int A[5]={5,6,-9,-11,4};
	for (int i=0; i<5;i++){
		if (A[i]%2==0)
			sum = sum+ A[i];
	}
	cout<<"The sum of even numbers in the array is "<<sum<<endl;
}
