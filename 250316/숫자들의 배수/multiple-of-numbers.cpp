#include <iostream>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    int arr[10], cnt = 0;


    for(int i = 1; i <= 10; i++)
    {
        arr[i-1] = N*i;
        cout << arr[i-1] << " ";
        if(arr[i-1] % 5 == 0)
        {
            cnt++;
            if(cnt == 2)
                break;
        }

    }
    return 0;
}