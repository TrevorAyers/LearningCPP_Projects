#include "CardClasses.h"
#include "DeckClass.h"
#include <iostream>

#ifndef GAMEFCNS_H_INCLUDED
#define GAMEFCNS_H_INCLUDED

void gameOutcome(int playerScore, int dealerScore);
void playerTurn(int &playerScore, Deck &deck);
void dealerTurn(int &dealerScore, Deck &deck);
bool newGame();

#endif // GAMEFCNS_H_INCLUDED
