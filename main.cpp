#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:Microwave
//  action 1:Defrost
microwave.defrost();
//  action 2:Popcorn mode
microwave.popcornMode();
//  action 3:Heat food
microwave.heatFood();

//  2)
//  Noun:Computer
//  action 1:Boot up
computer.bootUp();
//  action 2:Shut down
computer.shutDown();
//  action 3:Restart
computer.restart();

//  3)
//  Noun: Label Maker
//  action 1:Print out label
labelMaker.printOutLabel();
//  action 2:Cut label
labelMaker.cutLabel();
//  action 3:Show low battery message
labelMaker.showLowBatteryMessage();

//  4)
//  Noun:My Cat
//  action 1:Meow
myCat.meow();
//  action 2:Ask for food
myCat.askForFood();
//  action 3:know over object on table
myCat.knockOverObjectOnTable();

//  5)
//  Noun:Cd Player
//  action 1:Play song
cdPlayer.playSong();
//  action 2:Pause song
cdPlayer.pauseSong();
//  action 3:Play next song
cdPlayer.playNextSong();

//  6)
//  Noun: Vending Machine
//  action 1:Dispense Item
vendingMachine.dispenseItem();
//  action 2:Take Money
vendingMachine.takeMoney();
//  action 3:Show insufficient funds message
vendingMachine.showInsufficientFundsMessage();

//  7)
//  Noun:TV
//  action 1:Power on
tv.powerOn();
//  action 2:Change channel
tv.changeChannel();
//  action 3:Switch input
tv.switchInput();

//  8)
//  Noun:Car
//  action 1:honk
car.honk();
//  action 2:turn blinker on
car.turnBlinkerOn();
//  action 3:reverse
car.reverse();

//  9)
//  Noun: Sun
//  action 1:rise
sun.rise();
//  action 2:shine
sun.shine();
//  action 3:set
sun.set();

//  10)
//  Noun:Plant
//  action 1:Photosynthesize
plant.photosynthesize();
//  action 2:Grow
plant.grow();
//  action 3:Consume water
plant.consumeWater();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
