
#include <pspkernel.h>
#include <pspdisplay.h>
#include <pspdebug.h>

PSP_MODULE_INFO("ECLIPSE", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

int main(int argc, char *argv[])
{
    pspDebugScreenInit();

    pspDebugScreenSetTextColor(0xFFFFFFFF);
    pspDebugScreenPrintf("\n\n");
    pspDebugScreenPrintf("  =========================\n");
    pspDebugScreenPrintf("       E C L I P S E\n");
    pspDebugScreenPrintf("    THE LOST KINGDOM\n");
    pspDebugScreenPrintf("  =========================\n\n");
    pspDebugScreenPrintf("  A new adventure begins...\n\n");
    pspDebugScreenPrintf("  Development Build 0.1\n");

    sceKernelSleepThread();
    return 0;
}
