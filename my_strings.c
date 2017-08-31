int strcmpic(char *str1, char *str2){

	for (;; str1++, str2++) {
        int x = tolower(*str1) - tolower(*str2);
        if (x != 0 || !*str1)
        return x;
    }

     }
