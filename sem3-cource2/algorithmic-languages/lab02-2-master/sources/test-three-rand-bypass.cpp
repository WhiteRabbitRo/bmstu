//Copyright 2018 ROSHCHIN Igor mosgreyday@gmail.com
#include <stdlib.h>
#include <iostream>
#include <ctime>

int main()
{
    unsigned int seed_ = 300899;
    unsigned int * seed = &seed_;
    // std::cout << sizeof(int);
    clock_t t_start;
    clock_t t_end;
    clock_t t_mid;
    float RESULTAT = 0;
    for (int N = 32; N <= 2048; N *= 2) {
        int mas_size = N * 1024;
        int* mas = new int[mas_size];
        for (int index = 0; index < mas_size;
             mas[index] = index, index++)
        {}
        for (int index = 0, a = 0; index < mas_size;
             a = mas[index], index++)
        {}
        t_start = clock();
        for (int count = 0; count < 1000; count++) {
            for (int index = 0, a = 0;
                 index < mas_size; a = mas[rand_r(seed) % mas_size],
                 index++)
            {}
        }
        t_end = clock() - t_start;
        t_start = clock();
        for (int count = 0; count < 1000; count++) {
            for (int index = 0, a = 0; index < mas_size;
                 a = rand_r(seed) % mas_size, index++)
            {}
        }
        t_mid = clock() - t_start;
        t_end -= t_mid;
        RESULTAT = static_cast<float>(t_end / CLOCKS_PER_SEC);
        std::cout << N << "  " << RESULTAT << std::endl;
    }
}
