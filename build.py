import os
import sys
import subprocess
import argparse

LAYOUT_NAME = "bdsilver89"
ROOT_PATH = os.path.abspath(os.path.dirname(__file__))
LAYOUT_DIR = os.path.join(ROOT_PATH, LAYOUT_NAME)

def build(qmk_path: str) -> int:
    if not os.path.exists(qmk_path):
        print(f'ERROR: qmk-path={qmk_path} does not exist')
        return 1

    cwd = os.getcwd()
    os.chdir(qmk_path)

    try:
        result = subprocess.check_output(["qmk", "compile", "-kb", "keebio/levinson/rev3", "-km", LAYOUT_NAME]).decode('ascii')
        print(result)
    except subprocess.CalledProcessError:
        print("ERROR: Build failed")
        os.chdir(cwd)
        return 1

    os.chdir(cwd)
    return 0

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--qmk-path", "-q", help="qmk directory path", required=True)
    args = parser.parse_args(sys.argv[1:])
    sys.exit(build(args.qmk_path))