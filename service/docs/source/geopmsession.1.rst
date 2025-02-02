
geopmsession(1) -- Command line interface for the GEOPM service batch read features
===================================================================================


Description
-----------

Command line interface for the GEOPM service read features.

This command can be used to read signals by opening a session with the
geopm service.  The user specifies which signals to read with standard
input. When no command line options are provided, a single read of the
signals requested though standard input is made and the results are
printed to the screen.


The input to the command line tool has one request per line.  A
request for reading is made of up three strings separated by white
space.  The first string is the signal name, the second string is the
domain name, and the third string is the domain index.  An example
where the entire ``THERM_STATUS`` model specific register is read from
core zero:

.. code-block:: bash

    $ echo "MSR::THERM_STATUS# core 0" | geopmsession
    0x0000000088430800


See Also
--------

:doc:`geopm(7) <geopm.7>`,
:doc:`geopm_pio(7) <geopm_pio.7>`,
:doc:`geopmread(1) <geopmread.1>`,
:doc:`geopmwrite(1) <geopmwrite.1>`,
