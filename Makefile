NAME	=	id_strat
SRCS	=	main.cpp gtk_init.cpp


go : 
	g++ -o $(NAME) $(SRCS) `pkg-config gtk+-2.0 --cflags` `pkg-config gtk+-2.0 --libs` 

distclean:
	rm -f $(NAME)
