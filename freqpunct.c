#include<stdio.h>
int freq(char str[]) {
 int count = 0;
 for(int i=0; str[i] != '\0'; i++) {
 if((str[i] == ',') || (str[i] == '.') || (str[i] == '!'))
 count++;
 }
 return count;
}

int main() {
 char str[50];
 gets(str);
 printf("%d",freq(str));
 return 0;
}
