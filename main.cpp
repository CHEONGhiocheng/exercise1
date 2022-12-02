//
//  main.cpp
//  exercise1
//
//  Created by jane cheong  on 31/10/2022.
//


#include <iostream>
#include <fstream>
#include <string>


int main(int argc, const char * argv[]) {

   int age;
   std::cout << "What is your age? \n";
    std::cin >> age;
    std::ofstream myfile ("age.txt");
    if (myfile.is_open())
      {
          myfile << age;
          myfile.close();
     }
    return 0;
}
