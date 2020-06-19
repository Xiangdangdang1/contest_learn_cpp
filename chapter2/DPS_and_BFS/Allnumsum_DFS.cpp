#include <iostream>
using namespace std;
#define MAX_N 20

int n = 0;
int k = 0;
int a[MAX_N];

bool dfs(int i, int sum)
{
    if (i == n)
        return sum == k;

    if (dfs(i + 1, sum))
        return true;
    if (dfs(i + 1, sum + a[i]))
        return true;
    else
        return false;
}
void solve()
{
    if (dfs(0, 0))
        printf("YES\n");
    else
        printf("NO!\n");
}
int main()
{
    // memset(t, 0, sizeof(t));
    cout << "Please Enter n:";
    cin >> n;

    cout << "Please Enter k:";
    cin >> k;
    cout << "Please Enter your number:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    solve();
    system("pause");
}