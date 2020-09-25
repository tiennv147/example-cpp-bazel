#include <iostream>
#include <map>
#include <string>
#include <unordered_set>

#include "absl/strings/string_view.h"


std::string getString() {
    std::string param{"hehe"};
    return param;
}

void acceptStringView(absl::string_view val){
    std::cout << "show case: " << val << "\n";
}

int main() {
  std::string param{"hehe2"};
  std::string issuer{"alobaba"};
  acceptStringView(getString());

  std::cout << "show case 2: " << issuer;

}