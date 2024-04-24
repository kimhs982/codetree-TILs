#include <iostream>
using namespace std;

int curX, curY, N, dist;
char dir;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> dir >> dist;
        if(dir == 'E')
            curX += (dist * dx[0]), curY += (dist * dy[0]);
        else if(dir == 'S')
            curX += (dist * dx[1]), curY += (dist * dy[1]);
        else if(dir == 'W')
            curX += (dist * dx[2]), curY += (dist * dy[2]);
        else
            curX += (dist * dx[3]), curY += (dist * dy[3]);
    }
    cout << curX << ' ' << curY << '\n';

    return 0;
}