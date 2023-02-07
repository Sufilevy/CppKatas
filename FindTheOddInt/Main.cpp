
#include <iostream>
#include <vector>

int findOdd(const std::vector<int>& numbers) {
	for (int n : numbers) {
		if (std::count(numbers.begin(), numbers.end(), n) % 2 == 1) {
			return n;
		}
	}
}

int main() {
	std::cout << findOdd(std::vector<int>{ 20, 1, -1, 2, -2, 3, 3, 5, 5, 1, 2, 4, 20, 4, -1, -2, 5 }) << std::endl;
}

