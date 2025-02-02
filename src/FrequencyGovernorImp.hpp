/*
 * Copyright (c) 2015 - 2022, Intel Corporation
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FREQUENCYGOVERNORIMP_HPP_INCLUDE
#define FREQUENCYGOVERNORIMP_HPP_INCLUDE

#include <memory>
#include <vector>
#include <string>

#include "FrequencyGovernor.hpp"

namespace geopm
{
    class FrequencyGovernorImp : public FrequencyGovernor
    {
        public:
            FrequencyGovernorImp();
            FrequencyGovernorImp(PlatformIO &platform_io, const PlatformTopo &platform_topo);
            virtual ~FrequencyGovernorImp();
            void init_platform_io(void) override;
            int frequency_domain_type(void) const override;
            void adjust_platform(const std::vector<double> &frequency_request) override;
            bool do_write_batch(void) const override;
            bool set_frequency_bounds(double freq_min, double freq_max) override;
            double get_frequency_min() const override;
            double get_frequency_max() const override;
            double get_frequency_step() const override;
            void validate_policy(double &freq_min, double &freq_max) const override;
        private:
            double get_limit(const std::string &sig_name) const;
            PlatformIO &m_platform_io;
            const PlatformTopo &m_platform_topo;
            const double M_FREQ_STEP;
            const double M_PLAT_FREQ_MIN;
            const double M_PLAT_FREQ_MAX;
            double m_freq_min;
            double m_freq_max;
            bool m_do_write_batch;
            int m_freq_ctl_domain_type;
            std::vector<int> m_control_idx;
            std::vector<double> m_last_freq;
    };
}

#endif
