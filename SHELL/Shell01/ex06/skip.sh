#!/bin/bash

ls -l | awk 'NR % 2 != 0'  # NR = Number of Record   = numero de la ligne courrante
