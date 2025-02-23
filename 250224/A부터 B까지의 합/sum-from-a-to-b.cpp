#include <iostream>
using namespace std;

int main() {
    int A, B, sum_val = 0;
    cin >> A >> B;

    for(int i = A; i <= B; i++)
    {
        sum_val += i;
    }

    cout << sum_val;
    return 0;
}