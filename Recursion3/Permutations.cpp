#include<iostream>
#include<string>
using namespace std;
void permutations(string ans,string original){
if(original==""){
    cout<<ans<<endl;
    return;
}
for(int i=0;i<original.length();i++){
    char ch = original[i];
    string left = original.substr(0,i);
    string right = original.substr(i+1);
    permutations(ans+ch,left+right);
}
}
int main(){
    string str = "abcde";
    permutations("",str);
    // string left = str.substr(0,2);
    // cout<<left<<endl;// it give ab
    // string right = str.substr(2+1);
    // cout<<right<<endl;// it give de 
}