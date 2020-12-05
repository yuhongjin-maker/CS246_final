#ifndef _DICE_H_
#define _DICE_H_
#include "info.h"

class Dice {
    public:

    //field
    DICE_TYPE diceType;

    //method
    virtual int roll();

};

class loadedDice : public Dice {
    public:

    // field
    int inputNum;

    //method
    int roll() override;
};

class fairDice : public Dice {
    public:

    //method
    int roll() override;
};

#endif
