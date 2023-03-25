/*(Card Shuffling and Dealing) Create a program to shuffle and deal a deck of cards. The program
should consist of class Card, class DeckOfCards and a driver program. Class Card should provide:

a) Data members face and suit of type int.
b) A constructor that receives two ints representing the face and suit and uses them to initialize
the data members.
c) Two static arrays of strings representing the faces and suits.
d) A toString function that returns the Card as a string in the form “face of suit.” You can use the + operator to concatenate strings.

Class DeckOfCards should contain:

a) An array of Cards named deck to store the Cards.
b) An integer currentCard representing the next card to deal.
c) A default constructor that initializes the Cards in the deck. There are 52 cards in a deck. 
d) A shuffle function that shuffles the Cards in the deck. The shuffle algorithm should iterate through the array of Cards. For each Card, randomly select another Card in the deck and swap the two Cards.
e) A dealCard function that returns the next Card object from the deck.
f) A moreCards function that returns a bool value indicating whether there are more Cards
to deal.

The driver program should create a DeckOfCards object, shuffle the cards, then deal the 52 cards.
*/
#include<iostream>
using namespace std;
class Card{
    int face;
    int suit;
    static string faces[13];
     static string suits[4];
    public:
Card(int a,int b);
string to_string();
};
string Card::faces[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
string Card::suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
string Card::to_string()
{
    return faces[face]+"  of  "+suits[suit];
}
Card::Card(int a=0,int b=0 )
{
    face=a;
    suit=b;
}
class DeckofCards{
Card deck[52];
int current_Card;
public:
DeckofCards(int a);
void shuffle();
Card deal_cards();
bool more_card();
};
DeckofCards::DeckofCards(int a=0)
{
    current_Card=a;
    int count=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<14;j++)
        {
            deck[count]=Card(j,i);
            count++;
        }
    }
}
void DeckofCards::shuffle()
{
        current_Card = 0;
        for (int i = 0; i < 52; i++)
        {
            int randomNumber = (rand()) % 52;
            Card temp = deck[i];
            deck[i] = deck[randomNumber];
            deck[randomNumber] = temp;
        }
}
Card DeckofCards::deal_cards()
{
if (current_Card>51)
{
    shuffle();
}
else
return deck[current_Card++];
}
bool DeckofCards ::more_card()
{
       
        if (current_Card > 51)
        {
            return false;
        }
        else
        {
            return true;
        }
}
int main()
{
    DeckofCards deck;
    deck.shuffle();
    int a=1;
    while (deck.more_card()==true)
    {
       cout<<a<<":  "<<deck.deal_cards().to_string()<<endl;
       a++;
    }
    return 0;
}
