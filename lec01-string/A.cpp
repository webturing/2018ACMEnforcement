#include<cstdio>
int main(){
	int n;	
	scanf("%d",&n);
	int h,m,s;
	s=n%60;
	m=(n/60)%60;
	h=(n/3600)%24;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}
