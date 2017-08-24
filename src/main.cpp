
#include <iostream>
#include <string>
#include <string.h>
#include "kv.pb.h"

using namespace std;

int main(int argc, char** argv)
{
    kv k;
    k.set_key("company");
    k.set_value("leoox");

    cout << k.key() << ":" << k.value() << endl;
    return 0;
}