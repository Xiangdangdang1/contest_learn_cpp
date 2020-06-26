#include <iostream>
using namespace std;
#define MAX_L 50000
int N;
int L[MAX_L];

void solve()
{
}
int main()
{
    cout<<"将木板切成几块：";
    cin>>N;
    cout<<"各块木板的长度：";
    for(int i=0;i<N;i++)
    {
        cin>>L[i];
    }
    solve();
}