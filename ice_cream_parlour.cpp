#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, i, j;
    cin>>t;
    while(t--){
        int m, n;
        int arr[10000];
        cin>>m;
        cin>>n;
        for(i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(i=1;i<=n-1;i++){
            for(j=i+1;j<=n;j++){
                if((arr[i]+arr[j])==m){
                    cout<<i<<' '<<j<<endl;
                }
            }
        }
    }
    return 0;
}
