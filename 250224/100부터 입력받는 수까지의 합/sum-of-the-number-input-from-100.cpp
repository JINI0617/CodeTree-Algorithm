#include <iostream>
using namespace std;

int main(){
    int N, sum_val = 0;
    cin >> N;

    for(int i = N; i <= 100; i++)
    {
        sum_val += i;
    }

    cout << sum_val;
}