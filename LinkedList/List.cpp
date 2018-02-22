/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "List.h"
#include <iostream>

using namespace std;

bool List::isEmpty() {
    bool j = false;
    if (listArray[0] == "") {
        return true;
    }
    return j;
}

void List::InsertAtEnd(ElementType x) {//Takes value from user and puts it in the next spot of the array
    for (int i = 0; i < MAX; i++) {
       if (listArray[i] == "") {
            listArray[i] = x;
            N++;
            break;
        }
    }
}

void List::ReverseDisplay() {//Reverses the display of all values
    cout << "List displayed in reverse" << endl;
    for (int i = N; i > 0; i--) {//stops at how many parts of the array are filled
        cout << listArray[i] << endl;
    }
}

void List::GetValueAt(int n) {//Gets value at location index
    
    cout << listArray[n] << endl;

}

void List::DeleteAll(ElementType x) {//Delete all of that type of value
    int counter = 0;
    for (int i = 0; i < N; i++) {
        if (listArray[i] == x) {
            counter++;
            for (int j = i; j < N; j++) {
                listArray[j] = listArray[j + 1];
            }
        }
    }
    N = counter;
}

void List::Display(string type) {
    if (type == "All") {
        for (int i = 0; i < N; i++) {
            cout << listArray[i] << endl;
        }
    }
    else if (type == "Odd") {
        for (int i = 0; i < N; i++) {
            if (listArray[i].length() % 2 != 0) {//checks if what it is reading is odd
                cout << listArray[i] << endl;

            }
        }
    }
    else if (type == "Even") {
        for (int i = 0; i < N; i++) {
            if (listArray[i].length() % 2 == 0) {//checks if what is is reading is even
                cout << listArray[i] << endl;
            }
        }
    }else{
        cout<<"Not correct input"<<endl;
    }
}

void List::Sort() {
    int counter = 0;
    for (int i = 0; i < N; i++) {
        while (counter < N) {
            if (listArray[counter].length() > listArray[i].length()) {//if the current is less than the next swap places and keep going
                string hold = listArray[i];
                listArray[i] = listArray[counter];
                listArray[counter] = hold;
            }
            counter++;
        }
        counter=0;
    }
    
}

double List::Median() {
    Sort();//sorts first to make it easier
    int median = 0;
    if (N % 2 == 0) {
        median = (listArray[N / 2].length() + listArray[(N / 2) - 1].length() / 2);
    } else {
        median = listArray[N / 2].length();
    }

    cout << median << endl;
    return median;
}

void List::Shuffle() {
    srand(time(NULL));
    for (int i = N - 1; i > 0; i--) {
        int swap = rand() % (i + 1);//goes through each point and swaps with a random value of the current point for i
        string s = listArray[swap];
        listArray[swap] = listArray[i];
        listArray[i] = s;
    }
}

List::List() {
    N = 0;


}