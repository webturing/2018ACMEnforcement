#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#define endl '\n'

int main() {
	int n;
	scanf("%d",&n);
	printf("%d=",n);
	int t=2;
	bool first=true;
	while(n>1){
		while(n%t==0){
			if(first)first=false;
			else printf("*");
			printf("%d",t);
			n/=t;
		}
		if(t*t>n)break;
		t++;
	}
	if(n>1)printf("*%d",n);
	return 0;
}
