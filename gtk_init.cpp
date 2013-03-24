#include "gtk_init.h"
#include <iostream>

gtk_m::gtk_m(int* argc, char*** argv)
{
	gtk_init (argc, argv);

}

void gtk_m::gtk_plateform(void)
{
	int	i;
	int	j;
	int	b;

	i = 0;
	b = 0;
	

	while (i != 10)
	{
		hbox[i] = gtk_hbox_new(TRUE, 0);
		j = 0;
		while (j != 10)
		{
			button[b] = gtk_button_new();
			gtk_box_pack_start(GTK_BOX(hbox[i]), button[b], TRUE, TRUE, 0);
			j = j + 1;
			b = b + 1;
		}
		gtk_box_pack_start(GTK_BOX(vbox), hbox[i], TRUE, TRUE, 0);
		i = i + 1;
	}
}

void gtk_m::gtk_init_var(void)
{
	vbox = gtk_vbox_new(TRUE, 0);
	button = new GtkWidget*[100];
	hbox = new GtkWidget*[10];
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_default_size(GTK_WINDOW(window), 800, 800);
	gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);
	gtk_container_set_border_width(GTK_CONTAINER(window), 0);
	gtk_plateform();
	gtk_container_add(GTK_CONTAINER(window), GTK_WIDGET(vbox));
	gtk_widget_show_all(window);
}

void gtk_m::gtk_run(void)
{
	gtk_main();

}
