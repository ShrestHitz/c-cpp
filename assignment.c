#include<stdio.h> 
int palindrome(char input[],int length){ 
 for(int i=0;i<=length/2;i++){ 
 if(input[i]==input[length-i-1]){ 
 continue; 
 } 
 else{ 
 printf("not palindrome"); 
 return 0; 
 } 
 } 
 printf("palindorme"); 
} 
int main(){ 
 int length; 
 printf("Enter length: "); 
 scanf("%d",&length); 
 char input[length]; 
 printf("\n"); 
 printf("Enter string: "); 
 scanf("%s",&input); 
 printf("\n"); 
 palindrome(input,length); 
} 