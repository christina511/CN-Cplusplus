#include<iostream>
using namespace std;
//p44 is to count how many -7 exists in the list
//spring break hw due April 14, 2018
int main(){
    int w,num,l,count;
    w=1;
    count=0;
    cout<<"List length: ";
    cin>>l;
    cout<<"Enter the #'s from the list: ";
    while(w<=l){
        cin>>num;
        if (num==-7)
            count++;
        w++;
    }
      cout<<"There is/are "<<count<<" -7's in the list\n";
    return 0;
}
