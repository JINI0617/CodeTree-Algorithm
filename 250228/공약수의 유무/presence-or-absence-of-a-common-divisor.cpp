#include <iostream>
using namespace std;

int main(){

    int A, B;
    cin >> A >> B;
    bool satisfied = false;

    for(int i = A; i <= B; i++)
    {
        if(960 % i == 0)
            satisfied = true;
    }

    if(satisfied == true)
        cout << 1;
    else
        cout << 0;
}