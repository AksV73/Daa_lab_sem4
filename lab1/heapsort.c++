//HeapSort
#include <iostream>
using namespace std;

void print(int arr[],int n){                     //0 step * 1
    for(int i=0;i<n;i++){                        //1 step * (N + 1)
        cout<<arr[i]<<" ";                       //1 step * N
    }                                            //0 step * 1
    cout<<endl;                                  //1 step * 1
}                                                //0 step * 1

void Heapify(int arr[],int n, int i){            //0 step * 1
    int root=i;                                  //1 step * 1
    int left=2*i+1;                              //1 step * 1
    int right=2*i+2;                             //1 step * 1

    if(left<n && arr[left]>arr[root])            //1 step * 1
        root=left;                               //1 step * 1
    if(right<n && arr[right]>arr[root])          //1 step * 1
        root=right;                              //1 step * 1
    if(root!=i){                                 //1 step * 1
        swap(arr[i],arr[root]);                  //1 step * 1
        Heapify(arr,n,root);                     //1 step * log(N) to the base 2
    }                                            //0 step * 1
}                                                //0 step * 1

void HeapSort(int arr[],int n){                  //0 step * 1
    for (int i=n/2-1; i>=0;i--)                  //1 step * (N/2)
        Heapify(arr,n,i);                        //1 step * (N/2)*log(N) to the base 2
    for (int i=n-1; i>=0; i--){                  //1 step * (N)
        swap(arr[0],arr[i]);                     //1 step * (N-1)
        Heapify(arr,i,0);                        //1 step * (N-1)*log(N) to the base 2
    }                                            //0 step * 1
}                                                //0 step * 1


int main(){
    int n;                                       //1 step * 1
    cout<<"Enter the number of elements"<<endl;  //1 step * 1
    cin>>n;                                      //1 step * 1
    int arr[n];                                  //1 step * 1
    cout<<"Enter n nos"<<endl;                   //1 step * 1
    for(int i = 0;i<n;i++)                       //1 step * (N + 1)
        cin>>arr[i];                             //1 step * N
    cout<<"You have entered: \n";                //1 step * 1
    print(arr,n);                                //1 step * 1
    HeapSort(arr,n);                             //1 step * 1
    cout<<"Sorted array: \n";                    //1 step * 1
    print(arr,n);                                //1 step * 1
}
