echo "Setting bt MAC address manually"
addr="$(ls /var/lib/bluetooth | head -1)"
rm -f /var/lib/bluetooth/board-address
touch /var/lib/bluetooth/board-address
echo $addr > /var/lib/bluetooth/board-address
echo "bluetooth_bdaddr Done"
exit
