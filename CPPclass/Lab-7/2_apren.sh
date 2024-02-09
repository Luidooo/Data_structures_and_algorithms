#!/bin/bash
exp=$((64+32+16+8+4))
#echo "$exp"

number=$(echo "scale=10; 2^22" | bc)
#echo "$number"

sinal=1

#valor = sinal * 2^(expoente-127) * (1 + mantissa)
exp=$((exp-127))

#echo "$exp"
value=$(echo "scale=10;2^exp" |bc)
echo "$value"



