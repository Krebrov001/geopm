
geopm::PowerGovernorAgent(3) -- agent that enforces a power cap
===============================================================


Synopsis
--------

#include `<geopm/PowerGovernorAgent.hpp> <https://github.com/geopm/geopm/blob/dev/src/PowerGovernorAgent.hpp>`_

``Link with -lgeopm (MPI) or -lgeopmpolicy (non-MPI)``

Description
-----------

The behavior of this agent is described in more detail in the
:doc:`geopm_agent_power_governor(7) <geopm_agent_power_governor.7>` man page.  The power limit is
enforced using the :doc:`geopm::PowerGovernor(3) <GEOPM_CXX_MAN_PowerGovernor.3>` class.

For more details, see the doxygen
page at https://geopm.github.io/doxall/classgeopm_1_1_power_governor_agent.html.

See Also
--------

:doc:`geopm(7) <geopm.7>`\ ,
:doc:`geopm_agent_power_governor(7) <geopm_agent_power_governor.7>`\ ,
:doc:`geopm::Agent(3) <GEOPM_CXX_MAN_Agent.3>`\ ,
:doc:`geopm::PowerGovernor(3) <GEOPM_CXX_MAN_PowerGovernor.3>`
