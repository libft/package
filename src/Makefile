DIRECTORIES := boot sys bin lib etc opt home tmp usr/include usr/share usr/src var/cache var/log var/lib

all: $(DIRECTORIES)
	@(cd src && LIBFT_PACKAGE_ROOT="$$(cd .. && pwd)" PATH="$$(cd .. && pwd)/bin:$$PATH" $(MAKE) all)
.PHONY: all

$(DIRECTORIES):
	@mkdir -p $@
