#include "cr.h"
#include <cassert>
#include <iostream>
/*
<returns>
-1 if a failure happened during an update;
-2 if a failure happened during a load or unload;
anything else is returned directly from the plugin cr_main.
</returns>
*/
CR_EXPORT int cr_main(struct cr_plugin *ctx, enum cr_op operation) {
    assert(ctx);
    switch (operation) {
        case CR_LOAD:
        {
            std::cout << "Load \n";

            // loading back from a reload
            return 0;
        }
        case CR_UNLOAD:
        {
            std::cout << "Unload \n";

            // preparing to a new reload
            return 0;
        }
        case CR_CLOSE:
        {
            std::cout << "Close \n";

            // the plugin will close and not reload anymore
            return 0;
        }
        case CR_STEP:
        {
            std::cout << "Update5 \n";
            return 0;
        }
    }

    assert(false);
    return 0;
}