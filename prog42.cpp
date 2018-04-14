#include<iostream>
using namespace std;
//p42 is to print every other number on the list
//spring break hw due April 14, 2018
int main(){
    int w,num,l;
    w=1;
    cout<<"List length: ";
    cin>>l;
    cout<<"Enter the #'s from the list:";
    while(w<=l){
        cin>>num;
        if (w%2==0)
            cout<<num<<endl;
        w++;
    }
    return 0;
}
