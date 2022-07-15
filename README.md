0. Creating a printf function clone to perform functions similar to the standard library printf function.
1. Handling the following conversion specifiers: d and i.
2. Handling the following custom conversion specifiers:
    b: the unsigned int argument is converted to binary
3. Handling the following conversion specifiers: u,o,x,X
4. Using a local buffer of 1024 chars in order to call write as little as possible.
5. Handling custom conversion specifier:
6. Handling the following conversion specifier: p.
7. Handling the following flag characters for non-custom conversion specifiers: + ,space,#
8. Handling the following length modifiers for non-custom conversion specifiers: l,h
     -Conversion specifiers to handle: d, i, u, o, x, X
9. Handling the field width for non-custom conversion specifiers.
10. Handling the precision for non-custom conversion specifiers.
11. Handling the 0 flag character for non-custom conversion specifiers
12. Handling the - flag character for non-custom conversion specifiers.
13. Handling the following custom conversion specifier:
      r : prints the reversed string
14. Handling the following custom conversion specifier:
    R: prints the rot13'ed string
15. All the above options work well together.