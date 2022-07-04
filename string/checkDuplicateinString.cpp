/*
You are given a string ‘S’ of length ‘N’. You have to return all the characters in the string that are duplicated and their frequency.
2
5
APPLE
6
BANANA

output:
P 2
A 3
N 2
*/

vector<pair<char,int>> duplicate_char(string s, int n){
   vector<pair<char,int>>vp;
   int arr[256]={0};
   for(int i=0;i<s.size();i++){
       arr[s[i]]++;
   }
   for(int i=0;i<256;i++){
       if(arr[i]>1){
           vp.push_back({i,arr[i]});
       }
   }
   return vp;
}
