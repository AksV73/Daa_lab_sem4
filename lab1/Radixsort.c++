#include <iostream>
using namespace std;

int findmax(int arr[], int n, int c){

	int max = arr[0];
	c++;
	for(int i = 1; i < n; i++){
	        c++;
		c++;
		if(arr[i] > max)
			max = arr[i];

		
	}
	c++;
	c++;
	return max;

}

int numberofdigits(int max, int c){
 
    int digits = 0;
    c++;
    while(max != 0){
            
	    max = max/10;
	    digits++;
	    c++;
	    c++;
    }
    return digits;
} 



void radix(int arr[], int n, int c){
       
	int max = findmax(arr, n, c);
	
	int digits = numberofdigits(max, c);
        	
        
	int power = 1;
	c+=3;
	for(int i = 0; i < digits; i++){
	
		int temp[n];
		int count[10];
		int k;
                c += 5;
		for(int j =0; j < 10; j++){
                        c++;
			c++;
		 	count[j] = 0;
		}
		c++;
		c++;

		for(k = 0; k < n; k++){
			c++;
			c++;
			int num = (arr[k]/power) % 10;
			count[num]++;
			c++;
			c++;
		}
		c++;
		c++;

		for(k = 1; k < 10; k++){
			c++;
			c++;
			count[k] += count[k-1];
			c++;

		}
		c++;
		c++;


		for(k = n-1; k >= 0; k--){
			c++;
			c++;
		        int num = ( arr[k] / power)%10;
			temp[count[num] - 1] = arr[k];
			count[(arr[k]/ power)% 10]--;
			c+=3;
		}
		c++;
		c++;

		for(k = 0; k < n; k++){
			c++;
			c++;
			arr[k] = temp[k];
			c++;
		}
		c++;
		c++;

		power = power*10;
		c++;
	}
 
}

int main(){

        int n, c = 0;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	int arr[n];
	c+=3;
	cout<<"Enter array elements"<<endl;
        for(int i=0; i<n; i++){
	        c++;
		c++;
		cin>>arr[i];
	}
	c++;
	c++;


	radix(arr,n, c);
	for(int i =0; i < n; i++){
		c++;
		c++;
		cout << arr[i] << " ";
	}
	c++;
	c++;

	cout<<endl;
	cout << "steps: " <<c <<endl;
	return 0;

       

}
