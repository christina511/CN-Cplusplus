#include<iostream>
#include<cmath>
using namespace std;
//Program 16 3/10/18
//solving quadratic equations
int main(){
	float a,b,c,x,x1,x2,D;
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
	return 0;
}
