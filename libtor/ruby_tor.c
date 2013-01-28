#include <ruby.h>

void lanza_tor(char *);

static VALUE start(VALUE self, VALUE port) {
    lanza_tor(StringValuePtr(port));
    return Qtrue;
}
void Init_Tor() {
    VALUE mTor = rb_define_module("Tor");
    rb_define_module_function(mTor, "start", start, 1);
}
