#include<iostream>
using namespace std;

int main(){
    int A, B, prod = 1;
    cin >> A >> B;

    for(int i = 0; i < B; i++)
    {
        prod *= A;
    }

    cout << prod;
}