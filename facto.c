int facto(int n);  // not necessary

int facto(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }

    return res;
}