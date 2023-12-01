#include <iostream>
#include <cstdlib> 
#include <string> 

using namespace std;

class Game {
public:
    string password="Codsoft";
    string pass;
    
    void display(const string& name, const string& language, const string& company, const string& task) 
    {
        cout<<"-->Name: "<<name<<endl;
        cout<<"-->Language: "<<language<<endl;
        cout<<"-->Internship at: "<<company<<endl;
        cout<<"-->Task: "<<task<<endl;
    }

    void access() 
    {
        cout<<"\t\t\tIn order to access the game, you will have to enter the right password"<<endl;

        do {
            cout << "\n-->Enter the Password: ";
            cin >> pass;
            cout<<"-->The password that you entered was "<<pass<<endl;
            
            if(password!=pass)
            {
                cout<<"-->The provided password was invalid!! Try again...."<<endl;
            }

            if (pass == password) 
            {
                cout<<"-->The password was a match !! Login Successful..."<<endl;
                break;
            }

        } while (pass!=password);
    }

    void play() 
    {
        int secretnum = rand() % 100 + 1;

        cout<<"\n\t\t\t\t\t--Welcome to the Guess the Number Game!--"<<endl;
        cout<<"\n-->I have selected a number between 1 and 100. Guess it!"<<endl;

        int guess;
        int attempts = 0;

        do {
            cout<<"-->Your guess: ";
            cin>>guess;
            attempts++;

            if (guess<secretnum) 
            {
                cout<<"[Too low! Try again]"<<endl;
            } 
            else if (guess > secretnum)
            {
                cout<<"[Too high! Try again]"<<endl;
            } 
            else 
            {
                cout<<"-->Congratulations! You guessed the number "<<secretnum<<" in "<<attempts<<" attempts."<<endl;
            }

        } while(guess != secretnum);
    }
};

int main() 
{
    Game go;
    go.display("Sumedh", "C++", "Codsoft", "Task 1");
    go.access(); 
    go.play();   

    return 0;
}


