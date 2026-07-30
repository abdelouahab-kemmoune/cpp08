#include "Span.hpp"

Span::Span(unsigned int n) : _N(n) {}

Span::Span(const Span &old) : _N(old._N), _numbers(old._numbers) {}

Span &Span::operator=(const Span &old) {
    if (this != &old)
    {
        _N = old._N;
        _numbers = old._numbers;
    }
    return (*this);
}

void Span::addNumber(int number) {
    size_t size = _numbers.size();

    if (size >= _N)
        throw std::runtime_error("Span is full");
    _numbers.push_back(number);
}

int Span::shortestSpan() {
    size_t size = _numbers.size();
    std::vector<int> _numbers_copy;
    int res;

    if (size < 2)
        throw std::runtime_error("No span to compare");

    _numbers_copy = _numbers;
    std::sort(_numbers_copy.begin(), _numbers_copy.end());

    res = _numbers_copy[1] - _numbers_copy[0];

    for (size_t i = 0; i < size; i++)
    {
        int diff = _numbers_copy[i] - _numbers_copy[i - 1];
        if (diff < res)
            res = diff;
    }
    return (res);
}

int Span::longestSpan() {
    size_t size = _numbers.size();
    std::vector<int> _numbers_copy;
    int res;

    if (size < 2)
        throw std::runtime_error("No span to compare");

    _numbers_copy = _numbers;
    std::sort(_numbers_copy.begin(), _numbers_copy.end());

    res = _numbers_copy.back() - _numbers_copy.front();

    return (res);
}

Span::~Span() {}