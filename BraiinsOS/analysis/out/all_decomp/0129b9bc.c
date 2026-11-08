// FUN_0129b9bc @ 0129b9bc size=668 calls_out=5 calls_in=3
// strings: 

void FUN_0129b9bc(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_1d;
  undefined4 local_1c;
  
  iVar4 = 0;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar1 = *(uint *)(param_2 + 8);
    iVar4 = 1;
    if (0x7f < uVar1) {
      iVar4 = 2;
      if (0x3fff < uVar1) {
        iVar4 = 3;
      }
      if ((0x1fffff < uVar1) && (iVar4 = 5, uVar1 < 0x10000000)) {
        iVar4 = 4;
      }
    }
    iVar4 = uVar1 + iVar4 + 1;
  }
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    uVar1 = *(uint *)(param_2 + 0x18);
    iVar2 = 1;
    if (0x7f < uVar1) {
      iVar2 = 2;
      if (0x3fff < uVar1) {
        iVar2 = 3;
      }
      if ((0x1fffff < uVar1) && (iVar2 = 5, uVar1 < 0x10000000)) {
        iVar2 = 4;
      }
    }
    iVar4 = uVar1 + iVar2 + iVar4 + 1;
  }
  iVar2 = FUN_01337c54(*(undefined4 *)(param_2 + 0x20));
  *(int *)(param_2 + 0x24) = iVar2 + iVar4;
  FUN_01328ef8(&local_30,param_3);
  if (local_30 == 4) {
    if (*(char *)(param_2 + 0xc) == '\x01') {
      uVar6 = *(undefined4 *)(param_2 + 4);
      uVar5 = *(undefined4 *)(param_2 + 8);
      uVar3 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar3 - uVar1 < 5) {
        local_1d = 10;
        local_1c = 0;
        FUN_01328914(&local_30,param_3,&local_1d,1);
        if (local_30 != 4) goto LAB_0129babc;
      }
      else {
        if (uVar3 < uVar1) goto LAB_0129bc44;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 10;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_30,param_3,uVar5);
      if ((local_30 != 4) || (FUN_01328914(&local_30,param_3,uVar6,uVar5), local_30 != 4))
      goto LAB_0129babc;
    }
    if (*(char *)(param_2 + 0x1c) == '\x01') {
      uVar6 = *(undefined4 *)(param_2 + 0x14);
      uVar5 = *(undefined4 *)(param_2 + 0x18);
      uVar3 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar3 - uVar1 < 5) {
        local_1d = 0x12;
        local_1c = 0;
        FUN_01328914(&local_30,param_3,&local_1d,1);
        if (local_30 != 4) goto LAB_0129babc;
      }
      else {
        if (uVar3 < uVar1) {
LAB_0129bc44:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar1,uVar3,uVar3,&DAT_0188fa90);
        }
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x12;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_30,param_3,uVar5);
      if ((local_30 != 4) || (FUN_01328914(&local_30,param_3,uVar6,uVar5), local_30 != 4))
      goto LAB_0129babc;
    }
    FUN_01328b10(&local_30,param_3,*(undefined4 *)(param_2 + 0x20));
    if (local_30 == 4) {
      *param_1 = 4;
      return;
    }
  }
LAB_0129babc:
  param_1[1] = local_2c;
  *param_1 = local_30;
  param_1[2] = local_28;
  return;
}

