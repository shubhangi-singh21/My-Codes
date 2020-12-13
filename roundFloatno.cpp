# include<stdio.h> 
  
int roundNo(float num) 
{ 
    return num < 0 ? num - 0.5 : num + 0.5; 
} 
  
int main() 
{ 
    float a;
    scanf("%f", a);
    printf("%d", roundNo(-1.777)); 
    getchar(); 
    return 0; 
} 
