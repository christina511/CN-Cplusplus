#include<iostream>
using namespace std;
//p41 is to print the first and last numbers of the list
//spring break hw due April 14, 2018
int main(){
    int w,num,l;
    w=1;
    cout<<"List length: ";
    cin>>l;
    cout<<"Enter the #'s from the list:";
    while(w<=l){
        cin>>num;
        if (w==1)
            cout<<num<<endl;
        else if (w==l)
            cout<<num<<endl;
        w++;
    }
    return 0;
}
