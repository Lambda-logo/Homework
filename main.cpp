#include <iostream>
#include <string>

bool IsKPeriodic(std::string s, int K) {
    if (K <= 0) {
        return false;
    }
    if (s.length() % K != 0) {
        return false;
    }

    int period = s.length() / K;
    std::string substr = s.substr(0, period);
    for (int i = 0; i < K; ++i) {
        if (s.substr(i * period, period) != substr) {
            return false;
        }
    }
    return true;
}

int main() {
    int K;
    std::string s;

    std::cout << "Enter an integer K (more than 0): ";
    std::cin >> K;

    std::cout << "Enter the line: ";
    std::cin >> s;

    if (IsKPeriodic(s, K)) {
        std::cout << "The string is a multiple of the number " << K << "." << std::endl;
    }
    else {
        std::cout << "The string is not a multiple of a number " << K << "." << std::endl;
    }

    return 0;
}