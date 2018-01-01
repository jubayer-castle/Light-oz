#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=1;
    cin>>n;

    while(true){
        if(n<x) break;
        int a,total=0;
        cout<<endl;
        cin>>a;
        int b[a];
        for(int i=0;i<a;i++){
            cin>>b[i];
            if (b[i]<0) continue;
            total+=b[i];
        }
        cout<<"Case "<<x<<": "<<total<<endl;
        x+=1;
    }

}
