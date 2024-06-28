#include <iostream>
#include <random>
#include <string>

using namespace std;

void greeting() {
  cout << "Who are you?" << endl;
  string user_name;
  cin >> user_name;
  cout << "Hello, " << user_name << "!" << endl;
}

int main() {
  int round_num = 3;
  int heads_total = 0;
  int tails_total = 0;
  random_device seed;
  mt19937 engine(seed());

  greeting();

  cout << "Tossing a coin..." << endl;
  for (int i = 0; i < round_num; i++) {
    bool isHeads = (engine() % 2);
    string result;
    int round = i + 1;

    if (isHeads) {
      heads_total++;
      result = "Heads";
    } else {
      tails_total++;
      result = "Tails";
    }

    cout << "Round " << round << ": " << result << endl;
  }
  cout << "Heads: " << heads_total << ", " << "Tails: " << tails_total << endl;
}