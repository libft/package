all: $(LIBFT_PACKAGE_ROOT)/tmp/a/a.a
$(LIBFT_PACKAGE_ROOT)/tmp/a/a.a: $(LIBFT_PACKAGE_ROOT)/tmp/a/a.o
	$(AR) $(ARFLAGS) $@ $^
$(LIBFT_PACKAGE_ROOT)/tmp/a/a.o: a.c
clean:
fclean: clean
	rm -f a.a
re: fclean
	$(MAKE) all
init:
	$(MAKE) -f deps_all.mk deps.txt
test:
check: all
install:
	cp $(LIBFT_PACKAGE_ROOT)/tmp/a/a.a $(LIBFT_PACKAGE_ROOT)/usr/lib
	cp a.h $(LIBFT_PACKAGE_ROOT)/usr/include
