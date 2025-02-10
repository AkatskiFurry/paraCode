
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
        out << str.data;
        return out;
    }
    friend std::istream& operator>>(std::istream& in, const String& str) {
        in >> str.data;
        return in;
    }
    char& operator[](int index) { return data[index]; };
    char* getData() { return data; };
    friend bool operator == (const String& str1, const String& str2);
};


bool operator==(const String& str1, const String& str2) {
    if (str1.lenght != str2.lenght)
        return false;
    if (str1.lenght == 0)
        return true;
    for (int i{}; i < str1.lenght; i++)
        if (str1.data[i] != str2.data[i])
            return false;
    return true;
}
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

String::String(const String& str) : String(str.data) {
}
int main()
{
    std::string str{ "qwerty" };

    std::string s1{};
    std::string s2{ s1 };


    std::cout << "Hello World!\n";
}
