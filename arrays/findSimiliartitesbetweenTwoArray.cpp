/*
Problem Statement
You have been given two arrays/list ‘ARR1’ and ‘ARR2’ consisting of ‘N’ and ‘M’ integers respectively. 
Your task is to return the number of elements common to ‘ARR1’ and ‘ARR2’ and the number of elements in the union of ‘ARR1’ and ‘ARR2’.
Example:
Let’s assume ‘ARR1’ is [1,2,3,4,5] and ‘ARR2’ is [2,4,6,8].
Elements common to ‘ARR1’ and ‘ARR2’ are [2,4] as they occur in both ‘ARR1’ and ‘ARR2’. 
Therefore the number of elements common to ‘ARR1’ and ‘ARR2’ is 2. Union of ‘ARR1’ and ‘ARR2’ is [1,2,3,4,5,6,8].
Therefore the number of distinct elements in the union of ‘ARR1’ and ‘ARR2’ is 7. So, the answer will be 2 7.
*/

pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
    unordered_map<int,int> map1;
    unordered_map<int,int> map2;
    for(int i = 0;i<m;i++){
        map2[arr2[i]]++;
    }
    int cnt=0;
    for(int i =0;i<n;i++){
        if(map2.count(arr1[i])>0){
            cnt++;
        }
    }
    for(int i =0;i<n;i++){
        map1[arr1[i]]++;
    }
    for(int i =0;i<m;i++){
        map1[arr2[i]]++;
    }
    int h = map1.size();
    pair<int,int> p(cnt,h);
    return p;
}

// without using hashmap 
#include <bits/stdc++.h>

pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
   
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int i =0;
    int j = 0;
    int cnt = 0;
    while(i<n&& j<m){
        if(arr1[i]==arr2[j]){
            cnt++;
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    pair<int,int> p(cnt,n+m-cnt);
    return p;
}
