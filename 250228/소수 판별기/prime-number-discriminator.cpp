#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;
    satisfied = false;

    for(int i = 2; i <= N-1; i++)
    {
        if(N % i == 0)
            satisfied = true;
    }

    if(satisfied == false)
        cout << "P";
    else
        cout << "C";
    return 0;
}