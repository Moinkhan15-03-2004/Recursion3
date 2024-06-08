// Remove all occurrences of a from a string 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Raghav Garg";
    string s = "";
    for(int i=0;i<str.length();i++){
        if(str[i]!='a') s.push_back(str[i]); //s += str[i];
    }
    cout<<s;
}