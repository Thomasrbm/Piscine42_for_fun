#!/bin/bash

ifconfig eth0 | grep ether | awk '{print $2}'