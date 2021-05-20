#include<iostream>
#define N 100
using namespace std;
int p=0;
bool bipartiteCheck(int graph[][N],int V){
//bipartite check using graph coloring, -1 and 1
int top=-1,stackarr[N],u,colour[V];
bool visited[V];
p++;
for(int i=1;i<V;i++){
visited[i]=false;
p++;
}
p++;
stackarr[++top]=0;
visited[0]=true; //Considering 0 as source for DFS
colour[0]=-1; //color the origin as -1
p++;
while(top!=-1){
u=stackarr[top--];
p++;
p++;
for(int j=0;j<V;j++){
p++;
p++;
if(graph[u][j]==1 && !visited[j]){
stackarr[++top]=j;
visited[j]=true;
p++;
p++;
if(colour[u]==-1)
colour[j]=1;
else
colour[j]=-1;
}
}
p++;
}
p++;
for(int i=0;i<V;i++){
p++;
for(int j=0;j<V;j++){
p++;
if(graph[i][j]==1){
p++;
if(colour[i]==colour[j]){
p++;
return false;
}
}
}
}
p++;
p++;
return true;
}
int main(){
int v;
cout<<"\nEnter the number of vertices"<<endl;
cin>>v;
int arr[N][N];
cout<<"\nPopulate the adjacency matrix"<<endl;
for(int i=0;i<v;i++){
for(int j=0;j<v;j++){
cin>>arr[i][j];
}
}
if(bipartiteCheck(arr,v))
cout<<"\nThe graph is bipartite"<<endl;
else
cout<<"\nThe graph is not bipartite"<<endl;
cout<<"\n\nThe total number of steps is "<<p<<endl;
return 0;
}
