// FUN_0066a468 @ 0066a468 size=144 calls_out=4 calls_in=2
// strings: 

void FUN_0066a468(int *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x46] == '\0') {
      FUN_00669400(param_1 + 0x44);
    }
    else {
      if ((char)param_1[0x46] != '\x03') {
        return;
      }
      FUN_0066a348(param_1 + 2);
    }
    FUN_005faf6c(param_1 + 0x45);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  puVar1 = (undefined4 *)param_1[4];
  if (param_1[2] != 0 || param_1[3] != 0) {
    FUN_00b91e68(puVar1,param_1[5]);
    return;
  }
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00669fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}

