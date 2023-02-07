
#include <iostream>
#include <string>

std::string alphabet_position(const std::string& text) {
	std::string output = "";

	for (char c : text) {
		if (std::isalpha(c)) {
			output += std::to_string(std::tolower(c) - 96) + " ";
		}
	}

	if (!output.empty()) {
		output.pop_back();
	}

	return output;
}

int main() {
	std::cout << alphabet_position("The sunset sets at twelve o' clock.") << std::endl;
}
