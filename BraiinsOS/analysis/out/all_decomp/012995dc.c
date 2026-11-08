// FUN_012995dc @ 012995dc size=1908 calls_out=9 calls_in=8
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012995dc(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_48;
  int local_44;
  int local_40;
  undefined8 local_38;
  
  uVar5 = param_2[7];
  if (param_2[6] < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar5,param_2[6],&DAT_01890988);
  }
  if (uVar5 != 0) {
    iVar8 = 0;
    uVar7 = param_2[5];
    do {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_38 = CONCAT35(local_38._5_3_,10);
        FUN_01328914(&local_48,param_3,&local_38,1);
        if (local_48 != 4) goto LAB_01299cf4;
      }
      else {
        if (uVar2 < uVar1) goto LAB_01299d1c;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 10;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      iVar9 = uVar7 + iVar8;
      FUN_01328ef8(&local_48,param_3,*(undefined4 *)(iVar9 + 0x24));
      if (local_48 != 4) goto LAB_01299cf4;
      if (*(char *)(iVar9 + 0xc) == '\x01') {
        uVar3 = *(undefined4 *)(iVar9 + 4);
        uVar6 = *(undefined4 *)(iVar9 + 8);
        uVar2 = *(uint *)(param_3 + 0x18);
        uVar1 = *(uint *)(param_3 + 0x1c);
        if (uVar2 - uVar1 < 5) {
          local_38 = CONCAT35(local_38._5_3_,10);
          FUN_01328914(&local_48,param_3,&local_38,1);
          if (local_48 != 4) goto LAB_01299894;
        }
        else {
          if (uVar2 < uVar1) goto LAB_01299d1c;
          *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 10;
          *(uint *)(param_3 + 0x1c) = uVar1 + 1;
        }
        FUN_01328ef8(&local_48,param_3,uVar6);
        if ((local_48 != 4) || (FUN_01328914(&local_48,param_3,uVar3,uVar6), local_48 != 4))
        goto LAB_01299894;
      }
      if (*(char *)(iVar9 + 0x1c) == '\x01') {
        uVar3 = *(undefined4 *)(iVar9 + 0x14);
        uVar6 = *(undefined4 *)(iVar9 + 0x18);
        uVar2 = *(uint *)(param_3 + 0x18);
        uVar1 = *(uint *)(param_3 + 0x1c);
        if (uVar2 - uVar1 < 5) {
          local_38 = CONCAT35(local_38._5_3_,0x12);
          FUN_01328914(&local_48,param_3,&local_38,1);
          if (local_48 != 4) goto LAB_01299894;
        }
        else {
          if (uVar2 < uVar1) goto LAB_01299d1c;
          *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x12;
          *(uint *)(param_3 + 0x1c) = uVar1 + 1;
        }
        FUN_01328ef8(&local_48,param_3,uVar6);
        if ((local_48 != 4) || (FUN_01328914(&local_48,param_3,uVar3,uVar6), local_48 != 4))
        goto LAB_01299894;
      }
      FUN_01328b10(&local_48,param_3,*(undefined4 *)(iVar9 + 0x20));
      if (local_48 != 4) {
LAB_01299894:
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = local_40;
        return;
      }
      iVar8 = iVar8 + 0x28;
    } while (uVar5 * 0x28 != iVar8);
  }
  if ((char)param_2[9] != '\0') {
    puVar4 = (uint *)param_2[8];
    if (puVar4 == (uint *)0x0) goto LAB_01299d44;
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_38 = CONCAT35(local_38._5_3_,0x12);
      FUN_01328914(&local_48,param_3,&local_38,1);
      if (local_48 != 4) goto LAB_01299cf4;
    }
    else {
      if (uVar2 < uVar1) goto LAB_01299d1c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x12;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_48,param_3,puVar4[5]);
    if (local_48 != 4) goto LAB_01299cf4;
    if ((*puVar4 & 1) != 0) {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      uVar10 = *(undefined8 *)(puVar4 + 2);
      if (uVar2 - uVar1 < 5) {
        local_38 = CONCAT35(local_38._5_3_,9);
        FUN_01328914(&local_48,param_3,&local_38,1);
        if (local_48 != 4) goto LAB_01299cf4;
      }
      else {
        if (uVar2 < uVar1) goto LAB_01299d1c;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 9;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      local_38 = uVar10;
      FUN_01328914(&local_48,param_3,&local_38,8);
      if (local_48 != 4) goto LAB_01299cf4;
    }
    FUN_01328b10(&local_48,param_3,puVar4[4]);
    if (local_48 != 4) goto LAB_01299cf4;
  }
  if ((char)param_2[0xb] != '\0') {
    uVar5 = param_2[10];
    if (uVar5 == 0) goto LAB_01299d44;
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_38 = CONCAT35(local_38._5_3_,0x1a);
      FUN_01328914(&local_48,param_3,&local_38,1);
      if (local_48 != 4) goto LAB_01299cf4;
    }
    else {
      if (uVar2 < uVar1) goto LAB_01299d1c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x1a;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_48,param_3,*(undefined4 *)(uVar5 + 0x14));
    if ((local_48 != 4) || (FUN_0129cc40(&local_48,uVar5,param_3), local_48 != 4))
    goto LAB_01299cf4;
  }
  if ((char)param_2[0xd] != '\0') {
    uVar5 = param_2[0xc];
    if (uVar5 == 0) goto LAB_01299d44;
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_38 = CONCAT35(local_38._5_3_,0x22);
      FUN_01328914(&local_48,param_3,&local_38,1);
      if (local_48 != 4) goto LAB_01299cf4;
    }
    else {
      if (uVar2 < uVar1) goto LAB_01299d1c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x22;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_48,param_3,*(undefined4 *)(uVar5 + 0x34));
    if ((local_48 != 4) || (FUN_01299d5c(&local_48,uVar5,param_3), local_48 != 4))
    goto LAB_01299cf4;
  }
  if ((char)param_2[0xf] != '\0') {
    uVar5 = param_2[0xe];
    if (uVar5 == 0) goto LAB_01299d44;
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_38 = CONCAT35(local_38._5_3_,0x2a);
      FUN_01328914(&local_48,param_3,&local_38,1);
      if (local_48 != 4) goto LAB_01299cf4;
    }
    else {
      if (uVar2 < uVar1) goto LAB_01299d1c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x2a;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_48,param_3,*(undefined4 *)(uVar5 + 0x14));
    if ((local_48 != 4) || (FUN_0129cc40(&local_48,uVar5,param_3), local_48 != 4))
    goto LAB_01299cf4;
  }
  if ((char)param_2[0x11] != '\0') {
    uVar5 = param_2[0x10];
    if (uVar5 == 0) {
LAB_01299d44:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01890768);
    }
    uVar2 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar2 - uVar1 < 5) {
      local_38 = CONCAT35(local_38._5_3_,0x3a);
      FUN_01328914(&local_48,param_3,&local_38,1);
      if (local_48 != 4) goto LAB_01299cf4;
    }
    else {
      if (uVar2 < uVar1) {
LAB_01299d1c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x3a;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_48,param_3,*(undefined4 *)(uVar5 + 0x34));
    if ((local_48 != 4) || (FUN_0129a1c0(&local_48,uVar5,param_3), local_48 != 4))
    goto LAB_01299cf4;
  }
  if ((((*param_2 & 1) == 0) || (FUN_01329270(&local_48,param_3,6), local_48 == 4)) &&
     (FUN_01328b10(&local_48,param_3,param_2[0x12]), local_48 == 4)) {
    *param_1 = 4;
    return;
  }
LAB_01299cf4:
  param_1[1] = local_44;
  *param_1 = local_48;
  param_1[2] = local_40;
  return;
}

