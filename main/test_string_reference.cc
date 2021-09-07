#include <iostream>
#include <string>

class DataSource {
  public:
    DataSource() {
      value_ = "hehe";
    }

    inline const std::string& inline_string() const {
      return value_;
    }

    void inline_string_address() {
        std::cout << "inline_string_address: " << &value_ << "\n";
    }

  private:
    std::string value_;
};

std::string read(const DataSource& source) {
    std::string data;
    data = source.inline_string();
    return data;
}

int main() {
  DataSource source;
  auto& value_ref = source.inline_string();
  auto value_read = read(source);
  source.inline_string_address();
  std::cout << "value_ref_address: " << &value_ref << "\n";
  std::cout << "value_read_address: " << &value_read << "\n";
}