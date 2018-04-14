#include<iostream>
using namespace std;
//p49 is to print the sum of multiples of 5 between 1 and 21 (p32) using FOR loop
//spring break hw due April 14, 2018
int main(){
    int x,sum;
    sum=0;
    for(x=1;x<=21;x++)
        if (x%5==0)
            sum = sum + x;
    }
    cout<<"The sum of multiples of 5 between 1 and 21 is "<<sum<<endl;
    return 0;
}
