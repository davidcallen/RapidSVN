#!/bin/bash
#
# This script updates the file rapidsvn.pot
# and merges it with the existing translations
# in the language subdirectories

xgettext -C -k_ -s -o rapidsvn.pot ../*.cpp
for X in de fr pt_BR ru uk zh_CN ; do
	msgmerge -U $X/rapidsvn.po rapidsvn.pot
done

