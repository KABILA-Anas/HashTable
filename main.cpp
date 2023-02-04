#include <iostream>
#include <HashTable.h>
#include <../src/HashTable.cpp>

using namespace std;

int main()
{
    HashTable<int> CityPopulation;

    CityPopulation.addElement("Casablanca", 4370000);
    CityPopulation.addElement("Tangier", 947952);
    CityPopulation.addElement("Marrakech", 928850);
    CityPopulation.addElement("Rabat", 572717);
    CityPopulation.addElement("Agadir", 421844);
    CityPopulation.addElement("Mohammedia", 208612);

    string Ville;
    while(true)
    {
        cout << ".........................................................................................................." << endl;
        cout << "Entre une ville : ";
        cin >> Ville;
        if(CityPopulation.getElementValue(Ville) != -1)
            cout << "Le nombre de population pour " << Ville << " est : " << CityPopulation.getElementValue(Ville) << endl;
    }

    return 0;
}
