#include <iostream>
using namespace std;

int main() {
    int A, B, prod = 1;
    cin >> A >> B;

    for(int i = 1; i <= B; i++)
    {
        if(i % A == 0)
        {
            prod *= i;
        }
    }

    cout << prod; 
    
    return 0;
}