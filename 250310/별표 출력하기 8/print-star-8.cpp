#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        if(i % 2 == 1)
        {
            cout << "* ";
        }
        else
        {
            for(int j = 1; j <= i; j++)
                cout << "* ";
        }
        cout << endl;
    }
    return 0;
}