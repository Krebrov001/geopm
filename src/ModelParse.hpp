/*
 * Copyright (c) 2015 - 2022, Intel Corporation
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef MODELPARSE_HPP_INCLUDE
#define MODELPARSE_HPP_INCLUDE

#include <string>
#include <vector>

namespace geopm
{
    void model_parse_config(const std::string config_path, uint64_t &loop_count,
                            std::vector<std::string> &region_name, std::vector<double> &big_o);

}

#endif
