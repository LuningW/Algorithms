char * countAndSay(int n){
    int seq[20000];
    int stop;
    int i = 0;
    int j = 0;
    int count = 1;
    int k = 0;
    int p;
    char *result;
    int end;
    int tmp[20000];

    memset(seq, 0, sizeof(seq));
    memset(tmp, 0, sizeof(tmp));

    seq[0] = 1;
    stop = 1;
    end = 1;

    while (i < n - 1) {
        while (j < stop && k < 19999 && seq[j] != 0) {
            if (seq[j + 1] == seq[j]) {
                j++;
                count++;
            }
            else {
                tmp[k] = count;
                tmp[k + 1] = seq[j];
                k += 2;
                j++;
                count = 1;
            }
        }
        stop = k;
        k = 0;
        i++;
        j = 0;
        for (p = 0; p < stop; p++) {
            seq[p] = tmp[p];
        }
    }
/*
    for (i = 0; i < 59 && seq[i] != 0; i++) {
        printf("%d ", seq[i]);
    }
*/
    result = (char *)malloc(20000 * sizeof(char));

    i = 0;
    while (i < 19999 && seq[i] != 0) {
        result[i] = (char)(seq[i] + 48);
        i++;
    }
    result[i] = '\0';

    return result;
}
