#include <iostream>
#include "Automata.h"
int main()
{
    Automata automata=Automata();
    automata.On();
    automata.coin(20);
    automata.choice("vino");
    automata.check();
}
