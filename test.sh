#!/bin/bash
if [ ! -d "build" ]; then
  echo "ERROR: No se compiló el proyecto. Ejecutá './build.sh' antes de probar."
  exit 1
elif [ ! -f "build/TPTests" ]; then
  echo "ERROR: El proyecto no compiló correctamente. Revisá los errores que reporta './build.sh'."
  exit 1
else
  ./build/TPTests
fi