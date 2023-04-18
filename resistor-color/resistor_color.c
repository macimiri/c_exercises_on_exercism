#include "resistor_color.h"

int color_code(resistor_band_t color){
    // values based on order of definition of enum
    return color;
}

resistor_band_t* colors(){
    static resistor_band_t all_colors[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
    return all_colors;
}
