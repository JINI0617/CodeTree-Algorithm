#include <iostream>
using namespace std;

int main() {
    int N, M, cnt = 0;
    cin >> N >> M;

    int arr[N];

    for(int i = 0; i < N; i++)
        cin >> arr[i];

    for(int i = 0; i < N; i++)
    {
        if(arr[i] == M)
            cnt++;
    }

    cout << cnt;
    return 0;
}