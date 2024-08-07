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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:       pirate
//  action 1:   the pirate drinks rum
pirate.drinkRum();
//  action 2:   the pirate loots a ship
pirate.lootShip();
//  action 3:   the pirate tells a tale
pirate.tellTale();


//  2)
//  Noun:       campfire
//  action 1:   the campfire pops
campfire.pop();
//  action 2:   the campfire smokes
campfire.smoke();
//  action 3:   the campfire dies out
campfire.dieOut();


//  3)
//  Noun:       printer
//  action 1:   the printer jams
printer.jam();
//  action 2:   the printer alerts it needs more ink
printer.lowInkAlert();
//  action 3:   the printer sucks in paper
printer.drawPaper();


//  4)
//  Noun:       microwave
//  action 1:   the microwave heats up
microwave.heatUp();
//  action 2:   the microwave beeps when it's done
microwave.beep();
//  action 3:   the microwave rotates the tray
microwave.rotateTray();


//  5)
//  Noun:       haunted house
//  action 1:   the haunted house rattles
hauntedHouse.rattle();
//  action 2:   the haunted house locks it's doors
hauntedHouse.lockDoors();
//  action 3:   the haunted house turns on it's victrola
hauntedHouse.turnVictrola();


//  6)
//  Noun:       airplane
//  action 1:   the airplane takes off
airplane.takeOff();
//  action 2:   the airplane serves dinner
airplane.serveDinner();
//  action 3:   the airplane explodes
airplane.explode();

//  7)
//  Noun:       baked potato
//  action 1:   the baked potato steams
bakedPotato.steam();
//  action 2:   the baked potato leaks butter
bakedPotato.leakButter();
//  action 3:   the baked potato also explodes
bakedPotato.explode();


//  8)
//  Noun:       fighter jet
//  action 1:   the fighter jet takes off
fighterJet.takeOff();
//  action 2:   the fighter jet speeds up
fighterJet.speedUp();
//  action 3:   the fighter jet fires missiles
fighterJet.fireMissiles();


//  9)
//  Noun:       whaling ship
//  action 1:   the whaling ship sets sail
whalingShip.setSail();
//  action 2:   the whaling ship launches it's whaleboats
whalingShip.launchWhaleBoats();
//  action 3:   the whaling ship processes a whale
whalingShip.processWhale();


//  10)
//  Noun:       long jumper
//  action 1:   the long jumper runs
longJumper.run();
//  action 2:   the long jumper leaps
longJumper.leap();
//  action 3:   the long jumper also explodes
longJumper.explode();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
