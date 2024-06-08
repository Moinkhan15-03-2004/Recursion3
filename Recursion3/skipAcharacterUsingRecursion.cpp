#include<iostream>
using namespace std;
void removechar(string ans,string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch = original[0];
    if(ch=='a') removechar(ans,original.substr(1));
    else removechar(ans+ch,original.substr(1));
}
void removechar2(string ans,string origial,int idx){
    if(idx==origial.length()){
        cout<<ans;
        return;
    }
    char ch  = origial[idx];
    if( ch=='a') removechar2(ans,origial,idx+1);
    else removechar2(ans+ch,origial,idx+1);
    }
int main(){
    string str = "raghav garg";
    removechar2("",str,0);
    //removechar("",str);
}