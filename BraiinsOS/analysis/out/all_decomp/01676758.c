// FUN_01676758 @ 01676758 size=1024 calls_out=3 calls_in=23
// strings: 

void FUN_01676758(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int extraout_r3;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int unaff_r7;
  int iVar12;
  int iVar13;
  int unaff_r10;
  int iVar14;
  int unaff_r11;
  int iVar15;
  int iVar16;
  int local_50;
  
  iVar8 = *(int *)(param_2 + 4);
  iVar10 = *(int *)(param_2 + 8);
  if (iVar10 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar10);
    }
  }
  FUN_016dd1aa(iVar1,iVar8,iVar10);
  uVar2 = *(uint *)(param_2 + 0xc);
  iVar13 = -0x7ffffffd;
  iVar6 = -0x7ffffffd;
  if (uVar2 == 0x80000003) {
LAB_01676828:
    uVar2 = *(uint *)(param_2 + 0x18);
    iVar7 = extraout_r3;
  }
  else {
    uVar5 = 1;
    if ((int)uVar2 < 0) {
      uVar5 = uVar2 ^ 0x80000000;
    }
    if (uVar5 == 2) {
      local_50 = *(int *)(param_2 + 0x10);
      iVar6 = -0x7ffffffe;
      iVar7 = *(int *)(param_2 + 0x14);
      uVar2 = *(uint *)(param_2 + 0x18);
    }
    else {
      if (uVar5 != 1) {
        iVar6 = -0x80000000;
        goto LAB_01676828;
      }
      iVar8 = *(int *)(param_2 + 0x14);
      uVar9 = *(undefined4 *)(param_2 + 0x10);
      if (iVar8 == 0) {
        local_50 = 1;
      }
      else {
        local_50 = thunk_FUN_016d4a50(iVar8);
        unaff_r7 = iVar8;
        if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar8);
        }
      }
      FUN_016dd1aa(local_50,uVar9);
      uVar2 = *(uint *)(param_2 + 0x18);
      iVar6 = iVar8;
      iVar7 = iVar8;
    }
  }
  if (uVar2 != 0x80000003) {
    uVar5 = 1;
    if ((int)uVar2 < 0) {
      uVar5 = uVar2 ^ 0x80000000;
    }
    if (uVar5 == 2) {
      unaff_r10 = *(int *)(param_2 + 0x1c);
      unaff_r11 = *(int *)(param_2 + 0x20);
      iVar13 = -0x7ffffffe;
    }
    else if (uVar5 == 1) {
      iVar13 = *(int *)(param_2 + 0x20);
      iVar8 = *(int *)(param_2 + 0x1c);
      if (iVar13 == 0) {
        unaff_r10 = 1;
      }
      else {
        unaff_r10 = thunk_FUN_016d4a50(iVar13);
        if (unaff_r10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar13);
        }
      }
      FUN_016dd1aa(unaff_r10,iVar8,iVar13);
      unaff_r7 = iVar7;
      unaff_r11 = iVar13;
    }
    else {
      iVar13 = -0x80000000;
    }
  }
  uVar2 = *(uint *)(param_2 + 0x24);
  iVar11 = -0x7ffffffd;
  iVar3 = -0x7ffffffd;
  if (uVar2 != 0x80000003) {
    uVar5 = 1;
    if ((int)uVar2 < 0) {
      uVar5 = uVar2 ^ 0x80000000;
    }
    if (uVar5 == 0) {
      iVar3 = -0x80000000;
    }
    else if (uVar5 == 2) {
      iVar8 = *(int *)(param_2 + 0x28);
      iVar3 = -0x7ffffffe;
      unaff_r7 = *(int *)(param_2 + 0x2c);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x2c);
      uVar9 = *(undefined4 *)(param_2 + 0x28);
      if (iVar3 == 0) {
        iVar8 = 1;
      }
      else {
        iVar8 = thunk_FUN_016d4a50(iVar3);
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar3);
        }
      }
      FUN_016dd1aa(iVar8,uVar9,iVar3);
      unaff_r7 = iVar3;
    }
  }
  uVar2 = *(uint *)(param_2 + 0x30);
  iVar14 = unaff_r10;
  iVar15 = unaff_r11;
  if (uVar2 == 0x80000003) {
LAB_01676a2c:
    uVar2 = *(uint *)(param_2 + 0x3c);
    iVar12 = unaff_r7;
    iVar4 = iVar13;
    if (uVar2 != 0x80000003) goto LAB_01676a00;
LAB_01676a38:
    iVar16 = -0x7ffffffd;
  }
  else {
    uVar5 = 1;
    if ((int)uVar2 < 0) {
      uVar5 = uVar2 ^ 0x80000000;
    }
    if (uVar5 == 2) {
      iVar4 = *(int *)(param_2 + 0x34);
      iVar11 = -0x7ffffffe;
      uVar2 = *(uint *)(param_2 + 0x3c);
      iVar12 = *(int *)(param_2 + 0x38);
    }
    else {
      if (uVar5 != 1) {
        iVar11 = -0x80000000;
        goto LAB_01676a2c;
      }
      iVar11 = *(int *)(param_2 + 0x38);
      iVar14 = *(int *)(param_2 + 0x34);
      if (iVar11 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = thunk_FUN_016d4a50(iVar11);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar11);
        }
      }
      FUN_016dd1aa(iVar4,iVar14,iVar11);
      uVar2 = *(uint *)(param_2 + 0x3c);
      iVar12 = iVar11;
    }
    if (uVar2 == 0x80000003) goto LAB_01676a38;
LAB_01676a00:
    uVar5 = 1;
    if ((int)uVar2 < 0) {
      uVar5 = uVar2 ^ 0x80000000;
    }
    if (uVar5 == 0) {
      iVar16 = -0x80000000;
    }
    else {
      if (uVar5 != 2) {
        iVar15 = *(int *)(param_2 + 0x44);
        uVar9 = *(undefined4 *)(param_2 + 0x40);
        if (iVar15 == 0) {
          iVar14 = 1;
        }
        else {
          iVar14 = thunk_FUN_016d4a50(iVar15);
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar15);
          }
        }
        FUN_016dd1aa(iVar14,uVar9,iVar15);
        iVar16 = iVar15;
        goto LAB_01676a48;
      }
      iVar14 = *(int *)(param_2 + 0x40);
      iVar16 = -0x7ffffffe;
      iVar15 = *(int *)(param_2 + 0x44);
    }
  }
LAB_01676a48:
  param_1[3] = iVar6;
  *param_1 = iVar10;
  param_1[1] = iVar1;
  param_1[2] = iVar10;
  param_1[0xe] = iVar12;
  param_1[0xd] = iVar4;
  param_1[0xc] = iVar11;
  param_1[4] = local_50;
  param_1[5] = iVar7;
  param_1[6] = iVar13;
  param_1[7] = unaff_r10;
  param_1[8] = unaff_r11;
  param_1[9] = iVar3;
  param_1[10] = iVar8;
  param_1[0xb] = unaff_r7;
  param_1[0x11] = iVar15;
  param_1[0x10] = iVar14;
  param_1[0xf] = iVar16;
  return;
}

