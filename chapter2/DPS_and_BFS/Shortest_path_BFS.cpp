#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
char maze[10][10] = {
    {'#', 'S', '#', '#', '#', '#', '#', '#', '.', '#'},
    {'.', '.', '.', '.', '.', '.', '#', '.', '.', '#'},
    {'.', '#', '.', '#', '#', '.', '#', '#', '.', '#'},
    {'.', '#', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'#', '#', '.', '#', '#', '.', '#', '#', '#', '#'},
    {'.', '.', '.', '.', '#', '.', '.', '.', '.', '#'},
    {'.', '#', '#', '#', '#', '#', '#', '#', '.', '#'},
    {'.', '.', '.', '.', '#', '.', '.', '.', '.', '.'},
    {'.', '#', '#', '#', '#', '.', '#', '#', '#', '.'},
    {'.', '.', '.', '.', '#', '.', '.', '.', 'G', '#'},
};
int N = 10, M = 10;
const int INF = 100000000;
typedef pair<int, int> P;
int sx = 0, sy = 1;
int gx = 9, gy = 8;
int d[100][100]; //到各个位置最短距离的数组
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs()
{
    // int flag = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < M; j++)
    //     {
    //         flag++;
    //         cout << maze[i][j] << " ";
    //         if (flag % 10 == 0)
    //             cout << endl;
    //     }
    // }

    queue<P> que;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            d[i][j] = INF;
    }

    que.push(P(sx, sy)); //将首元素入队
    d[sx][sy] = 0;       //标记为已经遍历过，且设置初始点到该点的距离
    while (que.size())
    {
        P p = que.front();
        que.pop();
        if (p.first == gx && p.second == gy)
            break;
        for (int i = 0; i < 4; i++)
        {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if (nx >= 0 && nx <= N && ny >= 0 && ny <= M && maze[nx][ny] != '#' && d[nx][ny] == INF)
            {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}
int main()
{
    int res = bfs();
    cout << res << endl;
    system("pause");
}