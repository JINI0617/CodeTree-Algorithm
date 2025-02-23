#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= N; i++)
    {
        if(i % 2 == 0 || i % 3 == 0)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}