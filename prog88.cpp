#include<iostream>
#include<cmath>
void AllSol();
void NoSol();
float OneSol(float,float);
float DuplSol(float,float);
float TwoSol1(float,float,float);
float TwoSol2(float,float,float);
using namespace std;
//p88 to solve as many quadratic equations as you have including no equation
//April 28, 2018 using functions
int main(){
	float a,b,c,x,x1,x2,D;
	int k;
	cout<<"This program is going to solve as many equations as you have including none."<<endl<<endl<<endl;
	cout<<"This program is using functions\n";
	cout<<"If you have no equation enter -999. Otherwise enter any other number."<<endl;
	cin>>k;
	if(k==-999)
		cout<<"Thank you for using our program. I hope next time you have some equations to \nsolve."<<endl;
	while (k!=-999){
		cout<<"Enter 3 #'s: ";
		cin>>a>>b>>c;
		if (a==0)
			if (b==0)
				if (c==0)
							AllSol();
				else
							NoSol();
			else{
				cout<<"Linear"<<endl;
				cout<<"x = "<<OneSol(b,c)<<endl;
	        	}
		else{
			D= b*b -4*a*c;
			if(D>0){
				cout<<"Two solutions"<<endl;
				cout<<"x1 = "<<TwoSol1(a,b,D)<<
						" and x2= "<<TwoSol2(a,b,D)<<endl;
			     	}
			else if(D==0){
				cout<<"Duplicate"<<endl;
				cout<<"x = "<<DuplSol(a,b)<<endl;
				         }
			else
				NoSol();
		}
		cout<<"To stop enter -999. To continue enter any other #.\n";
	    cin>>k;
    			}
	return 0;
	}

void AllSol(){
		cout<<"All solutions"<<endl;
}

void NoSol(){
	cout<<"No solutions"<<endl;
}

float OneSol(float b1, float c1){
	return -c1/b1;
}

float DuplSol(float a1, float b1){
	return -b1/2*a1;
}

float TwoSol1(float a1, float b1, float D1){
	return (-b1 + sqrt(D1))/(2*a1);
}

float TwoSol2(float a1, float b1, float D1){
	return (-b1 - sqrt(D1))/(2*a1);
}







