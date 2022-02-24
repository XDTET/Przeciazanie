
#include <iostream>

using std::endl;

class Print {
private:
    int num1, num2;
public:
    Print(int n_num, int n_num2) : num1(n_num), num2(n_num2){}

    friend std::ostream& operator << (std::ostream& out, const Print& obiekt);
    friend std::istream& operator >> (std::istream& in, Print& obiekt);
};

std::ostream& operator << (std::ostream& out, const Print& obiekt)
{
    out << "Pierwsza liczba to: " << obiekt.num1 << endl;
    out << "Druga liczba to: " << obiekt.num2 << endl;

    return out;
}

std::istream &operator >> (std::istream &in, Print &obiekt)
{
    std::cout << "Nadpisz pierwszy argument: "<< std::endl;
    in >> obiekt.num1;

    std::cout << "Nadpisz drugi argument: " << std::endl;
    in >> obiekt.num2;

    return in;
}


int main()
{
    Print p1(2, 4);

    std::cout << p1;

    std::cin >> p1;

    std::cout << p1;
}

