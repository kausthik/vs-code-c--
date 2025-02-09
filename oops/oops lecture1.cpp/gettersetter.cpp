#include<iostream>  
using namespace std;

// Define the player class
class player {
private:
    int score;     // Private member variable to store the player's score
    float health;  // Private member variable to store the player's health

public:
    // Setter for score
    void setscore(int s) {
        cout << "Someone changed the score" << endl;
        score = s; // Assign the passed value to the score variable
    }

    // Setter for health
    void sethealth(float h) {
        health = h; // Assign the passed value to the health variable
    }

    // Getter for score
    int getscore() {
        return score; // Return the value of the score variable
    }

    // Getter for health
    float gethealth() {
        return health; // Return the value of the health variable
    }
};

int main() {
    player kaushal;     // Create an instance of the player class
    kaushal.setscore(8); // Set the score for the player instance
    cout << kaushal.getscore() << endl; // Get and print the score of the player instance

    kaushal.sethealth(95.5); // Set the health for the player instance
    cout << kaushal.gethealth() << endl; // Get and print the health of the player instance

    return 0; // Return 0 to indicate successful execution
}
