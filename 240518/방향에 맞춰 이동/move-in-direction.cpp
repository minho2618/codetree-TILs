#include <iostream>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    // 여기에 코드를 작성해주세요.
    int x = 0; int y = 0;

    int n;
    cin >> n;

    // cout << n;

    char arr[n][2] = {0};

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
    
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i][0] << ' ' << arr[i][1] << endl;
    // }

    for (int i = 0; i < n; i++) {
        if (arr[i][0] == (int)'N') {
            x = x + (int)(arr[i][1] - '0') * dx[0];
            y = y + (int)(arr[i][1] - '0') * dy[0];
        } else if (arr[i][0] == (int)'E') {
            x = x + (int)(arr[i][1] - '0') * dx[1];
            y = y + (int)(arr[i][1] - '0') * dy[1];
        } else if (arr[i][0] == (int)'S') {
            x = x + (int)(arr[i][1] - '0') * dx[2];
            y = y + (int)(arr[i][1] - '0') * dy[2];
        } else if (arr[i][0] == (int)'W') {
            x = x + (int)(arr[i][1] - '0') * dx[3];
            y = y + (int)(arr[i][1] - '0') * dy[3];
        }
        // cout << y << endl;
    }

    cout << x << ' ' << y << endl;    

    return 0;
}