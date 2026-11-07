// FUN_0004fd58 @ 0004fd58  size=128  callers=3
// program: bmminer


int FUN_0004fd58(undefined1 *param_1)

{
  int iVar1;
  char acStack_818 [2052];
  
  if ((DAT_0050fabc == 0) && (iVar1 = FUN_0004f1d4(), iVar1 < 0)) {
    snprintf(acStack_818,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_power_is_calibrated");
    FUN_00032218(0,acStack_818,0);
  }
  else if (param_1 == (undefined1 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    *param_1 = DAT_0050fac4;
  }
  return iVar1;
}

