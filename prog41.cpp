#include<iostream>
using namespace std;
//p41 is to print the first and last numbers of the list
//spring break hw due April 14, 2018
int main(){
    int w,num;
    w=1;
    cout<<"Enter the #'s from the list:";
    while(w<=5){
        cin>>num;
        if (w==1)
            cout<<num<<endl;
        else if (w==5)
            cout<<num<<endl;
        w++;
    }
    return 0;
}
