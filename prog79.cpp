#include<iostream>
using namespace std;
//p79 to solve as many linear equations as you want
//April 14, 2018
int main(){
  float a,b,x;
  int T;
  T=1;
  while (T!=-999){
    cout<<"Enter 2 #'s: ";
    cin>>a,b;
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
    cin>>T;
    }
  return 0;
}
