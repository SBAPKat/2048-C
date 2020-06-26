#!/bin/bash

export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:.
echo "Value of LD LIBRARY PATH "${LD_LIBRARY_PATH}
./${1}
