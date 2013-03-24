#include <gtk/gtk.h>
#include "gtk_init.h"
#include "open_file.h"
#include <iostream>


int	main(int argc, char** argv)
{
	gtk_m gtk_strat(&argc, &argv);

	open_file(argc, argv);
	gtk_m	&Gtk_m = gtk_strat;
	gtk_strat.gtk_init_var();
	gtk_strat.gtk_run();
	return 0;
}
