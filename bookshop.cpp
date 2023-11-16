#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// +----------------------------------+
// |	         Classes Made 		  |
// +----------------------------------+

class Books {
  int id; //Primary Key
  std::string name;
  std::string author;
  bool finished;
  int rating;
public:
  void add();
  void update();
  void display();
  void remove();
  void search();
};

// +----------------------------------+
// |		Functions	  	  |
// +----------------------------------+

// ------------
// class Books
// ------------

void Books::add() {
  using namespace std;
  cout << "Book Name: ";
  cin >> name;
  cout << "Author: ";
  cin >> author;
  cout << "Finished? ";
  cin >> finished;
  if (finished == false) {
    cout << "Rating?"
    
  };
}