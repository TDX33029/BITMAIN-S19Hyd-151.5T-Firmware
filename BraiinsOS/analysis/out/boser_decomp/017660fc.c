// FUN_017660fc @ 017660fc size=248 calls_out=3 calls_in=3
// strings: assertion failed: cnt <= self.limit

void FUN_017660fc(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 **local_18;
  undefined1 *local_14;
  
  local_20 = (undefined1 *)&local_28;
  if ((undefined1 *)param_1[6] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: cnt <= self.limit",0x23,&DAT_01d2e1dc);
  }
  if (*param_1 == 0) {
    local_24 = (undefined1 *)param_1[3];
    if (local_24 < param_2) {
      local_14 = &LAB_01a6a304;
      local_1c = &LAB_01a6a304;
      local_18 = &local_24;
      local_28 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_20,&DAT_01d2e534);
    }
    param_1[2] = (int)(param_2 + param_1[2]);
    param_1[3] = (int)local_24 - (int)param_2;
  }
  else if (*param_1 == 1) {
    uVar1 = param_1[4];
    local_1c = (undefined1 *)(param_1[3] - uVar1);
    if ((uint)param_1[3] < uVar1) {
      local_1c = (undefined1 *)0x0;
    }
    if (param_1[5] != 0) {
      local_1c = (undefined1 *)0x0;
    }
    if (local_1c < param_2) {
      local_20 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_01284540(&local_20);
    }
    param_1[4] = (int)(param_2 + uVar1);
    param_1[5] = param_1[5] + (uint)CARRY4(uVar1,(uint)param_2);
  }
  param_1[6] = param_1[6] - (int)param_2;
  return;
}

