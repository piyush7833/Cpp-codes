#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s ={"ajawdahrfdastguiretsgvaggggggsdfgjgkl"};
int freq[26];
for(int i=0; i<26;i++){    //freq =26 as their are 26 charecter in english alphaet
    freq[i]=0;
}
for (int i =0; i<s.size();i++){
    freq[s[i]-'a']++;   //we are increasing freq of an index whose value is same taking 'a' as reference as ascii valuestarts with it
}
char ans ='a';
int maxF = 0;
for(int i=0; i<26;i++){
    if(freq[i]>maxF){
        maxF = freq[i];
        ans = i + 'a';
    }
}
cout<<ans<<" have maximum frequency of "<<maxF<<endl;
return 0;
}