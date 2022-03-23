#!/usr/bin/bash

function traverse_dir() {
    allfile=$(ls "$1")
    for file in $allfile; do
        if [ -d "$1"/"$file" ]; then
            traverse_dir "$1"/"$file"
        else
            echo "$1"/"$file"
        fi
    done
}

function delete_obj_file() {
    if [ ! -d "$1" ]; then
        basename=$(basename "$1")
        selfname=$(basename "$0")
        # 判断是否是可执行文件并且不是本身
        if [ -x "$1" ] && [ "$basename" != "$selfname" ]; then
            rm -rf "$1"
        fi
        return
    fi
}

clean_path=$(cd "$(dirname "$0")" || exit;pwd)
echo "清理""$clean_path""目录下的可执行文件"
allfile=$(traverse_dir "$clean_path")

for file in $allfile; do
    delete_obj_file "$file"
done

