/*

You are given a string 'S'. Your task is to check whether the string is palindrome or not.
For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.
Note :
String 'S' is NOT case sensitive.
Example :
Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome.
Hence, the given string is also a palindrome.

sample input
6
c1 O$d@eeD o1c
N2 i&nJA?a& jnI2n
A1b22Ba
codingninjassajNiNgNidoc
5?36@6?35
aaBBa@

sample output
Yes
Yes
No
Yes
Yes
No


*/

string convert(string s){ // function to remove symbols and whitespace and convert capital letter to cursive letter 
  
    string s1="";
    for(int i =0;i<s.length();i++){
        if(s[i]==' '){
            continue;
        }
        else if((int)s[i]>= 48 && (int)s[i]<=57){
            s1+=s[i];
        }
        else if((int)s[i]>= 65 && (int)s[i]<=90){
            s[i]= (int)s[i]+32;
            s1 += s[i];
        }
        else if((int)s[i]>= 97 && (int)s[i]<=122){
            s1+=s[i];
        }
        else{
            continue;
        }
    }
    return s1;
}
bool checkPalindrome(string s)
{
    // Write your code here.
    string s1 = convert(s);
    int st = 0;
    int ed = s1.length()-1;
    bool flag = true;
    while(st<ed){
        if(s1[st]==s1[ed]){
            st++;
            ed--;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag == true){
        return true;
    }
    else{
        return false;
    }
}
