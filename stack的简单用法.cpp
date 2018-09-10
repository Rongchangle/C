#include <iostream>
#include <stack>
using namespace std;

/*
c++ stl栈stack的成员函数介绍
empty() 堆栈为空则返回真
pop() 移除栈顶元素
push() 在栈顶增加元素
size() 返回栈中元素数目
top() 返回栈顶元素
*/


int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;

    return 0;
}
