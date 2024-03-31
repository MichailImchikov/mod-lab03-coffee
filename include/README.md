#include <iostream>
#include <map>
#include <vector>
using namespace std;
enum States
    {
        Off,
        Wait,
        Accept,
        Check,
        Cook,
        Extradition
    };
class Automata
{
public :
    Automata();
private :float cash;
        vector<string> menu{"sok","vino","kofe"};
        vector<float> prices{15,20,45};
        States state;
        int index;

public: 
    void On();

    void Off();

    void coin(int Cash);

    void etMenu(vector<string> Menu,vector<float> Prices);
    States getState();

    void choice(string Drink);

    void check();

    float cook();

    string finish();

};


