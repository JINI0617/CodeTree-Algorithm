#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << i*(N-j) << " ";
        }
        cout << endl;
    }
    return 0;
}