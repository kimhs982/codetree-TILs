#include <iostream>
using namespace std;

int n, cnt;
int map[104][104];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> map[i][j];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            int temp = 0;
            for(int dir = 0; dir < 4; dir++) {
                int nextX = i + dx[dir], nextY = j + dy[dir];
                if(nextX < 0 && nextX >= n && nextY < 0 && nextY >= n)
                    continue;
                if(map[nextX][nextY] == 1)
                    temp++;
            }
            if(temp >= 3)
                cnt++;
        }
    cout << cnt << '\n';
    
    return 0;
}