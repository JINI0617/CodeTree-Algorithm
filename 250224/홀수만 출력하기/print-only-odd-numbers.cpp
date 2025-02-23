#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int k;
        cin >> k;
        if(k % 2 == 1 && k % 3 == 0)
            cout << k << endl;
    }
    return 0;
}