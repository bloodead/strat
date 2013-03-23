#ifndef _GTK_INIT_
#define	_GTK_INIT_
#include <gtk/gtk.h>

class gtk_m
{
	GtkWidget* window;

	public :
		gtk_m(int*, char***);
		void gtk_init_var(void);
		void gtk_run(void);

};

class gtk_case
{
	int	casenumber;
	gtk_case* next;


	void	gtk_case_next();
};


#endif
