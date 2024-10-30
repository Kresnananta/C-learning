
    int terbesar = luas[0];

    // Untuk setiap kandang sisanya:
    for (int i = 1; i < 5; i++) {
        // Jika luasnya lebih besar daripada variabel luas terbesar:
        if (luas[i] > luas[i-1]) {