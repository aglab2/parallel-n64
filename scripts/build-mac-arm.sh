#!/bin/bash
# To be used on Manjaro with MinGW packages installed
LIBRETRO_APPLE_PLATFORM=arm64-apple-macos10.7 \
CROSS_COMPILE=1 \
platform=osx \
ARCH=aarch64 \
CC=clang \
CXX=clang++ \
HAVE_NEON=1 \
make WITH_DYNAREC=aarch64 HAVE_THR_AL=1 HAVE_PARALLEL=0 HAVE_PARALLEL_RSP=0 -j12
