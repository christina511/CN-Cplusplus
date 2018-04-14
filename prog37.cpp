#include<iostream>
using namespace std;
//p36 is to print the sum of a list of 5 numbers: 3, 2, -7, 19, -18
//spring break hw due April 14, 2018
int main(){
    int w,num,sum;
    w=1;
    sum = 0;
    cout<<"Enter the #'s from the list:";
    while(w<=5){
        cin>>num;
        cout<<num<<endl;
        sum = sum + num;
        w++;
    }
    cout<<"The sum of the list of 5 numbers is "<<sum<<endl;
    return 0;
}
