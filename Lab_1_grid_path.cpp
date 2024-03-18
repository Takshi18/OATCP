#include<bits/stdc++.h>
using namespace std;

void findways(vector<vector<char>> &grid, int n,int m ,vector<vector<int>> &totalways){
    totalways[0][0] = 1;
    for(int i=0;i<m;i++){
        if(grid[0][i] != '*'){
            totalways[0][i] = 1;
        }
        else{
            break;
        }
    }
    
    for(int j=0;j<n;j++){
        if(grid[j][0] != '*'){
            totalways[j][0] = 1;
        }
        else{
            break;
        }
    }
    
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(grid[i][j] != '*'){
                totalways[i][j] = totalways[i-1][j] + totalways[i][j-1];
            }
            
        }
    }
}


int main(){
    int n,m;
    cin>>n>>m;
    
    vector<vector<char>> grid(n,vector<char>(m,0));
    vector<vector<int>> totalways(n,vector<int>(m,0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;
            cin>>c;
            grid[i][j] = c;
            
        }
    
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            cout<<grid[i][j]<<" ";
            
        }
        cout<<endl;
    
    }
    
    findways(grid,n,m,totalways);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            cout<<totalways[i][j]<<" ";
            
        }
        cout<<endl;
    
    }
    
    cout<<endl;
    
    cout<<"Total number of ways to reach lower rigth most cell is "<<totalways[n-1][m-1]<<endl;
    
    return 0;
    
    
    
    
}