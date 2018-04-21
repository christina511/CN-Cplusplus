#include<iostream>
using namespace std;
//p67 is to print every other number between 1 and 10 starting from 1 (p33) using DO WHILE loop
//spring break hw due April 14, 2018
int main(){
    int w;
    w=1;
    do{if (w%2!=0)
            cout<<w<<endl;
    w++}while(w<=10);
    return 0;
}
