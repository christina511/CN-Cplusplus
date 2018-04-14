#include<iostream>
using namespace std;
//p47 is to print the sum of odd numbers between 20 and 40 (p30) using FOR loop
//April 14, 2018
int main(){
	int w,sum;
	sum = 0;
	for (w=20;w<=40; w++)
		if (w%2 !=0)
			sum = sum +w;
	cout<<"The sum is "<<sum<<endl;
	return 0;
}
