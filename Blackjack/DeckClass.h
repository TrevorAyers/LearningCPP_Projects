#include "CardClasses.h"
#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()

#ifndef DECKCLASS_H_INCLUDED
#define DECKCLASS_H_INCLUDED

class Card;

class Deck
{
private:
    Card m_deck[52];
    int m_cardIndex {0};
    static int getRandomNumber(int min, int max);
    static void swapCard(Card &c1, Card &c2);
public:
    Deck()
    {
        for (int j = 0; j < Card::MAX_SUITS; ++j)
        {
            for (int i = 0; i < Card::MAX_RANKS; ++i)
            {
                m_deck[j*static_cast<int>(Card::MAX_RANKS)+i] = Card(static_cast<Card::CardRank>(i),static_cast<Card::CardSuit>(j));
            }
        }
    }
    const Card& dealCard();
    void printDeck() const;
    void shuffleDeck();
};

#endif // DECKCLASS_H_INCLUDED
