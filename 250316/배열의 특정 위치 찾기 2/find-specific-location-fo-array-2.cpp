#include <iostream>
using namespace std;

int main() {
    int arr[10], odd_sum = 0, even_sum = 0;

    for(int i = 1; i <= 10; i++)
    {
        cin >> arr[i-1];

        if(i % 2 == 0)
            even_sum += arr[i-1];
        else
            odd_sum += arr[i-1];
    }

    if(even_sum > odd_sum)
        cout << even_sum - odd_sum;
    else
        cout << odd_sum - even_sum;
        
    return 0;
}