#include<iostream>
using namespace std;
//p60 is to check if -7 exists in the list (p43) using FOR loop
//spring break hw due April 14, 2018
int main(){
    int w,num,l;
    bool flag;
    cout<<"List length: ";
    cin>>l;
    flag=false;
    cout<<"Enter the #'s from the list:";
    for(w=1;w<=l;w++){
        cin>>num;
        if (num==-7)
            flag = true;
    }
    if(flag)
      cout<<-7<<" exists \n";
    else
      cout<<-7<<" does not exist \n";
    return 0;
}
