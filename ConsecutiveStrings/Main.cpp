
#include <iostream>
#include <string>
#include <vector>

class LongestConsec
{
public:
	static std::string longestConsec(const std::vector<std::string>& strarr, int k);
};

std::string LongestConsec::longestConsec(const std::vector<std::string>& strarr, int k) {
	const int strarrSize = strarr.size();

	if (strarrSize == 0 || k > strarrSize || k <= 0) {
		return "";
	}

	std::string longestString;
	int longestLength = 0;
	for (int i = 0; i < strarrSize; i++) {
		std::string consec = "";
		for (int j = 0; j < k && i + j < strarrSize; j++) {
			consec += strarr[i + j];
		}

		int length = consec.size();
		if (length > longestLength) {
			longestString = consec;
			longestLength = length;
		}
	}

	return longestString;
}


int main() {
	std::cout
		<< LongestConsec::longestConsec(std::vector<std::string>{ "zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail" }, 2) 
		<< std::endl;
}
