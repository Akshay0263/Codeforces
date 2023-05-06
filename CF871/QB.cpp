#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;// i is testcase runner
    for(int i = 0;i<t;i++){
        int n;
        cin >> n;
        int a[n];
        for(int j =0;j<n;j++){
            cin>>a[j];}
        int zero = 0;
            int maxer =0;
        for(int j = 0;j<n;j++){
            if(a[j]==0){zero++;}
            else{
                
                zero = 0;}
            if(zero>maxer){maxer=zero;}
        }
       cout<< maxer<< endl;



    }

}