//1. ʵ��һ��쳲��������к���
//����Ĳ���Ϊ n�����ص� n ��쳲���������

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
