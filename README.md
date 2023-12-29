# Printer

**Description:**
This repository contains a C++ class for stylized printing of letters using ASCII art.

## Features

- Stylized printing of letters using ASCII art.
- Supports printing of uppercase letters (A-Z).
- Can handle spaces in the input text.

## How to Use

1. Clone the repository to your local machine.

2. Compile and run the program.

## Examples

### Example 1: Printing "sidar"

```cpp
#include "printer.h"

int main() {
    Letter l;
    l.print("sidar");

    return 0;
}

OUTPUT:
╭━━╮╭╮  ╭╮╭━━╮╭━╮
┃━━┫╭╮╭━╯┃┃╭╮┃┃╭╯
┣━━┃┃┃┃╰╯┃┃╭╮┃┃┃
╰━━╯╰╯╰━━╯╰╯╰╯╰╯
