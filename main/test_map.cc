#include <iostream>
#include <map>
#include <string>
#include <unordered_set>

struct ParamLocationSpec {
  std::unordered_set<std::string> specified_issuers_;
};

int main() {
  std::string param{"hehe"};
  std::string issuer{"alobaba"};

  std::map<std::string, ParamLocationSpec> param_locations_;

  auto &param_location_spec = param_locations_[param];
  param_location_spec.specified_issuers_.insert(issuer);

  for (const auto &elem : param_locations_[param].specified_issuers_) {
    std::cout << "auto create" << elem;
  }
}