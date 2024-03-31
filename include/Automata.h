#include <vector>
#include <iostream>
using namespace std; 
enum States { Off, Wait, Accept, Check, Cook, Extradition }; 
class Automata 
{ 
public : 
Automata(); 
void On(); 
void Off(); 
void coin(int Cash); 
void etMenu(vector Menu,vector Prices); 
States getState(); 
void choice(string Drink); 
void check(); 
float cook(); 
string finish(); 
private :
float cash;
vector<string> menu{"sok","vino","kofe"};
vector<float> prices{15,20,45};
States state;
int index;
};
