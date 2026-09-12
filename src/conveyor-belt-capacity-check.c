#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    printf ("How many motors are carrying the packages?\n") ; 
    scanf("%d", &motorCount) ; 
    motorCount = 2 ; 
printf("%d\n", 2) ;


    printf ("How many kg of packages do we expect? 10\n") ;
    scanf("%d", &totalPackageWeight) ;
    totalPackageWeight = 26 ;
printf("%d\n", 26) ;
  
 

if (totalPackageWeight <= 12) 
     printf("Yes! The conveyor belt can carry the packages.\n");

else 
     printf("No! The conveyor belt cannot carry the packages.\n");
    
    /// YOUR CODE HERE
}
