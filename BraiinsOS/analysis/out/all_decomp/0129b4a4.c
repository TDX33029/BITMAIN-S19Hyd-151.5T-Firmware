// FUN_0129b4a4 @ 0129b4a4 size=476 calls_out=4 calls_in=0
// strings: 

void FUN_0129b4a4(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_1d;
  undefined4 local_1c;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_1d = 10;
      local_1c = 0;
      FUN_01328914(&local_30,param_3,&local_1d,1);
      if (local_30 != 4) goto LAB_0129b650;
    }
    else {
      if (uVar2 < uVar1) goto LAB_0129b66c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 10;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_30,param_3,uVar3);
    if ((local_30 != 4) || (FUN_01328914(&local_30,param_3,uVar4,uVar3), local_30 != 4))
    goto LAB_0129b650;
  }
  if (*(char *)(param_2 + 0x1c) != '\0') {
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_1d = 0x12;
      local_1c = 0;
      FUN_01328914(&local_30,param_3,&local_1d,1);
      if (local_30 != 4) goto LAB_0129b650;
    }
    else {
      if (uVar2 < uVar1) {
LAB_0129b66c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x12;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_30,param_3,uVar3);
    if ((local_30 != 4) || (FUN_01328914(&local_30,param_3,uVar4,uVar3), local_30 != 4))
    goto LAB_0129b650;
  }
  FUN_01328b10(&local_30,param_3,*(undefined4 *)(param_2 + 0x20));
  if (local_30 == 4) {
    *param_1 = 4;
    return;
  }
LAB_0129b650:
  param_1[1] = local_2c;
  *param_1 = local_30;
  param_1[2] = local_28;
  return;
}

