#!/bin/sh

# Copyright (C) 2023  Braiins Systems s.r.o.
#
# This file is part of Braiins Open-Source Initiative (BOSI).
#
# BOSI is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.
#
# Please, keep in mind that we may also license BOSI or any part thereof
# under a proprietary license. For more information on the terms and conditions
# of such proprietary license or if you have any other questions, please
# contact us at opensource@braiins.com.

# Copy stock model ID from post_install to /etc for ambiguous model resolution
if [ -f "./stock_model_id" ]; then
    cp "./stock_model_id" "/etc/stock_model_id"
    echo "Stock model ID copied to /etc/stock_model_id"
fi

packages_mask="./packages/*.ipk"

# shellcheck disable=SC2086  # Do not quote $packages_mask - intentional globbing
if ls $packages_mask 2>/dev/null 1>&2; then
    echo "Packages to install: "
    # shellcheck disable=SC2086
    ls $packages_mask
    # shellcheck disable=SC2086  # Do not quote - packages need to be handled separately
    if /bin/opkg install $packages_mask; then
        echo "Packages installed successfully"
    else
        echo "Packages failed to install"
    fi
fi
