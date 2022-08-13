all: $(LIBFT_PACKAGE_ROOT)/tmp/a/b.a
$(LIBFT_PACKAGE_ROOT)/tmp/b/b.a: $(LIBFT_PACKAGE_ROOT)/tmp/b/b.o
	$(AR) $(ARFLAGS) $@ $^
$(LIBFT_PACKAGE_ROOT)/tmp/b/b.o: b.c
clean:
fclean: clean
	rm -f b.a
re: fclean
	$(MAKE) all
init:
	$(MAKE) -f deps_all.mk deps.txt
test:
check: all
install:
	cp $(LIBFT_PACKAGE_ROOT)/tmp/b/b.a $(LIBFT_PACKAGE_ROOT)/usr/lib
	cp b.h $(LIBFT_PACKAGE_ROOT)/usr/include
