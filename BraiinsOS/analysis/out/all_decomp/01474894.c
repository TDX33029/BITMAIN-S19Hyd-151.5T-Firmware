// FUN_01474894 @ 01474894 size=264 calls_out=3 calls_in=2
// strings: assertion failed: cnt <= self.limit

void FUN_01474894(int *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  code *local_1c;
  undefined1 **local_18;
  code *local_14;
  
  local_20 = (undefined1 *)&local_28;
  puVar1 = (undefined1 *)param_1[6];
  if (puVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: cnt <= self.limit",0x23,&DAT_018a49b8);
  }
  if (*param_1 == 0) {
    local_24 = (undefined1 *)param_1[3];
    if (local_24 < param_2) {
      local_14 = FUN_007883b8;
      local_1c = FUN_007883b8;
      local_18 = &local_24;
      local_28 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00584155,&local_20,&DAT_018a6700);
    }
    param_1[2] = (int)(param_2 + param_1[2]);
    param_1[3] = (int)local_24 - (int)param_2;
    param_1[6] = (int)puVar1 - (int)param_2;
    return;
  }
  if (*param_1 == 1) {
    local_1c = (code *)0x0;
    uVar2 = param_1[4];
    if ((param_1[5] == 0) && (local_1c = (code *)(param_1[3] - uVar2), (uint)param_1[3] < uVar2)) {
      local_1c = (code *)0x0;
    }
    if (local_1c < param_2) {
      local_20 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_20);
    }
    param_1[4] = (int)(param_2 + uVar2);
    param_1[5] = param_1[5] + (uint)CARRY4(uVar2,(uint)param_2);
  }
  param_1[6] = (int)puVar1 - (int)param_2;
  return;
}

