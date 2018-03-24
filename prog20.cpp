#include<iostream>
using namespace std;
//prog20 is prog19 using switch case
//March 23, 2018
int main(){
    int G;
    cout<<"Enter a score: ";
    cin>>G;
    G = G - G%10;
    switch(G){
        case 100: cout<<"Your grade is an A\n";
            break;
        case 90: cout<<"Your grade is an A\n";
            break;
        case 80: cout<<"Your grade is a B\n";
            break;
        case 70: cout<<"Your grade is a C\n";
            break;
        case 60: cout<<"Your grade is a D\n";
            break;
        default: cout<<"Your grade is a F, sorry :(\n";
    }
    return 0;
}
