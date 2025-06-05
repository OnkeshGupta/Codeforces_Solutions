#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr(5, vector<int> (5));
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            cin>>arr[i][j];
        }
    }
    int row = 0, col = 0;
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            if(arr[i][j] == 1){
                row = i;
                col = j;
                break;
            }
        }
    }
    int ans = abs(row - 2) + abs(col - 2);
    cout<<ans;
    return 0;
}