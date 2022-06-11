

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n=10;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int t1=0,t2=0;
        int i=0;
        while(i<n){
            t1+=arr[i];
            t2+=arr[i+1];
            i+=2;
        }
        
        
        if(t1>t2){
            cout<<"1"<<endl;
        }
        else if(t2>t1){
            cout<<"2"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
	return 0;
}
