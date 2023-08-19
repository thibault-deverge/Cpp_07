#pragma once

template<typename T>
class Array
{
private:
    T* array;

public:
    // Constructors / Destructor
    Array();
    Array(unsigned int n);
    Array(const Array<T>& arr);
    ~Array());

    // Assignment overload
    Array& operator=(const Array& rhs);

    // Subscript overload (a faire)

    // Member functions
    unsigned int size() const;
};