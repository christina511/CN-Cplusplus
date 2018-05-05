#include<iostream>
using namespace std;
//May 5,2018
//prog 103 to print the sum of the elements of row 4
int main(){
	int sum;
	sum=0;
	int test[5][3] = {{5,6,7},{3,9,0},{5,0,1},{7,9,3},{6,2,6}};
	for (int i =0; i <5; i++){
		for (int j=0; j<3; j++)
			if (i ==4)
				sum = sum +test[i][j];
	}
	cout<<"The sum of the elements in row 4 is "<<sum<<endl;
}
