

#include <string.h>

char * mergeAlternately(char * word1, char * word2){
    char *result = malloc((strlen(word1) + strlen(word2) + 1) * sizeof(char));
    int j = 0; // index of word1
    int k = 0; // index of word2
    for (int i = 0;i < strlen(word1) + strlen(word2); i++) {
        if (i%2 == 0) {
            if (j < strlen(word1)) {
                result[i] = word1[j];
                j++;
            } else {
                result[i] = word2[k];
                k++;
            }
        } else {
            if (k < strlen(word2)) {
                result[i] = word2[k];
                k++;
            } else {
                result[i] = word1[j];
                j++;
            }
        }
    }
    result[strlen(word1) + strlen(word2)] = '\0';
    return result;
}
