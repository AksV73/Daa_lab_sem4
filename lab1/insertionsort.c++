#include <iostream>
using namespace std;

void insertion(int arr[], int n, int c){

	int key, j;
        c++;
	for(int i = 1; i < n; i++){
	        
		c++;
		c++;
		key = arr[i];
		j = i-1;
		c++;
		c++;
		while( j >= 0 && arr[j] > key){
		       
			arr[j+1] = arr[j];
			j = j -1;
			c++;
			c++;
		}

		arr[j + 1] = key;
		c++;
		c++;
	}
}

int main(){

	int n, c=0;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter array elements"<<endl;

	c+=4;
        for(int i=0; i<n; i++){
	        c++;
		c++;
		cin>>arr[i];
	}
	c++;
	c++;

	insertion(arr, n, c);
	for(int i = 0; i < n; i++){
	        
		c++;
		c++;
		cout << arr[i] << " ";
	}
	c++;
	c++;
	cout<<endl;
	cout << "Steps: " <<c <<endl;
	


}
