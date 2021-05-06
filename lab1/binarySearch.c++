#include <iostream>

using namespace std;

int binarysearch(int arr[], int element, int n, int c){

	int low = 0;
	int high = n;
	int mid = (low + high)/2;
	c+=3;
	while(low< high){
	        
	        c++;
	        c++;		
		if(arr[mid] == element)
			return 0;
		else if(element < arr[mid]){
		        c++;
			c++;

			high = mid;
			

		}
		else if(element > arr[mid]){
		        
			c++;
			c++;
			low = mid + 1;
			
		}
		c++;
		mid = (low+high)/2;
	}
        
	c++;

	return -1;

}

int main(){

	int n, element, c = 0;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter array elements in ascending order"<<endl;
	c += 2;
	for(int i=0; i<n; i++){
	        c++;
		c++;
		cin>>arr[i];
	}
	c++;
	c++;
	cout<<"Enter element to be searched"<<endl;
	cin>>element;
	c++;
	c++;
	int ans = binarysearch(arr, element, n,c);
	
        
	c++;
	c++;

	if(ans == 0)
	 cout<< "found" << endl;
	else
         cout<< "Not found" << endl;

	cout << "Number of steps: "<< c <<endl;
	return 0;

}

