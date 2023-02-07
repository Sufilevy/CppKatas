
#include <iostream>
#include <string>
#include <vector>

class LongestConsec
{
public:
	static std::string longestConsec(const std::vector<std::string>& strarr, int k);
};

std::string LongestConsec::longestConsec(const std::vector<std::string>& strarr, int k) {
	return "";
}


int main() {
	std::cout
		<< LongestConsec::longestConsec(std::vector<std::string>{ "zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail" }, 2) 
		<< std::endl;
}
