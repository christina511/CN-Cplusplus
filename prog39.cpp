#include<iostream>
using namespace std;
//p39 is to print the negative numbers of a list of 5 numbers: 3, 2, -7, 19, -18 (-19 to -2)
//spring break hw due April 14, 2018
int main(){
    int w,num;
    w=1;
    cout<<"Enter the #'s from the list:";
    while(w<=5){
        cin>>num;
        if (num<=-2 && num>= -19)
            cout<<num<<endl;
        w++;
    }
    return 0;
}
