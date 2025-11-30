void encrypt(char *s) {
    for (int i = 0; s[i] != '\0'; i++)
        s[i] = s[i] + 3;
}
