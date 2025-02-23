#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        if(i <= 10)
        {
            if(i % 3 == 0)
                cout << 0 << " ";
            else
                cout << i << " ";
        }
        else if((i % 10) % 3 == 0 || (i / 10) % 3 == 0 || i % 3 == 0)
            cout << 0 << " ";
        else
            cout << i << " ";
    }
}