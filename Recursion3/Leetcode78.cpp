// Print subsets of a string with unique characters Follow up Do it for array as well
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printSubset(string ans,string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    printSubset(ans+ch,original.substr(1));
        printSubset(ans,original.substr(1));
}
void storeSubset(string ans,string original,vector<string>&v){
    if(original==""){
       v.push_back(ans);
        return;
    }
    char ch = original[0];
    storeSubset(ans+ch,original.substr(1),v);
      storeSubset(ans,original.substr(1),v);
}
int main(){
    string str = "abc";
   // printSubset("",str);
   vector<string>v;
   storeSubset("",str,v);
   for(string ele : v){
    cout<<ele<<endl;
   }

}
