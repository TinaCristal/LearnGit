#include<iostream>
using namespace std;
int Fibonacci_iterator(int a, int b, int count);
int getFibonacci(int n);
int main()
{
	int n;
	cin>>n;
	cout<<getFibonacci(n-1);
	return 0;
} 

int Fibonacci_iterator(int a, int b, int count)
{
    if (count == 0)
        return b;
    else
        return Fibonacci_iterator(a + b, a, count - 1);
}
int getFibonacci(int n)
{
	return Fibonacci_iterator( 1, 0,n);
}

