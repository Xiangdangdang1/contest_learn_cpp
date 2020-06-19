#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main()
{
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);            //队列包括{1,2,3}
    printf("%d\n",que.front());
    que.pop();          //从队尾移除，实际是去掉1
    printf("%d\n",que.front());
    que.pop();


    system("pause");
}