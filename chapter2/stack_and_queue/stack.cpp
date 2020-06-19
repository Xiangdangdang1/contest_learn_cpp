#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;
int main()
{
    stack<int> s;   //声明int类型的栈
    s.push(1);
    s.push(2);
    s.push(3);      //栈内{1,2,3}
    printf("%d\n",s.top());   //取栈顶元素3
    s.pop();       //从栈顶移除   实际去掉3
    printf("%d\n",s.top());


    system("pause");

}