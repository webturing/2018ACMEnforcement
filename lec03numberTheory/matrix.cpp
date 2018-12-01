#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;

void mul(int a[2][2],int b[2][2],int c[2][2]) {
	c[0][0]=(a[0][0]*b[0][0]+a[0][1]*b[1][0])%MOD;
	c[0][1]=(a[0][0]*b[0][1]+a[0][1]*b[1][1])%MOD;
	c[1][0]=(a[1][0]*b[0][0]+a[1][1]*b[1][0])%MOD;
	c[1][1]=(a[1][0]*b[0][1]+a[1][1]*b[1][1])%MOD;
}
void square(int a[2][2],int c[2][2]) {
	mul(a,a,c);
}
void power(int a[2][2],int n,int b[2][2]){//b=a^n
	//
}
int main() {
	int a[2][2]={1,0,1,1};
	int c[2][2];
	mul(a,a,c);
	printf("%d %d\n%d %d\n",c[0][0],c[0][1],c[1][0],c[1][1]);
	return 0;
}

