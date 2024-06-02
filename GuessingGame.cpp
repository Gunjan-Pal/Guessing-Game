#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"-----------------------------Welcome to the number Guessing game!----------------------------- \n";
    cout<<"This game is number guessing game! \n you have guess ta a number between 1 to 100. \n"
    "you will have limited choices, base on the level \n"
    "You chosse the your level. Good Luck! :)";
    while(true){
        cout<<"\n Enter the dificulty choice level :\n";
        cout<<"1 for easy!\t";
        cout<<"2 for medium!\t";
        cout<<"3 for difficult!\t";
        cout<<"0 for ending the game1\n";
        int difficultyChoice;
cout<<"Enter the number: ";
cin>>difficultyChoice;
srand(time(0));
int secretNumber=1+(rand()%100);
int Playerchoice;
if(difficultyChoice==1){
    cout<<"\n you have 10 choice for finding the"
    " secret number between 1 to 100.";
    int choicesLeft =10;
    for(int i=1;i<=10;i++){
        cout<<"\n\nEnter the number:";
        cin>>Playerchoice;
        if(Playerchoice== secretNumber){
            cout<<"Well Played! you won,"
            <<Playerchoice
            <<"is the secret number";
            cout<<"\nThanks for PLaying....";
            cout<<"PLay the game again with"
            "us!!\n\n";
            break;
        }
        else{
            cout<<"Nope,"<<Playerchoice<<"is not the right number\n";
            if(Playerchoice>secretNumber){
                cout<<"The secret number is"
                " smaller than the number"
                " you have chosen";
                }
        else{
            cout<<"The secret number is"
            " greater than the number"
            " you have chosen ";
        }
        choicesLeft--;
        cout<<choicesLeft<<"choice left.";
        if(choicesLeft==0){
            cout<<"you couldn't find the"
            " secret number ,it was"
            <<secretNumber<<"you lose!!\n\n";
            cout<<"Play the game again to"
            " win!!!\n\n";
        }}}}
        else if(difficultyChoice==2){
            cout<<"\n you have 7 choices for finding the"
            " secret number between 1 to 100.";
            int choicesLeft=7;
            for(int i=1;i<=7;i++){
                cout<<"\n\nEnter the number:";
                cin>>Playerchoice;
                if(Playerchoice==secretNumber){
                    cout<<"well Played! you won,"
                    <<Playerchoice<<"is the secret number";
                    cout<<"Play the game again with"
                    "us!!\n\n";
                    break;
                }
                else{
                    cout<<"Nope, "
                    <<Playerchoice<<" is not the right number\n";
                    if(Playerchoice>secretNumber){
                        cout<<"The secret number is"
                        " smaller than the number"
                        " you have chosen";
                    }
                    else{
                        cout<<"The secret number is"
                        " greater than the number"
                        " you have chosen";
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<"choicesLeft.";
                    if(choicesLeft==0){
                        cout<<"you couldn't find the"
                        " secret number, it was"<<secretNumber
                        <<", you lose!!\n\n";
                        cout<<"Play the game again to"
                        "Win !!!\n\n";
                    }
                }
            }
        }
        else if(difficultyChoice==3){
            cout<<"\n you have 5 choices for finding the "
            "secret number between 1 to 100.";
            int choicesLeft=5;
            for(int i=1;i<=5;i++){
                cout<<"\n\nEnter the number:";
                cin>>Playerchoice;
                if(Playerchoice==secretNumber){
                    cout<<"Well Played! you won,"
                    <<Playerchoice<<"is the secret number";
                    cout<<"\nThanks for Playing....";
                    cout<<"Play the game again with"
                    " us!!\n\n";
                    break;
                }
                else{
                    cout<<"Nope,"<<Playerchoice
                    <<" is not the right number\n";
                    if(Playerchoice>secretNumber){
                        cout<<"The secret number is"
                        " smaller than the number"
                        " you have chosen";
                    }
                    else{
                        cout<<"The secret number is"
                        " greater than the number"
                        " you have chosen";
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<"choicesLeft.";
                    if(choicesLeft==0){
                        cout<<"you couldn't fint the"
                         " secret number ,it was"
                        <<secretNumber
                    <<",you lose!!\n\n";
                    cout<<"Play the game again to"
                    " Win!!!\n\n";
                    }
                }
            }
        }
        else if(difficultyChoice==0){
            exit(0);
        }    
        else{
            cout<<"Wrong choice, Enter valid choice to"
            " Play the game!(0,1,2,3)";

        }
        }
        return 0;
        }