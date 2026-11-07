// FUN_01ac2af0 @ 01ac2af0 size=1808 calls_out=14 calls_in=2
// strings: 

undefined4 FUN_01ac2af0(int *param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  short *psVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined2 *puVar18;
  undefined4 uVar19;
  uint uVar20;
  code *pcVar21;
  int iVar22;
  uint uVar23;
  short sVar24;
  int iVar25;
  int *piVar26;
  uint uVar27;
  uint in_fpscr;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  uint local_6c;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_6c = param_1[10];
  if (*param_1 == 1 && param_1[1] == 0) {
    uVar17 = param_1[7];
    fVar28 = (float)VectorUnsignedToFloat(local_6c,(byte)(in_fpscr >> 0x16) & 3);
    fVar29 = (float)VectorUnsignedToFloat(uVar17,(byte)(in_fpscr >> 0x16) & 3);
    if (0.2 <= fVar28 / fVar29) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_01ac2d58;
    }
    FUN_01414480(param_1);
    puVar18 = (undefined2 *)param_1[6];
    uVar17 = param_1[7];
    if (uVar17 != 0) {
      puVar11 = puVar18;
      do {
        puVar11[1] = 0;
        *puVar11 = 0xffff;
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar18 + uVar17 * 2);
    }
    local_6c = param_1[10];
    if (local_6c != 0) {
      iVar22 = param_1[9];
      iVar5 = local_6c * 0x34 + iVar22;
      uVar1 = *(ushort *)(param_1 + 0xe);
      sVar24 = 0;
      do {
        uVar4 = FUN_0137e53c(param_1,iVar22 + 0x20);
        *(ushort *)(iVar22 + 0x30) = uVar4;
        iVar22 = iVar22 + 0x34;
        uVar15 = 0;
        uVar27 = (uint)(uVar1 & uVar4);
        while( true ) {
          do {
            uVar20 = uVar27;
            uVar27 = 0;
          } while (uVar17 <= uVar20);
          psVar6 = puVar18 + uVar20 * 2;
          if (*psVar6 == -1) {
            *psVar6 = sVar24;
            goto LAB_01ac2c78;
          }
          if ((uVar20 - (psVar6[1] & uVar1) & (uint)uVar1) < uVar15) break;
          uVar15 = uVar15 + 1;
          uVar27 = uVar20 + 1;
        }
        uVar27 = uVar20;
        sVar14 = sVar24;
        while( true ) {
          do {
            uVar20 = uVar27;
            uVar27 = 0;
          } while (uVar17 <= uVar20);
          psVar6 = puVar18 + uVar20 * 2;
          sVar2 = *psVar6;
          if (sVar2 == -1) break;
          *psVar6 = sVar14;
          uVar3 = psVar6[1];
          psVar6[1] = uVar4;
          uVar27 = uVar20 + 1;
          sVar14 = sVar2;
          uVar4 = uVar3;
        }
        *psVar6 = sVar14;
LAB_01ac2c78:
        puVar18[uVar20 * 2 + 1] = uVar4;
        sVar24 = sVar24 + 1;
      } while (iVar22 != iVar5);
      goto LAB_01ac2dc4;
    }
    local_6c = 0;
  }
  else {
    uVar17 = param_1[7];
    if (local_6c != uVar17 - (uVar17 >> 2)) goto LAB_01ac2dc4;
    if (local_6c == 0) {
      *(undefined2 *)(param_1 + 0xe) = 7;
      FUN_01412b3c(&local_60,8);
      uVar30 = FUN_01410d80(&local_60);
      if (uVar17 != 0) {
        thunk_FUN_01be4678(param_1[6]);
      }
      *(undefined8 *)(param_1 + 6) = uVar30;
      iVar5 = thunk_FUN_01be5118(0x138);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x138);
      }
      iVar22 = param_1[9];
      FUN_01410ec8(iVar22,0);
      FUN_0134aee0(param_1[8],iVar22,4,0x34);
      param_1[8] = 6;
      param_1[9] = iVar5;
      local_6c = 0;
      param_1[10] = 0;
      uVar17 = (uint)((ulonglong)uVar30 >> 0x20);
      goto LAB_01ac2dc4;
    }
