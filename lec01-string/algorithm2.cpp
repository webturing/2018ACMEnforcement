#include<iostream>
#include<algorithm> //class string public:vector
#include<iterator>
#include<cassert>
using namespace std;
#define PRINT(a,n) 	copy(a,a+n,ostream_iterator<int>(cout," "));cout<<endl;
void print(int x=3){
	cout<<x<<endl;
}
int Hash(int n){
	int tot=0;
	while(n>0){tot+=n%10;n/=10;	}
	return tot;
}

bool mars(int a,int b){
	int ha= Hash(a);
	int hb=Hash(b);
	if(ha!=hb)return ha<hb;
	return a>b;
}
int main() {
	assert(Hash(123)==6);
	print();
	print(4);
	int a[]= {1,1,12,3,1,12,3,123,1,23,12,9,12,3};
	int n=sizeof(a)/sizeof(a[0]);
//	sort(a,a+n);
	sort(a,a+n,less<int>());//less  than <
	PRINT(a,n);
	sort(a,a+n,greater<int>());//>
	PRINT(a,n);
	sort(a,a+n,mars);
	PRINT(a,n);


}
