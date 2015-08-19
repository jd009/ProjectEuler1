//  ProjectEuler1
//
//  Created by John D on 8/18/15.
//  Copyright (c) 2015 John D. All rights reserved.
//

#include <iostream>

int getSumOfAllMultiplesOf3and5(int upperLimitForMultiples)
{
   int sum = 0;

   for(int multipleOfThree = 3; multipleOfThree < upperLimitForMultiples; multipleOfThree += 3)
   {
      sum += multipleOfThree;
   }

   for(int multipleOfFive = 5; multipleOfFive < upperLimitForMultiples; multipleOfFive += 5)
   {
      if(multipleOfFive % 3 != 0)
      {
         sum += multipleOfFive;
      }
   }

   return sum;
}

int main(int argc, const char * argv[]) {
   std::cout << "Project Euler Problem 1" << std::endl;
   int N = 1000;
   std::cout << "For multiples of 3 and 5 up to " << N << std::endl;
   std::cout << "Answer = " << getSumOfAllMultiplesOf3and5(N) << std::endl;
   return 0;
}
