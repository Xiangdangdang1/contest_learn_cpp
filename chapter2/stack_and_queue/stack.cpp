#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;
int main()
{
    stack<int> s;   //����int���͵�ջ
    s.push(1);
    s.push(2);
    s.push(3);      //ջ��{1,2,3}
    printf("%d\n",s.top());   //ȡջ��Ԫ��3
    s.pop();       //��ջ���Ƴ�   ʵ��ȥ��3
    printf("%d\n",s.top());


    system("pause");

}