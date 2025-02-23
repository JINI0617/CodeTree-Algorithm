#include <iostream>
using namespace std;

int main() {
    int N, sum_val = 0;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int k;
        cin >> k;

        sum_val += k;
    }

    cout << fixed;
    cout.precision(1);
    cout << sum_val << " " << (double)sum_val/N;
    return 0;
}