CFLAGS := -I $(LIBFT_PACKAGE_ROOT)/usr/include

all: $(LIBFT_PACKAGE_ROOT)/tmp/c/c.a
$(LIBFT_PACKAGE_ROOT)/tmp/c/c.a: $(LIBFT_PACKAGE_ROOT)/tmp/c/c.o
	$(AR) cr $@ $^
$(LIBFT_PACKAGE_ROOT)/tmp/c/c.o: c.c
	mkdir -p $(@D)
	$(CC) -o $@ -c $< $(CFLAGS)
clean:
fclean: clean
	rm -f c.a
re: fclean
	$(MAKE) all
init:
	$(MAKE) -f deps_all.mk deps.txt
test:
check:
install: all
	cp $(LIBFT_PACKAGE_ROOT)/tmp/c/c.a $(LIBFT_PACKAGE_ROOT)/lib
	cp c.h $(LIBFT_PACKAGE_ROOT)/usr/include
	cp c.c $(LIBFT_PACKAGE_ROOT)/usr/src
