#include<iostream>
using namespace std;
//p58 is to print the first and last numbers of the list (p41) using FOR loop
//spring break hw due April 14, 2018
int main(){
    int w,num,l;
    cout<<"List length: ";
    cin>>l;
    cout<<"Enter the #'s from the list:";
    for (w=1;w<=l;w++){
        cin>>num;
        if (w==1)
            cout<<"The first number is "<<num<<endl;
        else if (w==l)
            cout<<"The last number is "<<num<<endl;
    }
    return 0;
}
