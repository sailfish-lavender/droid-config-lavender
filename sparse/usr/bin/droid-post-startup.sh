#!/bin/bash

# Copyright (C) 2020 - Dreemurrs Embedded Labs
#
# CONFIDENTIAL AND PROPRIETARY
# Use is subject to license terms included in the distribution.

# FIXME: Investigate on why hci0 is not shown until Bluebinder is restarted.
sleep 10
systemctl restart bluebinder.service
