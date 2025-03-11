#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= 2*N+1; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 1; j <= 2*N+1; j++)
            {
                if(j % 2 == 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        else
        {
            for(int j = 1; j <= 2*N+1; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}