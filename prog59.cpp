#include<iostream>
using namespace std;
//p59 is to print every other number on the list (p42) using FOR loop
//spring break hw due April 14, 2018
int main(){
    int w,num,l;
    cout<<"List length: ";
    cin>>l;
    cout<<"Enter the #'s from the list:";
    for(w=1;w<=l;w++){
        cin>>num;
        if (w%2==0) // or w%2!=0 for odd
            cout<<num<<endl;
    }
    return 0;
}
