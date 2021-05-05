#include <iostream>
using namespace std;

int findmax(int arr[], int n){

	int max = arr[0];
	for(int i = 1; i < n; i++){
	
		if(arr[i] > max)
			max = arr[i];

		
	}
	return max;

}

int numberofdigits(int max){
 
    int digits = 0;
    while(max != 0){
    
	    max = max/10;
	    digits++;
    }
    return digits;
} 



void radix(int arr[], int n){
       
	int max = findmax(arr, n);
	
	int digits = numberofdigits(max);
        	
        
	int power = 1;
	for(int i = 0; i < digits; i++){
	
		int temp[n];
		int count[10];
		int k;

		for(int j =0; j < 10; j++)
			count[j] = 0;

		for(k = 0; k < n; k++){
			int num = (arr[k]/power) % 10;
			count[num]++;
		}

		for(k = 1; k < 10; k++)
			count[k] += count[k-1];


		for(k = n-1; k >= 0; k--){
		        int num = ( arr[k] / power)%10;
			temp[count[num] - 1] = arr[k];
			count[(arr[k]/ power)% 10]--;
		}

		for(k = 0; k < n; k++)
			arr[k] = temp[k];
                

		power = power*10;
	}
 
}

int main(){

        int n;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter array elements"<<endl;
        for(int i=0; i<n; i++){
	
		cin>>arr[i];
	}


	radix(arr,n);
	for(int i =0; i < n; i++)
		cout << arr[i] << " ";

	cout<<endl;
	return 0;
}
