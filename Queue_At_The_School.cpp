#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        int i = 0;
        while(i < n){
            if(s[i] == 'B' && s[i + 1] == 'G'){
                swap(s[i], s[i + 1]);
                i += 2;
            }
            else i += 1;
        }
    }
    cout<<s;
    return 0;
}