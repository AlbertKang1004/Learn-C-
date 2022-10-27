#include <iostream>
#include <random>

void ignoreLine() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool playAgain() {
	char ch;
	while (true) {
		std::cout << "Would you like to play again (y / n)? ";
		std::cin >> ch;
		ignoreLine();
		switch (ch) {
		case 'y':
			return true;
		case 'n':
			std::cout << "Thank you for playing.\n";
			return false;
		}
	}
}

void guessing(int answer) {
	bool replay = true;
	while (replay) {
		std::cout
				<< "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is.\n";
		for (int i = 1; i <= 7; i++) {
			start:
			int guess;
			std::cout << "Guess #" << i << ": ";
			std::cin >> guess;

			if (std::cin.fail()) {
				ignoreLine();
				goto start;
			}

			if (guess > answer) {
				std::cout << "Your guess is too high.\n";
			}

			if (guess < answer) {
				std::cout << "Your guess is too low.\n";
			}

			if (guess == answer) {
				std::cout << "Correct! You win!";
				return;
			}
		}
		std::cout << "Sorry, you lose. The correct number was " << answer
				<< ".\n";
		replay = playAgain();
	}
}

int main() {
	std::mt19937 mt { std::random_device { }() };
	std::uniform_int_distribution<> num { 1, 100 };
	guessing(num(mt));
	return 0;
}
