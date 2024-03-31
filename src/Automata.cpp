#include "Automata.h"
#include <iostream>
#include <map>
#include <vector>
using namespace std;
Automata::Automata() {
    cash = 0;
    state = States::Off;
};
void Automata::On() {
    if (state == States::Off) state = States::Wait;
}
void Automata::Off() {
    state = States::Off;
}
void Automata::coin(int Cash) {
    cash=Cash;
    if (state = States::Wait) state = Accept;
}
void Automata::etMenu() {
}
States Automata::getState() {
    return state;
}
void Automata::choice(string Drink) {
    for( int i=0;i<menu.size();i++)
    {
        if (Drink == menu[i])
        {
            if (state == States::Accept) { state = States::Check;}
            index = i;
        }
    }
}
void Automata::check() {
    if (prices[index] <= cash && state == States::Check) { state = States::Cook;}
}
float Automata::cook() {
    if(state == States::Cook)
    {
            return cash-prices[index];
    }
    return 0;
}
string Automata::finish() {
    state = States::Wait;
    return menu[index];
}
