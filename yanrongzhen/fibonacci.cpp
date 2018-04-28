//1. 实现一个斐波那契数列函数
//输入的参数为 n，返回第 n 个斐波那契数。

#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, i = 1000;
	vector<int> vec;
	cin>>n;
	vec.push_back(1);
	vec.push_back(1);
	for (int i = 2; i < 1000; i++) {
		vec.push_back(vec[i-1] + vec[i-2]);
	}
	cout<<vec[n-1]<<endl;
}
