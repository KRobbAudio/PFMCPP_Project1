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
//  Noun: dog
//  action 1:bark
dog.bark();
//  action 2:run
dog.run();
//  action 3:jump
dog.jump();

//  2)
//  Noun:student
//  action 1:studies
student.study();
//  action 2:reads
student.read();
//  action 3:stresses
student.stress();

//  3)
//  Noun:professor
//  action 1:lectures
professor.lecture();
//  action 2:grades
professor.grade();
//  action 3:researches
professor.research();

//  4)
//  Noun:book
//  action 1:opens
book.open();
//  action 2:closes
book.close();
//  action 3:flips pages
book.flipPages();

//  5)
//  Noun:sandwich
//  action 1:make
sandwich.make();
//  action 2:eat
sandwich.eat();
//  action 3:cut
sandwich.cut();

//  6)
//  Noun:water
//  action 1:drink
water.drink():
//  action 2:pour
water.pour();
//  action 3:empty
water.empty();

//  7)
//  Noun:window
//  action 1:open
window.open();
//  action 2:close
window.close();
//  action 3:wash
window.wash();

//  8)
//  Noun:lunch
//  action 1:cook
lunch.cook():
//  action 2:eat
lunch.eat();
//  action 3:break for
lunch.breakFor();

//  9)
//  Noun:leg
//  action 1:walk with
leg.WalkWith();
//  action 2:kick with
leg.KickWith():
//  action 3:bends
leg.bend();

//  10)
//  Noun:paper
//  action 1:shuffles
paper.shuffle();
//  action 2:folds
paper.fold();
//  action 3:writes on
paper.writeOn();


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
