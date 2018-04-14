#include<iostream>
using namespace std;
//p32 is to print the sum of multiples of 5 between 1 and 21
//spring break hw due April 14, 2018
int main(){
    int x,sum;
    x=1;
    sum=0;
    while(x<=21){
        if (x%5==0)
            sum = sum + x;
        x++;
    }
    cout<<"The sum of multiples of 5 between 1 and 21 is "<<sum<<endl;
    return 0;
}
