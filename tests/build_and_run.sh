#!/bin/bash

for t in 
do
	./run_simple.sh $t
	if [ $? -ne 0 ]
	then
		exit $?
	fi
done

for t in pl
do
	./run_server.sh $t
	if [ $? -ne 0 ]
	then
		exit $?
	fi
done

for t in 
do
	echo "++++++++++====================++++++++++"
	echo "-----> Running test \"$t\" ..."
	if ./$t.sh
	then
		echo "**** \"$t\" test succeded :)"
	else
		echo "!!!! \"$t\" test failed :("
		exit $?
	fi
done

echo "###############################################################"
echo "###############################################################"
echo "##############       ALL TESTS SUCCEEDED :)    ################"
echo "###############################################################"
echo "###############################################################"
