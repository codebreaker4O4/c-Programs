#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the string"<<endl;
    string s; cin>>s;
    int len= s.length();
    int depth=0;
    stack <char> parenthesis;
    for(int i=0;i<len;i++){
        if(s[i]=='('){
            parenthesis.push(s[i]);
            int l=parenthesis.size();
            depth=max(depth,l);
        }
        else if(s[i]==')') parenthesis.pop();
    }
    cout<<"Depth= "<<depth<<endl;
    return 0;
}