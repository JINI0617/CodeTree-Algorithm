#include <iostream>
using namespace std;

int main() {
    int A, B, prod = 1;
    cin >> A >> B;

    for(int i = A; i <= B; i++)
    {
        prod *= i;
    }

    cout << prod;
    
    return 0;
}