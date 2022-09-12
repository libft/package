default: all
.PHONY: default

PACKAGE_NAME = wrap
LIBRARY_TARGETS = libwrap.a
EXECUTABLE_TARGETS =

CFLAGS = -Wall -Wextra -Werror -pedantic -g -O
ARFLAGS = cr


.PHONY: all
all: $(LIBRARY_TARGETS) $(EXECUTABLE_TARGETS)

.PHONY: clean
clean:
	rm -rf $(LIBFT_PACKAGE_ROOT)/tmp/$(PACKAGE_NAME)

.PHONY: fclean
fclean: clean
	rm -rf $(LIBFT_PACKAGE_ROOT)/var/cache/$(PACKAGE_NAME)

.PHONY: re
re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: init
init:
	@! echo what to do?

.PHONY: test
test:

.PHONY: check
check:

.PHONY: install
install: all
	cp $(LIBRARY_TARGETS) $(LIBFT_PACKAGE_ROOT)/lib
	cp $(EXECUTABLE_TARGETS) $(LIBFT_PACKAGE_ROOT)/bin

CACHE_DIR = $(LIBFT_PACKAGE_ROOT)/var/cache/$(PACKAGE_NAME)
TMP_DIR = $(LIBFT_PACKAGE_ROOT)/tmp/$(PACKAGE_NAME)

libwrap.a: \
	$(CACHE_DIR)/wrap_exit.o \
	$(CACHE_DIR)/wrap_malloc.o \
	$(CACHE_DIR)/wrap_free.o
	rm -f $(TMP_DIR)/libwrap.a
	$(AR) $(ARFLAGS) $(TMP_DIR)/libwrap.a $^
	mv -f $(TMP_DIR)/libwrap.a $@

$(CACHE_DIR)/wrap_exit.o:
	mkdir -p $(TMP_DIR) $(CACHE_DIR)
	cp src/wrap_exit.c $(TMP_DIR)/wrap_exit.c
	$(CC) $(CFLAGS) -c $(TMP_DIR)/wrap_exit.c
	mv -f $(TMP_DIR)/wrap_exit.o $@
	rm -f $(TMP_DIR)/wrap_exit.c
$(CACHE_DIR)/wrap_malloc.o:
	mkdir -p $(TMP_DIR) $(CACHE_DIR)
	cp src/wrap_malloc.c $(TMP_DIR)/wrap_malloc.c
	$(CC) $(CFLAGS) -c $(TMP_DIR)/wrap_malloc.c
	mv -f $(TMP_DIR)/wrap_malloc.o $@
	rm -f $(TMP_DIR)/wrap_malloc.c
$(CACHE_DIR)/wrap_free.o:
	mkdir -p $(TMP_DIR) $(CACHE_DIR)
	cp src/wrap_free.c $(TMP_DIR)/wrap_free.c
	$(CC) $(CFLAGS) -c $(TMP_DIR)/wrap_free.c
	mv -f $(TMP_DIR)/wrap_free.o $@
	rm -f $(TMP_DIR)/wrap_free.c
