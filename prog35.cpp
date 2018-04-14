#include<iostream>
using namespace std;
//p35 is to print the first and last numbers from 13 to 17
//spring break hw due April 14, 2018
int main(){
    int w;
    w=13;
    cout<<w<<endl;
    while(w<17)
        w++;
    cout<<w<<endl;
    return 0;
}

/* alternate method
#include<iostream>
using namespace std;
//p35 is to print the first and last numbers from 13 to 17
//spring break hw due April 14, 2018
int main(){
    int w;
    w=13;
    while(w<=17)
        if (w==13)
            cout<<"The first is "<<w<<endl;
        if (w==17)
            cout<<"The last is "<<w<<endl;
        w++;
    return 0;
}
*/
