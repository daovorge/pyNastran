FLUTTER       50    PKNL      51      52      53
$--------------------------------------------------------------------------
$ comment
MKAERO1,0.001, 0.1, 0.2, 0.3, 0.4, 0.5
,0.001,0.002,0.003,0.005,0.007,0.009
MKAERO1,0.001, 0.1, 0.2, 0.3, 0.4, 0.5
,0.01,0.02,0.03,0.05,0.07,0.09
MKAERO1,0.001, 0.1, 0.2, 0.3, 0.4, 0.5
,0.1,0.2,0.3,0.5,0.7,0.9
$ mkaero
MKAERO1,0.001, 0.1, 0.2, 0.3, 0.4, 0.5
,1.,2.,3.,5.,7.,9.

$ machs = 0.001, 0.1, 0.2, 0.3, 0.4, 0.5
$ kfreqs = 0.001,0.002,0.003,0.005,0.007,0.009,0.01,0.02,0.03,0.05,0.07,0.09,0.1,0.2,0.3,0.5,0.7,0.9,1.,2.,3.,5.,7.,9.
$ PS C:\NASA\uaero\src\flutter_explorer\flutter_explorer\core\results> ./uaero_test.exe --M 0.5 --A 0.0 --B 0.0 --K 1.0,2.0 --O 0.0,0.0,0.0 --NTHREAD 8 --KUTTA_UNSTEADY_TERM 0 --CP_UNSTEADY_TERM 2  uuaero.inp
$--------------------------------------------------------------------------
$GRID     1               0.      0.      0.
$GRID     116            1.      10.      0.
$
$
$ chord=1; span=10; area=10
AEROS,0,0,1.,10.,10.

$ V=1; chord=1; rho_ref=1
AERO,0,1.,1.,1.
$ 100 boxes
CAERO1,1,1001,,20,5,,,1
,0.,0.,0.,1., 0.,10.,0.,1.
PAERO1,1001
SPLINE1,1002,1,1,100,10000
$
$ grab all the physical nodes in the model
SET1,10000,1,THRU,116
