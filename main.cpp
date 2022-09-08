#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //int *b = new int[NELEMENTS]; - hibas index megnevezes
    //std::cout << '1-100 ertekek duplazasa' - hianyzik a ';' karakter
    /*for (int i = 0;) - függvény nem kapott eleg argumentumot
    {
        b[i] = i * 2;
    }*/
    /*for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    } - hianyzik a ';' karakter*/   
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    /*for (int i = 0; i < N_ELEMENTS, i++) - "," karakter nem megfelelo szintaxis
    {
        atlag += b[i]
    } - hianyzik a ';' karakter*/
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
