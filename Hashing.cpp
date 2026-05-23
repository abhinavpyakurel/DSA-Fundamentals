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
#include<unordered_set>
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


bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> list;

        for(int i = 0; i < nums.size(); i++){
            if(list.count(nums[i])){
                return true;
            }
            list.insert(nums[i]);
        }
        return false;
        
    }

int main()
{
    string sp = "abba";
    bool PalindromeResult = ispalindrome(sp);
    cout << (PalindromeResult ? "Palindrome" : "Not Palindrome") << endl;
    
    vector<int> pk = {1,2,3,4,0,1};
    
    bool DuplicateResult = containsDuplicate(pk);
    cout << (DuplicateResult ? "Contains Duplicate" : "Doesnot contain duplicate") << endl;

    return 0;
    
}





