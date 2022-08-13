deps_all.mk: deps.txt
	@sh $(LIBFT_PACKAGE_ROOT)/boot/deps_all.sh deps.txt > deps_all.mk
