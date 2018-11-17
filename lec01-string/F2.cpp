#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#define endl '\n'

int main() {
	int n;
scanf("%d",&n);
	while(n--) {
		char a[10010], b[10010];
		scanf("%s%s",a,b);
		std::sort(a,a+strlen(a));
		std::sort(b,b+strlen(b));
		*std::unique(a,a+strlen(a))=0;
		*std::unique(b,b+strlen(b))=0;
		if(strcmp(a,b)==0)std::cout<<"Yes"<<endl;
		else std::cout<<"No"<<endl;
	
	}
	return 0;
}
