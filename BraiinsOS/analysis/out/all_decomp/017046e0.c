// FUN_017046e0 @ 017046e0 size=172 calls_out=1 calls_in=39
// strings: 

undefined4 FUN_017046e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if ((param_1[4] & 2) == 0) {
    FUN_0177aafc(*param_1);
    if ((param_1[4] & 1) == 0) {
      *param_1 = 0;
      return 0;
    }
    uVar1 = FUN_0177aafc(param_1);
    return uVar1;
  }
  if ((param_1[4] & 1) == 0) {
    *param_1 = 0;
    return 0;
  }
  uVar1 = FUN_0177aafc(param_1);
  return uVar1;
}

