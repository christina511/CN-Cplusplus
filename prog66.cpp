#include<iostream>
using namespace std;
//p66 is to print the sum of multiples of 5 between 1 and 21 (p32) using DO WHILE loop
//spring break hw due April 14, 2018
int main(){
    int x,sum;
    x=1;
    sum=0;
    do{
        if (x%5==0)
            sum = sum + x;
        x++;
    }while(x<=21);
    cout<<"The sum of multiples of 5 between 1 and 21 is "<<sum<<endl;
    return 0;
}
