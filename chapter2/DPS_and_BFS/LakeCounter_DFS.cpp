#include <iostream>
using namespace std;
#define MAX_N 100
#define MAX_M 100
int N = 10, M = 12;
char field[10][12] = { //.����û�л�ˮ��W�����л�ˮ
    {'W', '.', '.', '.', '.', '.', '.', '.', '.', 'W', 'W', '.'},
    {'.', 'W', 'W', 'W', '.', '.', '.', '.', '.', 'W', 'W', 'W'},
    {'.', '.', '.', '.', 'W', 'W', '.', '.', '.', 'W', 'W', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', 'W', 'W', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', 'W', '.', '.'},
    {'.', '.', 'W', '.', '.', '.', '.', '.', '.', 'W', '.', '.'},
    {'.', 'W', '.', 'w', '.', '.', '.', '.', '.', 'W', 'W', '.'},
    {'W', '.', 'W', '.', 'W', '.', '.', '.', '.', '.', 'W', '.'},
    {'.', 'W', '.', 'W', '.', '.', '.', '.', '.', '.', 'W', '.'},
    {'.', '.', 'W', '.', '.', '.', '.', '.', '.', '.', 'W', '.'}};

void dfs(int x, int y)
{
    int nx = 0, ny = 0;
    field[x][y] = '.';
    for (int dx = -1; dx <= 1; dx++)
    {
        for (int dy = -1; dy <= 1; dy++)
        {
            nx = x + dx;
            ny = y + dy;
            if (field[nx][ny] == 'W' && nx >= 0 && nx <= N && ny >= 0 && ny <= M)
                dfs(nx, ny);
        }
    }
}

void solve()
{
    int res;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (field[i][j] == 'W')
            {
                dfs(i, j); //һ��DFS֮�����ˮ����ͨ��ˮ��ȫ�����.
                res++;
            }
        }
    }
    cout << res << endl;
}

int main()
{
    // int flag = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < M; j++)
    //     {
    //         cout << field[i][j] << " ";
    //         flag++;
    //         if (flag % 12 == 0)
    //             cout << endl;
    //     }
    // }
    solve();
    system("pause");
}