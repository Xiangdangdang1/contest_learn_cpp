#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main()
{
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);            //���а���{1,2,3}
    printf("%d\n",que.front());
    que.pop();          //�Ӷ�β�Ƴ���ʵ����ȥ��1
    printf("%d\n",que.front());
    que.pop();


    system("pause");
}