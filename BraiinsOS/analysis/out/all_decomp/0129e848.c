// FUN_0129e848 @ 0129e848 size=240 calls_out=3 calls_in=0
// strings: 

void FUN_0129e848(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 unaff_r6;
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
  FUN_0129dd80(&local_24,param_2,&local_44);
  iVar1 = local_24;
  if (local_24 == 4) {
    if (local_44 < 0x80000001) {
      FUN_013287bc(&local_24,&local_44);
      iVar1 = local_24;
      if (local_24 != 4) goto LAB_0129e8d0;
      if ((int)local_44 < 0) goto LAB_0129e8fc;
      iVar1 = 4;
      goto LAB_0129e8e4;
    }
LAB_0129e8fc:
    *param_1 = 0;
    param_1[1] = local_50;
    param_1[2] = local_4c;
    param_1[3] = local_48;
  }
  else {
LAB_0129e8d0:
    unaff_r6 = local_20;
    unaff_r7 = local_1c;
    if (-1 < (int)local_44) {
LAB_0129e8e4:
      if (local_44 != 0) {
        thunk_FUN_016d3fb4(local_40);
      }
      if (iVar1 == 4) goto LAB_0129e8fc;
    }
    *param_1 = 1;
    param_1[1] = iVar1;
    param_1[2] = unaff_r6;
    param_1[3] = unaff_r7;
    if (local_50 != 0) {
      thunk_FUN_016d3fb4(local_4c);
      return;
    }
  }
  return;
}

