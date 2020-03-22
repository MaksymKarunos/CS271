// Fig. 7.24: fig07_24.c
 // Card shuffling and dealing.
#include <stdio.h>
 #include <stdlib.h>

 #define SUITS 4
 #define FACES 13
 #define CARDS 52

 // prototypes
 void shuffle(unsigned int wDeck[][FACES]); // shuffling modifies wDeck
void deal(unsigned int wDeck[][FACES], const char *wFace[],
 const char *wSuit[]); // dealing doesn't modify the arrays

 int main(void)
 {
 // initialize deck array
 unsigned int deck[SUITS][FACES] = {0};

 srand(time(NULL)); // seed random-number generator
 shuffle(deck); // shuffle the deck

deal(deck, face, suit); // deal the deck
 }
 // shuffle cards in deck
 void shuffle(unsigned int wDeck[][FACES])
 {
 // for each of the cards, choose slot of deck randomly
 for (size_t card = 1; card <= CARDS; ++card) {
 size_t row; // row number
 size_t column; // column number
// place card number in chosen slot of deck
 wDeck[row][column] = card;
 }
 }

 // deal cards in deck
 void deal(unsigned int wDeck[][FACES], const char *wFace[],
 const char *wSuit[])
 {
// deal each of the cards
 for (size_t card = 1; card <= CARDS; ++card) {
 // loop through rows of wDeck
for (size_t row = 0; row < SUITS; ++row) {
// loop through columns of wDeck for current row
 for (size_t column = 0; column < FACES; ++column) {
// if slot contains current card, display card
if (wDeck[row][column] == card) {

}
}
} 