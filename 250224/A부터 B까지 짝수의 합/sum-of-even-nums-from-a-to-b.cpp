#include <iostream>
using namespace std;

int main() {
    int A, B, sum_val = 0;
    cin >> A >> B;

    if(A % 2 == 0)
    {
        for(int i = A; i <= B; i+=2)
        {
            sum_val += i;
        }
    }
    else
    {
        for(int i = A+1; i <= B; i+=2)
        {
            sum_val += i;
        }
    }

    cout << sum_val;
    return 0;
}