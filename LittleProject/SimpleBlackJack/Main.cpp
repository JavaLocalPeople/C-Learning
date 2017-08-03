#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <array>
#include <ctime>
#include <cstdlib>


enum Ranks {
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING,
	ACE,
	MAXRANKS
};

enum Suits {
	CLUBS,
	DIAMONDS,
	HEARTS,
	SPADES,
	MAXSUITS
};

struct Card {
	Ranks rank;
	Suits suit;
};

void printCard(const Card &card) {
	switch (card.rank)
	{
	case TWO: std::cout << '2'; break;
	case THREE: std::cout << '3'; break;
	case FOUR: std::cout << '4'; break;
	case FIVE: std::cout << '5'; break;
	case SIX: std::cout << '6'; break;
	case SEVEN: std::cout << '7'; break;
	case EIGHT: std::cout << '8'; break;
	case NINE: std::cout << '9'; break;
	case TEN: std::cout << 'T'; break;
	case JACK: std::cout << 'J'; break;
	case QUEEN: std::cout << 'Q'; break;
	case KING: std::cout << 'K'; break;
	case ACE: std::cout << 'A'; break;
	}

	switch (card.suit)
	{
	case CLUBS: std::cout << 'C'; break;
	case DIAMONDS: std::cout << 'D'; break;
	case HEARTS: std::cout << 'H'; break;
	case SPADES: std::cout << 'S'; break;
	}
}

void swapCard(Card &a, Card &b)
{
	Card temp = a;
	a = b;
	b = temp;
}

int getRandomNum(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void shuffleDeck(std::array<Card, 52> &deck)
{
	for (int index = 0; index < 52; ++index)
	{
		int swapIndex = getRandomNum(0, 51);
		swapCard(deck[index], deck[swapIndex]);
	}
}

void printDeck(const std::array<Card, 52> &deck)
{
	for (const auto &element : deck)
	{
		std::cout << "The current card is: "; 
		printCard(element);
		std::cout << '\n';

	}
}

int getCardValue(const Card &card)
{
	switch (card.rank)
	{
	case TWO: return 2;
	case THREE: return 3;
	case FOUR: return 4;
	case FIVE: return 5;
	case SIX: return 6;
	case SEVEN: return 7;
	case EIGHT: return 8;
	case NINE: return 9;
	case TEN: return 10;
	case JACK: return 10;
	case QUEEN: return 10;
	case KING: return 10;
	case ACE: return 11;
	}

	return 0;
}

char getPlayerChoice()
{
	std::cout << "(h) to hit, or (s) to stand: ";
	char choice;
	do
	{
		std::cin >> choice;
	} while (choice != 'h' && choice != 's');

	return choice;
}
bool playBlackJack(const std::array<Card, 52> &deck)
{
	const Card *cardPtr = &deck[0];

	int playerTotal = 0;
	int dealerTotal = 0;

	// Deal the dealer one card
	dealerTotal += getCardValue(*cardPtr++);
	std::cout << "The dealer is showing: " << dealerTotal << '\n';
	
	// Deal the player two cards
	playerTotal += getCardValue(*cardPtr++);
	playerTotal += getCardValue(*cardPtr++);

	while (1)
	{
		std::cout << "You have: " << playerTotal << '\n';

		if (playerTotal > 21)
		{
			return false;
		}
		char choice = getPlayerChoice();
		if (choice == 's')
		{
			break;
		}

		playerTotal += getCardValue(*cardPtr++);
	}

	while (dealerTotal < 17)
	{
		dealerTotal += getCardValue(*cardPtr++);
		{
			std::cout << "The dealer now has: " << dealerTotal << '\n';
		}
	}

	// If dealer busted, player wins
	if (dealerTotal > 21)
		return true;

	return (playerTotal > dealerTotal);
}

int main()
{

	srand(static_cast<unsigned int>(time(0)));// set initial seed value to system clock
	rand(); // If using Visual Studio, discard first random value


	std::array<Card, 52> deck;
	int card = 0;
	for (int suit = 0; suit < MAXSUITS; ++suit) {
		for (int rank = 0; rank < MAXRANKS; ++rank) {
			deck[card].suit = static_cast<Suits>(suit);
			deck[card].rank = static_cast<Ranks>(rank);
			++card;
		}
	}

	shuffleDeck(deck);

	if (playBlackJack(deck))
		std::cout << "You win!\n";
	else
		std::cout << "You lose!\n";


}
