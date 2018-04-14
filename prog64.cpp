#include<iostream>
using namespace std;
//p64 is to print the sum of odd numbers between 20 and 40 (p30) using DO WHILE loop
//April 14, 2018
int main(){
	int w,sum;
	w=20;
	sum = 0;
	do{
		if (w%2 !=0)
			sum = sum +w;
		w+=1;
		}while(w<=40);
	cout<<"The sum is "<<sum<<endl;
	return 0;
}
