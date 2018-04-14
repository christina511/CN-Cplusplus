#include<iostream>
using namespace std;
//p65 to print the sum of even #'s between 19 and 21 (p31) using DO WHILE loop
//April 14,2018
int main(){
	int w, sum;
	w=19;
	sum=0;
	do{
		if(w%2==0)
		    sum = sum + w;
		w++;
	}while (w<=21);
	cout<<"The sum is "<<sum<<endl;
}
