#include <stdio.h>

int main(){
    int temp;
    printf("input Temperature:");
    scanf("%d", &temp);
    if(temp < 0){
       printf("freezing weather");      
         }
    if(temp >= 0 && temp <= 10){
         printf("very cold weather");
         }
    if(temp >= 10 && temp <= 20){
         printf("cold weather");
         }
    if(temp >= 20 && temp <= 30){
         printf("normal weather");
         }
    if(temp >= 30 && temp <= 40){
         printf("hot temperature");
         }
    if(temp>=40){
         printf("very hot temperature");
         }
  return 0;
}