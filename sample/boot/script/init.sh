#!/bin/sh

set -e

[ ! "$LIBFT_PACKAGE_ROOT" = "" ] || (echo "\$LIBFT_PACKAGE_ROOT is not defined" && false)

mkdir -p "$LIBFT_PACKAGE_ROOT/usr/include"
mkdir -p "$LIBFT_PACKAGE_ROOT/usr/share"
mkdir -p "$LIBFT_PACKAGE_ROOT/usr/src"
mkdir -p "$LIBFT_PACKAGE_ROOT/bin"
mkdir -p "$LIBFT_PACKAGE_ROOT/lib"
mkdir -p "$LIBFT_PACKAGE_ROOT/sys"
mkdir -p "$LIBFT_PACKAGE_ROOT/tmp"
mkdir -p "$LIBFT_PACKAGE_ROOT/var/cache"
mkdir -p "$LIBFT_PACKAGE_ROOT/var/log"
mkdir -p "$LIBFT_PACKAGE_ROOT/var/lib"
