#!/bin/sh

set -e

cd "$1"

find includes -name "*.h" | while IFS= read -r line
do
  cp "$line" "$LIBFT_PACKAGE_ROOT/usr/include/$(basename "$line")"
done
