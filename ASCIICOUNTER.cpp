#include <iostream>
#include <vector>

int main(){
  int sum = 0;
  int Fery[5] = {'a', 'e', 'i', 'o', 'u'};
  for ( int i = 0; i < 5; i++){
    std::cout << "Number Of Item: " << i << "\n";
    std::cout << "Item: " << Fery[i] << "\n";
    if (Fery[i] < 100 || Fery[i] > 110) {
      sum = sum + 1;
    }
  }
 std:: cout << "Number Of Letters That Aint Between 100-110 (ASCI): " << sum;
  

}
