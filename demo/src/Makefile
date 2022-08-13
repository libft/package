Makefile: deps_all.txt
	@make -f deps_all.mk deps_all.txt
	@touch $@
deps_all.txt: deps_all.mk deps.txt
	@make -f deps_all.mk $@

CFLAGS := -I $(LIBFT_PACKAGE_ROOT)/usr/include
LDFLAGS :=
LIBS := $(LIBFT_PACKAGE_ROOT)/lib/a.a $(LIBFT_PACKAGE_ROOT)/lib/b.a $(LIBFT_PACKAGE_ROOT)/lib/c.a

all: $(LIBFT_PACKAGE_ROOT)/tmp/main/main.exe
$(LIBFT_PACKAGE_ROOT)/tmp/main/main.exe: $(LIBFT_PACKAGE_ROOT)/tmp/main/main.o
	$(CC) -o $@ $^ $(LDFLAGS) $(LIBS)
$(LIBFT_PACKAGE_ROOT)/tmp/main/main.o: main.c
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
	cp $(LIBFT_PACKAGE_ROOT)/tmp/main/main.exe $(LIBFT_PACKAGE_ROOT)/bin
	cp main.c $(LIBFT_PACKAGE_ROOT)/usr/src
