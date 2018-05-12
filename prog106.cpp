#include<iostream>
using namespace std;
//May 12, 2018
//prog 106 is to 1) print the original array of 3x4 elements, 2) change all the elements of column 2 to zero then print the new array
int main(){
int A[3][4] = {{5,6,7,2},{3,9,0,7},{5,0,1,8}};
cout<<"Original Array\n";
cout<<"Row	  	"<<"Elements\n";
for (int i=0; i<3;i++){
	cout<<i<<"		";
	for (int j=0; j<4;j++){
		cout<<A[i][j]<<"    ";
		if (j==2)
			A[i][j]=0;
}
	cout<<endl;
}
cout<<endl<<"New Array\n";
cout<<"Row	  	"<<"Elements\n";
for (int i=0; i<3;i++){
	cout<<i<<"		";
	for (int j=0; j<4;j++)
		cout<<A[i][j]<<"    ";
	cout<<endl;
}
}
