#include<iostream>
using namespace std;
//p34 is to print every other number between 1 and 10 starting from 2
//spring break hw due April 14, 2018
int main(){
    int w;
    w=1;
    do{
        if(w%2==0)
          cout<<w<<endl;
        w++;
    }while(w<=10);
    return 0;
}
