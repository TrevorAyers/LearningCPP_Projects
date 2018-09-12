#include "DeckClass.h"
#include <iostream>
#include <cassert>

void Deck::printDeck() const
{
    for (int i = 0; i < 52; ++i)
    {
        m_deck[i].printCard();
        std::cout << ' ';
    }
    std::cout << '\n';
}

void Deck::swapCard(Card &c1, Card &c2)
{
    Card temp = c1;
    c1 = c2;
    c2 = temp;
}

const Card& Deck::dealCard()
{
    if (m_cardIndex > 52)
        shuffleDeck();
    return m_deck[m_cardIndex++];
}

int Deck::getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
 void Deck::shuffleDeck()
 {
    for (int i = 0; i < 52; ++i)
        swapCard(m_deck[i], m_deck[getRandomNumber(0,51)]);
    m_cardIndex = 0;
 }
