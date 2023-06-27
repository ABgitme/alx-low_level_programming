#include <stdio.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{

    int length = 15;
    int i;
    char *password = malloc(length + 1);
    char *uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int uppercase_len = strlen(uppercase);
    char *digits = "0123456789";
    int digits_len = strlen(digits);
    char *lowercase = "abcdefghijklmnopqrstuvwxyz";
    int lowercase_len = strlen(lowercase);
    char *symboles = "@;!#$^&*%()*+-;<=>";
    int symbols_len = strlen(symboles);

    srand(time(NULL) * getpid());

    for (i = 0; i < length; i++)
    {
        int char_type = rand() % 4;

        if (char_type == 0)
            password[i] = digits[rand() % digits_len];
        else if (char_type == 1)
            password[i] = uppercase[rand() % uppercase_len];
        else if (char_type == 2)
            password[i] = lowercase[rand() % lowercase_len];
        else
            password[i] = symboles[rand() % symbols_len];
    }
    password[length] = '\0';
    printf("%s\n", password);
    return (0);
}
