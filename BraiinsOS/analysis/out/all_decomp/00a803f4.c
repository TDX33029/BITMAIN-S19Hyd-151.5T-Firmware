// FUN_00a803f4 @ 00a803f4 size=276 calls_out=2 calls_in=3
// strings: 

void FUN_00a803f4(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int local_40;
  uint local_3c;
  undefined4 local_34;
  int local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  uStack_28 = 0;
  local_34 = 0x2e;
  local_20 = 0x2e;
  local_1c = 1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_24 = param_3;
  FUN_0062a644(&local_40,&local_34);
  if (local_40 != 1) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = 1;
    param_1[3] = 0;
    return;
  }
  uVar2 = local_3c;
  if (local_3c != 0) {
    if (local_3c < param_3) {
      if (*(char *)(param_2 + local_3c) < -0x40) goto LAB_00a804ec;
    }
    else {
      if (local_3c != param_3) {
LAB_00a804ec:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_2,param_3,0,local_3c,&DAT_0186d8f8);
      }
      uVar1 = 0;
      uVar2 = param_3;
      if (param_3 == 0xffffffff) goto LAB_00a804d4;
    }
  }
  uVar2 = uVar2 + 1;
  if (uVar2 < param_3) {
    if (*(char *)(param_2 + uVar2) < -0x40) {
LAB_00a804a8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_2,param_3,uVar2,param_3,&DAT_0186d908);
    }
    uVar1 = uVar2;
  }
  else {
    uVar1 = param_3;
    if (uVar2 != param_3) goto LAB_00a804a8;
  }
LAB_00a804d4:
  *param_1 = param_2;
  param_1[1] = local_3c;
  param_1[2] = param_2 + uVar1;
  param_1[3] = param_3 - uVar1;
  return;
}

