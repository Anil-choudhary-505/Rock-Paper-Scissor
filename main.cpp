#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int main(){
    // Seed the random number generator
    srand(time(nullptr));

    // List of numbers
    vector<int> numbers = {1, 2, 3};

    // Generate random index to pick a number from the list
    int randomIndex = rand() % numbers.size();

    // Get the random number from the list
    int randomNumber = numbers[randomIndex];

    int userchoise, computerchoise = randomNumber;

    // User choise
    do{
        cout<<"Enter your choise (1 - Rock, 2-Paper, 3-Scissor):";
        cin>>userchoise;
    } while (userchoise < 1 || userchoise > 3);

    // Displaying user and computer choise for better experience
    cout<<"Your Chose: ";
    switch (userchoise){
    case 1:
        cout<<"Rock\t";
        break;
    case 2:
        cout<<"Paper\t";
        break;
    case 3:
        cout<<"Scissor\t";
        break;
    }
    cout<<"Computer Chose: ";
    switch (computerchoise){
    case 1:
        cout<<"Rock\t";
        break;
    case 2:
        cout<<"Paper\t";
        break;
    case 3:
        cout<<"Scissor\t";
        break;
    }

    // Selecting the winner
    if (userchoise == computerchoise){
        cout<<endl<<endl<<" \t\tTie!";
    }
    else if ((userchoise == 1 && computerchoise == 3) || (userchoise == 2 && computerchoise == 1) || (userchoise == 3 && computerchoise == 2)){
        cout<<endl<<endl<<" \t\tYou Win!";
    }
    else{
        cout<<endl<<endl<<" \t\tYou Lose!";
    }
    return 0;
}