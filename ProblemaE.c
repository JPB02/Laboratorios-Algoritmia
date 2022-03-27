#include <stdio.h>
#include <string.h>

#define MAXLEN 10000

int longest_pal_substring(char * str) {
    int n = strlen(str);
    if (n < 2)
        return n;
    int maxLength = 1;
    int low, high;
    for (int i = 0; i < n; i++) {
        low = i - 1;
        high = i + 1;
        while ( high < n && str[high] == str[i])
            high++;
        while ( low >= 0 && str[low] == str[i])
            low--;
        while (low >= 0 && high < n && str[low] == str[high]){
            low--;
            high++;
        }
        int length = high - low - 1;
        if (maxLength < length) {
            maxLength = length;
        }
    }
    return maxLength;
}
/*
int longest_pal_substring (char * str) {
	int n = strlen(str);
	int maxLength = 1;
	int i, j, k, flag;
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			flag = 1;
			for (k = 0; k < ((j-i)/2)+1; k++) {
				if (str[i+k] != str[j-k]) {
					flag = 0;
				}
			}
			if (flag != 0 && (j-i + 1) > maxLength) {
				maxLength = j-i+1;
			}
		}
	}
	return maxLength;
}
*/

int main () {
    char str[MAXLEN];
    if (scanf("%s", str) == 1) {
        printf("%d\n", longest_pal_substring(str));
    }
    return 0;
}