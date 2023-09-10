#include <stdio.h>
#include <stdbool.h>    // Allows you to work with boolean operators

int main(){
//VARIABLES.................................................................................................................
/*
int x; // declaration
x = 123; // initialization
int y = 321; // declaration + initialization

int age = 21; //integer
float gpa = 2.05; // floating point number
char grade = 'C'; // single character
char name[]="Bro"; //array of characters

printf("Hello %s\n", name);
printf("You are %d years old\n", age);
printf("Your average grade is %c\n", grade);
printf("Your gpa is %f\n", gpa);



//DATA TYPES................................................................................................................


char a = 'C';        // single character    %c
char b[] = "Bro";    // array of characters %s

float c = 3.141592;   // 4 bytes (32 bits of precision) 6 -  7 digits %f
double d = 3.141592653589693;    // 8 bytes (64 bits of precision) 15   -  16 digits %lf

printf("%0.15f\n", c);
printf("%0.15lf\n", d);



bool e = false;         // 1 byte (true or false) %d
printf("%d\n", e);



char f = 120 ;          // cool thing about char's you can store ..... 1 byte (-128 to +127) %d or %c 
printf("%c\n", f);

unsigned char g =255;    // 1 byte (0 to +255) %d or %c
printf("%c\n", g);



short h = 32767;    // 2 bytes (-32,768 to +32,767) %d
printf("%d\n",h);

unsigned short i = 65535;  //2 bytes (0 to +65,535) %d
printf("%d\n", i);


int j = 2147483647;           // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
printf("%d\n",j);

unsigned int k = 4294967295;  // 4 bytes (0 to +4,294,967,295) %u
printf("%u\n",k);
   return 0;
*/
long long int l = 9223372036854775807;                // 8 bytes  (-9 quintrillion to +9 quintrillion) %lld
printf("%lld\n", l);

unsigned long long int m = 18446744073709551615U;      //8 bytes (0 to +18 quintrillion) %llu
printf("%llu\n", m);
}











   