LAB_01ac2d58:
    iVar5 = FUN_00714958(param_1,uVar17 << 1);
    if (iVar5 != 0) {
      (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
      uVar19 = 2;
      if (*param_2 == 0) {
        return 2;
      }
      pcVar21 = *(code **)(*param_2 + 0x10);
      iVar5 = param_2[1];
      iVar22 = param_2[2];
LAB_01ac31ac:
      (*pcVar21)(param_2 + 3,iVar5,iVar22);
      return uVar19;
    }
    uVar17 = param_1[7];
    local_6c = param_1[10];
  }
LAB_01ac2dc4:
  uVar4 = FUN_0137e53c(param_1,param_2);
  iVar9 = *param_2;
  iVar12 = param_2[1];
  uVar1 = *(ushort *)(param_1 + 0xe);
  iVar22 = param_1[6];
  iVar13 = param_2[2];
  iVar25 = param_1[9];
  iVar5 = param_2[1];
  uVar15 = 0;
  uVar27 = (uint)(uVar1 & uVar4);
LAB_01ac2e18:
  do {
    uVar20 = uVar27;
    uVar27 = 0;
  } while (uVar17 <= uVar20);
  puVar7 = (ushort *)(iVar22 + uVar20 * 4);
  local_5c = (uint)*puVar7;
  if (local_5c == 0xffff) {
    local_38 = *param_2;
    iStack_34 = param_2[1];
    iStack_30 = param_2[2];
    iStack_2c = param_2[3];
    local_60 = *param_3;
    local_5c = param_3[1];
    local_58 = param_3[2];
    local_54 = param_3[3];
    local_50 = param_3[4];
    iVar5 = FUN_01ac32e4(param_1,uVar4);
    if (iVar5 != 0) {
      return 2;
    }
    if ((uint)param_1[7] <= uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar20,param_1[7],&DAT_01d2f3bc);
    }
    puVar18 = (undefined2 *)(param_1[6] + uVar20 * 4);
    *puVar18 = (short)local_6c;
    puVar18[1] = uVar4;
    return 0;
  }
  uVar3 = puVar7[1];
  if ((uVar20 - (uVar1 & uVar3) & (uint)uVar1) < uVar15) {
    iVar5 = param_1[1];
    iVar9 = *param_1;
    local_38 = *param_2;
    iStack_34 = param_2[1];
    iStack_30 = param_2[2];
    iStack_2c = param_2[3];
    local_60 = *param_3;
    local_5c = param_3[1];
    local_58 = param_3[2];
    local_54 = param_3[3];
    local_50 = param_3[4];
    iVar22 = FUN_01ac32e4(param_1,uVar4);
    if (iVar22 != 0) {
      return 2;
    }
    iVar22 = param_1[6];
    uVar16 = param_1[7];
    uVar27 = 0;
    uVar17 = local_6c & 0xffff;
    while( true ) {
      do {
        uVar23 = uVar20;
        uVar20 = 0;
      } while (uVar16 <= uVar23);
      puVar7 = (ushort *)(iVar22 + uVar23 * 4);
      uVar1 = *puVar7;
      if (uVar1 == 0xffff) break;
      uVar3 = puVar7[1];
      *puVar7 = (ushort)uVar17;
      uVar27 = uVar27 + 1;
      puVar7[1] = uVar4;
      uVar17 = (uint)uVar1;
      uVar20 = uVar23 + 1;
      uVar4 = uVar3;
    }
    iVar12 = *param_1;
    iVar22 = param_1[1];
    puVar7[1] = uVar4;
    *puVar7 = (ushort)uVar17;
    if (!((bool)(~(uVar15 >> 9 != 0 && (iVar9 != 2 || iVar5 != 0)) & uVar27 < 0x80) ||
         (iVar12 != 0 || iVar22 != 0))) {
      *param_1 = 1;
      param_1[1] = 0;
      return 0;
    }
    return 0;
  }
  if (uVar3 == uVar4) {
    if (local_6c <= local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_5c,local_6c,&DAT_01d2f3ac);
    }
    iVar8 = local_5c * 0x34 + iVar25;
    if ((*(int *)(iVar8 + 0x20) != 0) != (iVar9 == 0)) {
      if (*(int *)(iVar8 + 0x20) == 0) {
        if (*(char *)(iVar8 + 0x24) == (char)iVar5) goto LAB_01ac3060;
      }
      else if ((*(int *)(iVar8 + 0x28) == iVar13) &&
              (iVar8 = thunk_FUN_01bed842(*(undefined4 *)(iVar8 + 0x24),iVar12), iVar8 == 0))
      goto LAB_01ac3060;
    }
  }
  uVar15 = uVar15 + 1;
  uVar27 = uVar20 + 1;
  goto LAB_01ac2e18;
