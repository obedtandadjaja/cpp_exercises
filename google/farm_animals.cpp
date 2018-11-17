// farm_animals: Obed Tandadjaja
// Description: A farmer buys 100 animals for $100, how many of each animal did he buy?
//              Horses cost $10, pigs cost $3, and rabbits are only $0.50

#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, int> initialize_animals_price_map() {
  map<string, int> animals_price_map;
  animals_price_map["horse"] = 1000;
  animals_price_map["pig"] = 300;
  animals_price_map["rabbit"] = 50;

  return animals_price_map;
}

map<string, int> initialize_animals_purchased_map() {
  map<string, int> animals_purchased_map;
  animals_purchased_map["horse"] = 0;
  animals_purchased_map["pig"] = 0;
  animals_purchased_map["rabbit"] = 0;

  return animals_purchased_map;
}

map<string, int> get_purchased_animals(
  map<string, int> animals_price,
  map<string, int> animals_purchased,
  int remaining_animals_count,
  int remaining_money_cents) {
  if(remaining_animals_count < 0) return NULL;
  if(remaining_money_cents < 0) return NULL;
  if(remaining_animals_count == 0 && remaining_money_cents == 0) return animals_purchased;

  map<string, int>::iterator it;
  for(it = animals_price.begin(); it != animals_price.end(); it++) {
    animals_purchased[it->first]++;
    result = get_purchased_animals(
      animals_price,
      animals_purchased,
      remaining_animals_count - 1,
      remaining_money_cents - animals_price[it->first]
    );
    if(result) return result;
    animals_purchased[it->first]--;
  }

  return NULL;
}

int main() {
  int total_animals_count = 100;
  int total_money_cents = 10000;
  map<string, int> animals_price = initialize_animals_price_map();
  map<string, int> animals_purchased = initialize_animals_purchased_map();

  // printing the contents of the animals price map
  cout << "Animals price" << endl;
  map<string, int>::iterator it;
  for(it = animals_price.begin(); it != animals_price.end(); it++) {
    cout << it->first << ':' << it->second << endl;
  }
  cout << endl;

  // printing the contents of the animals purchased
  animals_purchased = get_purchased_animals(animals_price, animals_purchased, total_animals_count, total_money_cents);
  cout << "Animals purchased" << endl;
  for(it = animals_purchased.begin(); it != animals_purchased.end(); it++) {
    cout << it->first << ':' << it->second << endl;
  }
  cout << endl;
}
