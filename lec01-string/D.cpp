#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#define endl '\n'
int f(int n) {
	if(n<10)return n;
	int m=1;
	while(n>0) {
		int k=n%10;
		if(k!=0) {
			m*=k;
		}
		n/=10;
	}
	return f(m);
}
int main() {
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
	return 0;
}
