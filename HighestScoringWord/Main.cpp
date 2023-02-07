
#include <iostream>
#include <string>

std::string highestScoringWord(const std::string& str) {
	std::string currentWord, highestScoringWord;
	int currentScore = 0, highestScore = 0;
	for (char c : str) {
		if (c == ' ') {
			if (currentScore > highestScore) {
				highestScoringWord = currentWord;
				highestScore = currentScore;
			}
			currentWord = "";
			currentScore = 0;
		}
		else {
			currentWord += c;
			currentScore += std::tolower(c) - 96;
		}
	}

	if (currentScore > highestScore) {
		highestScoringWord = currentWord;
	}

	return highestScoringWord;
}

int main() {
	std::cout << highestScoringWord("man i need a taxi up to ubud") << std::endl;
}
