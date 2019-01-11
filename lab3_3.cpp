#include<iostream>
using namespace std;

int main(){
    float y=0,x=69;
    while(x >= 2){
        y= (1/x) +y;
        x=x-1;
    }
    cout << y;


    return 0;
}