ifconfig | grep "ether" | awk '{print substr($2, 1)}'
