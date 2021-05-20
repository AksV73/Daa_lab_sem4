#include<climits>
#include<iostream>
#define N 100
using namespace std;
int c=0;
int minDist(int shortest[],bool visited[],int V){
int minIndex=-1;
c++;
for(int i=0;i<V;i++){
c++;
c++;
if(minIndex==-1){
c++;
if(!visited[i])
minIndex=i;
}
else if(!visited[i] && shortest[i]<shortest[minIndex])
minIndex=i;
}
c++;
c++;
return minIndex;
}
void dijkstra(int graph[][N],int V,int source){
bool visited[V];
int shortest[V],temp=V,u,parent[V];
c++;
for(int i=0;i<V;i++){
c++;
visited[i]=false;
shortest[i]=INT_MAX;
parent[i]=-1;
c++;
}
c++;
shortest[source]=0;
parent[source]=0;
c++;
while(temp!=0){
c++;
u=minDist(shortest,visited,V);
c++;
for(int i=0;i<V;i++){
c++;
if(graph[u][i]!=-1 && graph[u][i] && !visited[i]){
c++;
if(shortest[u]+graph[u][i]<shortest[i]){
shortest[i]=shortest[u]+graph[u][i];
parent[i]=u;
c++;
}
}
}
c++;
visited[u]=true;
temp--;
c++;
}
c++;
cout<<"\nThe shortest distance from source to nodes are"<<endl;
cout<<"node distance"<<endl;
for(int i=0;i<V;i++){
cout<<i<<" "<<shortest[i]<<endl;
c++;
}
c++;
cout<<"\nThe previous vertices are "<<endl;
for(int i=0;i<V;i++){
cout<<"P["<<i<<"]="<<parent[i]<<endl;
c++;
}
c++;
}
int main(){
int v,src;
cout<<"\nEnter the number of vertices"<<endl;
cin>>v;
int graph[N][N];
cout<<"\nPopulate the adjacency matrix, If not adjacent then enter -1"<<endl;
for(int i=0;i<v;i++){
for(int j=0;j<v;j++){
cin>>graph[i][j];
}
}
cout<<"\nEnter the source"<<endl;
cin>>src;
dijkstra(graph,v,src);
cout<<"\n\nThe total number of steps are "<<c<<endl;
return 0;
}
