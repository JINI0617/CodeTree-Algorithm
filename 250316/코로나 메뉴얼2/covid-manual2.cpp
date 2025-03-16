#include <iostream>
using namespace std;

int main() {
    int cnt_arr[4] = {0}; // A, B, C, D의 개수
    char s;
    int t;

    for (int i = 0; i < 3; i++) {
        cin >> s >> t;

        if (s == 'Y' && t >= 37)
            cnt_arr[0]++;  // A
        else if (s == 'N' && t >= 37)
            cnt_arr[1]++;  // B
        else if (s == 'Y' && t < 37)
            cnt_arr[2]++;  // C
        else
            cnt_arr[3]++;  // D
    }

    // 결과 출력
    for (int i = 0; i < 4; i++)
        cout << cnt_arr[i] << " ";

    // A 카테고리에 해당하는 사람이 2명 이상이면 'E' 출력
    if (cnt_arr[0] >= 2)
        cout << "E";

    return 0;
}
