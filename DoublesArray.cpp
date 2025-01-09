#include <iostream>
using namespace std;

int main() 
{
 ;
    
    int arr[500];
    int n;
    
    cin >> n;
    
    for(int i=0; i<n;i++){
     cin >> arr[i];
    }
    
    // printing doubles
     for(int i=0; i<n;i++){
     cout << 2 *arr[i] <<" ";
    }
    return 0;
}
