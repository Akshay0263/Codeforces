#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    
    long long count=0;
    string s;
    s = to_string( ceil(double(a)/double(c))*ceil(double(b)/double(c));)
     istringstream os(s);
    double d;
    os >> d;
    cout <<int(d) << endl;
    
}


/*
if(a%c==0 && b%c==0){
        cout<<(a*b)/c<<endl;
        return 0;}
    count+= long(a/c);
    //cout<<count<<endl;

    count+=long(b/c);
    //cout<<count<<endl;
    if(a%c!=0 && a/c>0){count++;}
    if(b%c!=0 && b/c>0){count++;}
    if(count==0){count++;}
    cout<<count<<endl;*/