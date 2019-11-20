## Лекция 2

### ???
* Intel VTune
* промах кэша
* антиотладка
* starforce
* rawhammer
* ecc
* трансзона
* PBKDF

### contents

1. регистры
2. память
3. что такое 16 битная память
4. вещественные числа

*x86(x86_64)*

##### регистры

1. общего назначения

        eax / ebx

    | name   | size  |
    |--------|-------|
    |    ax  | 16B   |
    |    eax | 32B   |
    |    rax | 64B   |

2. сегментные

        cs|ss|ds|fs|es
        code                                16
           stack            ------> | shadow |    |
              data                  63       15   0
                 .....

3. регистры флагов

        [r]
        [e]flags

4. регистры управления

        cr 0..4

5. отладочные регистры

        dr 0..8

6. MSR

        rmsr / wmsr

7. регистры [r]/[e]ip

*указывают на текущуу исполняемую ф-ию в процессоре*

### CASH as RAM

Memory

                 ____
                \/   |
        mov    [ ]  [ ]

                reg, memory/reg
                memory, reg

Memory - ячейка памяти

        mov eax, dword ptr ds:[ecx]
                            |   |
                        segment |
                              offset


segment * 16 + offset

### A21
