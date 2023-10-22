#ifndef BIGINTEGER_H
#define BIGINTEGER_H

struct BigInteger {
    struct node* head;
    long int length;
    char sign;
};

struct BigInteger initialize(char* s);
struct BigInteger add(struct BigInteger num1, struct BigInteger num2);
struct BigInteger sub(struct BigInteger num1, struct BigInteger num2);
struct BigInteger mul(struct BigInteger num1, struct BigInteger num2);
struct BigInteger divide(struct BigInteger num1, struct BigInteger num2);
void freeBigInteger(struct BigInteger* num);

#endif

