//字典序字符串比较问题
#include <iostream>
using namespace std;
#define MAX_N 2000
char S[MAX_N + 1];
int N;
void solve()
{
    int a = 0, b = N - 1;
    bool left = true;
    while (a <= b)
    {
        for (int i = 0; i <= b - a; i++)
        {
            if (S[a + i] < S[b - i])
            {
                left = true;
                break;
            }
            if (S[a + i] > S[b - i])
            {
                left = false;
                break;
            }
        }
        if (left)
            putchar(S[a++]);
        else
            putchar(S[b--]);
    }
    putchar('\n');
}
int main()
{
    cout << "输入字符串的长度：";
    cin >> N;
    cout << "输入字符串：";
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    solve();
    system("pause");
}