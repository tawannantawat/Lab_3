#include<iostream>
using namespace std;

int main(){
    float y=0,x=19;
    while(x >= 6){
        y= (1/x) +y;
        x=x-1;
    }
    cout << y;


    return 0;
}