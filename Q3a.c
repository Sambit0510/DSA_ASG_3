#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
const int mod= 10e+7;

int main() {
    char str[1000];
    scanf("%s", str);
    long int ans = 0;
    for (int i = 0; i < strlen(str); i++) {
        ans += (str[i]) * (i + 1);
        ans %= mod;
    }
    printf("The unique hash value for the string is :: %d", ans);
    return 0;
}
