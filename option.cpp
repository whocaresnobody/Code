#include <iostream>
// #include <string>

struct Option {
        Option(const std::string &nam, 
               const std::string &val, 
               const std::string &desc,
               const std::string &values = "");
        Option(const std::string &nam);

        Option() {}
        std::string name;
        std::string value;
        std::string default_value;
        std::string description;
        std::vector<std::string> acceptable_values;
        bool set;
    };

    int main(){
        Option a;
        a.name="11";
        std::cout<<a.name<<std::endl;
        std::string name1;
        name1="22";
        Option b(name1);
        // std::cout<<b.name<<std::endl;
    }