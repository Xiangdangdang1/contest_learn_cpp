#include <iostream>
#include <algorithm>
using namespace std;
const int MAX_N = 100000;
int N;
int S[MAX_N];
int T[MAX_N];
pair<int, int> itv[MAX_N];
int ans = 0;
void solve()
{
    //注意first存入的是结束时间
    for (int i = 0; i < N; i++)
    {
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    sort(itv, itv + N);
    int t = 0; //t是当前任务结束时间
    for (int i = 0; i < N; i++)
    {
        if (t < itv[i].second)
        {
            ans++;
            t = itv[i].first;
            cout << "当前任务是：" << i + 1 << endl;
        }
    }
    printf("%d/n", ans);
}
int main()
{
    cout << "请输入任务的数量：" << endl;
    cin >> N;
    cout << "输入每个任务的开始时间" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    cout << "输入每个任务的结束时间" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
    }
    solve();
    system("pause");
}
