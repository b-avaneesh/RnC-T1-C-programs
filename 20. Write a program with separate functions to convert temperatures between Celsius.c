/* Write a program with separate functions to convert temperatures between Celsius,
Fahrenheit, and Kelvin. Implement functions like celsiusToFahrenheit(),
fahrenheitToKelvin(), etc., and demonstrate calling them based on user input.*/


#include <stdio.h>
float celsiusToFahrenheit(float cel){
    float faren;
    faren= (cel*(180/100))+32;
    printf("Celsius in farenheit is %f",faren);
}
float celsiusToKelvin(float cel){
    float kel;
    kel= cel+273;
    printf("Celsius in kelvin is %f",kel);
}
float farenToKelvin(float faren){
    float kel;
    kel= ((faren-32)*(100/180))+273;
    printf("Farenheit in kelvin is %f",kel);
}
int main() {
    int input;float cel,faren,kel;
    printf("Which of the following conversions would you like to perform?\n(1)Celsius-->Farenheit\n(2)Celsius-->Kelvin\n(3)Farenheit-->Kelvin\n");
    scanf("%d",&input);
    switch(input){
        case 1:
        printf("Enter in celsius: ");
        scanf("%f",&cel);
        celsiusToFahrenheit(cel);
        break;
        case 2:
        celsiusToKelvin(cel);
        break;
        case 3:
        farenToKelvin(faren);
        break;
        default:
        printf("Enter a valid conversion!");
        break;
    }

    return 0;
}
