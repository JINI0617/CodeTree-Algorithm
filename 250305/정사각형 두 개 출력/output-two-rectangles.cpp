#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < 2; i++)
    {
        for(int i = 0; i < N; i++)
        {
            for(int i = 0; i < N; i++)
                cout << "*";
            cout << endl;
        }
    }
    return 0;
}