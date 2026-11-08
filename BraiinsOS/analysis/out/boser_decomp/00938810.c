// FUN_00938810 @ 00938810 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_00938810(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  if ((undefined1 *)*param_1 != &DAT_80000005) {
    FUN_00927378();
    return;
  }
  puVar1 = (undefined1 *)param_1[1];
  if (puVar1 == &DAT_80000005) {
    return;
  }
  if ((int)puVar1 < 0) {
    return;
  }
  FUN_019bb7e0(puVar1,param_1[2]);
  return;
}

