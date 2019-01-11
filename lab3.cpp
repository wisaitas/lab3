#include <iostream>
using namespace std;
int main()
{ 
    float x = 6,y;
    while (x < 20){
        y=1/x;
        x=x+1;
    }
    cout << y;
    return 0;
}