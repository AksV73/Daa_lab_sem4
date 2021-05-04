#include <iostream>

using namespace std;

int binarysearch(int arr[], int element, int n){
	int low = 0;
	int high = n;
	int mid = (low + high)/2;
	while(low< high){
	
	
		if(arr[mid] == element)
			return 0;
		else if(element < arr[mid]){
		
			high = mid;
			cout << mid << endl;

		}
		else if(element > arr[mid]){
		
			low = mid + 1;
			cout << mid <<endl;
		}
		mid = (low+high)/2;
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
	int ans = binarysearch(arr, element, n);
	cout << ans << endl;

	if(ans == 0)
	 cout<< "found" << endl;
	else
         cout<< "Not found" << endl;
	return 0;

}

