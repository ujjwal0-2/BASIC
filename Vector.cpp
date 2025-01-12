#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>arr;
cout<<arr.size()<<endl;
	
	arr.push_back(4);
	arr.push_back(0);
	arr.push_back(2);
	
	// print array 
	for(int i=0; i<arr.size();i++){
	    cout<<arr[i]<<endl;
	}
	
	// pop 
	arr.pop_back();
	
		
	// print array 
	for(int i=0; i<arr.size();i++){
	    cout<<arr[i]<<endl;
	}
	
	
	// explicity
	vector<int>br(10);
	
	cout<<"Size: "<<br.size()<<endl;
	cout<<"Capacity: "<<br.capacity()<<endl;
	
	vector<int>dss;
	cout<< "Vector dss is empty or not: "<<dss.empty()<<endl;


}
