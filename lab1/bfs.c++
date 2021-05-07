#include <iostream>
#include <vector>
using namespace std;
int cost[10][10], i,j ,k ,n, front, rare, v,qu[10], visit[10], visited[10], c;
int main(){

	int m;
	c = 0;
	cout << "Enter the number of vertices in the Graph: "<< endl;
	cin >> n;
	cout << "Enter the number of edges in the Graph : " << endl;
	cin >> m;
	cout << "Enter the start and end vertex of the edges: "<<endl;
        c += 2;
	for(k = 1; k <= m; k++)
	{
	        c++;
		c++;
		cin >> i >> j;
		cost[i][j] = 1;
		c++;
	}
	c++;
	c++;

	 cout << "Enter the initial vertex to start the DFS traversal with: " << endl;
	 cin >> v;
	 cout << "The DFS traversal on the given graph is : "<< endl;
         cout << v << " ";

	 visited[v] = 1;
	 k = 1;
	 c++;
	 c++;
	 c++;
	 c++;

	 while(k < n){
	 
	     for( j = 1; j <= n; j++){
		 c++;
		 c++;
		if(cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1){
		      c++;
	              c++;	      
		      visit[j] = 1;
		      qu[rare++] = j;
		      

		 }

	     }

	     v = qu[front++];
	     cout << v << " ";
	     k++;
	     visit[v] = 0;
	     visited[v] = 1;
	     c++;
	     c++;
	     c++;

	 }
         
	 cout << "Steps: " << c <<endl;
	 return 0;
}

	 
