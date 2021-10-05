/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */
#include "stdio.h"
    #include "stdlib.h"
    #include "stdbool.h"
    #include "alt_types.h"
    #include "system.h"
    #include "altera_avalon_pio_regs.h"
    #include <stdint.h>
    #include "altera_up_avalon_video_pixel_buffer_dma.h"
	#include "bmp_arr.h"
	int x;
	int y;

int main()
{
	alt_up_pixel_buffer_dma_dev* hPB = NULL;
	    hPB = alt_up_pixel_buffer_dma_open_dev (VGA_PIXEL_DMA_NAME);
	    alt_up_pixel_buffer_dma_clear_screen (hPB, 0);
	    alt_up_pixel_buffer_dma_clear_screen (hPB, 1);
	    void Delay_Joypad   () {volatile int d = 0; for (d = 0; d <  40000; d++){}}
	    if (hPB == NULL)
	    {
	        printf ("VGA system missing");

	        while (1);
	    }

	for(y=0;y<=32;y++){
	for(x=0;x<=32;x++){
	alt_up_pixel_buffer_dma_draw(hPB, ICON00[y][x],x+5,y+5);
	alt_up_pixel_buffer_dma_draw(hPB, ICON01[y][x],x+37,y+5);
	alt_up_pixel_buffer_dma_draw(hPB, ICON02[y][x],x+69,y+5);
	alt_up_pixel_buffer_dma_draw(hPB, ICON03[y][x],x+101,y+5);
	alt_up_pixel_buffer_dma_draw(hPB, ICON04[y][x],x+37,y+37);
	alt_up_pixel_buffer_dma_draw(hPB, ICON05[y][x],x+69,y+37);
	alt_up_pixel_buffer_dma_draw(hPB, ICON06[y][x],x+101,y+37);
	alt_up_pixel_buffer_dma_draw(hPB, ICON07[y][x],x+133,y+5);
	alt_up_pixel_buffer_dma_draw(hPB, ICON08[y][x],x+133,y+37);
	alt_up_pixel_buffer_dma_draw(hPB, ICON09[y][x],x+165,y+5);
	}
	}
	return 0;
}
