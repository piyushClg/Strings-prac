#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
        
    int d, i, j, n=0, len, position, length, c = 0;;
    char a[40], b[40], p[40], temp;
    
    puts("\nEnter first string: ");
    gets(a);
    
    do{
        printf("\nString Operations:\n");
        printf("1.Compare two strings\n");
        printf("2.Copy a string\n");
        printf("3.Reverse a string\n");
        printf("4.Palindrome\n");
        printf("5.Substring \n");
        printf("6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&d);
        
        switch(d){
            case 1: //Compare two strings
            n=0;
                puts("\nEnter second string: ");
                scanf("%s", b);
                
                while(a[n]==b[n])
                {
                    if (a[n]=='\0' || b[n]=='\0')
                        break;
                    n++;
                }
                
                if (a[n]=='\0' && b[n]=='\0')
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            
            case 2: //Copy a string
                
                for(i=0; i<a[i] != '\0'; i++)
                    b[i] = a[i];
                
                printf("\nYour copied string is: ");
                puts(b);
                break;
            
            case 3: //Reverse a string
                
                for(i=0; i<a[i] != '\0'; i++)
                    p[i] = a[i];
                i = 0;
                j = strlen(a) - 1;
                 
                while (i < j) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    i++;
                    j--;
                   }
 
                printf("\nReverse string is :%s\n", a);
                for(i=0; i<p[i] != '\0'; i++)
                    a[i] = p[i];
                break;
                    
            case 4: //palindrome
                j=0;
                len = strlen(a);
                for(i=0;i < len ;i++){
                    if(a[i] != a[len-i-1]){
                    j = 1;
                    break;
                    }
                }
                if(j == 1){
                    printf("%s is not a palindrome", a);
                }
                else 
                    printf("%s is a palindrome", a);
                printf("\n");
                break;
            
            case 5: //Substring
                printf("Enter the position and length of substring\n");
                scanf("%d%d", &position, &length);
                c=0; 
                while (c < length) {
                    b[c] = a[position+c];
                    c++;
                   }
                b[c] = '\0';
                 
                printf("Required substring is \"%s\"\n", b);
                break;
            
            case 6:
                printf("Thank you for using :)");
                exit(0);
            
            default:
                printf("Out of range");
                break;
        }
        
        printf("Do you want to enter more(1-yes, 2-no): ");
        scanf("%d", &j);
        
    }while(j == 1);
    
    return 0;
}
