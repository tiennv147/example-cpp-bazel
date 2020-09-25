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
    std::cout << "auto create" << val;
}

int main() {
  std::string param{"hehe"};
  std::string issuer{"alobaba"};
  acceptStringView(getString());
}