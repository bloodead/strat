NAME	=	id_strat
SRCS	=	main.cpp \
		gtk_init.cpp
LDFLAGS = `pkg-config gtk+-2.0 --libs`
CFLAGS = `pkg-config gtk+-2.0 --cflags`

all: $(NAME)

$(NAME) : 
	g++ -c $(SRCS) $(CFLAGS) $(LDFLAGS)
	g++ -o  $(NAME) $(SRCS) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f *.o

distclean:	clean
	rm -f $(NAME)
rebuild :	distclean all
