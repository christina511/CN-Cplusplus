#include<iostream>
using namespace std;
//p45 is to print odd numbers from 19 to -5 (p28) using FOR loop
//April 14,2018
int main(){
	int w;
	for(w=19;w>=-5;w--)
		if(w%2!=0)
			cout<<w<<endl;
	return 0;
}
