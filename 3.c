#include <stdio.h>
int main() {
    int i, j;
    char str[150];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (i = 0; str[i] != '\0'; i++) {
      while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] == '\0')) {
         for (j = i; str[j] != '\0'; j++) {
            str[j] = str[j + 1];
         }
         str[j] = '\0';
      }
    }
    printf("Output String: ");
    puts(str);
    return 0;
}

//https://www.csinfo360.com/2020/09/check-if-string-contains-only-digits.html