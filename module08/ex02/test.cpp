#include <iostream>
#include <deque>

template <typename T>
class Stack {
private:
    std::deque<T> container;

public:
    // ... Other member functions ...

    // Iterator class for the Stack
    class Iterator {
    private:
        typename std::deque<T>::reverse_iterator it;

    public:
        Iterator(typename std::deque<T>::reverse_iterator it) : it(it) {}

        // Overload the dereference operator
        T& operator*() {
            return *it;
        }

        // Overload the equality operator
        bool operator==(const Iterator& other) const {
            return it == other.it;
        }

        // Overload the inequality operator
        bool operator!=(const Iterator& other) const {
            return !(*this == other);
        }

        // Overload the pre-increment operator
        Iterator& operator++() {
            ++it;
            return *this;
        }
    };

    void    push(const T& value)
    {
        container.push_back(value);
    }
    // Begin iterator
    Iterator begin() {
        printf("%d\n",*container.rbegin());
        return Iterator(container.rbegin());
    }

    // End iterator
    Iterator end() {
        return Iterator(container.rend());
    }
};

int main() {
    Stack<int> myStack;

    myStack.push(10);
    // Push elements onto the stack
    // myStack.push(1);
    // myStack.push(2);
    // myStack.push(3);

    Stack<int>::Iterator it = myStack.begin();
    // // Use iterators to iterate over the stack
    // for (Stack<int>::Iterator it = myStack.begin(); it != myStack.end(); ++it) {
    //     std::cout << *it << " ";
    // }

    // std::cout << std::endl;

    return 0;
}
