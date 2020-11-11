

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);	

int n;
cin>>n;    //size of vector
vector<int> v(n);
for(auto &i: v)cin>>i;


sort(v.begin(),v.end());   //sorting vector

if(binary_search(v.begin(),v.end(),8)) cout<<"element is present in vector";
else cout<<"element is not present in vector";


//remove duplicates using hashing

unordered_set<int> s;
for(auto i:v)
	s.insert(i);
cout<<endl<<"after removing duplicates "<<endl;
for(auto i:s)
	cout<<i<<" ";


return 0;	
}