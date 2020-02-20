

#include <bits/stdc++.h>

using namespace std;
const int maxn = 1010;
vector<int> v;

vector<int> LIS() {
	vector<int> stack[maxn];
	int pos[maxn], parent[maxn];
	for(int i = 0; i<v.size(); i++){
		int x = v[i];
		vector<int> ::iterator it = lower_bound(stack.begin(), stack.end(), x);
		int p = it - stack.begin();
		if(it == stack.end()) stack.push_back(x);		
		else *it = x;
		pos[a] = i;

		if(p == 0) parent[i] = -1;
		else parent[i] = pos[a-1];

	}
	int p = pos(pilha.size() - 1)
	vector<int> lis;
 	while(parent != -1){
 		lis.push_back(v[p]);
 		p = parent[p];
 	}
 	reverse(lis.begin(), lis.end());
 	return lis;
}