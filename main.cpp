#include <iostream>

using namespace std;


void printVectorDecs(std::vector<int> &numbers) {
    for (int j = numbers.size() - 1; j >= 0; j--) {
        std::cout << numbers[j] << ",";
    }
    numbers.push_back(100);
}

// 比较两个字符串，如果第一个大于第二个，返回1， 如果第二个大于第一个， 返回2， 如果相等，则返回0
int stringCompare(string str1, string str2) {
    return 0;
}

// 把数字转成string, 例如输入9876， 则返回“9876”
string convertToString(int n) {
}

// 把字符串转化成数字，输入符合数字 “1234” -> 1234, "765432" -> 765432
int convertToInt(string str) {
}

// 把小写的string转换成大写的，如“abc” -> "ABC"
// "Abc" -> "ABC"
string convertToUpperCase(string str) {
}

// 反转字符串 “abcd” -> "dcba"
string stringReverse(string str) {
}

// 判断一个字符串是否是另外一个字符串的子串,如果sub是str的一个子串，返回true，否则false。
// "abcd" 的子串包括“abc”， “cd”等，这里没有空串。
bool contains(string str, string sub) {
}

// 判断一个字符串是否为回文字符串
bool isPalindrome(string str) {
    int i = 0;
    int j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

// 把一个字符串中的"abc"变成"xyz"

int main() {
    //cout << "Hello, World!" << endl;
    std::vector<int> numbers2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printVectorDecs(numbers2);
    cout << endl;
    printVectorDecs(numbers2);


    string name("kkk");
    string name2 = name;
    string name3 = "abc";

    string name4 = name2 + name3;

    name4.push_back('z');
    int size = name4.size();
    int length = name4.length();
    cout << "size: " << size << endl;

    bool isEmpty = name4.empty();

    cout << endl;
    string name5 = "abcdefghijk";
    for (int i = 0; i < name5.size(); i++) {
        cout << name5[i] << " ";
    }
    string name6 = name5.substr(2, 4);
    cout << name6 << endl;

    cout << name6 << endl;

    string name7 = "xyz1";
    string name8 = "xyz13";
    if (name7 == name8) {
        cout << "name7 == name8" << endl;
    } else if (name7 < name8) {
        cout << "name7 < name8" << endl;
    } else if (name7 > name8) {
        cout << "name7 > name8" << endl;
    }

    name8[0] = 'x';

    bool ret = isPalindrome("bcba");
    if (ret) {
        cout << "is Palindrome" << endl;
    } else {
        cout << "isn't Palindrome" << endl;
    }
    return 0;
}
