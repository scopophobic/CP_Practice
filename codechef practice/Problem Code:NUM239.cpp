
//https://www.codechef.com/problems/NUM239

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int s,e,rem;
	    cin>>s>>e;
	    int c=0;
	    for (int i=s;i<=e;i++){
	        if(i<10){
	            rem=i;
	        }
	        else{
	            rem=i%10;
	        }
	        if(rem==3 || rem==2 || rem==9){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
