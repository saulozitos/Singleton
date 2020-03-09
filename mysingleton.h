#pragma once

class MySingleton
{
public:
    static MySingleton& getInstance();
    int multiply(int a, int b);

private:
    MySingleton() = default;
    ~MySingleton() = default;
    MySingleton(const MySingleton&) = delete;
    MySingleton& operator = (const MySingleton&) = delete;
};
