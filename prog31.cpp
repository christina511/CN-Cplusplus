#include<iostream>
using namespace std;
//p31 to print the sum of even #'s between 19 and 21
//March 24,2018
int main(){
	int w, sum;
	w=19;
	sum=0;
	while (w<=21){
		if(w%2==0)
		    sum = sum + w;
		w++;
	}
	cout<<"The sum is "<<sum<<endl;
}
