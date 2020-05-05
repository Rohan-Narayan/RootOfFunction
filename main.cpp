//
//  main.cpp
//  LastLab
//
//  Created by Rohan Narayan on 4/1/20.
//  Copyright © 2020 Rohan Narayan. All rights reserved.
//

#include <iostream>

double func(double x){
    return x*x*x + x - 5;
}
void root(double tolerance, double a, double b){
    if (func(a) * func(b) >= 0)
      {
          std::cout << "No Solution\n";
          return;
      }
    
      double c = a;
      while ((b-a) >= tolerance)
      {
          // Find middle point
          c = (a+b)/2;
    
          // Check if middle point is root
          if ((func(c) >= 0 && func(c) < tolerance) || (func(c) <= 0 && func(c) > tolerance))
              break;
    
          // Decide the side to repeat the steps
          else if (func(c)*func(a) < 0)
              b = c;
          else
              a = c;
      }
      std::cout << "The value of root is: " << c <<"\n";
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    double tolerance;
    double a;
    double b;
    std::cout << "Enter desired accuracy of the approximation (tolerance): ";
    std::cin >> tolerance;
    std::cout << "Enter the left interal endpoint: ";
    std::cin >> a;
    std::cout << "Enter the right interval endpoint: ";
    std::cin >> b;
    root(tolerance, a, b);
    return 0;
}
