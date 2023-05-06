#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;//testcaser
    for(int p=0;p<t;p++){
        int n;cin>>n;
        int time[n],matrix[n];
        unsigned int bothtimekeeper =999999999;
        for(int i=0;i<n;i++){
        cin>>time[i]>>matrix[i];
        bothtimekeeper = matrix[i] == 11 && time[i]<bothtimekeeper? time[i]:bothtimekeeper;
    }
        unsigned int t1 = 999999999,t2 = 999999999;
        for(int i=0;i<n;i++){
            
            t1 = time[i]<t1 && matrix[i]/10==1?time[i]:t1;
            t2 = time[i]<t2 && matrix[i]%10==1?time[i]:t2;
//            cout<<t1<<"did it run"<<t2<<endl;
        }
         if(bothtimekeeper==999999999){
            if(t1 == 999999999 || t2 == 999999999){cout<<-1<<endl;}else{
            cout<<t1+t2<<endl;}}
        else{
            if((t1+t2)>bothtimekeeper){cout<<bothtimekeeper<<endl;}
            else{cout<<t1+t2<<endl;}
        } 
    }
}