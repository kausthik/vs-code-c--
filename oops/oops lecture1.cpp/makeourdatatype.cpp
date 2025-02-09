#include<iostream> 
#include<string>   
using namespace std;

// Define a player class
class player {
public:
    int score;      // Public member variable to store player's score
    float health;   // Public member variable to store player's health
    string name;    // Public member variable to store player's name

    // Member function to display the player's health
    void showhealth() {
        cout << "The health is: " << health << endl;
    }
};

int main() {
    player players[10]; // Create an array of 10 player objects

    // Loop to input data for 2 players (can be adjusted to desired number)
    for (int i = 0; i < 2; i++) {
        cout << "Enter score for player " << i + 1 << ": ";
        cin >> players[i].score;
        cout << "Enter health for player " << i + 1 << ": ";
        cin >> players[i].health;
        cout << "Enter name for player " << i + 1 << ": ";
        cin >> players[i].name;
    }

    // Display health for the first player
    players[0].showhealth();

    return 0; // Return 0 to indicate successful execution
}
