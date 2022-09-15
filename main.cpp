#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--){
	    int size;
	    cin>>size;
	    
	    int START_count=0;
	    int LTIME_count=0;
	
	    std::string arr[size];
	    for(int i=0; i<size; i++){
	    cin>>arr[i];
	    if(arr[i]=="START38"){
	        START_count++;
	          }
	           else if(arr[i]=="LTIME108"){
	            LTIME_count++;
	           }

	    }
	    cout << START_count << " " << LTIME_count << '\n';

	}
	return 0;
}
