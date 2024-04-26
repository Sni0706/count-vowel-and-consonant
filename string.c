#include <stdio.h>
#include<string.h>
int main() {
 char str[100];
 int vowels = 0, consonants = 0;
 
 printf("Enter a string: ");
 scanf("%s", str);
 char *ptr = str;
 while (*ptr) {
 char ch = toupper(*ptr);
 if (ch >= 'A' && ch <= 'Z') {
 if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
 vowels++;
 } else {
 consonants++;
 }
 }
 ptr++;
 }
 printf("Number of vowels: %d\n", vowels);
 printf("Number of consonants: %d\n", consonants);
 return 0;
}
