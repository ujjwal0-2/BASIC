#include <bits/stdc++.h>
using namespace std;


int printRowSum(int arr[][3], int row, int col){
    	for(int i=0; i<row;i++){
	      int sum=0;
	    for(int j=0; j<col;j++){
	        sum=sum+arr[i][j];
	    }
	    
	    cout<<sum<<endl;
	}
    
    
}

int main() {
	// Row-sum Question
	int arr[3][3];
	int row=3;
	int col=3;
	
	
	
	// outer loop 
	for(int i=0; i<row;i++){
	    // inner loop
	    
	    for(int j=0; j<col;j++){
	        cin >> arr[i][j];
	    }
	    
	    cout<<endl;
	}
	
	// Printing Row-wise array
	for(int i=0;i<row;i++){
	    for(int j=0;j<col;j++){
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	
	printRowSum(arr,row,col);
	
return 0;
}
