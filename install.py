import os
import sys
import shutil
import argparse

from typing import Optional

LAYOUT_NAME = "bdsilver89"
ROOT_PATH = os.path.abspath(os.path.dirname(__file__))
LAYOUT_DIR = os.path.join(ROOT_PATH, LAYOUT_NAME)

def install(qmk_path: str, force: Optional[bool] = False) -> int:
    if not os.path.exists(qmk_path):
        print(f'ERROR: qmk-path={qmk_path} does not exist')
        return 1

    dest_path = os.path.join(qmk_path, "keyboards", "keebio", "levinson", "keymaps")
    if not os.path.exists(dest_path):
        print(f'ERROR: destination-path={dest_path} does not exist')
        return 1

    dest_layout_path = os.path.join(dest_path, LAYOUT_NAME)
    if os.path.exists(dest_layout_path):
        if not force:
            print(f'ERROR: Target layout path already exists. If you wish to overwite use "--force" option')
            return 1
        else:
            shutil.rmtree(dest_layout_path)


    print(f'Copying {LAYOUT_DIR} to {dest_path}')
    shutil.copytree(LAYOUT_DIR, dest_layout_path)
    return 0


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--qmk-path", "-q", help="qmk directory path", required=True)
    parser.add_argument("--force", "-f", action="store_true", help="overwrite any existing layout if found")
    args = parser.parse_args(sys.argv[1:])

    sys.exit(install(args.qmk_path, force=args.force))