#include<iostream>
//p87 is 3 functions to solve linear equations
//April 21,2018
using namespace std;
void NoSol();
void AllSol();
float onesol(float,float);
int main(){
	int a,b;
	int T;
  	T=1;
  	while (T!=-999){
		cout<<"please enter two numbers: ";
		cin>>a>>b;
		if(a == 0){
	    	if(b == 0)
	    		AllSol();
		 	else
	        	NoSol();
	      }
	    else{
	    	cout<<"x= "<<onesol(a,b)<<endl;
		}
	cout<<"To stop enter -999. To continue enter any other #.\n";
    cin>>T;
	}
	return 0;
	}
float onesol(float a1, float b1){
	cout<<"One solution\n";
	float z;
	z= -b1/a1;
	return z;
}

void NoSol(){
	cout<<"No solutions\n";
}
void AllSol(){
	cout<<"All solutions\n";
}
