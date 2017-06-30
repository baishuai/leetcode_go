//
// Created by bai on 17-6-28.
//

#ifndef LEETCODE_389_HPP
#define LEETCODE_389_HPP


#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

/**

Given two strings s and t which consist of only lowercase letters.

String t is generated by random shuffling string s and then add one more letter at a random position.

Find the letter that was added in t.

Example:

Input:
s = "abcd"
t = "abcde"

Output:
e

Explanation:
'e' is the letter that was added.
 */

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> chars;
        for (char c : s) {
            chars[c]++;
        }
        for (char c:t) {
            if (chars[c] == 0) {
                return c;
            }
            chars[c]--;
        }
        //unreachable
        return '.';
    }
};


#endif //LEETCODE_389_HPP
