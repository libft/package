#!/bin/sh

echo 'deps_all.mk: deps.txt'
echo '	@sh $(LIBFT_PACKAGE_ROOT)/boot/deps_all.sh > deps_all.mk'

printf 'deps_all.txt:'
while IFS= read -r line
do
  printf ' $(LIBFT_PACKAGE_ROOT)/home/%s/deps_all.txt' "$line"
done < "$1"
echo ''
echo '	@echo $$(basename $$(pwd)) | cat - $^ | sort | uniq > $@'

while IFS= read -r line
do
  echo "\$(LIBFT_PACKAGE_ROOT)/home/$line/deps_all.txt: \$(LIBFT_PACKAGE_ROOT)/home/$line"
  echo "	@cd \$(LIBFT_PACKAGE_ROOT)/home/$line && make -f deps_all.mk"
  echo "\$(LIBFT_PACKAGE_ROOT)/home/$line:"
  echo "	@sh \$(LIBFT_PACKAGE_ROOT)/boot/resolve_package.sh $line"
done < "$1"
