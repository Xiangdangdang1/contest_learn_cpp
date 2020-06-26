#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_N 1000
int N;
int R;
int X[MAX_N];

void solve()
{
    sort(X, X + N);
    int i = 0, ans = 0;

    while (i < N)
    {
        int s = X[i++]; //表示没有被覆盖的最左侧的点
        while (i < N && X[i] - s <= R)
            i++;
        int p = X[i - 1]; //p表示加标记的点
        cout << "该点是" << i - 1 << "号点" << endl;
        cout << "该点的位置是" << p << endl;
        while (i < N && X[i] - p <= R)
            i++;
        ans++;
    }
    cout << "至少有" << ans << "个点被标记" << endl;
}
int main()
{
    cout << "请输入一共有多少个点：";
    cin >> N;
    cout << "输入R（区域长度）：";
    cin >> R;
    cout << "输入各个点的位置：" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }
    solve();
    system("pause");
}