// Copyright 2024 Micha 
#ifndef INCLUDE_AUTOMATA_H_
#define INCLUDE_AUTOMATA_H_
#include <vector>
#include <iostream>
using namespace std;
enum States{ Off, Wait, Accept, Check, Cook, Extradition };
class Automata
{
 public:
Automata();
void On();
void Off();
void coin(int);
void etMenu();
States getState();
void choice(string);
void check();
float cook();
string finish();
 private:
float cash;
vector<string> menu{"sok","vino","kofe"};
vector<float> prices{15,20,45};
States state;
int index;
};

#endif  // INCLUDE_AUTOMATA_H_
