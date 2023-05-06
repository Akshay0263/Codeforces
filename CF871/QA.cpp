#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string what = "codeforces";
    cin >> n;
    for(int i =0;i<n;i++){
        string str;
        int counter = 0;
        cin >> str;
        for(int j =0;j<10;j++){
            if(what[j]!=str[j]){counter++;}

        }
        cout<<counter<<endl;

    }

}