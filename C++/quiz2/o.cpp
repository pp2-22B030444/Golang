#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
        cin>> a[i][j];
        }  
    }
    int sum =0;
    for (int i=0; i<n; i++){
        sum=0;
        for (int j=0; j<m; j++){
    sum=sum+a[i][j];}
    sum= sum/m;
    cout <<sum<<" ";}
}