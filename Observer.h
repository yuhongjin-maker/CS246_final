#ifndef _OBSERVER_H_
#define _OBSERVER_H_
#include "Subject.h"

class Observer {
    public:
    void notify(Subject& s);
};

#endif

