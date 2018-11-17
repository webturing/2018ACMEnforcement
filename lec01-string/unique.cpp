#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;
int main() {
	int a[]= {1,3,4,5,2,3,6,2,1,23,1,23,12,3,12,31,23};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	copy(a,a+n,ostream_iterator<int>(cout," "));
	cout<<'\n';
	int p=unique(a,a+n)-a;
	copy(a,a+n,ostream_iterator<int>(cout," "));
	cout<<'\n';	
	sort(a,a+n);
	copy(a,a+n,ostream_iterator<int>(cout," "));
	cout<<'\n';
}
