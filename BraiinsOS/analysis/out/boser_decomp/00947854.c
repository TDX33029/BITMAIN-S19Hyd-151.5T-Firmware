// FUN_00947854 @ 00947854 size=244 calls_out=4 calls_in=3
// strings: 

void FUN_00947854(int *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined1 local_38 [8];
  int local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined **local_18;
  undefined1 *local_14;
  
  FUN_009c98e8(&local_20);
  if (local_20 == (undefined1 *)0x1) {
    uVar1 = CONCAT44(local_1c,1);
  }
  else {
    uVar1 = FUN_00736c0c(local_18,local_14);
  }
  local_30 = (int)(uVar1 >> 0x20);
  if ((uVar1 & 1) == 0) {
    if (local_30 == 0) {
      FUN_00aeed24(&local_20,param_2);
      if (local_20 != (undefined1 *)0x80000000) {
        *param_1 = (int)local_20;
        param_1[1] = local_1c;
        param_1[2] = (int)local_18;
        return;
      }
      local_30 = local_1c;
    }
    else {
      local_38[0] = 1;
      local_18 = &local_28;
      local_2c = 0;
      local_24 = &DAT_01d064b8;
      local_28 = &DAT_01cfa524;
      local_14 = &LAB_0196b2a4;
      local_1c = 0x1963220;
      local_20 = local_38;
      local_30 = FUN_00a9cfdc(&DAT_0058eb0d,&local_20);
    }
  }
  *param_1 = -0x80000000;
  param_1[1] = local_30;
  return;
}

