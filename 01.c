#include <stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100],a[200];
char combined[200];
int i, j, len=0,op,equal=1;
char c;
    printf("Enter the first string: ");
    scanf(" %s", str1);
    printf("Enter the second string: ");
    scanf(" %s", str2);
    do
{
        printf("\n***STRING OPERATIONS MENU***\n");
        printf("1. String Length (str1)\n");
        printf("2. String Copy (str2 to str1)\n");
        printf("3. String Concatenation\n");
        printf("4. String Comparison\n");
        printf("5. String Reversal (str1)\n");
        printf("6. Palindrome Check (str1)\n");
        printf("7. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&op);
        switch(op)
{
            case 1:
                while(str1[len]!='\0')
	     {
                    len++;
                }
                printf("Length of string 1 = %d\n",len);
                break;
            case 2:
	     i=0;
                while(str1[i]!='\0')
	     {   a[i]=str2[i];	
                    str2[i] = str1[i];
                    i++;
                }
                str2[i] = '\0';
                printf("Copied String: %s\n", str2);
                break;
            case 3:
                i = 0;
	     while(str1[i]!='\0')
	     {
                    combined[i] = str1[i];
                    i++;
                }
                j = 0;
	     while(str2[j]!='\0')
	     {
                    combined[i] = str2[j];
                    i++;
                    j++;
                }
                combined[i] = '\0';
                printf("Concatenated String: %s\n", combined);
                break;
            case 4:
                i=0;
                equal = 1;
                while(str1[i]!='\0' || str2[i]!='\0')
	     {
                    if (str1[i] != str2[i])
	         {
                        equal = 0;
                        break;
                    }
                    i++;
                }
                if (equal == 1)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 5:
                len = 0;
                while(str1[len] != '\0')
{
                    len++;
                }
                printf("Reversed string: ");
                for (i = len - 1; i >= 0; i--)
{
                    printf("%c", str1[i]);
                }
                printf("\n");
                break;
            case 6:
                len = 0;
                while(str1[len] != '\0')
{
                    len++;
                }
                equal = 1;
                for (i = 0; i < len / 2; i++) {
                    if (str1[i] != str1[len - 1 - i])
{
                        equal = 0;
                        break;
                    }
                }
                if (equal == 1)
                    printf("String 1 is a palindrome.\n");
                else
                    printf("String 1 is not a palindrome.\n");
                break;
            case 7:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
while (op != 7);
    return 0;
}
