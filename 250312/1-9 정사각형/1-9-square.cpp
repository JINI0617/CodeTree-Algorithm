#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(cnt == 10)
                cnt = 1;
            cout << cnt;
            cnt++;
        }
        cout << endl;
    }
    return 0;
}