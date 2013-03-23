#include "gtk_init.h"



gtk_m::gtk_m(int* argc, char*** argv)
{
	gtk_init (argc, argv);

}


void gtk_m::gtk_init_var(void)
{
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_default_size(GTK_WINDOW(window), 800, 800);
	gtk_widget_show(window);
}

void gtk_m::gtk_run(void)
{
	gtk_main();

}
