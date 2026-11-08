// FUN_00bd04f0 @ 00bd04f0 size=108 calls_out=3 calls_in=2
// strings: 

void FUN_00bd04f0(undefined4 *param_1)

{
  FUN_017ce5f0(*param_1,param_1[1]);
  if (*(char *)(param_1 + 3) == '\x03') {
    FUN_019e0ae8(param_1 + 5);
    if (param_1[9] == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00b994d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0xc))(param_1[10]);
    return;
  }
  if (*(char *)(param_1 + 3) == '\x04') {
    FUN_01431b40(param_1 + 4);
    return;
  }
  return;
}