LAB_01ac3060:
  piVar26 = (int *)(iVar25 + local_5c * 0x34);
  local_54 = local_5c;
  if (*piVar26 == 0) {
    iVar5 = param_1[0xd];
    local_50 = *param_3;
    iStack_4c = param_3[1];
    iStack_48 = param_3[2];
    iStack_44 = param_3[3];
    iStack_40 = param_3[4];
    local_58 = 0;
    local_60 = 0;
    if (iVar5 == param_1[0xb]) {
      FUN_01ac589c(param_1 + 0xb);
    }
    piVar10 = (int *)(param_1[0xc] + iVar5 * 0x24);
    *piVar10 = local_60;
    piVar10[1] = local_5c;
    piVar10[2] = local_58;
    piVar10[3] = local_54;
    piVar10[4] = local_50;
    piVar10[5] = iStack_4c;
    piVar10[6] = iStack_48;
    piVar10[7] = iStack_44;
    piVar10[8] = iStack_40;
    param_1[0xd] = iVar5 + 1;
    *piVar26 = 1;
    piVar26[1] = iVar5;
    piVar26[2] = iVar5;
  }
  else {
    uVar17 = param_1[0xd];
    uVar27 = piVar26[2];
    local_50 = *param_3;
    iStack_4c = param_3[1];
    iStack_48 = param_3[2];
    iStack_44 = param_3[3];
    iStack_40 = param_3[4];
    local_58 = 0;
    local_60 = 1;
    local_5c = uVar27;
    if (uVar17 == param_1[0xb]) {
      FUN_01ac589c(param_1 + 0xb);
    }
    iVar5 = param_1[0xc];
    piVar10 = (int *)(iVar5 + uVar17 * 0x24);
    *piVar10 = local_60;
    piVar10[1] = local_5c;
    piVar10[2] = local_58;
    piVar10[3] = local_54;
    piVar10[4] = local_50;
    piVar10[5] = iStack_4c;
    piVar10[6] = iStack_48;
    piVar10[7] = iStack_44;
    piVar10[8] = iStack_40;
    param_1[0xd] = uVar17 + 1;
    if (uVar17 < uVar27) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar27,uVar17 + 1,&DAT_01d2f39c);
    }
    piVar26[2] = uVar17;
    *piVar26 = 1;
    iVar5 = iVar5 + uVar27 * 0x24;
    *(undefined4 *)(iVar5 + 8) = 1;
    *(uint *)(iVar5 + 0xc) = uVar17;
  }
  uVar19 = 1;
  if (*param_2 == 0) {
    return 1;
  }
  pcVar21 = *(code **)(*param_2 + 0x10);
  iVar5 = param_2[1];
  iVar22 = param_2[2];
  goto LAB_01ac31ac;
}

