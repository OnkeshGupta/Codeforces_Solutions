#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int> (3));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    bool flag = true;
    int x = 0, y = 0, z = 0;
    for(int i = 0;i < n;i++){
        x += arr[i][0];
        y += arr[i][1];
        z += arr[i][2];
    }
    if(x != 0 || y != 0 || z != 0) flag = false;
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}
