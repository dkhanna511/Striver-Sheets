// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int age = 10;

//     if (age >=18){
//         cout << "You are an adult. "<<endl;
//     }
//     else {
//         cout<<"You are not an adult."<<endl;
//     }
// }



// Simplifying the codes with "else if" statements

// #include<iostream>
// using namespace std;

// int main(){

//     int marks = 54;

    
//     if(marks < 25){
//         cout<<"Grade: F"<<endl;
//     }
//     else if (marks >=25 && marks <=44){
//         cout<<"Grade : E" <<endl;
//     }
//     else if(marks >=45 && marks <=49){
//         cout <<"Grade : D"<<endl;
//     }
//     else if(marks >=50 && marks <=59){
//         cout<<"Grade : C"<<endl;
//     }
//     else if(marks >=60 && marks <=69){
//         cout<<"Grade : B"<<endl;
//     }
//     else if(marks >=70){
//         cout <<"Grade : A"<<endl;
//     }
//     else{
//         cout <<marks<<endl;
//     }

//     return 0;
// }



// Refactoring the above code with better readability

#include<iostream>
using namespace std;

int main(){
    int marks = 54;
    char grade;
    if (marks < 25) {
        grade = 'F';
    } else if (marks <= 44) {
        grade = 'E';
    } else if (marks <= 49) {
        grade = 'D';
    } else if (marks <= 59) {
        grade = 'C';
    } else if (marks <= 69) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'A';
    } else {
        grade = 'X'; // Use 'X' to indicate invalid marks
    }

    std::cout << "Grade: " << grade << std::endl;
    
    return 0;

}