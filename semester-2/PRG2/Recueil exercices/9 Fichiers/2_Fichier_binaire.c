#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 256
#define MAXSTOCK 80

typedef struct {
    char brand[MAXLEN];
    char item[MAXLEN];
    int qty;
    float unit, total;
} stockItem;

int main(int argc, char const *argv[]) {
    if (argc != 3) {
        printf("Usage: %s \n", argv[0]);
        return 1;
    }

    FILE *file_in = fopen(argv[1], "rb");
    if (!file_in) {
        printf("[e] could not open %s\n", argv[1]);
        return 1;
    }

    stockItem stock[MAXSTOCK] = { 0 };
    int i = 0;


    // start importing
    while (fscanf(file_in, stock[i].brand, stock[i].item, &(stock[i].qty), &(stock[i].unit), &(stock[i].total)) != EOF) {
        printf("reading %s,%s,%.2f,%d,%.2f", stock[i].brand, stock[i].item, stock[i].unit, stock[i].qty, stock[i].total);
        i++;
    }
    fclose(file_in);


    //create / overwrite the output file

    FILE *file_out = fopen(argv[2], "wb");
    if (!file_out) {
        printf("[e] could not open %s\n", argv[2]);
        return 1;
    }


    // DB size as header
    if (fwrite(&i, sizeof(i), 1, file_out) != 1) {
        printf("[e] could not write size of stock to %s\n", argv[2]);
        return 1;
    }

    // DB rows
    if (fwrite(stock, sizeof(stock[0]), i, file_out) != 1) {
        printf("[e] could not write size of stock to %s\n", argv[2]);
        return 1;
    }

    fclose(file_out);

    return 0;
}

