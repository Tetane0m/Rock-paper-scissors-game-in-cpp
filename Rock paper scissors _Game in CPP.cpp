#include <iostream>
#include <ctime>

using namespace std;

// Function to display the chosen option (Rock, Paper, Scissors)
void show_choice(char choice);
// Function to get the user's choice
char user_choice();
// Function to get the computer's choice
char computer_choice();
// Function to determine and display the winner
void showWinner(char player, char computer);

int main() {
    char player;
    char computer;
    int again;

    do {
        cin.clear();
        
        cout << "Rock, Paper, Scissors Game!\n";
        cout << "*****************************\n";

        // Get user choice and display it
        player = user_choice();
        cout << "Your Choice Is: ";
        show_choice(player);

        // Get computer choice and display it
        computer = computer_choice();
        cout << "Computer Choice Is: ";
        show_choice(computer);

        // Determine and display the winner
        showWinner(player, computer);
        cout << "*****************************\n";
        cout << "*****************************\n\n";

        // Ask if the user wants to play again
        cout << "Again?\n1 _ yes\n2 _ no\n---> ";
        cin >> again;
    } while (again == 1);
    cout << "Game over!!\nThank you for playing.\nProject link: https://github.com/Tetane0m/Rock-paper-scissors-game-in-cpp.git";
}

// Function to display the chosen option
void show_choice(char choice) {
    switch (choice) {
        case 'r':
            cout << "Rock\n";
            break;
        case 'p':
            cout << "Paper\n";
            break;
        case 's':
            cout << "Scissors\n";
            break;
    }
}

// Function to get the user's choice
char user_choice() {
    char user_c;
    do {
        cout << "Select one of these:\n";
        cout << "r _ rock\n";
        cout << "p _ paper\n";
        cout << "s _ scissors\n---> ";
        cin >> user_c;
    } while (user_c != 'r' && user_c != 'p' && user_c != 's');
    return user_c;

}

// Function to get the computer's choice
char computer_choice() {
    srand(time(0));
    int rand_number = (rand() % 3) + 1;
    switch (rand_number) {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}

// Function to determine and display the winner
void showWinner(char player, char computer) {
    switch (player) {
        case 'r':
            if (computer == 'r') {
                cout << "It's a Tie 🤔!\n";
            } else if (computer == 'p') {
                cout << "You Lose 🥲!\n";
            } else {
                cout << "You Win 😀!\n";
            }
            break;
        case 'p':
            if (computer == 'p') {
                cout << "It's a Tie 🤔!\n";
            } else if (computer == 's') {
                cout << "You Lose 🥲!\n";
            } else {
                cout << "You Win 😀!\n";
            }
            break;
        case 's':
            if (computer == 's') {
                cout << "It's a Tie 🤔!\n";
            } else if (computer == 'r') {
                cout << "You Lose 🥲!\n";
            } else {
                cout << "You Win 😀!\n";
            }
            break;
    }
}
