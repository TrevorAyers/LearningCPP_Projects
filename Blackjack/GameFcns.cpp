#include "GameFcns.h"

void gameOutcome(int playerScore, int dealerScore)
{
    if (playerScore > 21 || (dealerScore > playerScore && dealerScore <=21))
        std::cout << "You Lose!\n";
    else if (dealerScore > 21 || (playerScore > dealerScore && playerScore <=21))
        std::cout << "Congratulations! You win!\n";
    else if (dealerScore == playerScore)
        std::cout << "It's a tie.\n";
    else std::cout << "ERROR: something went wrong!\n";
}

void playerTurn(int &playerScore, Deck &deck)
{
    char choice;
	while (choice != 's' && playerScore <= 21)
    {
        std::cout << "What would you like to do? (h = hit, s = stay)";
        std::cin >> choice;
        if (choice == 's')
            break;
        else if (choice == 'h')
        {
            playerScore += deck.dealCard().getCardValue();
            std::cout << "You have: " << playerScore << '\n';
            continue;
        }
        else std::cout << "Invalid input. Try again.\n";
    }
}

void dealerTurn(int &dealerScore, Deck &deck)
{
  while (dealerScore < 17)
        {
            dealerScore += deck.dealCard().getCardValue();
            std::cout << "Dealer has " << dealerScore << std::endl;
        }
}

bool newGame()
{
    char response;
    do
    {
        std::cout << "Would you like to play again? (y/n) ";
        std::cin >> response;

    } while (response != 'y' && response != 'n');

    if (response == 'y')
        return true;
    return false;
}
