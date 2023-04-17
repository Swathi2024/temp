#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1 , s2;
  getline(cin ,s1);
  getline(cin ,s2);
  
  if(s1.length()!=s2.length()){
    cout<<"Two strings are not anagrams!";
    return 0;
  }
  
  int freq1[26]={0};
  int freq2[26]={0};
  for(auto it: s1)
    freq1[it-'a']++;
  for(auto it:s2)
    freq2[it-'a']++;
  for(int i=0;i<26;i++)
    if(freq1[i]!=freq2[i]) 
    { 
      cout<<"Two strings are not anagrams!";
      return 0;
    }
  cout<<"Two string are anagrams";
  return 0;
}
    
