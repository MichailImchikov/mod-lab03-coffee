// Copyright 2024 Micha
#ifndef INCLUDE_AUTOMATA_H_
#define INCLUDE_AUTOMATA_H_
#include <vector>
#include <iostream>
#include <string>
//using namespace std;
enum States{Off, Wait, Accept, Check, Cook, Extradition};
class Automata{
 public:
Automata();
void On();
void Off();
void coin(int);
void etMenu();
States getState();
void choice(std::string);
void check();
float cook();
std::string finish();
 private:
float cash;
std::vector<std::string> menu{"sok", "vino", "kofe"};
std::vector<float> prices{15, 20 , 45};
States state;
int index;
};

#endif  // INCLUDE_AUTOMATA_H_
