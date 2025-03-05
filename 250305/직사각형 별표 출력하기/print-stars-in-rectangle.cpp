#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        for(int i = 0; i < M; i++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}