#include "testlib.h"
using namespace std;

int main(int argc, char** argv) {
    registerValidation(argc, argv);

    int a_min, a_max, b_min, b_max;
    std::string group = validator.group();

    if (group == "subtask_1") {
        a_min = b_min = 1;
        a_max = b_max = 1;
    } else if (group == "subtask_2") {
        a_min = b_min = 1;
        a_max = b_max = 5;
    } else {
        a_min = b_min = 1;
        a_max = b_max = 10;
    }

    inf.readInt(a_min, a_max, "A");
    inf.readSpace();
    inf.readInt(b_min, b_max, "B");
    inf.readEoln();
    inf.readEof();
}
