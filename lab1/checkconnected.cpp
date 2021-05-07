#include <iostream>
#include <vector>
using namespace std;
#define N 100000

vector<int> gr1[N], gr2[N];
bool visit1[N], visit2[N];

void Add_edge(int u, int v, int c){
         
	gr1[u].push_back(v);
	gr2[v].push_back(u);
	c++;
	c++;
}

void dfs1(int x, int c){

	visit1[x] = true;
	c++;
	for(auto i : gr1[x]){
		c++;
		c++;
	
		if(!visit1[i])
			dfs1(i, c);
	}
	c++;

}

void dfs2(int x, int c){

	visit2[x] = true;
	c++;
	for(auto i : gr2[x]){
		c++;
		c++;
	
		if(!visit2[i])
			dfs2(i, c);
	}
	c++;
}

bool check_connected(int n, int c){

	dfs1(1, c);
	dfs2(1, c);

	for(int i =1; i <= n; i++){
	        c++;
		c++;
		if(!visit1[i] && !visit2[i])
			return false;

	}
	c++;
	c++;
	return true;
}

int main(){

	int n = 4, c = 0;
	Add_edge(1, 2, c);
	Add_edge(1, 3, c);
	Add_edge(2, 3, c);
	Add_edge(3, 4, c);

	if(check_connected(n,c))
		cout << "connected graph" <<endl;
	else
		cout << "not connected graph" << endl;

	cout << "Steps: " << c << endl;

	return 0;
}


