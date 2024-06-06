#include<iostream>
using namespace std;

//brute force

// class Solution {
// public:
//     int maxVowels(string s, int k) {
//         int countmax=INT_MIN;
//         int countnow=0;
//         int size = s.size();
//         for(int i =0; i<=size-k; i++)
//         {
//             for(int j =i; j<i+k; j++)
//             {
//                 if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
//                 {
//                     countnow++;
//                 }
//             }
//             countmax = max(countmax,countnow);
//             countnow = 0;
//         }
//         return countmax;
//     }
// };

//sliding window

class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0;
        int right = k-1;
        int count=0;
        for(int i =0; i<k; i++)
        {
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                count++;
            }
        }
        int dup = count;
        while(right != s.size()-1)
        {
            if(s[right+1]=='a'||s[right+1]=='e'||s[right+1]=='i'||s[right+1]=='o'||s[right+1]=='u') dup++;
            if(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u') dup--;
            right++;
            left++;
            count = max(count,dup);
        }
        return count;
    }
};

int main(){
    sl.maxVowels("leetcode",3);
    return 0;
}