// FUN_010aa4f0 @ 010aa4f0 size=1188 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_010aa4f0(int *param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  code *pcVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar4 = FUN_010b1088();
  if (iVar4 == 0) {
    uVar3 = FUN_010b0a24(param_1,param_2);
    iVar13 = *param_2;
    iVar11 = param_2[1];
    uVar21 = 0;
    iVar12 = param_2[2];
    iVar4 = param_2[1];
    uVar5 = param_1[10];
    iVar18 = param_1[6];
    uVar20 = param_1[7];
    iVar15 = param_1[9];
    uVar1 = *(ushort *)(param_1 + 0xe);
    uVar22 = (uint)(uVar1 & uVar3);
LAB_010aa5d4:
    do {
      uVar6 = uVar22;
      uVar22 = 0;
    } while (uVar20 <= uVar6);
    puVar7 = (ushort *)(iVar18 + uVar6 * 4);
    local_44 = (uint)*puVar7;
    if (local_44 == 0xffff) {
      local_58 = *param_2;
      iStack_54 = param_2[1];
      iStack_50 = param_2[2];
      iStack_4c = param_2[3];
      local_48 = *param_3;
      local_44 = param_3[1];
      local_40 = param_3[2];
      local_3c = param_3[3];
      local_38 = param_3[4];
      iVar4 = FUN_0145da44(param_1,uVar3,&local_58);
      if (iVar4 != 0) {
        return 2;
      }
      if ((uint)param_1[7] <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,param_1[7],&DAT_018a4504);
      }
      puVar9 = (undefined2 *)(param_1[6] + uVar6 * 4);
      *puVar9 = (short)uVar5;
      puVar9[1] = uVar3;
      return 0;
    }
    uVar2 = puVar7[1];
    if ((uVar6 - (uVar1 & uVar2) & (uint)uVar1) < uVar21) {
      iVar11 = *param_1;
      iVar4 = param_1[1];
      local_58 = *param_2;
      iStack_54 = param_2[1];
      iStack_50 = param_2[2];
      iStack_4c = param_2[3];
      local_48 = *param_3;
      local_44 = param_3[1];
      local_40 = param_3[2];
      local_3c = param_3[3];
      local_38 = param_3[4];
      iVar13 = FUN_0145da44(param_1,uVar3,&local_58);
      if (iVar13 != 0) {
        return 2;
      }
      iVar13 = param_1[6];
      uVar20 = 0;
      uVar14 = param_1[7];
      uVar22 = uVar5 & 0xffff;
      while( true ) {
        do {
          uVar5 = uVar6;
          uVar6 = 0;
        } while (uVar14 <= uVar5);
        puVar7 = (ushort *)(iVar13 + uVar5 * 4);
        uVar1 = *puVar7;
        if (uVar1 == 0xffff) break;
        *puVar7 = (ushort)uVar22;
        uVar2 = puVar7[1];
        uVar20 = uVar20 + 1;
        puVar7[1] = uVar3;
        uVar22 = (uint)uVar1;
        uVar6 = uVar5 + 1;
        uVar3 = uVar2;
      }
      iVar13 = *param_1;
      iVar12 = param_1[1];
      puVar7[1] = uVar3;
      *puVar7 = (ushort)uVar22;
      if ((uVar21 >> 9 != 0 && (iVar11 != 2 || iVar4 != 0) || 0x7f < uVar20) &&
          (iVar13 == 0 && iVar12 == 0)) {
        *param_1 = 1;
        param_1[1] = 0;
      }
      return 0;
    }
    if (uVar2 == uVar3) {
      if (uVar5 <= local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_44,uVar5,&DAT_018a44f4);
      }
      iVar8 = local_44 * 0x34 + iVar15;
      if ((*(int *)(iVar8 + 0x20) != 0) != (iVar13 == 0)) {
        if (*(int *)(iVar8 + 0x20) == 0) {
          if (*(char *)(iVar8 + 0x24) == (char)iVar4) goto LAB_010aa688;
        }
        else if ((*(int *)(iVar8 + 0x28) == iVar12) &&
                (iVar8 = thunk_FUN_016dd50a(*(undefined4 *)(iVar8 + 0x24),iVar11,iVar12), iVar8 == 0
                )) goto LAB_010aa688;
      }
    }
    uVar21 = uVar21 + 1;
    uVar22 = uVar6 + 1;
    goto LAB_010aa5d4;
  }
  (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
  uVar19 = 2;
  if (*param_2 == 0) {
    return 2;
  }
  pcVar17 = *(code **)(*param_2 + 0x10);
  iVar4 = param_2[1];
  iVar13 = param_2[2];
LAB_010aa53c:
  (*pcVar17)(param_2 + 3,iVar4,iVar13);
  return uVar19;
LAB_010aa688:
  piVar16 = (int *)(iVar15 + local_44 * 0x34);
  local_3c = local_44;
  if (*piVar16 == 1) {
    uVar22 = param_1[0xd];
    uVar5 = piVar16[2];
    local_38 = *param_3;
    iStack_34 = param_3[1];
    iStack_30 = param_3[2];
    iStack_2c = param_3[3];
    iStack_28 = param_3[4];
    local_40 = 0;
    local_48 = 1;
    local_44 = uVar5;
    if (uVar22 == param_1[0xb]) {
      FUN_0102ccf4(param_1 + 0xb);
    }
    iVar4 = param_1[0xc];
    puVar10 = (undefined4 *)(iVar4 + uVar22 * 0x24);
    *puVar10 = local_48;
    puVar10[1] = local_44;
    puVar10[2] = local_40;
    puVar10[3] = local_3c;
    puVar10[4] = local_38;
    puVar10[5] = iStack_34;
    puVar10[6] = iStack_30;
    puVar10[7] = iStack_2c;
    puVar10[8] = iStack_28;
    param_1[0xd] = uVar22 + 1;
    if (uVar22 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,uVar22 + 1,&DAT_018a6304);
    }
    piVar16[2] = uVar22;
    *piVar16 = 1;
    iVar4 = iVar4 + uVar5 * 0x24;
    *(undefined4 *)(iVar4 + 8) = 1;
    *(uint *)(iVar4 + 0xc) = uVar22;
  }
  else {
    iVar4 = param_1[0xd];
    local_38 = *param_3;
    iStack_34 = param_3[1];
    iStack_30 = param_3[2];
    iStack_2c = param_3[3];
    iStack_28 = param_3[4];
    local_40 = 0;
    local_48 = 0;
    if (iVar4 == param_1[0xb]) {
      FUN_0102ccf4(param_1 + 0xb);
    }
    puVar10 = (undefined4 *)(param_1[0xc] + iVar4 * 0x24);
    *puVar10 = local_48;
    puVar10[1] = local_44;
    puVar10[2] = local_40;
    puVar10[3] = local_3c;
    puVar10[4] = local_38;
    puVar10[5] = iStack_34;
    puVar10[6] = iStack_30;
    puVar10[7] = iStack_2c;
    puVar10[8] = iStack_28;
    param_1[0xd] = iVar4 + 1;
    *piVar16 = 1;
    piVar16[1] = iVar4;
    piVar16[2] = iVar4;
  }
  uVar19 = 1;
  if (*param_2 == 0) {
    return 1;
  }
  pcVar17 = *(code **)(*param_2 + 0x10);
  iVar4 = param_2[1];
  iVar13 = param_2[2];
  goto LAB_010aa53c;
}

