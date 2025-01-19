#include <bits/stdc++.h>
using namespace std;

int main() {
	// 2-D std::array<T, N> ;
	
	// declare 2-d array
	int arr[3][3];
	
	// initialization
	
	int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// row-wise Print 
	
	// outer loop 
	for(int i=0; i<3;i++){
	    // inner loop
	    
	    for(int j=0; j<3;j++){
	        cout<<brr[i][j];
	    }
	    
	    cout<<endl;
	}
	cout<<"printing Column-wise"<<endl;
	
	// column wise print 
	
		for(int i=0; i<3;i++){
	    // inner loop
	    
	    for(int j=0; j<3;j++){
	        cout<<brr[j][i];
	    }
	    
	    cout<<endl;
	}
	
return 0;
}
