#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m;
    cin>>m;
    int c=0;
    for(int i=0; i<n;i++){
        if(v[i]>=m){
            c++;
        }}
        cout <<c;}