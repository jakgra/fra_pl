#!/bin/bash

FRA_PATH=$(<../FRA_PATH)

if [ "${FRA_PATH:0:1}" = "/" ]
then
	echo "${FRA_PATH}"
else
	echo "../${FRA_PATH}"
fi
