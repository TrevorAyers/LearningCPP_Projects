#ifndef CARDCLASSES_H_INCLUDED
#define CARDCLASSES_H_INCLUDED

class Card
{
public:
    enum CardSuit
    {
        HEARTS,
        DIAMONDS,
        SPADES,
        CLUBS,
        MAX_SUITS
    };
    enum CardRank
    {
        RANK_2,
        RANK_3,
        RANK_4,
        RANK_5,
        RANK_6,
        RANK_7,
        RANK_8,
        RANK_9,
        RANK_10,
        RANK_JACK,
        RANK_QUEEN,
        RANK_KING,
        RANK_ACE,
        MAX_RANKS
    };
private:
    CardRank m_value;
    CardSuit m_suit;
public:
    Card(CardRank value = RANK_ACE, CardSuit suit = SPADES) : m_value(value), m_suit(suit) {}
    void printCard() const;
    int getCardValue() const;
};

#endif // CARDCLASSES_H_INCLUDED
