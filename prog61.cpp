#include<iostream>
using namespace std;
//p61 is to count how many -7 exists in the list (p44) using FOR loop
//spring break hw due April 14, 2018
int main(){
    int w,num,l,count;
    count=0;
    cout<<"List length: ";
    cin>>l;
    cout<<"Enter the #'s from the list: ";
    for(w=1;w<=l;w++){
        cin>>num;
        if (num==-7)
            count++;
    }
      cout<<"There is/are "<<count<<" -7's in the list\n";
    return 0;
}
