#!/bin/bash

set -xe

git submodule update --init circuitpython
pushd ./circuitpython/ports/espressif
make fetch-port-submodules
cd esp-idf
./install.sh
source ./export.sh
cd ../boards
ln -sfn ../../../../twsu_arcade_coder .
popd
python3 -m pip install -r ./circuitpython/requirements-dev.txt
