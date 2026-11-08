// FUN_00d332bc @ 00d332bc size=60 calls_out=1 calls_in=8
// strings: 

void FUN_00d332bc(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  if (*param_1 == 0 && param_1[1] == 0) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00d332f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  FUN_01443048(puVar1,param_1[3]);
  return;
}

