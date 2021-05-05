#include <iostream>
#include <vector>
using namespace std;
int cost[10][10], i,j ,k ,n, front, rare, v,qu[10], visit[10], visited[10];
int main(){

	int m;
	cout << "Enter the number of vertices in the Graph: "<< endl;
	cin >> n;
	cout << "Enter the number of edges in the Graph : " << endl;
	cin >> m;
	cout << "Enter the start and end vertex of the edges: "<<endl;

	for(k = 1; k <= m; k++)
	{
	
		cin >> i >> j;
		cost[i][j] = 1;
	}

	 cout << "Enter the initial vertex to start the DFS traversal with: " << endl;
	 cin >> v;
	 cout << "The DFS traversal on the given graph is : "<< endl;
         cout << v << " ";

	 visited[v] = 1;
	 k = 1;

	 while(k < n){
	 
	     for( j = 1; j <= n; j++){
		 
		if(cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1){
			 
		      visit[j] = 1;
		      qu[rare++] = j;
		      

		 }

	     }

	     v = qu[front++];
	     cout << v << " ";
	     k++;
	     visit[v] = 0;
	     visited[v] = 1;
	 }

	 return 0;
}

	 
