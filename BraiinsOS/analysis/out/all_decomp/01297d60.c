// FUN_01297d60 @ 01297d60 size=856 calls_out=6 calls_in=9
// strings: 

void FUN_01297d60(int *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_40;
  uint uStack_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_29;
  undefined4 local_28;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar6 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_40 = 10;
      uStack_3c = uStack_3c & 0xffffff00;
      FUN_01328914(&local_38,param_3,&local_40,1);
      if (local_38 != 4) goto LAB_0129806c;
    }
    else {
      if (uVar3 < uVar2) goto LAB_01298094;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 10;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_38,param_3,uVar6);
    if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar4,uVar6), local_38 != 4))
    goto LAB_0129806c;
  }
  if (*(char *)(param_2 + 0x1c) != '\0') {
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    uVar6 = *(undefined4 *)(param_2 + 0x18);
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_40 = 0x12;
      uStack_3c = uStack_3c & 0xffffff00;
      FUN_01328914(&local_38,param_3,&local_40,1);
      if (local_38 != 4) goto LAB_0129806c;
    }
    else {
      if (uVar3 < uVar2) goto LAB_01298094;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x12;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_38,param_3,uVar6);
    if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar4,uVar6), local_38 != 4))
    goto LAB_0129806c;
  }
  cVar1 = *(char *)(param_2 + 0x38);
  if (cVar1 != '\x05') {
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_29 = 0x18;
      local_28 = 0;
      FUN_01328914(&local_38,param_3,&local_29,1);
      if (local_38 != 4) goto LAB_0129806c;
    }
    else {
      if (uVar3 < uVar2) {
LAB_01298094:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar3,uVar3,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x18;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_0132901c(&local_38,param_3,cVar1,0);
    if (local_38 != 4) goto LAB_0129806c;
  }
  uVar2 = *(uint *)(param_2 + 0x2c);
  if (*(uint *)(param_2 + 0x28) < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,*(uint *)(param_2 + 0x28),&DAT_01890988);
  }
  if (uVar2 != 0) {
    iVar7 = *(int *)(param_2 + 0x24);
    iVar5 = uVar2 * 0x50;
    do {
      uVar3 = *(uint *)(param_3 + 0x18);
      uVar2 = *(uint *)(param_3 + 0x1c);
      if (uVar3 - uVar2 < 5) {
        uStack_3c = uStack_3c & 0xffffff00;
        local_40 = 0x22;
        FUN_01328914(&local_38,param_3,&local_40,1);
        if (local_38 != 4) goto LAB_0129806c;
      }
      else {
        if (uVar3 < uVar2) goto LAB_01298094;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x22;
        *(uint *)(param_3 + 0x1c) = uVar2 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar7 + 0x4c));
      if ((local_38 != 4) || (FUN_012995dc(&local_38,iVar7,param_3), local_38 != 4))
      goto LAB_0129806c;
      iVar7 = iVar7 + 0x50;
      iVar5 = iVar5 + -0x50;
    } while (iVar5 != 0);
  }
  FUN_01328b10(&local_38,param_3,*(undefined4 *)(param_2 + 0x30));
  if (local_38 == 4) {
    *param_1 = 4;
    return;
  }
LAB_0129806c:
  param_1[1] = local_34;
  *param_1 = local_38;
  param_1[2] = local_30;
  return;
}

