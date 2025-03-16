#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    for(int i = 1; i <= 10; i++)
    {
        cin >> arr[i-1];

        if(arr[i-1] % 2 == 0)
            cout << arr[i-1] << " ";
    }
    return 0;
}