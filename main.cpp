//C++ program to calculate the GPA and CGPA of a student on 5 point scale

#include <iostream>
#include <stdlib.h>
using namespace std;



// function prototyping
void calculateGPA();
void calculateCGPA();

// C++ default function that runs the program

int main() {
    //variable to hold user's choice
    int input;

    //The program pops the menu on the screen for the user and prompt the user to select an operation
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
   // the user's choice is read and stored in the var input
    cin>>input;
    // using switch case to determine user's choice
    switch(input)
    {
        case 1:
                calculateGPA(); // if user  input is 1 call the calculateGPA function
                break;

        case 2:
                calculateCGPA(); // if user input is 2 call the calculateCGPA function
                break;

        case 3:
                exit(EXIT_SUCCESS); // if user input is 3 exit the program
                break;
        default:
            cout<<"You have entered wrong input.Try again!\n"<<endl; // display error message
            goto sub;
            break;
    }
}

 // calculate to calculate the GPA
void calculateGPA()
{
    // variable to store the number of courses
    int numofcourses;
    cout<<"-------------- GPA Calculating -----------------\n"<<endl;
    cout<<" How many courses do you want to calculate? : ";
    cin>>numofcourses; // read number of courses from the user and store it in the var numofcourses

    // Array to store the credit of courses
    float credit [numofcourses];
    // Array to store the GP of courses
    float GP [numofcourses];
    cout<<endl;

    //get courses details from the user and store in the array GP
    for(int i=0;i<numofcourses;i++)
    {
        cout<<"Enter the credit for the subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the G.P of the subject "<<i+1<<": ";
        cin>>GP[i];
        cout<<"-----------------------------------\n\n"<<endl;
    }
    // variable to store the sum of total points
    float sum=0;
    // variable to store the point for each course
    float tot;

    // computing the total points
    for(int j=0;j<numofcourses;j++)
    {
        tot=credit[j]*GP[j];
        sum=sum+tot;
    }
    // computing the total credit
    float totCr=0;
    for(int k=0;k<numofcourses;k++)
    {
        totCr=totCr+credit[k];
    }

    cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl; //computing the GPA and outputting the GPA

// Restart the menu again
// Read the user's choice

    sub:
    int inmenu; // variable to store the user's choice
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu; // read and store user's choice

    // using switch case to determine user's choice
    switch(inmenu)
    {
        case 1:
                calculateGPA(); // if user  input is 1 call the calculateGPA function
                break;
        case 2:
                main(); // if user input is 2 call the main function
                break;
        case 3:
                exit(EXIT_SUCCESS); // if user input is 3 exit the program

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl; // display error message
              goto sub;
    }
}
// function to calculate the CPGA
void calculateCGPA()
{
    // variable to store the number of semester
    int numofsem;
    // the user is prompted to input the number of semesters he wants to compute
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<"How many semester results do you want compute? :";
    cin>>numofsem;
    cout<<"\n\n"<<endl;
    float semrs[numofsem];

    // store the GPs in array semrs
    for(int i=0;i<numofsem;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semrs[i];
        cout<<"\n"<<endl;
    }
    // variable to store sum of GPA obtained in all the semesters
    float semtot=0;
    // computing the sum
    for(int j=0;j<numofsem;j++)
    {
        semtot=semtot+semrs[j];
    }
    // compute and output the CGPA
    cout<<"******** Your CGPA is "<<semtot/numofsem<<" **********"<<endl;

//Restart the menu again
// Read the user's choice
    sub:
    int inmenu; // variable to hold the user's choice
    // Display the menu
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu; // read and store user's choice in the var inmenu

    // using switch case to determine user's choice
    switch(inmenu)
    {
        case 1:
                calculateCGPA(); // if user  input is 1 call the calculateCGPA function
                break;
        case 2:
                main(); // if user  input is 2 call the main function
                break;
        case 3:
                exit(EXIT_SUCCESS); //  if user  input is 3 exit the program

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl; // Display error message
              goto sub;
    }

}

// end of the program
