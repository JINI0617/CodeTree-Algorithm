#include<iostream>
using namespace std;

int main(){
    char c;
    int N;
    cin >> c >> N;

    if(c == 'A')
    {
        for(int i = 1; i <= N; i++)
            cout << i << " ";
    }
    if(c == 'D')
    {
        for(int i = N; i >= 1; i--)
            cout << i << " ";
    }
}