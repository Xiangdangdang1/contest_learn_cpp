#include <iostream>
using namespace std;

const int V[6] = {1, 5, 10, 50, 100, 500};
int C[6];
int A;
int ans = 0;
void solve()
{
    for (int i = 5; i >= 0; i--)
    {
        //使用了t枚硬币i
        int t = min(A / V[i], C[i]);
        cout << V[i] << "元硬币用了：" << t << "枚" << endl;
        A -= t * V[i];
        ans += t;
    }
}
int main()
{
    for (int i = 0; i < 6; i++)
    {
        cin >> C[i];
    }
    cin >> A;
    solve();
    cout << ans << endl;
    system("pause");
    return 0;
}