#include <iostream>
using namespace std;
int main()
{
    string x,y;
    int N,M=0;
    cout << "Enter the first text : ";
    cin >> x;
    cout << "Enter the second text : ";
    cin >> y;
    cout << "Enter N: ";
    cin >> N;
    while(M < N){
    cout << x << y << "  ";
    M = M+1;
    }
    return 0;
}