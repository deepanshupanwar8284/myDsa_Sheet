/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/
string stringReverse(string S) {
    // Write your code here.
    int st = 0;
    int ed  = S.length()-1;
    while(st<ed){
        char temp = S[ed];
        S[ed]=S[st];
        S[st]=temp;
        st++;
        ed--;
    }
    return S;
  
}
