#include <iostream>
using namespace std;

int main() {
    
    int N;
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        cout << arr[i] * arr[i] << " ";
    }
    return 0;
}