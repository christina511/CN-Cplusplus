#include<iostream>
using namespace std;
//p40 is to print the odd numbers of a list of 5 numbers: 3, 2, -7, 19, -18 between 5 and 14
//spring break hw due April 14, 2018
int main(){
    int w,num;
    w=1;
    cout<<"Enter the #'s from the list:";
    while(w<=5){
        cin>>num;
        if (num<=14 and num>= 5 and num%2!=0)
            cout<<num<<endl;
        w++;
    }
    return 0;
}
