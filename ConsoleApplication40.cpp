
#include <iostream>
class String {
    int lenght{};
    int capacity{};
    char* data{};
public:
    String() = default;
    String(const char* str);
    String(const String& str);

    friend std::ostream& operator<<(std::ostream& out, const String& str) {
        out << str;
        return out;
    }
    friend std::istream& operator>>(std::istream& in, const String& str) {
        in >> str;
        return in;
    }
    char& operator[](int index) { return data[index]; };
    char* getData() { return data; };
};
String::String() : lenght{ 0 }, capacity{ 0 }, data{ nullptr } {

}
String::String(const char* str) {
    lenght = strlen(str);
    capacity = lenght;
    data = new char[capacity + 1];

    for (int i{}; i < lenght; ++i) {
        data[i] = str[i];
    }
    data[lenght] = '\0';
}

String::String(const String& str) {
    lenght = strlen(str);
    capacity = lenght;
    data = new char[capacity + 1];

    for (int i{}; i < lenght; ++i) {
        data[i] = str[i];
    }
    data[lenght] = '\0';
}
int main()
{
    std::string str{"qwerty"};
    std::string s1{};


    std::cout << "Hello World!\n";
}
