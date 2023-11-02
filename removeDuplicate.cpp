#include <iostream>
#include <stack>
using namespace std;

string removeAdjacentDuplicates(string s) {
    stack<char> st;

    for (char ch : s) {
        if (!st.empty() && st.top() == ch) {
            st.pop();
        } else {
            st.push(ch);
        }
    }

    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }

    return result;
}

int main() {
    string s = "abbaca";
    string result = removeAdjacentDuplicates(s);
    cout << "Input: " << s << endl;
    cout << "Output: " << result << endl;
    return 0;
}
