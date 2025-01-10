#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[5]={1,0,1,1,0};
	
	int size=5;
	
	int numZero=0;
	int numOne=0;
	
	for(int i=0; i<size;i++){
        if(arr[i]==0){
            numZero++;
        }else{
            numOne++;
        }
    }
    
    cout<<"Number of Zero: "<<numZero<<endl;
    cout<<"Number Of One : "<<numOne<<endl;
	

	
	return 0;
	
}
