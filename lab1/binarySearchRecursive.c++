#include <iostream>
using namespace std;

int binarysearch(int arr[], int low, int high, int ele, int c){
        int mid;
	c++;
        if(low <= high){
	  mid = (low + high)/2;	
	  c++;
	  if(arr[mid] == ele)
		return 0;
	  else if(arr[mid] > ele)
		  return binarysearch(arr,low,mid-1,ele,c);
	  else if(arr[mid] < ele)
               return binarysearch(arr, mid+1, high, ele,c);
        }
        return -1;	
}

int main(){
        int n, element, c = 0;
	cout<<"Enter number of elements"<<endl;
	cin>>n;

	int arr[n];
	cout<<"Enter array elements in ascending order"<<endl;
	c+=3;
	for(int i=0; i<n; i++){
	        c++;
		c++;
		cin>>arr[i];
	}
	c++;
	c++;
	cout<<"Enter element to be searched"<<endl;
	cin>>element;
	int ans = binarysearch(arr, 0, n, element, c);

        c++; 
	if(ans == 0)
	 cout<< "found" << endl;
	else
         cout<< "Not found" << endl;

	cout << "Steps : " << c <<endl;
	return 0;

}
