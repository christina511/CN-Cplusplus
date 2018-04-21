#include<iostream>
#include<cmath>
using namespace std;
//p81 to solve as many quadratic equations as you have including no equation
//April 20, 2018
int main(){
	float a,b,c,x,x1,x2,D;
	int k;
	cout<<"This program is going to solve as many equations as you have including none."<<endl<<endl<<endl;
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
					cout<<"All solutions"<<endl;
				else
					cout<<"No solutions"<<endl;
			else{
				cout<<"Linear"<<endl;
				x = -c/b;
				cout<<"x = "<<x<<endl;
	        	}
		else{
			D= b*b -4*a*c;
			if(D>0){
				cout<<"Two solutions"<<endl;
				x1= (-b + sqrt(D))/(2*a);
				x2= (-b - sqrt(D))/(2*a);
				cout<<"x1 = "<<x1<<" and x2= "<<x2<<endl;
			     	}
			else if(D==0){
				cout<<"Duplicate"<<endl;
				x = -b/2*a;
				cout<<"x = "<<x<<endl;
				         }
			else
				cout<<"No solution"<<endl;
		}
		cout<<"To stop enter -999. To continue enter any other #.\n";
	    cin>>k;
    			}
	return 0;
	}
