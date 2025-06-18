#!/usr/bin/env python3

# inside esp8266_deauther/esp8266_deauther
# call this script
# python3 ../utils/arduino-cli-compile.py 2.5.0

import subprocess
import os
import sys

boards = [
    "NODEMCU",
]

version = sys.argv[1]

folder = f"../build_{version}"
os.system(f"mkdir {folder}")

for board in boards:
    print(f"Compiling {board}...", flush=True)

    if os.path.exists(f"{folder}/esp8266_deauther_{version}_{board}.bin"):
        print("Already compiled")
        continue

    os.system(f"arduino-cli cache clean")
    command = f"arduino-cli compile --fqbn deauther:esp8266:generic --build-property \"build.extra_flags=-DESP8266 -D{board}\" --output-dir {folder}"
    process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE)
    process.wait()
    os.system(
        f"mv {folder}/esp8266_deauther.ino.bin {folder}/esp8266_deauther_{version}_{board}.bin")
    print(f"OK")

os.system(f"rm {folder}/esp8266_deauther.ino.elf")
os.system(f"rm {folder}/esp8266_deauther.ino.map")

print("Finished :)")
