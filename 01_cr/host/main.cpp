#define CR_HOST
#define CR_WINDOWS
#include "cr.h"

int main(int argc, char* argv[])
{
    cr_plugin ctx;
    cr_plugin_open(ctx, "C:/Dev/HelloCppHotReloading/01_cr/build/Debug/module.dll");

    while (true)
    {
        cr_plugin_update(ctx);
    }    

    cr_plugin_close(ctx);

    return 0;
}