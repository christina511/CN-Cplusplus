#include<iostream>
using namespace std;
//May 5,2018
//prog 102 to print the elements of the second column of the table
int main(){
	int test[5][3] = {{5,6,7},{3,9,0},{5,0,1},{7,9,3},{6,2,6}};
	for (int i =0; i <5; i++){
		for (int j=0; j<3; j++)
			if (j ==1)
				cout<<test[i][j]<<endl;
	}
}
