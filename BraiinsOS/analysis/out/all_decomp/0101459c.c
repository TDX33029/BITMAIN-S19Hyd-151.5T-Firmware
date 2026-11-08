// FUN_0101459c @ 0101459c size=1984 calls_out=13 calls_in=0
// strings: 

undefined4 FUN_0101459c(int *param_1,int *param_2,uint *param_3)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  short *psVar5;
  ushort *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  short sVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  undefined2 *puVar21;
  uint uVar22;
  int iVar23;
  short sVar24;
  uint uVar25;
  undefined2 *puVar26;
  uint uVar27;
  uint in_fpscr;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  int local_58;
  undefined2 *local_54;
  int local_50;
  int iStack_4c;
  uint local_48;
  undefined2 *local_44;
  uint local_40;
  undefined2 *local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar15 = param_1[7];
  iVar20 = param_1[10];
  if (*param_1 == 1 && param_1[1] == 0) {
    fVar28 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
    fVar29 = (float)VectorUnsignedToFloat(iVar20,(byte)(in_fpscr >> 0x16) & 3);
    if (fVar29 / fVar28 < 0.2) {
      uVar30 = thunk_FUN_016de0ee(0,0x2c0);
      puVar18 = (uint *)((int)uVar30 + (int)((ulonglong)uVar30 >> 0x20));
      if ((char)puVar18[4] == '\0') {
        FUN_015f62e4(&local_48);
        *puVar18 = local_48;
        puVar18[1] = (uint)local_44;
        puVar18[2] = local_40;
        puVar18[3] = (uint)local_3c;
        *(undefined1 *)(puVar18 + 4) = 1;
      }
      uVar10 = *puVar18;
      uVar14 = puVar18[1];
      uVar25 = puVar18[2];
      uVar27 = puVar18[3];
      puVar21 = (undefined2 *)param_1[6];
      param_1[2] = uVar10;
      param_1[3] = uVar14;
      param_1[4] = uVar25;
      param_1[5] = uVar27;
      *param_1 = 2;
      param_1[1] = 0;
      *puVar18 = uVar10 + 1;
      puVar18[1] = uVar14 + (0xfffffffe < uVar10);
      if (uVar15 != 0) {
        puVar26 = puVar21;
        do {
          puVar26[1] = 0;
          *puVar26 = 0xffff;
          puVar26 = puVar26 + 2;
        } while (puVar26 != puVar21 + uVar15 * 2);
      }
      if (iVar20 != 0) {
        iVar23 = param_1[9];
        iVar20 = iVar20 * 0x34 + iVar23;
        uVar1 = *(ushort *)(param_1 + 0xe);
        sVar24 = 0;
        do {
          uVar4 = FUN_010b0a24(param_1,iVar23 + 0x20);
          *(ushort *)(iVar23 + 0x30) = uVar4;
          iVar23 = iVar23 + 0x34;
          uVar14 = 0;
          uVar10 = (uint)(uVar4 & uVar1);
          while( true ) {
            do {
              uVar25 = uVar10;
              uVar10 = 0;
            } while (uVar15 <= uVar25);
            psVar5 = puVar21 + uVar25 * 2;
            if (*psVar5 == -1) {
              *psVar5 = sVar24;
              goto LAB_01014688;
            }
            if ((uVar25 - (psVar5[1] & uVar1) & (uint)uVar1) < uVar14) break;
            uVar14 = uVar14 + 1;
            uVar10 = uVar25 + 1;
          }
          uVar10 = uVar25;
          sVar17 = sVar24;
          while( true ) {
            do {
              uVar25 = uVar10;
              uVar10 = 0;
            } while (uVar15 <= uVar25);
            psVar5 = puVar21 + uVar25 * 2;
            sVar2 = *psVar5;
            if (sVar2 == -1) break;
            uVar3 = psVar5[1];
            *psVar5 = sVar17;
            psVar5[1] = uVar4;
            uVar10 = uVar25 + 1;
            sVar17 = sVar2;
            uVar4 = uVar3;
          }
          *psVar5 = sVar17;
LAB_01014688:
          puVar21[uVar25 * 2 + 1] = uVar4;
          sVar24 = sVar24 + 1;
        } while (iVar23 != iVar20);
      }
      goto LAB_010148d0;
    }
    *param_1 = 0;
    param_1[1] = 0;
    iVar20 = FUN_0102981c(param_1,uVar15 << 1);
  }
  else {
    if (iVar20 != uVar15 - (uVar15 >> 2)) goto LAB_010148d0;
    if (iVar20 == 0) {
      uVar16 = 0x20;
      *(undefined2 *)(param_1 + 0xe) = 7;
      puVar21 = (undefined2 *)thunk_FUN_016d4a50(0x20);
      if (puVar21 == (undefined2 *)0x0) {
        uVar8 = 2;
      }
      else {
        puVar21[0xe] = 0xffff;
        puVar21[0xf] = 0;
        puVar21[0xd] = 0;
        puVar21[0xb] = 0;
        puVar21[9] = 0;
        puVar21[7] = 0;
        puVar21[5] = 0;
        puVar21[3] = 0;
        puVar21[1] = 0;
        local_48 = 8;
        puVar21[0xc] = 0xffff;
        puVar21[10] = 0xffff;
        puVar21[8] = 0xffff;
        puVar21[6] = 0xffff;
        puVar21[4] = 0xffff;
        puVar21[2] = 0xffff;
        *puVar21 = 0xffff;
        local_40 = 8;
        local_50 = 8;
        local_58 = 8;
        local_54 = puVar21;
        local_44 = puVar21;
        uVar30 = FUN_00a5ee50(&local_58);
        if (uVar15 != 0) {
          thunk_FUN_016d3fb4(param_1[6]);
        }
        *(undefined8 *)(param_1 + 6) = uVar30;
        uVar16 = 0x138;
        iVar20 = thunk_FUN_016d4a50(0x138);
        if (iVar20 != 0) {
          iVar23 = param_1[9];
          FUN_0149814c(iVar23,0);
          if (param_1[8] != 0) {
            thunk_FUN_016d3fb4(iVar23);
          }
          param_1[8] = 6;
          param_1[9] = iVar20;
          param_1[10] = 0;
          goto LAB_010148d0;
        }
        uVar8 = 4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar8,uVar16);
    }
    iVar20 = FUN_0102981c(param_1,uVar15 << 1);
  }
  if (iVar20 == 0) {
LAB_010148d0:
    uVar4 = FUN_010b0a24(param_1,param_2);
    iVar9 = *param_2;
    iVar11 = param_2[1];
    uVar14 = 0;
    iVar20 = param_2[1];
    iVar12 = param_2[2];
    uVar1 = *(ushort *)(param_1 + 0xe);
    iVar23 = param_1[9];
    iVar19 = param_1[6];
    uVar10 = param_1[7];
    puVar21 = (undefined2 *)param_1[10];
    uVar15 = (uint)(uVar1 & uVar4);
LAB_01014950:
    do {
      uVar25 = uVar15;
      uVar15 = 0;
    } while (uVar10 <= uVar25);
    puVar6 = (ushort *)(iVar19 + uVar25 * 4);
    local_3c = (undefined2 *)(uint)*puVar6;
    if (local_3c == (undefined2 *)&DAT_0000ffff) {
      local_58 = *param_2;
      local_54 = (undefined2 *)param_2[1];
      local_50 = param_2[2];
      iStack_4c = param_2[3];
      local_48 = *param_3;
      local_44 = (undefined2 *)param_3[1];
      local_40 = param_3[2];
      local_3c = (undefined2 *)param_3[3];
      local_38 = param_3[4];
      iVar20 = FUN_0145da44(param_1,uVar4,&local_58);
      if (iVar20 != 0) {
        return 2;
      }
      if ((uint)param_1[7] <= uVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar25,param_1[7],&DAT_018a4504);
      }
      puVar26 = (undefined2 *)(param_1[6] + uVar25 * 4);
      *puVar26 = (short)puVar21;
      puVar26[1] = uVar4;
      return 0;
    }
    uVar3 = puVar6[1];
    if ((uVar25 - (uVar1 & uVar3) & (uint)uVar1) < uVar14) {
      iVar20 = param_1[1];
      local_58 = *param_2;
      local_54 = (undefined2 *)param_2[1];
      local_50 = param_2[2];
      iStack_4c = param_2[3];
      iVar9 = *param_1;
      local_48 = *param_3;
      local_44 = (undefined2 *)param_3[1];
      local_40 = param_3[2];
      local_3c = (undefined2 *)param_3[3];
      local_38 = param_3[4];
      iVar23 = FUN_0145da44(param_1,uVar4,&local_58);
      if (iVar23 != 0) {
        return 2;
      }
      uVar27 = param_1[7];
      iVar23 = param_1[6];
      uVar10 = 0;
      uVar15 = (uint)puVar21 & 0xffff;
      while( true ) {
        do {
          uVar22 = uVar25;
          uVar25 = 0;
        } while (uVar27 <= uVar22);
        puVar6 = (ushort *)(iVar23 + uVar22 * 4);
        uVar1 = *puVar6;
        if (uVar1 == 0xffff) break;
        *puVar6 = (ushort)uVar15;
        uVar3 = puVar6[1];
        uVar10 = uVar10 + 1;
        puVar6[1] = uVar4;
        uVar15 = (uint)uVar1;
        uVar25 = uVar22 + 1;
        uVar4 = uVar3;
      }
      iVar11 = *param_1;
      iVar23 = param_1[1];
      *puVar6 = (ushort)uVar15;
      puVar6[1] = uVar4;
      if ((uVar14 >> 9 == 0 || iVar9 == 2 && iVar20 == 0) && uVar10 < 0x80) {
        return 0;
      }
      if (iVar11 == 0 && iVar23 == 0) {
        *param_1 = 1;
        param_1[1] = 0;
      }
      return 0;
    }
    if (uVar3 == uVar4) {
      if (puVar21 <= local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_3c,puVar21,&DAT_018a44f4);
      }
      iVar7 = (int)local_3c * 0x34 + iVar23;
      if ((*(int *)(iVar7 + 0x20) != 0) != (iVar9 == 0)) {
        if (*(int *)(iVar7 + 0x20) == 0) {
          if (*(char *)(iVar7 + 0x24) == (char)iVar20) goto LAB_01014a00;
        }
        else if ((*(int *)(iVar7 + 0x28) == iVar12) &&
                (iVar7 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 0x24),iVar11), iVar7 == 0))
        goto LAB_01014a00;
      }
    }
    uVar14 = uVar14 + 1;
    uVar15 = uVar25 + 1;
    goto LAB_01014950;
  }
  (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
  uVar16 = 2;
  iVar20 = *param_2;
  goto joined_r0x01014ccc;
LAB_01014a00:
  piVar13 = (int *)(iVar23 + (int)local_3c * 0x34);
  if (*piVar13 == 1) {
    puVar21 = (undefined2 *)param_1[0xd];
    puVar26 = (undefined2 *)piVar13[2];
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    uStack_28 = param_3[4];
    local_40 = 0;
    local_48 = 1;
    local_44 = puVar26;
    if (puVar21 == (undefined2 *)param_1[0xb]) {
      FUN_0102ccf4(param_1 + 0xb);
    }
    iVar20 = param_1[0xc];
    puVar18 = (uint *)(iVar20 + (int)puVar21 * 0x24);
    *puVar18 = local_48;
    puVar18[1] = (uint)local_44;
    puVar18[2] = local_40;
    puVar18[3] = (uint)local_3c;
    puVar18[4] = local_38;
    puVar18[5] = uStack_34;
    puVar18[6] = uStack_30;
    puVar18[7] = uStack_2c;
    puVar18[8] = uStack_28;
    param_1[0xd] = (int)puVar21 + 1;
    if (puVar21 < puVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(puVar26,(undefined1 *)((int)puVar21 + 1),&DAT_018a6304);
    }
    piVar13[2] = (int)puVar21;
    *piVar13 = 1;
    iVar20 = iVar20 + (int)puVar26 * 0x24;
    *(undefined4 *)(iVar20 + 8) = 1;
    *(undefined2 **)(iVar20 + 0xc) = puVar21;
  }
  else {
    iVar20 = param_1[0xd];
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    uStack_28 = param_3[4];
    local_40 = 0;
    local_48 = 0;
    local_44 = local_3c;
    if (iVar20 == param_1[0xb]) {
      FUN_0102ccf4(param_1 + 0xb);
    }
    puVar18 = (uint *)(param_1[0xc] + iVar20 * 0x24);
    *puVar18 = local_48;
    puVar18[1] = (uint)local_44;
    puVar18[2] = local_40;
    puVar18[3] = (uint)local_3c;
    puVar18[4] = local_38;
    puVar18[5] = uStack_34;
    puVar18[6] = uStack_30;
    puVar18[7] = uStack_2c;
    puVar18[8] = uStack_28;
    param_1[0xd] = iVar20 + 1;
    *piVar13 = 1;
    piVar13[1] = iVar20;
    piVar13[2] = iVar20;
  }
  uVar16 = 1;
  iVar20 = *param_2;
joined_r0x01014ccc:
  if (iVar20 == 0) {
    return uVar16;
  }
  (**(code **)(iVar20 + 0x10))(param_2 + 3,param_2[1],param_2[2]);
  return uVar16;
}

