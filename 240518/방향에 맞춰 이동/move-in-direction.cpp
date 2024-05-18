#include <iostream>
#include <string>
#include <vector>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    int x = 0, y = 0;

    int n;
    cin >> n;

    vector<pair<string, int>> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i].first == "N") {
            x += arr[i].second * dx[0];
            y += arr[i].second * dy[0];
        } else if (arr[i].first == "E") {
            x += arr[i].second * dx[1];
            y += arr[i].second * dy[1];
        } else if (arr[i].first == "S") {
            x += arr[i].second * dx[2];
            y += arr[i].second * dy[2];
        } else if (arr[i].first == "W") {
            x += arr[i].second * dx[3];
            y += arr[i].second * dy[3];
        }
    }

    cout << x << ' ' << y << endl;    

    return 0;
}