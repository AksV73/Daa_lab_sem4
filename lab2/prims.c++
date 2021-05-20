#include<climits>
#include<iostream>
#define N 100
using namespace std;
int c=0;
int minKey(int arr[],bool visited[],int len){
int minIndex=-1;
c++;
for(int i=0;i<len;i++){
c++;
if(minIndex==-1 && !visited[i])
minIndex=i;
else if(!visited[i] && arr[i]<arr[minIndex])
minIndex=i;
}
c++;
c++;
return minIndex;
}
void primsMST(int graph[][N],int V){
int parent[V],arr[V],temp=V,u,cost=0;
bool visited[V];
c++;
for(int i=0;i<V;i++){
visited[i]=false;
c++;
}
c++;
arr[0]=0;
for(int i=1;i<V;i++){
arr[i]=INT_MAX;
c++;
}
c++;
while(temp--!=0){
u=minKey(arr,visited,V);
visited[u]=true;
c++;
c++;
for(int j=0;j<V;j++){
c++;
if(graph[u][j]!=-1 && graph[u][j] && !visited[j] &&
graph[u][j]<arr[j]){
c++;
arr[j]=graph[u][j];
parent[j]=u;
}
}
c++;
}
c++;
cout<<"\nThe minimum cost of the spanning tree thus formed is ";
for(int i=0;i<V;i++){
cost+=arr[i];
c++;
}
c++;
cout<<cost<<endl;
cout<<"\nThe adjacent vertices are\nVertex1\tVertex2\tCost"<<endl;
for(int i=1;i<V;i++){
cout<<i<<" |\t"<<parent[i]<<" |\t"<<graph[i][parent[i]]<<endl;
c++;
}
c++;
cout<<" \t\t"<<cost;
}
int main(){
int v;
cout<<"\nEnter the number of vertices"<<endl;
cin>>v;
int graph[N][N];
cout<<"\nPopulate the adjacency matrix"<<endl;
for(int i=0;i<v;i++){
for(int j=0;j<v;j++){
cin>>graph[i][j];
}
}
primsMST(graph,v);
cout<<"\n\nThe total number of steps are "<<c<<endl;
return 0;
}
