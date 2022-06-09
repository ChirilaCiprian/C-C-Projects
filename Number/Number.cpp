#include "Number.h"


int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
void strev(char* str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

char* fromDeci(char res[], int base, int inputNum)
{
    int index = 0;  // Initialize index of result

    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder
    while (inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';

    // Reverse the result
    strev(res);

    return res;
}

int toDeci(std::string str, int base)
{
    int len = str.length();
    int power = 1; // Initialize power of base
    int num = 0;  // Initialize result
    int i;

    // Decimal equivalent is str[len-1]*1 +
    // str[len-2]*base + str[len-3]*(base^2) + ...
    for (i = len - 1; i >= 0; i--)
    {
        // A digit in input number must be
        // less than number's base
        if (val(str[i]) >= base)
        {
            return -1;
        }

        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}

Number::Number(const char* value, int base)
{
    this->value = value;
	this->base = base;
}

Number::Number(const Number& ToCopy)
{
    this->value = ToCopy.value;
	this->base = ToCopy.base;
}

Number::Number(Number&& ToMove)
{  
	this->base = ToMove.base;
	this->value = ToMove.value;
	ToMove.value.erase();
	ToMove.base = 0;	
}
void Number::SwitchBase(int newBase)
{
    int num = toDeci(this->value, this->base);
    this->base = 10;
    char buffer[100];
    this->value = fromDeci(buffer, newBase, num);
    this->base = newBase;
}
void Number::Print()
{
	std::cout << value<<std::endl;
}

int Number::GetDigitsCount()
{
	return this->value.length();
}

int Number::GetBase()
{
	return this->base;
}



bool Number::operator>(Number N)
{
    N.SwitchBase(this->base);
        if(this->value>N.value)
        return true;
    return false;
}
bool Number::operator<(Number N)
{
    N.SwitchBase(this->base);
    if (this->value < N.value)
        return true;
    return false;
}
bool Number::operator<=(Number N)
{
    N.SwitchBase(this->base);
    if (this->value <= N.value)
        return true;
    return false;
}

bool Number::operator>=(Number N)
{
    N.SwitchBase(this->base);
    if (this->value >= N.value)
        return true;
    return false;
}

bool Number::operator==(Number N)
{
    N.SwitchBase(this->base);
    if (this->value == N.value)
        return true;
    return false;
}

void Number::operator++()
{
}

void Number::operator--()
{
    this->value.erase(0, 1);
}

void Number::operator--(int numar)
{
    this->value.pop_back();
}

int Number::operator[](int index)
{
    return this->value[index];
}

Number Number::operator+(const Number N)
{
    int num1 = toDeci(this->value, this->base), num2 = toDeci(N.value, N.base);
    num1 += num2;
    char buffer[50];
    this->value=fromDeci(buffer, this->base, num1);
    return *this;
    
}
Number Number::operator-(const Number N)
{
    int num1 = toDeci(this->value, this->base), num2 = toDeci(N.value, N.base);
    num1 -= num2;
    char buffer[50];
    this->value = fromDeci(buffer, this->base, num1);
    return *this;
}

Number& Number::operator=(Number&& N)
{
    this->value = N.value;
    this->base = N.base;
    return *this;
}

Number Number::operator=(const int val)
{
    this->value = std::to_string(val);
    this->base = 10;
    return *this;
}

Number Number::operator=(const char* val)
{
    this->value = val;
        this->base = 10;
    return *this;
}

Number Number::operator+=(const Number N)
{
    return *this + N;
}
