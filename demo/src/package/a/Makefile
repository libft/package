all: $(LIBFT_PACKAGE_ROOT)/tmp/a/a.a
$(LIBFT_PACKAGE_ROOT)/tmp/a/a.a: $(LIBFT_PACKAGE_ROOT)/tmp/a/a.o
	$(AR) cr $@ $^
$(LIBFT_PACKAGE_ROOT)/tmp/a/a.o: a.c
	mkdir -p $(@D)
	$(CC) -o $@ -c $< $(CFLAGS)
clean:
fclean: clean
	rm -f a.a
re: fclean
	$(MAKE) all
init:
	$(MAKE) -f deps_all.mk deps.txt
test:
check:
install: all
	cp $(LIBFT_PACKAGE_ROOT)/tmp/a/a.a $(LIBFT_PACKAGE_ROOT)/lib
	cp a.h $(LIBFT_PACKAGE_ROOT)/usr/include
	cp a.c $(LIBFT_PACKAGE_ROOT)/usr/src
