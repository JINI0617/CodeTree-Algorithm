#include <iostream>
using namespace std;

int main() {
    
    int N, sum_val = 0;
    cin >> N;

    for(int i = 1; i < N; i++)
    {
        if(N % i == 0)
            sum_val += i;
    }

    if(sum_val == N)
        cout << "P";
    else
        cout << "N";
        
    return 0;
}