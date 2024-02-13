#include "counter.hpp"

Counter::Counter(int startValue)
{
    
    this->count = startValue;
}

void Counter::increase(){
    count = count + 1;
}
void Counter::decrease(){
    count--;
}
