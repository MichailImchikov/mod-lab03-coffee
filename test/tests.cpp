// Copyright 2022 GHA Test Team

#include <gtest/gtest.h>
#include "Automata.h"
class AutomataTest : public testing::Test {
 protected:
    Automata vendingMachine;
};
TEST(AutomataTest, TurnOn) 
{
    Automata automata;
    automata.On();
    EXPECT_EQ(Wait, automata.getState());
}
TEST(AutomataTest, TurnOf) 
{
    Automata automata;
    automata.Off();
    EXPECT_EQ(Wait, automata.getState());
}
TEST(AutomataTest, Koffi) 
{
    Automata automata=Automata();
    automata.On();
    automata.coin(20);
    automata.choice("vino");
    automata.check();
    automata.cook();
    EXPECT_EQ(Cook, automate.getState());
}
TEST(AutomataTest, Koffi2) 
{
    Automata automata=Automata();
    automata.On();
    automata.coin(20);
    automata.choice("vino");
    automata.check();
    automata.cook();
    EXPECT_EQ(0,automata.cook());
}
TEST(AutomataTest, Koffi3) 
{
    Automata automata=Automata();
    automata.On();
    automata.coin(20);
    automata.choice("vino");
    automata.check();
    automata.cook();
    automata.finish();
    EXPECT_EQ(Wait, automate.getState());
}
TEST(AutomataTest, Koffi4) 
{
    Automata automata=Automata();
    automata.On();
    automata.coin(30);
    automata.choice("vino");
    automata.check();
    automata.cook();
    EXPECT_EQ(10,automata.cook());
}
TEST(AutomataTest, Koffi4) 
{
    Automata automata=Automata();
    automata.On();
    automata.coin(30);
    automata.choice("vino");
    automata.check();
    automata.cook();
    automata.Off();
    EXPECT_EQ(Off,automate.getState());
}
TEST(AutomataTest, Koffi5) 
{
    Automata automata=Automata();
    automata.On();     
    automata.Off();
    automata.coin(30);
    automata.choice("vino");
    automata.check();
    automata.cook();
    EXPECT_EQ(Off,automate.getState());
}
TEST(AutomataTest, Koffi6) 
{
    Automata automata=Automata();
    automata.On();
    automata.coin(20);
    automata.choice("vino");
    EXPECT_EQ(Check, automate.getState());
}
TEST(AutomataTest, Koffi7) 
{
    Automata automata=Automata();
    automata.On();
    automata.coin(20);
    automata.choice("vino");
    automata.check();
    automata.cook();
    EXPECT_EQ(Cook, automate.getState());
}
