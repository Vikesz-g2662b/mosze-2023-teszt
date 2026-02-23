#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: Hibás változónév, N_ELEMENTS helyett NELEMENTS van írva
    int *b = new int[NELEMENTS]; 

    // HIBA: Karakterkonstanst (' ') használsz szövegliterál (" ") helyett, és hiányzik a pontosvessző a végéről
    std::cout << '1-100 ertekek duplazasa' 

    // HIBA: Hiányzik a ciklusfeltétel és a növekmény
    for (int i = 0;) 
    {
        b[i] = i * 2;
    }

    // HIBA: A ciklusfeltétel hibás (i értéke 0, így a feltétel rögtön hamis), a ciklus nem fut le
    for (int i = 0; i; i++) 
    {
        // HIBA: Hiányzik a kiírandó érték és a lezáró pontosvessző
        std::cout << "Ertek:" 
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    // HIBA: Az atlag változó nincs inicializálva (0-ra kellene állítani)
    int atlag; 

    // HIBA: Pontosvessző helyett vessző van a ciklusfejben
    for (int i = 0; i < N_ELEMENTS, i++) 
    {
        // HIBA: Hiányzik a lezáró pontosvessző
        atlag += b[i] 
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // HIBA: A dinamikusan foglalt memória (new int[]) nincs felszabadítva (delete[] b)
    return 0;
}