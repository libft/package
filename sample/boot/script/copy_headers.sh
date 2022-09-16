#!/bin/sh

set -e

cd "$LIBFT_PACKAGE_ROOT/home/$1"

find include -name "*.h" | while IFS= read -r line
do
  cp "$line" "$LIBFT_PACKAGE_ROOT/usr/include/$(basename "$line")"
done
