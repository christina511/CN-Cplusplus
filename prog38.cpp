#include<iostream>
using namespace std;
//p38 is to print the positive numbers of a list of 5 numbers: 3, 2, -7, 19, -18
//spring break hw due April 14, 2018
int main(){
    int w,num;
    w=1;
    cout<<"Enter the #'s from the list:";
    while(w<=5){
        cin>>num;
        if (num>0)
            cout<<num<<endl;
        w++;
    }
    return 0;
}
