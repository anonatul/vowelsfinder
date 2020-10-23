#include <stdio.h>
int main()
{  
    char ch;  
    printf("Enter any alphabet : ");
    scanf("%c", &ch);  
  
   if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ) // || ----> logical operator
    {  
       printf("'%c' is Vowel.", ch);
    }
    else  
    {  
       printf("'%c' is Constant.", ch);
    } 
    return 0;
}
//end
