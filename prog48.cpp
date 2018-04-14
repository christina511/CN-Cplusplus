#include<iostream>
using namespace std;
//p48 to print the sum of even #'s between 19 and 21 (p31) using FOR loop
//April 14,2018
int main(){
	int w, sum;
	sum=0;
	for (w=19;w<=21;w++)
	  if(w%2==0)
		   sum = sum + w;
  cout<<"The sum is "<<sum<<endl;
}
