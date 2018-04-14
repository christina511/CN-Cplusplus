#include<iostream>
using namespace std;
//p54 is to print the sum of a list of 5 numbers: 3, 2, -7, 19, -18 (p37) using FOR loop
//spring break hw due April 14, 2018
int main(){
    int w,num,sum;
    sum = 0;
    cout<<"Enter the #'s from the list:";
    for (w=1;w<=5;w++){
        cin>>num;
        sum = sum + num;
    }
    cout<<"The sum of the list of 5 numbers is "<<sum<<endl;
    return 0;
}
