#include<stdio.h>
#include <string.h>

int main() {
    int sel, i, st, on = 1;
    char val[100];
    
    while (on)
    {
        // Display the main menu
        printf("Main menu : \n");
        printf("\t 1. Reverse a string \n");
        printf("\t 2. Concatenation \n");
        printf("\t 3. Palindrome \n");
        printf("\t 4. Copy a string \n");
        printf("\t 5. Length of the string \n");
        printf("\t 6. Frequency of character in a string  \n");
        printf("\t 7. Find number of vowels and consonants \n");
        printf("\t 8. Find number of blank spaces and digits \n\n");
        
        // Prompt the user for a choice
        printf("Please Enter your choice : ");
        scanf("%d", &sel);
        
        // Prompt the user for a string
        printf("\n\n Please Enter the string : ");
        scanf("%s", val);
        // fgets(val, sizeof(val), stdin);

        switch (sel)
        {
            case 1:;
                // Reverse a string
                int len = strlen(val);
                for (i = len; i >= 0; i--)
                {
                    printf("%c", val[i]);
                }
                break;
            case 2:;
                // Concatenation 
                char val2[100];
                printf("\n\n Please Enter the second string : ");
                scanf("%s", val2);
                strcat(val, val2);
                printf("%s", val);
                break;
            case 3:;
                // Palindrome check
                int ans = 0, j, len1;
                len1 = strlen(val);
                for (i = len1, j = 0; (i - 1) >= 0; i--, j++)
                {
                    if (val[i - 1] == val[j]) {
                        ans = 1;
                    }
                    else {
                        printf("Your string is not palindrome !");
                        break;
                    }
                }
                if (ans == 1) {
                    printf("Your string `%s` is palindrome  ", val);
                }
                break;
            case 4:;
                // Copy a string
                printf("\n\n %s ", strcpy(val2, val));
                break;
            case 5:;
                // Length of the string 
                printf("\n\n %d", strlen(val));
                break;
            case 6:;
                // Frequency of character in a string
                int ans2;
                int found[1000] = { 0 };
                for (i = 0; val[i] != '\0'; i++)
                {
                    if (found[val[i]] == 1) {
                        continue;
                    }

                    ans2 = 0;
                    for (j = 0; val[j] != '\0'; j++) {

                        if (val[i] == val[j]) {
                            ans2++;
                        }
                    }
                    printf(" %c = %d \n", val[i], ans2);
                    found[val[i]] = 1;
                }
                break;
            case 7:;
                // Find number of vowels and consonants
                int vow = 0, con = 0;
                for (i = 0; val[i] != '\0'; i++) {
                    if (val[i] == 'a' || val[i] == 'e' || val[i] == 'i' || val[i] == 'o' || val[i] == 'u' ||
                        val[i] == 'A' || val[i] == 'E' || val[i] == 'I' || val[i] == 'O' || val[i] == 'U')
                    {
                        vow++;
                    }
                    else {
                        con++;
                    }
                }
                printf("Vowel = %d\n", vow);
                printf("Consonants = %d", con);
                break;
            case 8:;
                // Find number of blank spaces and digits
                int spes = 0, digit = 0;
                char str[100];
                fgets(str, sizeof(str), stdin);

                // Count spaces and digits
                for (i = 0; str[i] != '\0'; ++i) {
                    if (str[i] == ' ') {
                        spes++;
                    }
                    else if (str[i] >= '0' && str[i] <= '9') {
                        con++;
                    }
                }

                printf("Number of spaces: %d\n", spes);
                printf("Number of digits: %d\n", con);
                break;

            default:
                // Invalid operation
                printf("Enter valid operation");
                break;
        }
        
        // Prompt user to continue or not
        printf("\n\nDo you want to continue <Press 1 to continue>");
        scanf("%d", &st);
        if (st != 1)
        {
            on = 0;
        }
    }

    return 0;
}
