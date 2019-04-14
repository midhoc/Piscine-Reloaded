#!/bin/sh
ifconfig -a | grep  "ether*" | cut -c 8- | cat -e | cut -c -17