// CPPApp1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	int f[50] = { 0,1 }, n,i;
	cin >> n;
	for (i = 3; i < n; i++) 
		f[i] = f[i - 2] + f[i - 1];
	
	cout << f[n];
}
//数组实现斐波那契数列:0,1,1,2,3,5,8......
//求数列前40项
//int main()
//{
//	int i;
//	int f[40] = { 1,1 };//!
//	for (i = 2; i < 40; i++) {
//		f[i] = f[i - 2] + f[i - 1];
//	}
//	cout << "斐波那契数列第1项的值为：0" << endl;
//	for (i = 0; i < 39; i++)
//	{
//		cout << "斐波那契数列第" << i+2 << "项的值为：" << f[i] << endl;
//	}
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
