/*  For Each Array question, to find which DS and pattern, ask:
1. What am I searching for?
2. Is the array sorted?
3. Do I need original indices?
4. Can moving left/right eliminate choices?
5. Or do I need memory using HashMap?
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool ispalindrome(const string &sp){
    int left = 0;
    int right = sp.size();
    
    while(left < right){
        if(sp[left] != sp[right]){
            return false;
            
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string sp = "abba";
    bool result = ispalindrome(sp);
    if(result){
        cout << "Palindrome";
    }
    else cout << "Not Palindrome";
    
    return 0;
    
}





