#include <iostream>
#include <string>
using namespace std;

int curX, curY, dir = 3;
string command;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> command;
    for(int i = 0; i < command.size(); i++) {
        if(command[i] == 'L')
            dir = (dir + 3) % 4;
        else if(command[i] == 'R')
            dir = (dir + 1) % 4;
        else
            curX += dx[dir], curY += dy[dir];
    }
    cout << curX << ' ' << curY << '\n';

    return 0;
}