# calc

A command-line calculator written in C. This is the first project in a series I'm building to practice C.

## Build

```
gcc -Wall -Wextra -o calc calc.c
```

## Usage

```
./calc <number> <operator> <number>
```

Operators: `+`, `-`, `x` (multiplication) and `/` (division, printed with two decimals).

```
$ ./calc 3 + 4
7
$ ./calc 7 / 2
3.50
$ ./calc 3 x 4
12
```

If the input is invalid (wrong number of arguments, text instead of a number, unknown operator, or division by zero), it prints an error message and exits with status code `1`.

## What I practiced

- `argc` / `argv`
- Converting text to numbers with `strtol` and detecting errors via `endptr`
- `switch` on a `char`
- Exit codes
