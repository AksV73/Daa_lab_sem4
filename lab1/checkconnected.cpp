#include <iostream>
#include <vector>
using namespace std;
#define N 100000

vector<int> gr1[N], gr2[N];
bool visit1[N], visit2[N];

void Add_edge(int u, int v){

	gr1[u].push_back(v);
	gr2[v].push_back(u);
}

void dfs1(int x){

	visit1[x] = true;
	for(auto i : gr1[x]){
	
		if(!visit1[i])
			dfs1(i);
	}
}

void dfs2(int x){

	visit2[x] = true;
	for(auto i : gr2[x]){
	
		if(!visit2[i])
			dfs2(i);
	}
}

bool check_connected(int n){

	dfs1(1);
	dfs2(1);

	for(int i =1; i <= n; i++){
	
		if(!visit1[i] && !visit2[i])
			return false;

	}
	return true;
}

int main(){

	int n = 4;
	Add_edge(1, 2);
	Add_edge(1, 3);
	Add_edge(2, 3);
	Add_edge(3, 4);

	if(check_connected(n))
		cout << "connected graph" <<endl;
	else
		cout << "not connected graph" << endl;

	return 0;
}


