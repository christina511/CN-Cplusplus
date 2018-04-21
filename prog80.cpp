#include<iostream>
using namespace std;
//p80 to solve as many equations as you have including no equation
//April 20, 2018
int main(){
	float a,b,x;
	int k;
	cout<<"This program is going to solve as many equations as you have including none."<<endl<<endl<<endl;
	cout<<"If you have no equation enter -999. Otherwise enter any other number."<<endl;
	cin>>k;
	if(k==-999)
		cout<<"Thank you for using our program. I hope next time you have some equations to \nsolve."<<endl;
	while (k!=-999){
    	cout<<"Enter 2 #'s: ";
    	cin>>a>>b;
	    if(a == 0){
	      if(b == 0)
	        cout<<"All solutions\n";
	      else
	        cout<<"No solution\n";
	      }
	    else{
	      cout<<"One solution\n";
	      x=-b/a;
	      cout<<"x= "<<x<<endl;
	      }
	    cout<<"To stop enter -999. To continue enter any other #.\n";
	    cin>>k;
    			}
  return 0;
}
