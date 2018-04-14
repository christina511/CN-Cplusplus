#include<iostream>
using namespace std;
//p62 is to print odd numbers from 19 to -5 (p28) using DO WHILE loop
//April 14,2018
int main(){
	int w;
	w=19;
	do{
		if(w%2!=0)
			cout<<w<<endl;
	  w--;
  }while(w>=-5);
	return 0;
}
