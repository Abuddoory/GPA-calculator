#include <iostream>
#include <stdlib.h>
using namespace std;

//A C++ program that calculates CGPA and GPA of a student on 5 point scale

// function prototyping
void calculateGPA();
void calculateCGPA();

// C++ default function that runs the program

int main() {
    //this variable holds the user's choice
    int input;

    //The program pops the menu on the screen for the user to select an operation
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                    GPA & CGPA Calculator         "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    sub:
    cout<<"Enter your choice: ";
   // the users choice is read
    cin>>input;
    // switch case to determine user's choice
    switch(input)
    {
        case 1:
                calculateGPA();
                break;

        case 2:
                calculateCGPA();
                break;

        case 3:
                exit(EXIT_SUCCESS);
                break;
        default:
            cout<<"You have entered wrong input.Try again!\n"<<endl;
            goto sub;
            break;
    }
}

 // calculate the GPA
void calculateGPA()
{
    // variable to store the number of courses
    int q;
    cout<<"-------------- GPA Calculating -----------------\n"<<endl;
    cout<<" How many courses do you want to calculate? : ";
    cin>>q;

    // variable to store the course credit
    float credit [q];
    // variable to store the course G.P
    float GP [q];
    cout<<endl;

    //getting courses details from the user
    for(int i=0;i<q;i++)
    {
        cout<<"Enter the credit for the subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the G.P of the subject "<<i+1<<": ";
        cin>>GP[i];
        cout<<"-----------------------------------\n\n"<<endl;
    }
    // variable to store the total points
    float sum=0;
    // variable to store the point for each course
    float tot;

    // computing the total points
    for(int j=0;j<q;j++)
    {
        tot=credit[j]*GP[j];
        sum=sum+tot;
    }
    // computing the total credit
    float totCr=0;
    for(int k=0;k<q;k++)
    {
        totCr=totCr+credit[k];
    }

    cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl; //output the GPA

// Restart the menu
    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}
void calculateCGPA()
{
    // variable that store the number of semester
    int l;
    // the user is prompted to input the number of semesters he wants to compute
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<"How many semester results do you want compute? :";
    cin>>l;
    cout<<"\n\n"<<endl;
    float semrs[l];

    // storing the GPs in array semrs
    for(int i=0;i<l;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semrs[i];
        cout<<"\n"<<endl;
    }
    // variable that stores sum of all the semesters
    float semtot=0;
    // computing the sum
    for(int j=0;j<l;j++)
    {
        semtot=semtot+semrs[j];
    }
    // output the CGPA
    cout<<"******** Your CGPA is "<<semtot/l<<" **********"<<endl;

//restart the menu
    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateCGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }

}

