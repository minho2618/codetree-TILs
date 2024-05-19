#include <iostream>
#include <vector>
#include <string>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    // 여기에 코드를 작성해주세요.
    string order;
    cin >> order;

    int x = 0; int y = 0;

    int direction = 0;

    for (int i = 0; i < order.length(); i++) {
        if (order[i] == 'L') {
            direction = (direction + 3) % 4; 
        } else if (order[i] == 'R') {
            direction = (direction + 1) % 4;
        } else if (order[i] == 'F') {
            x += dx[direction];
            y += dy[direction];
        }
    }

    cout << x << ' ' << y << endl;

    return 0;
}