#include <iostream>
using namespace std;

int main() {
    int arr[10], max_val = 1;
    
    for(int i = 0; i < 10; i++)
        cin >> arr[i];

    for(int i = 0; i < 10; i++)
    {
        if(max_val < arr[i])
            max_val = arr[i];
    }

    cout << max_val;
    return 0;
}