#include <iostream>
using namespace std;

int main() {
    int A, B, sum_val = 0, cnt = 0;
    cin >> A >> B;

    for(int i = A; i <= B; i++)
    {
        if(i % 5 == 0 || i % 7 == 0)
        {
            sum_val += i;
            cnt++;
        }
    }

    cout << sum_val << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)sum_val/cnt;

    return 0;
}