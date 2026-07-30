#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span {
    private:
        Span();
        unsigned int _N;
        std::vector<int> _numbers;
    public:
        Span(unsigned int n);
        Span(const Span &old);
        Span &operator=(const Span &old);
        ~Span();

        void addNumber(int number);

        int shortestSpan();
        int longestSpan();
};

#endif