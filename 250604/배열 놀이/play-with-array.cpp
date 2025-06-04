#include <iostream>
using namespace std;

int main() {
    int N, Q, question, a, b, s, e, idx = -1;
    cin >> N >> Q;

    int arr[N];

    for(int i = 0; i < N; i++)
        cin >> arr[i];

    for(int i = 0; i < Q; i++)
    {
        cin >> question;

        if(question == 1)
        {
            cin >> a;
            cout << arr[a-1] << '\n';
        }
        else if(question == 2)
        {
            cin >> b;
            for(int i = 0; i < N; i++)
            {
                if(arr[i] == b)
                {
                    idx = i+1;
                    cout << idx << '\n';
                    break;
                }
            }
            if(idx == -1)
                cout << 0 << '\n';
        }
        else if(question == 3)
        {
            cin >> s >> e;
            for(int i = s-1; i <= e-1; i++)
                cout << arr[i] << " ";
            cout << '\n';
        }

    }
    return 0;
}