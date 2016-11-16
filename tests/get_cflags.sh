#!/bin/bash

echo "-I../include -I$(./get_fra_path.sh)/include -Wall -Wextra -pedantic -std=gnu99 -g"
