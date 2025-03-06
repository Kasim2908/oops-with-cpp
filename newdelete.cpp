#include <iostream>
using namespace std;

class Sample {
public:
    // Overloading new operator
    void* operator new(size_t size) {
        cout << "Custom new called. Allocating " << size << " bytes.\n";
        return malloc(size);  // Allocating memory
    }

    // Overloading delete operator
    void operator delete(void* ptr) {
        cout << "Custom delete called. Freeing memory.\n";
        free(ptr);  // Freeing allocated memory
    }
};

int main() {
    Sample* obj = new Sample;  // Calls overloaded new
    delete obj;  // Calls overloaded delete

    return 0;
}
