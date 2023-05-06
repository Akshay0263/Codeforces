#include <bits/stdc++.h>
using namespace std;
int isit = false;
int tree(int n,int ans){
 //   cout<<n/3;
    if(n%3!=0){}
    else{if(n/3 == ans || (2*n)/3== ans){
       // cout<<"ye?"<<endl;
        isit = true;
   //     cout<<isit;
        return 0;}
    else{tree(n/3,ans);tree((2*n/3),ans);}
    }
}

int main(){
    int t;
    cin>> t;//runner
    for(int i = 0 ;i<t;i++){
        int n,m;
        cin>> n>>m;
        tree(n,m);
        if(n==m){cout<<"YES"<<endl;continue;}
        else{
    if(isit){cout<<"YES"<<endl;}
    else{{cout<<"NO"<<endl;}}
    }
    isit = false;
    }
    return 0;

}