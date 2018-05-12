#include<iostream>
using namespace std;
//May 12,2018
//prog105 to write a program to print the sum of even numbers of the third row in a 4x4 array
int main(){
	int sum;
	sum=0;
	int A[4][4] = {{5,6,7,2},{3,9,0,4},{5,0,1,6},{7,2,6,1}};
	for (int i =0; i<4; i++){
		for (int j=0; j<4;j++)
			if (i==2 && A[i][j]%2==0)
				sum = sum + A[i][j];
	}
	cout<<"the sum of even numbers of the third row is "<<sum<<endl;
}

