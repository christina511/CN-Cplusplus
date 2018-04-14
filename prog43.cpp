#include<iostream>
using namespace std;
//p43 is to check if -7 exists in the list
//spring break hw due April 14, 2018
int main(){
    int w,num,l;
    bool flag;
    w=1;
    cout<<"List length: ";
    cin>>l;
    flag=false
    cout<<"Enter the #'s from the list:";
    while(w<=l){
        cin>>num;
        if (num==-7)
            flag = true
        w++;
    }
    if(flag)
      cout<<-7<<" exists \n";
    else
      cout<<-7<<" does not exist \n";
    return 0;
}
