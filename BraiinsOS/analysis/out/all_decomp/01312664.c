// FUN_01312664 @ 01312664 size=416 calls_out=8 calls_in=0
// strings: 

void FUN_01312664(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 ***pppuVar2;
  uint local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 ***local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_20;
  undefined4 **local_1c;
  
  local_4c = thunk_FUN_016d4a50(0x2000);
  if (local_4c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x2000);
  }
  local_34 = 0;
  local_38 = 0x2000;
  uStack_48 = 0;
  local_50 = 0x2000;
  uStack_44 = param_3;
  uStack_40 = param_4;
  local_3c = local_4c;
  iVar1 = FUN_012f6cb4(param_2);
  if (iVar1 == 0) {
    local_20 = &DAT_018d88ac;
    DataMemoryBarrier(0xb);
    if (DAT_018d88ac != 0) {
      local_1c = &local_20;
      local_30 = &local_1c;
      FUN_015eedc4(&DAT_018d88ac,0,&local_30,&DAT_0188f1a4,&DAT_0188e9dc);
    }
    iVar1 = *(int *)(DAT_018d88b0 + 0x68);
    pppuVar2 = (undefined4 ***)0x3;
    if (*(char *)(iVar1 + 0xc) == '\x01') {
      local_2c = *(undefined4 *)(iVar1 + 4);
      local_28 = *(undefined4 *)(iVar1 + 8);
    }
    else {
      local_2c = 1;
      local_28 = 0;
    }
LAB_01312768:
    *param_1 = pppuVar2;
    param_1[1] = local_2c;
    param_1[2] = local_28;
  }
  else {
    FUN_0130c364(param_2);
    FUN_0130d344(&local_30,param_2,&local_50);
    if (local_30 != (undefined4 ***)&DAT_00000004) {
      pppuVar2 = local_30;
      goto LAB_01312768;
    }
    if (0x80000000 < local_50) {
      *param_1 = 4;
      return;
    }
    FUN_013287bc(&local_30,&local_50);
    if (local_30 != (undefined4 ***)&DAT_00000004) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      if (0x7fffffff < local_50) {
        return;
      }
      goto LAB_01312778;
    }
    *param_1 = 4;
  }
  if ((int)local_50 < 0) {
    return;
  }
LAB_01312778:
  if (local_50 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_4c);
  return;
}

