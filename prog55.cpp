#include<iostream>
using namespace std;
//p55 is to print the positive numbers of a list of 5 numbers: 3, 2, -7, 19, -18 (p38) using FOR loop
//spring break hw due April 14, 2018
int main(){
    int w,num;
    cout<<"Enter the #'s from the list:";
    for (w=1;w<=5;w++){
        cin>>num;
        if (num>=0)
            cout<<num<<endl;
    }
    return 0;
}
