#include <iostream>
int lengthOfLastWord(std::string s) {
    int counter = 0;
    for(int i = s.size() - 1; i >= 0; i--) {
        if(s[i] == ' ') {
            if( counter != 0) {
                break;
            }
            continue;
        }
        counter++;
    }
    return counter;
}

int main() {
    std::cout << lengthOfLastWord("Hello brothers my      lofodfood      ");
    return 0;
}
