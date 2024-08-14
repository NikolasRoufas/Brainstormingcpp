#include <iostream>

int main() {
  int year;
  std::cout << " Give Year As Input: ";
  std::cin >> year;
  if (year < 1000 || year > 9999){
      std::cout << "Invalid entry.\n";
  } else if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

    std::cout << year;
    std::cout << " falls on a leap year.\n";
    
  }  else {
    
    std::cout << year;
    std::cout << " is not a leap year.\n";
    
  }
  
  
}
// i dont even know what i created it works tho!
