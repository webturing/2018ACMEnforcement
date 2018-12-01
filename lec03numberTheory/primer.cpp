#include<bits/stdc++.h>
using namespace std;
const int N=100;
bool prime[N];
void fill(){
    fill(prime+2,prime+N,true);
    for(int i=2;N/i>=i;i++)
        if(prime[i])for(int j=i*i;j<N;j+=i)prime[j]=false;
}
int main(){
	fill();
	copy(prime,prime+N,ostream_iterator<bool>(cout,""));
	cout<<endl;
	for(int i=0;i<N;i++)
	if(prime[i]){
		cout<<i<<" ";
	}
	cout<<endl;
	 
	return 0;
}

