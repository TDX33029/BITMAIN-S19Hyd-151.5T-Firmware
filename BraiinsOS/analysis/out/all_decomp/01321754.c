// FUN_01321754 @ 01321754 size=592 calls_out=7 calls_in=2
// strings: 

void FUN_01321754(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *local_30;
  undefined4 **local_2c;
  int local_28;
  int local_24;
  undefined4 **local_20;
  undefined1 uStack_1c;
  
  if ((*(char *)(param_2 + 0xc) != '\x01') || (*(char *)(param_2 + 0x18) == '\x02')) {
    local_30 = &DAT_018d8924;
    DataMemoryBarrier(0xb);
    if (DAT_018d8924 != 0) {
      local_20 = &local_30;
      local_2c = &local_20;
      FUN_015eedc4(&DAT_018d8924,0,&local_2c,&DAT_0188f028,&DAT_0188e9dc);
    }
    iVar1 = *(int *)(DAT_018d8928 + 0x68);
    if (*(char *)(iVar1 + 0xc) == '\x01') {
      iVar3 = *(int *)(iVar1 + 4);
      iVar1 = *(int *)(iVar1 + 8);
    }
    else {
      iVar3 = 1;
      iVar1 = 0;
    }
    param_1[1] = iVar3;
    *param_1 = 3;
    param_1[2] = iVar1;
    return;
  }
  uVar2 = *(uint *)(param_2 + 8);
  iVar1 = 1;
  if (0x7f < uVar2) {
    iVar1 = 2;
    if (0x3fff < uVar2) {
      iVar1 = 3;
    }
    if ((0x1fffff < uVar2) && (iVar1 = 5, uVar2 < 0x10000000)) {
      iVar1 = 4;
    }
  }
  iVar3 = FUN_01337c54(*(undefined4 *)(param_2 + 0x10));
  *(uint *)(param_2 + 0x14) = uVar2 + iVar1 + iVar3 + 3;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar4 - uVar2 < 5) {
      local_20 = (undefined4 **)0xa;
      uStack_1c = 0;
      FUN_01328914(&local_2c,param_3,&local_20,1);
      if (local_2c != (undefined4 **)0x4) goto LAB_01321924;
    }
    else {
      if (uVar4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar4,uVar4,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 10;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_2c,param_3,uVar5);
    if ((local_2c != (undefined4 **)0x4) ||
       (FUN_01328914(&local_2c,param_3,uVar6,uVar5), local_2c != (undefined4 **)0x4))
    goto LAB_01321924;
  }
  if (((*(byte *)(param_2 + 0x18) == 2) ||
      (FUN_01329168(&local_2c,param_3,2,*(byte *)(param_2 + 0x18) & 1),
      local_2c == (undefined4 **)0x4)) &&
     (FUN_01328b10(&local_2c,param_3,*(undefined4 *)(param_2 + 0x10)),
     local_2c == (undefined4 **)0x4)) {
    *param_1 = 4;
    return;
  }
LAB_01321924:
  *param_1 = (int)local_2c;
  param_1[1] = local_28;
  param_1[2] = local_24;
  return;
}

