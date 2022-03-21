#!/bin/bash
# To be used on Manjaro with MinGW packages installed
LIBRETRO_APPLE_PLATFORM=x86_64-apple-macos10.7 \
CROSS_COMPILE=1 \
platform=osx \
ARCH=x86_64 \
CC=clang \
CXX=clang++ \
make WITH_DYNAREC=x86_64 HAVE_THR_AL=0 HAVE_PARALLEL=0 HAVE_PARALLEL_RSP=0 -j12
