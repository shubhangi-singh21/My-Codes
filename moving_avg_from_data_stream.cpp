#include <queue>
class MovingAverageFromDataStream
{   
    double previousSum;
    int maxSize;
    std::queue<int> *window;

public:
    MovingAverageFromDataStream(const int size) : previousSum(0.0),
                                                  maxSize(size),
                                                  window(new std::queue<int>())
    {
    }
    ~MovingAverageFromDataStream()
    {
        /// We need to clean the memory allocated for the queue when destroying the object
        if (window)
        {
            delete window;
        }
    }

    /*Initialize your data structure here*/

    double next(const int &val)
    {
        size_t windowSize = window->size();
        if (windowSize == maxSize)
        {
            previousSum -= window->front();
            window->pop();
        }
        window->push(val);
        previousSum += val;
        return previousSum / window->size();
    }
};