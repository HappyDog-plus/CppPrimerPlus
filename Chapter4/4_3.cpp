//
// Created by Jiale Yang on 2022/10/1.
//
#include <iostream>

int main(){
   using namespace std;
   const int ArSize = 20;
   char name[ArSize];
   char dessert[ArSize];

   cout << "Enter your name:\n";
   cin >> name;
   cout << "Enter your favorite dessert:\n";
   cin >> dessert;
   cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
   return 0;
}
