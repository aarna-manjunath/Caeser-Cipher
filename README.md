# Caeser-Cipher
A simple Caeser Cipher implemented in C 

Cryptography Algorithm For the Caesar Cipher
Thus to cipher a given text we need an integer value, known as a shift which indicates the number of positions each letter of the text has been moved down. 
The encryption can be represented using modular arithmetic by first transforming the letters into numbers, according to the scheme, A = 0, B = 1,…, Z = 25. Encryption of a letter by a shift n can be described mathematically as. 
For example, if the shift is 3, then the letter A would be replaced by the letter D, B would become E, C would become F, and so on. The alphabet is wrapped around so that after Z, it starts back at A.
Here is an example of how to use the Caesar cipher to encrypt the message “HELLO” with a shift of 3:
Write down the plaintext message: HELLO
Choose a shift value. In this case, we will use a shift of 3.
Replace each letter in the plaintext message with the letter that is three positions to the right in the alphabet.
