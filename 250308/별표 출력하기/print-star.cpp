#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = N-1; i > 0; i--)
    {
        for(int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}