#include <stdio.h>
#include <windows.h>
#include "../../modules/utils/utils.h"
#include "../../constants/constants.h"

// Function to display the splash screen
void splash_screen()
{
    clear_screen();

    printf("\n\n\n\n");
    printf("    %s__  __          _ _ ____  _%s\n", GREEN_COLOR, RESET_COLOR);
    printf("    %s|  \\/  | ___  __| (_)  _ \\(_) __ _  __ _ _ __   ___  ___  ___ %s\n", GREEN_COLOR, RESET_COLOR);
    printf("    %s| |\\/| |/ _ \\/ _` | | | | | |/ _` |/ _` | '_ \\ / _ \\/ __|/ _ \\%s\n", GREEN_COLOR, RESET_COLOR);
    printf("    %s| |  | |  __/ (_| | | |_| | | (_| | (_| | | | | (_) \\__ \\  __/%s\n", GREEN_COLOR, RESET_COLOR);
    printf("    %s|_|  |_|\____|\\__,_|_|____/|_|\\__,_|\\__, |_| |_\\___/|___/\\___|%s\n", GREEN_COLOR, RESET_COLOR);
    printf("    %s                                   |___/                      %s\n", GREEN_COLOR, RESET_COLOR);

    loading_animation("Initializing");
    clear_screen();
}
