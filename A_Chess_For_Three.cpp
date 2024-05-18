#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int cnt=0;
        while(a[0]!=0 || a[1]!=0){
            cnt++;
            a[1]--;
            a[2]--;
            sort(a,a+3);
        }
        if(a[2]&1) cout<<-1<<"\n";
        else cout<<cnt<<"\n";
    }
}