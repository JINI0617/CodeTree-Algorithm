#include <iostream>
using namespace std;

int main() {
    int sum_val = 0, cnt = 0;

    for(int i = 0; i < 10; i++)
    {
        int k;
        cin >> k;

        if(k >= 0 && k <= 200)
        {
            sum_val += k;
            cnt++;
        }

    }

    cout << fixed;
    cout.precision(1);
    cout << sum_val << " " << (double)sum_val/cnt;
    
    return 0;
}