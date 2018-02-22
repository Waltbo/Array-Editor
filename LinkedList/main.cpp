/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 *Author:Walter Smith
 *Date:2/09/2018
 * Assignment:Program #2- Linked List
 *File: main.cpp, List.cpp, List.h
 *Description:Lets the user create a list of max 100 values and stores them in array 
 */

#include <cstdlib>
#include "List.h"
using namespace std;

/*
 * 
 */
int main() {
    List test;
    string j = "";
    while(j!="9"){
     cout << "1. Insert" << "\n" << "2. Reverse Display" << "\n" << "3. Show Value At Location" << "\n" << "4. Delete Value" << "\n" <<
                "5. Display Values(All, Even, or Odd)" << "\n" << "6. Sort" << "\n" << "7. Median" << "\n" << "8. Shuffle" << "\n" <<"9. Exit"<<"\n"<<
                "Enter Number(1-9) " << endl;
     cin >> j;
     if(j=="1"){
         cout<<"Enter Insert"<<endl;
         string k;
         cin>>k;
         
         test.InsertAtEnd(k);
     }else if(j=="2"){
         test.ReverseDisplay();
     }else if(j=="3"){
         cout << "Enter value location" << endl;
         int n;
         cin>>n;
         test.GetValueAt(n);     
     }else if(j=="4"){
         cout<<"Enter what you want to delete"<<endl;
         string x;
         cin>>x;
         test.DeleteAll(x);
     }else if(j=="5"){
         string stuff;
         cout << "Do you want to display Odd, Even, or All? Type exactly as listed" << endl;
         cin>>stuff;
         test.Display(stuff);
     }else if(j=="6"){
         test.Sort();
     }else if(j=="7"){
         test.Median();
     }else if(j=="8"){
         test.Shuffle();
     }else{
         cout<<"Not valid"<<endl;
         
     }
         
     
     
    }
}

