// FUN_013141a4 @ 013141a4 size=292 calls_out=5 calls_in=0
// strings: 

void FUN_013141a4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 unaff_r7;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 *local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_40 = (undefined1 *)&local_50;
  local_48 = 0;
  local_50 = 0;
  local_4c = 1;
  local_28 = 0;
  local_2c = 0;
  local_30 = 1;
  local_44 = 0x80000000;
  uVar1 = FUN_0130f7f8(param_2);
  FUN_01328ef8(&local_24,&local_44,uVar1);
  if (local_24 == 4) {
    FUN_01310120(&local_24,param_2,&local_44);
    if (local_24 != 4) goto LAB_01314258;
    if (local_44 < 0x80000001) {
      FUN_013287bc(&local_24,&local_44);
      if (local_24 != 4) goto LAB_01314258;
      if ((int)local_44 < 0) goto LAB_01314284;
      local_24 = 4;
      goto LAB_0131426c;
    }
LAB_01314284:
    *param_1 = 0;
    param_1[1] = local_50;
    param_1[2] = local_4c;
    param_1[3] = local_48;
  }
  else {
LAB_01314258:
    param_2 = local_20;
    unaff_r7 = local_1c;
    if (-1 < (int)local_44) {
LAB_0131426c:
      if (local_44 != 0) {
        thunk_FUN_016d3fb4(local_40);
      }
      if (local_24 == 4) goto LAB_01314284;
    }
    *param_1 = 1;
    param_1[1] = local_24;
    param_1[2] = param_2;
    param_1[3] = unaff_r7;
    if (local_50 != 0) {
      thunk_FUN_016d3fb4(local_4c);
      return;
    }
  }
  return;
}

