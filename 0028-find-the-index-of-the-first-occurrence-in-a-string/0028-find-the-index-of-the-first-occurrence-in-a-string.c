int strStr(char* haystack, char* needle) {
    int j = 0;
    for (int i = 0; haystack[i] != '\0'; i++) {
        if (haystack[i] == needle[j]) {
            j++;
            if (j == strlen(needle)) {
                return i - (j - 1);
            }
        } else {
            i -= j;
            j = 0;
        }
    }
    return -1;
}