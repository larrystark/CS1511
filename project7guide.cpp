#include <iostream>
#include <string>
#include "bag.h"
using namespace std;

int main()
{
  // Declarations
  Bag groceries; // default ctor
  string item;
  // test add items
  cout << "*** TEST 1 add() \n";
  groceries.add("milk");
  groceries.add("meat");
  groceries.add("carrots");
  groceries.add("fish");

  // test display()
  cout << "*** TEST 2 display()\n";
  groceries.display();

  // test remove()
  cout << "*** TEST 3 remove()\n";
  groceries.remove("carrots");

  groceries.display();

  // test clear()
  cout << "*** TEST 4 clear()\n";
  groceries.clear();

  groceries.display();

  // test isEmpty()
  cout << "*** TEST 5 isEmpty()\n";
  if (groceries.isEmpty())
    cout << "Bag is empty\n";
  else
    cout << "Bag is not empty\n";

  // TEST add() boolean return
  cout << "*** TEST 6 add() boolean return\n";
  cout << "Enter an item or 'quit': ";
  getline(cin, item);
  while (item != "quit")
  {
    if (!groceries.add(item))
      cout << "ERROR - bag is full!\n";
    cout << "Enter an item or 'quit': ";
    getline(cin, item);
  }

  groceries.display();

  // TEST contains()
  cout << "*** TEST 7 contains()\n";
  cout << "Enter an item to search for: ";
  cin >> item;
  if (groceries.contains(item))
    cout << item << " found\n";
  else
    cout << item << " not found\n";

  cout << "\nAdding two more of " << item << " to the list\n";
  groceries.add(item);
  groceries.add(item);

  groceries.display();

  // test of getfrequency Of()
  cout << "*** TEST 8 getFrequencyOf()\n";
  cout << item << " is in the list " << groceries.getFrequencyOf(item) << " times\n";

  cout << "\n\n****** TEST COMPLETE ******\n";
}
