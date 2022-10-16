#include <iostream>
#include <vector>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    int x;
    int counter10=0;
    vector<int>wek;
    cout << "Size of the vector after definition: " << wek.size() << endl;
    cout << "Enter size of your vector: ";
    cin >> x;
    wek.resize(x);
    cout << "Size of the vector after resize command(funtion): " << wek.size() << endl;
    for(int i=0;i<(wek.size()/2);i++)
    {
        cout << "Podaj element " << i << ": ";
        cin >> wek[i];
    }
    srand(time(NULL));
    for(int i=(wek.size()/2);i<wek.size();i++)
    {
        wek[i] = rand()%100+1;
    }
    cout << "Size of the vector after inputting our numbers: " << wek.size() << endl;
        wek.push_back(101);
        wek.push_back(102);
        wek.push_back(103);
    cout << "Pushbacks are happening here!" << endl;
    cout << "Size of the vector after resize&pushbacks: " << wek.size() << endl;
    for(int i=0;i<wek.size();i++)
    {
        cout << "Element numer " << i << ": " << wek[i] << endl;
        if(wek[i]%2==0)
        {
            counter10++;
        }

    }
    cout << "FINAL SIZE: " << wek.size() << endl;
    cout << "Parzyste: " << counter10 << endl;
    cout << "N-parzyste: " << wek.size() - counter10 << endl;
    wek.clear();
    cout << "after clear SIZE: " << wek.size() << endl;
    return 0;

}
