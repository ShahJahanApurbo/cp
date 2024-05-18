#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n,0),b(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }

        for(int i=0;i<n;i++){
            set<int> s;
            for(int j=0;j<n-i;j++){
                // cout<<a[j]<<" ";
                s.insert(a[j]);
            }
            // cout<<endl;
            if(s.size()==1){
                cout<<i+1<<endl;
                break;
            }else{
                for(int j=0;j<n-i;j++){ 
                    a[j]=a[j] |b[j+i+1];
                }
            s.erase(0);
        }
        }

    }
}
