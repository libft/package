#!/bin/sh

set -e

test -f resolve_file.txt

cat resolve_file.txt | grep "$1=" | while IFS="=" read -r name path
do
  rm -rf "$LIBFT_PACKAGE_ROOT/sys/tmp_resolve_$name" &&
  test -d "$path" &&
  cp -r "$path" "$LIBFT_PACKAGE_ROOT/sys/tmp_resolve_$name" &&
  cp "$LIBFT_PACKAGE_ROOT/boot/deps_all.mk" "$LIBFT_PACKAGE_ROOT/sys/tmp_resolve_$name" &&
  sleep 1 &&
  touch "$LIBFT_PACKAGE_ROOT/sys/tmp_resolve_$name/deps.txt" &&
  make -C "$LIBFT_PACKAGE_ROOT/sys/tmp_resolve_$name" -f deps_all.mk deps_all.txt &&
  make -C "$LIBFT_PACKAGE_ROOT/sys/tmp_resolve_$name" test &&
  make -C "$LIBFT_PACKAGE_ROOT/sys/tmp_resolve_$name" check &&
  make -C "$LIBFT_PACKAGE_ROOT/sys/tmp_resolve_$name" install &&
  mv "$LIBFT_PACKAGE_ROOT/sys/tmp_resolve_$name" "$LIBFT_PACKAGE_ROOT/home/$name" &&
  : || echo "failed" && continue
  exit 0
done
