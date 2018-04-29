#include<stdio.h>  
#include<stdlib.h>  
int ibonacci(int n);  
int main ()  
{  
    int n;  
    scanf("%d",&n);  
    int relust=ibonacci(n);  
    printf("%d",relust);  
    return 0;  
}   
  
int ibonacci(int n)   
{  
    int a[n];  
    if(n<=0)  
       exit(0);
    if(n==1)  
       return 1;  
    if(n==2)  
       return 1;  
    a[0]=1;  
    a[1]=1;  
    for (int i=2;i<n+1;i++)  
    {  
        a[i]=a[i-1]+a[i-2];  
    }  
    return a[n-1];  
}  
