#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n % 2 == 0)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(i == 1 || j % 2 == 0 && i <= j)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
    else if(n == 1)
        cout << "*";
    else
    {
        for(int i = 1; i <= n-1; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(i == 1 || j % 2 == 0 && i <= j)
                    cout << "* ";
                else   
                    cout << "  ";
            }
            cout << endl;
        }
    }
    return 0;
}