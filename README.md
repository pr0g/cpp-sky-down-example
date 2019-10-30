# cpp-from-the-sky-down example

After watching an excellent CppCon talk by John Bandela ([“Polymorphism != Virtual: Easy, Flexible Runtime Polymorphism Without Inheritance”](https://youtu.be/PSxo85L2lC0)) I wanted to learn more about the library `polymorphic` described in the talk (repo available here: [cpp-from-the-sky-down/metaprogrammed_polymorphism](https://github.com/google/cpp-from-the-sky-down/tree/master/metaprogrammed_polymorphism)).

What follows in this repo is a simple example using the library.

Note: The Apache License 2.0 applies to the `polymorphic.hpp` header. This is not my work and all credit is due to John Bandela.

## Instructions for building

```bash
mkdir cpp-sky-down-example && cd cpp-sky-down-example
git clone https://github.com/pr0g/cpp-sky-down-example .
cmake -S . -B build
cmake --build build/
./build/cpp-sky-down-example
```
