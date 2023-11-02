#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string removeOccerrences(string s, string part){
    while(s.length()!=0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());

    }
    return s;
}

int main(){
    string s;
    cout<<"Enter String:";
    cin>>s;

    string part;
    cout<<"Enter which part is remove:";
    cin>>part;
    cout<<removeOccerrences(s, part)<<endl;
    return 0;
}