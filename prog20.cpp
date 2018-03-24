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

//this was Mr. Elhari's way to do it! Since it's already defined as an integer, when we divide by 10, it works out!
//int main(){
//     int G;
//     cout<<"Enter a score: ";
//     cin>>G;
//     switch(G/10){
//         case 10: cout<<"Your grade is an A\n";
//             break;
//         case 9: cout<<"Your grade is an A\n";
//             break;
//         case 8: cout<<"Your grade is a B\n";
//             break;
//         case 7: cout<<"Your grade is a C\n";
//             break;
//         case 6: cout<<"Your grade is a D\n";
//             break;
//         default: cout<<"Your grade is a F, sorry :(\n";
//     }
//     return 0;
// }
