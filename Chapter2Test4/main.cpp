#include <iostream>
#include "constants.h"

double askUserForTowerHeight () {

    std::cout << "Enter the initial height of the tower in meters: ";

    int towerHeight;
    std::cin >> towerHeight;

    return towerHeight;
}

void currentBallHeight (double seconds, double height){

    height -= myConstants::earthGravity * (seconds * seconds) /2;

    if (height <= 0.0){
        std::cout << "At " <<  seconds << " seconds, the ball is on the ground." << std::endl;
    }
    else{


    std::cout << "At " <<  seconds << " seconds, the ball is at height: " <<
                 height << " meters. " << std::endl;
    }
}

int main()
{
    double x = askUserForTowerHeight();

    currentBallHeight(0, x);
    currentBallHeight(1, x);
    currentBallHeight(2, x);
    currentBallHeight(3, x);
    currentBallHeight(4, x);
    currentBallHeight(5, x);

    return 0;

}
