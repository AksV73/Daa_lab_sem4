#include<iostream>
#define N 100
using namespace std;
int c=0;
void topologicalSort(int graph[][N],int v){
int temp=v,flag,u,w;
bool deleted[v];
c++;
for(int i=0;i<v;i++){
c++;
deleted[i]=false;
}
c++;
for(w=0;temp!=0;w=(w+1)%v){
c++;
flag=0;
for(u=0;u<v;u++){
c++;
c++;
if(graph[u][w]!=0){
flag=1;
break;
}
}
c++;
if(flag==0 && !deleted[w]){
temp--;
deleted[w]=true;
cout<<w<<endl;
u=w;
c++;
for(int j=0;j<v;j++){
c++;
graph[u][j]=0;
}
c++;
}
}
c++;
}
int main(){
int v;
cout<<"Enter the number of vertices"<<endl;
cin>>v;
int arr[N][N];
cout<<"Populate the adjacency matrix"<<endl;
for(int i=0;i<v;i++){
for(int j=0;j<v;j++){
cin>>arr[i][j];
}
}
cout<<"\nThe topological sort is"<<endl;
topologicalSort(arr,v);
cout<<"\n\nThe total number of steps is "<<c<<endl;
return 0;
}