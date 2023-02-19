
#include <bits/stdc++.h>
using namespace std;



class Solution{
public:
    int minimumDays(int S, int N, int M){
        if (((N*6)<(M*7)&&S>6)||M>N)
        return -1;
		  else{
            int days =(M*S)/N;
            if ((M*S)%/N)!= 0
              days++;
              return days;
        }
        
        
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
 