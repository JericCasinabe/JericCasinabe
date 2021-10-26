#include<stdio.h>
int main(){
int items, price, cash, change;
    printf("Please pick you order");
    printf("\n[1]Pepsi (P100) \n[2]Dr. Pepper (P120) \n[3]Coca-cola (P95) \nChoice:");
    scanf("%d", &items);
    switch (items){
    
    case 1:
    price = 100;
    printf("Input cash:");
    scanf("%d", &cash);
    if(cash>=price){
    printf("Enjoy your Pepsi thank you.\n");
    change = cash-price;  
    printf("\nChange: %d\n", change);  
}
else{ 
    printf("sorry, you have not enough cash");
}
    break;
    
    case 2:
    price = 120;
    printf("Input cash:");
    scanf("%d", &cash);
    if(cash>=price){
    printf("Enjoy your Dr.Pepper thank you.\n");
    change = cash-price;  
    printf("\nChange: %d\n", change);
}
else{ 
    printf("sorry, you have not enough cash");
}
     break;
   
    
     case 3:
    price = 95;
    printf("Input cash:");
    scanf("%d", &cash);
    if(cash>=price){
    printf("Enjoy your Cocacola thank you.\n");
    change = cash-price;  
    printf("\nChange: %d\n", change);
}
else {
  printf("sorry, you have not have enough cash");
}
  break;
   default:
   printf("the item is not available");
}
return 0;
}