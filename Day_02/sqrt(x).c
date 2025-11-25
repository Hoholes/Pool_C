int sqrt_x(int x) {
    int i = 1;

    if (x < 0)
        return -1;

    if (x == 0 || x == 1)
        return x;

    while (i * i <= x) {
        if (i * i == x)
            return i;
        i++;
    }

    return i - 1;
}
