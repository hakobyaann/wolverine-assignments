#include <iostream>
#include <map>

enum class Color{Green, White, Yellow};

void toString(Color);
Color toEnum(std::string);

int main()
{
    toString(Color::White);
    int result = (int)toEnum("Green");
    std::cout << result << std::endl;
}

void toString(Color c)
{
    std::map<Color, std::string> M;
    M[Color::Green] = "Green";
    M[Color::White] = "White";
    M[Color::Yellow] = "Yellow";
    std::cout << M[c] << std::endl;
}

Color toEnum(std::string str)
{
    std::map<std::string, Color> M;
    M["Green"] = Color::Green;
    M["White"] = Color::White;
    M["Yellow"] = Color::Yellow;
    return M[str];
}
