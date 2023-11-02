#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseString(string str){
    int s=0;
    int e=str.length()-1;
    while(s<=e){
        swap(str[s++], str[e--]);
        s++;
        e--;
    }
}

string reverseWordsInString(const string& input) {
    istringstream iss(input);
    vector<std::string> words;
    string word;

    while (iss >> word) {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    string reversedString;
    for (const string& w : words) {
        reversedString += w + " ";
    }

    if (!reversedString.empty()) {
        reversedString.pop_back();
    }

    return reversedString;
}

int main(){
    string s;
    cout<<"Enter your string : ";
    getline(cin, s);

    string revresedString=reverseWordsInString(s);

    reverseString(revresedString);

    cout<<" Reversed String "<<revresedString<<endl;

}