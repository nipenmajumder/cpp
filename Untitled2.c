#include<stdio.h>
#include<string.h>

int main() {

    char S[2000], T[100];
    int i = 0, j = 0;
    scanf("%[^\n]%*c", S);

    while (S[i] != '\0') {
        if (S[i] == 'a' || S[i] == 'e' ||
                S[i] == 'k' || S[i] == 'o' ||
                S[i] == 'u' || S[i] == 'A' ||
                S[i] == 'E' || S[i] == 'K' ||
                S[i] == 'O' || S[i] == 'U') {

            T[j++] = S[i] -= 32;
            T[j++] = '#';
            T[j++] = '#';
        };
        i++;
    };
    strcpy(S, T);
    printf("%s", S);
    return 0;

}
