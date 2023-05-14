# Prime Number Checker

This is a simple C++ application that allows users to check if a number is prime or not. It also prints out all prime numbers up to the entered number (excluding 2, 3, and 5).

## Algorithm used

The algorithm used to check if a number is prime is the **trial division** method. This algorithm works by dividing the number by all possible integer values less than the square root of the number. If none of these divisions result in an integer quotient, then the number is prime.

## How to use

1. Clone this repository to your local machine.
2. Open the terminal or command prompt and navigate to the cloned directory.
3. Compile the code by running the following command:
   ````
   g++ main.cpp -o prime
   
4. Run the code by running the following command:
   ````
   ./prime
   
5. Enter a number to check if it is prime or not.
6. The program will output whether the number is prime or not, followed by all prime numbers up to the entered number (excluding 2, 3, and 5).

## Example

```
Enter a number: 20
The number you entered is not prime.
Prime numbers up to 20: 2 3 5 7 11 13 17 19
```

## Contributing

Contributions are always welcome! If you find any issues with the code or have suggestions for improvement, please create a new issue or submit a pull request.
