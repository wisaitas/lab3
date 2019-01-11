#include <iostream>
using namespace std;
int main()
{
    float x = 2,y;
    while (x < 70){
        y=1/x;
        x=x+1;
    }
    cout << y;
    return 0;
}