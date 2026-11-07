// FUN_01629fd8 @ 01629fd8 size=912 calls_out=7 calls_in=2
// strings: 

void FUN_01629fd8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int **local_70;
  undefined1 *local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int aiStack_58 [4];
  int **local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  ulonglong local_2c;
  
  if ((param_5 != 8) || (iVar1 = thunk_FUN_01bed842(param_4,&DAT_00570880,8), iVar1 != 0)) {
    lVar15 = FUN_01623bf0(param_2,param_3);
    iVar1 = (int)((ulonglong)lVar15 >> 0x20);
    uVar8 = 0;
    if (lVar15 < 0) {
LAB_0162a034:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,iVar1);
    }
    if (iVar1 == 0) {
      iVar2 = 1;
      iVar11 = 0;
    }
    else {
      uVar8 = 1;
      iVar2 = FUN_01298504(iVar1,1);
      iVar11 = iVar1;
      if (iVar2 == 0) goto LAB_0162a034;
    }
    FUN_01bed4e2(iVar2,(int)lVar15,iVar1);
    iVar12 = 3;
    goto LAB_0162a0ec;
  }
  local_2c = FUN_01623bf0(param_2,param_3);
  iVar1 = (int)(local_2c >> 0x20);
  piVar3 = (int *)local_2c;
  if (local_2c < 0x400000000) {
    local_6c = &LAB_0141634c;
    local_70 = (int **)&local_2c;
    FUN_00664898((uint)aiStack_58 | 4,&DAT_0059bce3,&local_70);
    *param_1 = 4;
    param_1[1] = aiStack_58[1];
    param_1[2] = aiStack_58[2];
    param_1[3] = aiStack_58[3];
    return;
  }
  iVar12 = *piVar3;
  if (iVar12 == 0) {
    uVar5 = iVar1 - 4;
    if (uVar5 < 4) {
      puVar7 = &DAT_01d06378;
LAB_0162a278:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,4,iVar1 + -4,puVar7);
    }
    if (uVar5 < 8) {
      puVar7 = &DAT_01d06378;
LAB_0162a298:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(4,8,iVar1 + -4,puVar7);
    }
    if (uVar5 < 0xc) {
      puVar7 = &DAT_01d06378;
LAB_0162a2b8:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(8,0xc,iVar1 + -4,puVar7);
    }
    if (uVar5 < 0x10) {
      puVar7 = &DAT_01d06378;
LAB_0162a2d8:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0xc,0x10,iVar1 + -4,puVar7);
    }
    if (uVar5 < 0x14) {
      puVar7 = &DAT_01d06378;
LAB_0162a2f8:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0x10,0x14,iVar1 + -4,puVar7);
    }
    if (uVar5 < 0x18) {
      puVar7 = &DAT_01d06378;
LAB_0162a318:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0x14,0x18,iVar1 + -4,puVar7);
    }
    if (uVar5 < 0x1c) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0x18,0x1c,uVar5,&DAT_01d06378);
    }
    if (uVar5 < 0x20) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0x1c,0x20,uVar5,&DAT_01d06378);
    }
    if (uVar5 < 0x24) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0x20,0x24,uVar5,&DAT_01d06378);
    }
    local_48 = (int **)piVar3[4];
    local_44 = piVar3[5];
    local_40 = piVar3[6];
    iVar9 = 0x24;
    iVar4 = 0x1c;
    iVar11 = piVar3[1];
    iVar2 = piVar3[2];
    iVar1 = piVar3[3];
    iVar13 = piVar3[7];
    iVar14 = piVar3[8];
    iVar6 = piVar3[9];
    iVar10 = 0x20;
LAB_0162a20c:
    *(int *)((int)aiStack_58 + iVar4) = iVar13;
    *(int *)((int)aiStack_58 + iVar10) = iVar14;
    *(int *)((int)aiStack_58 + iVar9) = iVar6;
  }
  else {
    if (iVar12 == 1) {
      uVar5 = iVar1 - 4;
      if (uVar5 < 4) {
        puVar7 = &DAT_01d06368;
        goto LAB_0162a278;
      }
      if (uVar5 < 8) {
        puVar7 = &DAT_01d06368;
        goto LAB_0162a298;
      }
      if (uVar5 < 0xc) {
        puVar7 = &DAT_01d06368;
        goto LAB_0162a2b8;
      }
      if (uVar5 < 0x10) {
        puVar7 = &DAT_01d06368;
        goto LAB_0162a2d8;
      }
      if (uVar5 < 0x14) {
        puVar7 = &DAT_01d06368;
        goto LAB_0162a2f8;
      }
      if (uVar5 < 0x18) {
        puVar7 = &DAT_01d06368;
        goto LAB_0162a318;
      }
      iVar11 = piVar3[1];
      iVar9 = 0x18;
      iVar2 = piVar3[2];
      iVar4 = 0x10;
      iVar1 = piVar3[3];
      iVar13 = piVar3[4];
      iVar14 = piVar3[5];
      iVar6 = piVar3[6];
      iVar10 = 0x14;
      goto LAB_0162a20c;
    }
    iVar2 = FUN_01298504(iVar1,1);
    if (iVar2 == 0) {
      uVar8 = 1;
      goto LAB_0162a034;
    }
    FUN_01bed4e2(iVar2,piVar3,iVar1);
    iVar12 = 2;
    iVar11 = iVar1;
  }
  local_70 = local_48;
  local_6c = (undefined1 *)local_44;
  iStack_68 = local_40;
  iStack_64 = iStack_3c;
  iStack_60 = iStack_38;
  iStack_5c = iStack_34;
LAB_0162a0ec:
  *param_1 = iVar12;
  param_1[1] = iVar11;
  param_1[2] = iVar2;
  param_1[3] = iVar1;
  param_1[4] = (int)local_70;
  param_1[5] = (int)local_6c;
  param_1[6] = iStack_68;
  param_1[7] = iStack_64;
  param_1[8] = iStack_60;
  param_1[9] = iStack_5c;
  return;
}

