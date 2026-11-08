// FUN_012fb034 @ 012fb034 size=1708 calls_out=6 calls_in=14
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012fb034(int *param_1,uint *param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  int local_40;
  int local_3c;
  int local_38;
  
  uVar5 = param_2[0xf];
  if (param_2[0xe] < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar5,param_2[0xe],&DAT_01890988);
  }
  if (uVar5 != 0) {
    iVar8 = 0;
    uVar7 = param_2[0xd];
    do {
      uVar3 = *(uint *)(param_3 + 0x18);
      uVar2 = *(uint *)(param_3 + 0x1c);
      if (uVar3 - uVar2 < 5) {
        uVar1 = (ulonglong)local_48 >> 8;
        local_48 = CONCAT71((uint7)uVar1 & 0xffffff00000000,0x12);
        FUN_01328914(&local_40,param_3,&local_48,1);
        if (local_40 != 4) goto LAB_012fb69c;
      }
      else {
        if (uVar3 < uVar2) goto LAB_012fb6b8;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x12;
        *(uint *)(param_3 + 0x1c) = uVar2 + 1;
      }
      iVar9 = uVar7 + iVar8;
      FUN_01328ef8(&local_40,param_3,*(undefined4 *)(iVar9 + 0x14));
      if (local_40 != 4) goto LAB_012fb69c;
      if (*(char *)(iVar9 + 0xc) == '\x01') {
        uVar4 = *(undefined4 *)(iVar9 + 4);
        uVar6 = *(undefined4 *)(iVar9 + 8);
        uVar3 = *(uint *)(param_3 + 0x18);
        uVar2 = *(uint *)(param_3 + 0x1c);
        if (uVar3 - uVar2 < 5) {
          local_48 = CONCAT35(local_48._5_3_,10);
          FUN_01328914(&local_40,param_3,&local_48,1);
          if (local_40 != 4) goto LAB_012fb260;
        }
        else {
          if (uVar3 < uVar2) goto LAB_012fb6b8;
          *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 10;
          *(uint *)(param_3 + 0x1c) = uVar2 + 1;
        }
        FUN_01328ef8(&local_40,param_3,uVar6);
        if ((local_40 != 4) || (FUN_01328914(&local_40,param_3,uVar4,uVar6), local_40 != 4))
        goto LAB_012fb260;
      }
      if (((*(byte *)(iVar9 + 0x18) != 2) &&
          (FUN_01329168(&local_40,param_3,2,*(byte *)(iVar9 + 0x18) & 1), local_40 != 4)) ||
         (FUN_01328b10(&local_40,param_3,*(undefined4 *)(iVar9 + 0x10)), local_40 != 4)) {
LAB_012fb260:
        *param_1 = local_40;
        param_1[1] = local_3c;
        param_1[2] = local_38;
        return;
      }
      iVar8 = iVar8 + 0x1c;
    } while (uVar5 * 0x1c != iVar8);
  }
  if ((char)param_2[0x13] != '\0') {
    uVar5 = param_2[0x11];
    uVar7 = param_2[0x12];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_48 = CONCAT35(local_48._5_3_,0x1a);
      FUN_01328914(&local_40,param_3,&local_48,1);
      if (local_40 != 4) goto LAB_012fb69c;
    }
    else {
      if (uVar3 < uVar2) goto LAB_012fb6b8;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x1a;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_40,param_3,uVar7);
    if ((local_40 != 4) || (FUN_01328914(&local_40,param_3,uVar5,uVar7), local_40 != 4))
    goto LAB_012fb69c;
  }
  if ((*param_2 & 1) != 0) {
    uVar5 = param_2[2];
    uVar7 = param_2[3];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_50 = 0x20;
      local_4c = local_4c & 0xffffff00;
      FUN_01328914(&local_40,param_3,&local_50,1);
      if (local_40 != 4) goto LAB_012fb69c;
    }
    else {
      if (uVar3 < uVar2) goto LAB_012fb6b8;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x20;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_0132901c(&local_40,param_3,uVar5,uVar7);
    if (local_40 != 4) goto LAB_012fb69c;
  }
  if ((param_2[4] & 1) != 0) {
    uVar5 = param_2[6];
    uVar7 = param_2[7];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_50 = 0x28;
      local_4c = local_4c & 0xffffff00;
      FUN_01328914(&local_40,param_3,&local_50,1);
      if (local_40 != 4) goto LAB_012fb69c;
    }
    else {
      if (uVar3 < uVar2) goto LAB_012fb6b8;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x28;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_0132901c(&local_40,param_3,uVar5,uVar7);
    if (local_40 != 4) goto LAB_012fb69c;
  }
  if ((param_2[8] & 1) != 0) {
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    uVar10 = *(undefined8 *)(param_2 + 10);
    if (uVar3 - uVar2 < 5) {
      local_48 = CONCAT35(local_48._5_3_,0x31);
      FUN_01328914(&local_40,param_3,&local_48,1);
      if (local_40 != 4) goto LAB_012fb69c;
    }
    else {
      if (uVar3 < uVar2) goto LAB_012fb6b8;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x31;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    local_48 = uVar10;
    FUN_01328914(&local_40,param_3,&local_48,8);
    if (local_40 != 4) goto LAB_012fb69c;
  }
  if ((char)param_2[0x17] != '\0') {
    uVar5 = param_2[0x15];
    uVar7 = param_2[0x16];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_48 = CONCAT35(local_48._5_3_,0x3a);
      FUN_01328914(&local_40,param_3,&local_48,1);
      if (local_40 != 4) goto LAB_012fb69c;
    }
    else {
      if (uVar3 < uVar2) goto LAB_012fb6b8;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x3a;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_40,param_3,uVar7);
    if ((local_40 != 4) || (FUN_01328914(&local_40,param_3,uVar5,uVar7), local_40 != 4))
    goto LAB_012fb69c;
  }
  if ((char)param_2[0x1b] != '\0') {
    uVar5 = param_2[0x19];
    uVar7 = param_2[0x1a];
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar2 < 5) {
      local_48 = CONCAT35(local_48._5_3_,0x42);
      FUN_01328914(&local_40,param_3,&local_48,1);
      if (local_40 != 4) goto LAB_012fb69c;
    }
    else {
      if (uVar3 < uVar2) {
LAB_012fb6b8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar3,uVar3,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x42;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_40,param_3,uVar7);
    if ((local_40 != 4) || (FUN_01328914(&local_40,param_3,uVar5,uVar7), local_40 != 4))
    goto LAB_012fb69c;
  }
  FUN_01328b10(&local_40,param_3,param_2[0x1c]);
  if (local_40 == 4) {
    *param_1 = 4;
    return;
  }
LAB_012fb69c:
  param_1[1] = local_3c;
  *param_1 = local_40;
  param_1[2] = local_38;
  return;
}

