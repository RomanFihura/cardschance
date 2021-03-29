#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>
#define N 5000
int main()
{
 srand(time(NULL));
 double successresults = 0; 
 for (int jk = 0; jk < N; jk++) // cycle for N durak games
 {
  int random=0;
  std::vector<int> cards; // for cards in deck
  std::vector<int> yourcards; //for ur persona cards
  for (int i = 0; i < 36; i++)
  {
   cards.push_back(i);
  }
  for (int i = 0; i < 6; i++)
  {
   random = rand() % (36 - i); //giving random card
   yourcards.push_back(cards[random]); //giving it to ur hand
   cards.erase(cards.begin() + random); //removing this card from deck
  }
  for (int i = 0; i < 6; i++)
  {
   std::cout << " your card number " << yourcards[i] << std::endl;
  }
  random = rand() % 30;
  int kozir = cards[random] % 4; //taking kozir card
  std::cout << "KOZIR ";
  switch (kozir)
  {
  case 0:
   std::cout << "Cherva " << cards[random];
   for (int i = 0; i < 6; i++)
   {
    if (32 == yourcards[i]) //if u have ACE 
    {
     std::cout <<std::endl<< " you have got kosirniy tus cherva";
     successresults++;
     break;
    }
   }
   break;
  case 1:
   std::cout << "Bubna " << cards[random];
   for (int i = 0; i < 6; i++)
   {
    if (33 == yourcards[i])//if u have ACE 
    {
     std::cout << std::endl << " you have got kosirniy tus bubna";
     successresults++;
     break;
    }
   }
   break;
  case 2:
   std::cout << "Pika " << cards[random];
   for (int i = 0; i < 6; i++)
   {
    if (34 == yourcards[i])//if u have ACE 
    {
     std::cout << std::endl << " you have got kosirniy tus pika";
     successresults++;
     break;
    }
   }
   break;
  case 3:
   std::cout << "Xresta " << cards[random];
   for (int i = 0; i < 6; i++)
   {
    if (35 == yourcards[i])//if u have ACE 
    {
     std::cout << std::endl << " you have got kosirniy tus xresta";
     successresults++;
     break;
    }
   }
   break;
  default:
   std::cout << "Error" << std::endl;
   return 0;
   break;
  }
 }
 std::cout <<std::endl<< "Chance to get kozirniy tus =" << successresults / N; //counting average chance of taking kozir ace on N results
 return 0;
}