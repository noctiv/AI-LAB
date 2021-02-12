#include <bits/stdc++.h>
using namespace std;
int main(){
    int distance=3000, bpk=1,total_ban=3000,max_ban=1000,left_dist;
    int result=0;
    int n=distance/max_ban,l=0,len=0;  
    for(int i=0;i<n-1;i++){
        l=(((2*n)-1)-(2*i));
        len+=max_ban/l;
        result = 1000-len;
    }
    cout<<1000-result<<” banana”;
    return 0;
}
