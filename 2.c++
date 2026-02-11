#include<iostream> // header file 
using namespace std ;// function or objects ko grp krne k lie ( cin , count )
int main (){
    int n , rev= 0 , rem ; // variable
    cout << "enter a number :";// for output 
    cin >> n;// input lena 
    while (n != 0)// jb tk nmbr 0 k equal n ho
    {
        rem = n % 10; //last digit cal
        rev = rev *10 + rem ; // rev order
        n = n / 10 ; //removing last dig



    }
    cout << " reverse ordeer :"<< rev ; // output
    return 0;
}

