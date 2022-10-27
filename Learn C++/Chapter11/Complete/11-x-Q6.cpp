#include <iostream>
#include <random>
#include <array>
#include <ctime>

enum Cards_suit {
	SUIT_CLOVER, SUIT_DIAMOND, SUIT_HEART, SUIT_SPADE, max_SUIT
};
enum Cards_rank {
	RANK_2,
	RANK_3,
	RANK_4,
	RANK_5,
	RANK_6,
	RANK_7,
	RANK_8,
	RANK_9,
	RANK_10,
	RANK_J,
	RANK_Q,
	RANK_K,
	RANK_A,
	max_RANK
};

struct Card {
	Cards_suit suit { };
	Cards_rank rank { };
};

using deck_t = std::array<Card, 52>;

deck_t createDeck() {
	int count { 0 };
	std::array<Card, max_SUIT * max_RANK> deck;
	for (int s = 0; s < Cards_suit::max_SUIT; s++) {
		for (int r = 0; r < Cards_rank::max_RANK; r++) {
			deck[count].suit = static_cast<Cards_suit>(s);
			deck[count].rank = static_cast<Cards_rank>(r);
			count++;
		}
	}
	return deck;
}

std::string printCard(const Card card) {

	std::string name { };
	switch (card.suit) {
	case SUIT_CLOVER:
		name.append("C");
		break;
	case SUIT_DIAMOND:
		name.append("D");
		break;
	case SUIT_HEART:
		name.append("H");
		break;
	case SUIT_SPADE:
		name.append("S");
		break;
	default:
		name.append("?");
	}
	switch (card.rank) {
	case RANK_2:
		name.append("2");
		break;
	case RANK_3:
		name.append("3");
		break;
	case RANK_4:
		name.append("4");
		break;
	case RANK_5:
		name.append("5");
		break;
	case RANK_6:
		name.append("6");
		break;
	case RANK_7:
		name.append("7");
		break;
	case RANK_8:
		name.append("8");
		break;
	case RANK_9:
		name.append("9");
		break;
	case RANK_10:
		name.append("10");
		break;
	case RANK_J:
		name.append("J");
		break;
	case RANK_Q:
		name.append("Q");
		break;
	case RANK_K:
		name.append("K");
		break;
	case RANK_A:
		name.append("A");
		break;
	default:
		name.append("?");
	}
	return name;

}

void printDeck(deck_t deck) {
	for (Card &card : deck) {
		std::cout << printCard(card) << ' ';
	}
}

void shuffleDeck(deck_t &deck) {
	static std::mt19937 mt { static_cast<std::mt19937::result_type>(std::time(
			nullptr)) };
	std::shuffle(deck.begin(), deck.end(), mt);
}

int getCardValue(Card card) {
	switch (card.rank) {
	case RANK_2:
		return 2;
		break;
	case RANK_3:
		return 3;
		break;
	case RANK_4:
		return 4;
		break;
	case RANK_5:
		return 5;
		break;
	case RANK_6:
		return 6;
		break;
	case RANK_7:
		return 7;
		break;
	case RANK_8:
		return 8;
		break;
	case RANK_9:
		return 9;
		break;
	case RANK_10:
		return 10;
		break;
	case RANK_J:
		return 10;
		break;
	case RANK_Q:
		return 10;
		break;
	case RANK_K:
		return 10;
		break;
	case RANK_A:
		return 11;
		break;
	default:
		return -1;
	}
}

bool blackJack(deck_t &deck) {
	int cardCount { 0 };

	Card dealerCard = deck[cardCount++];
	Card playerCard1 = deck[cardCount++];
	Card playerCard2 = deck[cardCount++];

	int dealerSum { getCardValue(dealerCard) };
	int playerSum { getCardValue(playerCard1) + getCardValue(playerCard2) };
	std::cout << "You gets a card " << printCard(playerCard1) << " and "
			<< printCard(playerCard2) << '\n';
	printf("Right now, your card value is %d \n", playerSum);
	std::cout << "Dealer gets a card " << printCard(dealerCard) << '\n';
	printf("Dealer's card value is %d \n", dealerSum);

	start: while (playerSum <= 21) {
		char hitOrStand { };
		pull: std::cout << "To hit, enter H. To stand, enter S: ";
		std::cin >> hitOrStand;
		switch (hitOrStand) {
		case 'H':
			playerSum += getCardValue(deck[cardCount++]);
			std::cout << "You just drawed " << printCard(deck[cardCount - 1])
					<< " and your total value is " << playerSum << "!\n";
			goto start;
		case 'S':
			std::cout << "Now it's the time for dealer. Your value is "
					<< playerSum << '\n';
			goto end;
		default:
			goto pull;
		}

	}
	if (playerSum > 21) {

		return false;
	}
	end:
	while (dealerSum <= 17) {
		dealerSum += getCardValue(deck[cardCount++]);
		std::cout << "The dealer just drawed " << printCard(deck[cardCount - 1])
				<< " and their card value is " << dealerSum << "!\n";
	}
	if (dealerSum > 21) {
		return true;
	} else {
		if (dealerSum >= playerSum) {
			return false;
		} else {
			return true;
		}
	}
}

int main() {
	deck_t deck = createDeck();
	shuffleDeck(deck);
	if (blackJack(deck)) {
		std::cout << "Player Wins!\n";
	} else {
		std::cout << "Dealer Wins!\n";
	}

	return 0;
}
