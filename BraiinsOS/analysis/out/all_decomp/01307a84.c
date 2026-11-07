// FUN_01307a84 @ 01307a84 size=1372 calls_out=5 calls_in=9
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01307a84(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_29;
  undefined4 local_28;
  
  if (*(int *)(param_2 + 8) != 0) {
    uVar4 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar4 - uVar2 < 5) {
      local_29 = 10;
      local_28 = 0;
      FUN_01328914(&local_38,param_3,&local_29,1);
      if (local_38 != 4) goto LAB_01307f78;
    }
    else {
      if (uVar4 < uVar2) goto LAB_01307fbc;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 10;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      puVar3 = *(uint **)(param_2 + 4);
      do {
        uVar2 = *puVar3;
        iVar8 = 1;
        if (0x7f < uVar2) {
          iVar8 = 2;
        }
        if (0x3fff < uVar2) {
          iVar8 = 3;
          if (0x1fffff < uVar2) {
            iVar8 = 4;
          }
          if ((0xfffffff < uVar2) && (iVar8 = 10, uVar2 < 0x80000000)) {
            iVar8 = 5;
          }
        }
        iVar5 = iVar8 + iVar5;
        iVar1 = iVar1 + -1;
        puVar3 = puVar3 + 1;
      } while (iVar1 != 0);
    }
    FUN_01328ef8(&local_38,param_3,iVar5);
    if (local_38 != 4) goto LAB_01307f78;
    if (*(int *)(param_2 + 8) != 0) {
      piVar6 = *(int **)(param_2 + 4);
      iVar1 = *(int *)(param_2 + 8) << 2;
      do {
        FUN_0132901c(&local_38,param_3,*piVar6,*piVar6 >> 0x1f);
        if (local_38 != 4) goto LAB_01307f78;
        piVar6 = piVar6 + 1;
        iVar1 = iVar1 + -4;
      } while (iVar1 != 0);
    }
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    uVar4 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar4 - uVar2 < 5) {
      local_29 = 0x12;
      local_28 = 0;
      FUN_01328914(&local_38,param_3,&local_29,1);
      if (local_38 != 4) goto LAB_01307f78;
    }
    else {
      if (uVar4 < uVar2) goto LAB_01307fbc;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x12;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      puVar3 = *(uint **)(param_2 + 0x10);
      do {
        uVar2 = *puVar3;
        iVar8 = 1;
        if (0x7f < uVar2) {
          iVar8 = 2;
        }
        if (0x3fff < uVar2) {
          iVar8 = 3;
          if (0x1fffff < uVar2) {
            iVar8 = 4;
          }
          if ((0xfffffff < uVar2) && (iVar8 = 10, uVar2 < 0x80000000)) {
            iVar8 = 5;
          }
        }
        iVar5 = iVar8 + iVar5;
        iVar1 = iVar1 + -1;
        puVar3 = puVar3 + 1;
      } while (iVar1 != 0);
    }
    FUN_01328ef8(&local_38,param_3,iVar5);
    if (local_38 != 4) goto LAB_01307f78;
    if (*(int *)(param_2 + 0x14) != 0) {
      piVar6 = *(int **)(param_2 + 0x10);
      iVar1 = *(int *)(param_2 + 0x14) << 2;
      do {
        FUN_0132901c(&local_38,param_3,*piVar6,*piVar6 >> 0x1f);
        if (local_38 != 4) goto LAB_01307f78;
        piVar6 = piVar6 + 1;
        iVar1 = iVar1 + -4;
      } while (iVar1 != 0);
    }
  }
  if (*(char *)(param_2 + 0x24) != '\0') {
    uVar7 = *(undefined4 *)(param_2 + 0x1c);
    uVar9 = *(undefined4 *)(param_2 + 0x20);
    uVar4 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar4 - uVar2 < 5) {
      local_29 = 0x1a;
      local_28 = 0;
      FUN_01328914(&local_38,param_3,&local_29,1);
      if (local_38 != 4) goto LAB_01307f78;
    }
    else {
      if (uVar4 < uVar2) goto LAB_01307fbc;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x1a;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_38,param_3,uVar9);
    if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar7,uVar9), local_38 != 4))
    goto LAB_01307f78;
  }
  if (*(char *)(param_2 + 0x34) != '\0') {
    uVar7 = *(undefined4 *)(param_2 + 0x2c);
    uVar9 = *(undefined4 *)(param_2 + 0x30);
    uVar4 = *(uint *)(param_3 + 0x18);
    uVar2 = *(uint *)(param_3 + 0x1c);
    if (uVar4 - uVar2 < 5) {
      local_29 = 0x22;
      local_28 = 0;
      FUN_01328914(&local_38,param_3,&local_29,1);
      if (local_38 != 4) goto LAB_01307f78;
    }
    else {
      if (uVar4 < uVar2) {
LAB_01307fbc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,uVar4,uVar4,&DAT_0188fa90);
      }
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x22;
      *(uint *)(param_3 + 0x1c) = uVar2 + 1;
    }
    FUN_01328ef8(&local_38,param_3,uVar9);
    if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar7,uVar9), local_38 != 4))
    goto LAB_01307f78;
  }
  uVar2 = *(uint *)(param_2 + 0x44);
  if (*(uint *)(param_2 + 0x40) < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,*(uint *)(param_2 + 0x40),&DAT_01890988);
  }
  if (uVar2 != 0) {
    puVar10 = (undefined4 *)(*(int *)(param_2 + 0x3c) + 4);
    iVar1 = uVar2 * 0xc;
    do {
      uVar9 = *puVar10;
      uVar7 = puVar10[1];
      uVar4 = *(uint *)(param_3 + 0x18);
      uVar2 = *(uint *)(param_3 + 0x1c);
      if (uVar4 - uVar2 < 5) {
        local_29 = 0x32;
        local_28 = 0;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) {
          *param_1 = local_38;
          param_1[1] = local_34;
          param_1[2] = local_30;
          return;
        }
      }
      else {
        if (uVar4 < uVar2) goto LAB_01307fbc;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar2) = 0x32;
        *(uint *)(param_3 + 0x1c) = uVar2 + 1;
      }
      FUN_01328ef8(&local_38,param_3,uVar7);
      if ((local_38 != 4) || (FUN_01328914(&local_38,param_3,uVar9,uVar7), local_38 != 4)) {
        *param_1 = local_38;
        param_1[1] = local_34;
        param_1[2] = local_30;
        return;
      }
      puVar10 = puVar10 + 3;
      iVar1 = iVar1 + -0xc;
    } while (iVar1 != 0);
  }
  FUN_01328b10(&local_38,param_3,*(undefined4 *)(param_2 + 0x48));
  if (local_38 == 4) {
    *param_1 = 4;
    return;
  }
LAB_01307f78:
  param_1[1] = local_34;
  *param_1 = local_38;
  param_1[2] = local_30;
  return;
}

