#include "types.h"

struct struct_80232B10 {
    s32 f00;
    s32 f04;
    s32 f08; //2
};

extern "C" {
    s32 fn_80232B10(struct_80232B10* structure) {
        return structure->f08;
    }
}