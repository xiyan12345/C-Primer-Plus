/*
inline.cpp -- using an inline function
author:yanghao
data:2024-3-25
*/

/*
内联函数：
特点：减少函数调用时间，但会增加程序编译时间
适用场景：函数计算时间~函数调用时间,
不能适用场景：内联函数不能递归
函数使用方法：定义和声明都得添加关键词inline，必要时可将定义和声明放在一起
*/

/*
内联函数和宏定义的异同：
相同：都是替代
不同：宏定义是完全替代，内联函数是传值替代
*/

#include <iostream>
// an inline function definition
inline double square(double x) { return x * x; }

int main()
{
    using namespace std;
    double a, b;
    double c = 13.0;

    a = square(3.0);       // 传值
    b = square(4.5 + 7.5); // 传表达式
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c squared = " << square(c++) << "\n";
    cout << "Now c = " << c << "\n";
    return 0;
}