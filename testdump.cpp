#include <bits/stdc++.h>
using namespace std;
int isit = false;

int tree(int n,int ans){
    if(n%3!=0){}
    else{if(n/3 == ans || (2*n)/3== ans){
        isit = true;return 0;}
    else{tree(n/3,ans);tree((2*n),ans);}
    }
}


int main(){
    
    int ans;    
    cin >> ans;
    int n = 27;
    tree(n,ans);
    if(isit){cout<<"YES"<<endl;}
    else{{cout<<"NO"<<endl;}}

}