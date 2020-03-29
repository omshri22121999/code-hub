# !/bin/bash

mkdir $1
cp code.cpp ./$1/code.cpp
cp example-question.md ./$1/$1.md
cd $1
touch input.txt
touch output.txt
f=${1//-/ }
f=($f)
d=${f[@]^}
echo $d created!
sed -i 's/example-question/'"$d"'/g' $1.md
