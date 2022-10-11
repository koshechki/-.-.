#include <iostream>
#include <string>

int main() {
	int t;
	std::cin >> t;
	for (int i(0); i < t; i++) {
		bool flag = true;
		std::string s;
		std::cin >> s;
		int count = 1;
		char cur = s[0];
		for (int j(1); j < s.size(); j++) {
			if (s[j] == cur) {
				count += 1;
			}
			else {
				if (count < 2) {
					flag = false;
				}
				count = 1;
			}
			cur = s[j];
		}
		if (count < 2) {
			flag = false;
		}
		if (flag) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
	}
	return 0;
}