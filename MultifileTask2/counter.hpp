#pragma once


class Counter{
private:
    int count;
public:
    Counter(int startValue = 1);
    void increase();
    
    void decrease();
    
    int get_value(){
        return count;
    }
};


