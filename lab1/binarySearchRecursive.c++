#include <iostream>
using namespace std;

int binarysearch(int arr[], int low, int high, int ele){
        int mid;
        if(low <= high){
	  mid = (low + high)/2;	
	  if(arr[mid] == ele)
		return 0;
	  else if(arr[mid] > ele)
		return binarysearch(arr, low, mid-1, ele);
	  else if(arr[mid] < ele)
               return binarysearch(arr, mid+1, high, ele);
        }
        return -1;	
}

int main(){
        int n, element;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter array elements in ascending order"<<endl;
	for(int i=0; i<n; i++){
	
		cin>>arr[i];
	}
	cout<<"Enter element to be searched"<<endl;
	cin>>element;
	int ans = binarysearch(arr, 0, n, element);
	cout << ans << endl;

	if(ans == 0)
	 cout<< "found" << endl;
	else
         cout<< "Not found" << endl;
	return 0;

}
