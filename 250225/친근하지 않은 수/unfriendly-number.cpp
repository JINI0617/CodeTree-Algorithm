#include <iostream>
using namespace std;

int main() {
    
    int N, cnt = 0;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
            continue;
        
        cnt++;
    }

    cout << cnt;

    return 0;
}