#include <iostream>
int ToInt(char ch) {
    if (ch == 'I') {
        return 1;
    } else if (ch == 'V') {
        return 5;
    } else if (ch == 'X') {
        return 10;
    } else if (ch == 'L') {
        return 50;
    } else if (ch == 'C') {
        return 100;
    } else if (ch == 'D') {
        return 500;
    } else if (ch == 'M') {
        return 1000;
    }
}
int romanToInt(std::string s) {
    int number = 0;
    if(s.size() > 1 ) {
        for (int i = 0; i <= s.size() - 2; i++) {
            if (ToInt(s[i]) >= ToInt(s[i + 1])) {
                number += ToInt(s[i]);
            } else {
                number -= ToInt(s[i]);
            }
        }
    }
    number += ToInt(s[s.size() - 1]);
    return number;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << romanToInt(str);
    return 0;
}
