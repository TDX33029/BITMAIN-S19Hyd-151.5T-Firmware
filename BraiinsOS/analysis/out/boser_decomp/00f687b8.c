// FUN_00f687b8 @ 00f687b8 size=296 calls_out=6 calls_in=3
// strings: 

void FUN_00f687b8(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x32]) {
  case '\0':
    *(undefined1 *)(param_2 + 0x31) = 0;
    param_2[1] = *param_2 + 0xc;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c199fc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c199fc);
  }
  FUN_00b99540(&local_40,param_2 + 1);
  uStack_1c = uStack_34;
  uStack_20 = uStack_38;
  local_24 = local_3c;
  local_28 = local_40;
  if (local_40 == (undefined1 *)0x80000006) {
    uVar1 = 3;
    *param_1 = 3;
  }
  else {
    if ((char)param_2[0x31] == '\x03') {
      FUN_00b99500(param_2 + 2);
    }
    if (local_28 == &DAT_80000005) {
      local_50 = local_24;
      uStack_4c = uStack_20;
      uStack_48 = uStack_1c;
      local_40 = (undefined1 *)0x2;
      local_30 = uStack_20;
      local_2c = uStack_1c;
    }
    else {
      FUN_00a98078(&local_40,1);
      FUN_00f262b8(&local_28);
      local_50 = local_3c;
      uStack_4c = uStack_38;
      uStack_48 = uStack_34;
    }
    *param_1 = local_40;
    param_1[1] = local_50;
    param_1[2] = uStack_4c;
    param_1[3] = uStack_48;
    uVar1 = 1;
    param_1[4] = local_30;
    param_1[5] = local_2c;
  }
  *(undefined1 *)(param_2 + 0x32) = uVar1;
  return;
}

