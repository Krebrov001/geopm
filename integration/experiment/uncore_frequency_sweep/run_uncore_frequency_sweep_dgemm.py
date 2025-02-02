#!/usr/bin/env python3
#
#  Copyright (c) 2015 - 2022, Intel Corporation
#  SPDX-License-Identifier: BSD-3-Clause
#

'''
Example uncore frequency sweep experiment using geopmbench.
'''


from experiment.uncore_frequency_sweep import uncore_frequency_sweep
from apps.geopmbench import geopmbench


if __name__ == '__main__':

    app_conf = geopmbench.DgemmAppConf()
    uncore_frequency_sweep.main(app_conf)
