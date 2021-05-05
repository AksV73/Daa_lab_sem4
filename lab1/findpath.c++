#include <iostream>
using namespace std;

class graph{

	int vertex;
	int** node;

	public:
	   graph(int vertex){
	   
		   this->vertex = vertex;
		   node = new int*[vertex + 1];
		   for (int i = 1; i < vertex + 1; i++){
		   
			   node[i] = new int[vertex + 1];
		   }

		    for (int i = 1; i <= vertex; i++)
			    node[i][i] = 1;
	   }

	   void addEdge(int v, int w){
	   
		   node[v][w] = 1;
		   node[w][v] = 1;
	   }

	   void computepath(){
	   
		   for (int k = 1; k <= vertex; k++){
			  for (int i = 1; i <= vertex; i++){  
		         for (int j = 1; j <= vertex; j++)
				node[i][j] = node[i][j] | (node[i][k] && node[k][j]);
		   }
	        }		  
	   }

	   bool isreach(int s, int d){
	   
		   if(node[s][d] == 1)
			   return true;
		   else
			   return false;
	   }

	   
};

int main(){

	graph g(4);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(1, 4);
	g.computepath();

	int u = 4, v = 3;
	if(g.isreach(u,v))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}


