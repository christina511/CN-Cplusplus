#include<iostream>
using namespace std;
//May 5,2018
//prog 104 to swap the second and third element in an array
int main(){
	int A[5] = {5,2,10,-9,6};
	cout<<"The original array is:  ";
	for (int i =0; i <5; i++)
		cout<<A[i]<< "  ";
	int temp;
	temp = A[1];
	A[1]= A[2];
	A[2] = temp;
	cout<<endl<<"The new array is:       ";
	for (int i =0; i <5; i++)
		cout<<A[i]<< "  ";
} 
