#include <iostream>
using namespace std;

int main() {
    
    int N, cnt = 0;
    cin >> N;

    for(int i = 1; true; i++)
    {
        N /= i;
        cnt++;

        if(N <= 1)
        {
            cout << cnt;
            break;
        }
    }
    return 0;
}