#include "GameFcns.h"

int main()
{
	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); // If using Visual Studio, discard first random value

	Deck deck;
	deck.shuffleDeck();
    bool again;
    do
    {
        int playerScore {0};
        int dealerScore {0};
        dealerScore += deck.dealCard().getCardValue();
        std::cout << "The Dealer is showing: " << dealerScore << '\n';
        playerScore += deck.dealCard().getCardValue();
        playerScore += deck.dealCard().getCardValue();
        std::cout << "You have: " << playerScore << '\n';
        playerTurn(playerScore, deck);
        if (playerScore <= 21)
            dealerTurn(dealerScore, deck);
        gameOutcome(playerScore, dealerScore);
        again = newGame();
    } while (again);

	return 0;
}
