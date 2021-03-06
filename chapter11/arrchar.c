// arrchar.c -- array of pointers, array of strings
#include <stdio.h>
#define SLEN 40
#define LIM 5

int main(void)
{
    const char *mytalents[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately", 
        "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };

    char yourtelents[LIM][SLEN] = {
        "Walking in a straight line",
        "Sleeping",
        "Watching television",
        "Mailing letters",
        "Reading email"
    };

    int i;

    puts("Let's compare talenet.");
    printf("%-36s %-25s\n", "My Talenets", "Your talents");

    for (i = 0; i < LIM; i++)
        printf("%-36s %-25s\n", mytalents[i], yourtelents[i]);
    
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",
            sizeof(mytalents), sizeof(yourtelents));

    return 0;
}