#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include <vector>
#include "Observer.h"

class Subject {
    public:
    std::vector<Observer*> observers;

    void attach(Observer* o);
    void notifyEdgeObservers();
    void notifyVertexObservers();
};

#endif
