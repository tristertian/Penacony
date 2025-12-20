#include "IdNo.h"

int IdNo::counter = 0;  // 'static' NONEXIST
// static member should be accessed by form 'T::member'

IdNo::IdNo(){
    id_no = ++counter;
}
int IdNo::id() const {
    return id_no;
}