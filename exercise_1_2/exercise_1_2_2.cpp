#include <iostream>

int main()
{
    // Part 2: Palindrome Check

    // Input string from command-line
    std::string str;
    std::cout << "Enter String:" << std::endl;
    std::cin >> str;

    int left = 0;
    int right = str.size();
    bool is_pal = true;
    for (int i = 0; i < str.size()/2; i++){
    	if (str[i] != str[right - 1 - i]) {
    		is_pal = false;
    	}
    }
    if (is_pal) {
    	std::cout << str << " is a palindrome" << std::endl;
    }
    else {
    	std::cout << str << " is NOT a palindrome" << std::endl;
    }
    return 0;
}
