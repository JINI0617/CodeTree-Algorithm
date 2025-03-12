#include <iostream>
using namespace std;

int main() {
    int N, cnt = 1;
    cin >> N;
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}