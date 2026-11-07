// FUN_00b92380 @ 00b92380 size=2440 calls_out=7 calls_in=2
// strings: 

void FUN_00b92380(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  uint *local_5c;
  uint *local_58;
  int local_54;
  uint *local_4c;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  local_4c = param_1;
  if (0x20 < param_2) {
    local_5c = param_6;
    uVar13 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_00b91d78(local_4c,uVar13,param_3,param_4,1);
          return;
        }
        puVar2 = local_4c + (uVar13 >> 3) * 0x2a;
        puVar9 = local_4c + (uVar13 >> 3) * 0x18;
        if (uVar13 < 0x40) {
          uVar5 = *puVar9;
          uVar6 = *local_4c;
          puVar3 = puVar2;
          if (uVar6 < uVar5 == uVar5 < *puVar2) {
            puVar3 = puVar9;
          }
          if (uVar6 < uVar5 != uVar6 < *puVar2) {
            puVar3 = local_4c;
          }
        }
        else {
          puVar3 = (uint *)FUN_00b92d34(local_4c,puVar9,puVar2);
        }
        param_5 = param_5 + -1;
        uVar5 = ((uint)((int)puVar3 - (int)local_4c) >> 3) * -0x55555555;
        local_40 = *puVar3;
        uStack_3c = puVar3[1];
        uStack_38 = puVar3[2];
        uStack_34 = puVar3[3];
        uStack_30 = puVar3[4];
        uStack_2c = puVar3[5];
        if ((local_5c == (uint *)0x0) || (*local_5c < *puVar3)) break;
LAB_00b92808:
        if (param_4 < uVar13) goto LAB_00b92cf0;
        uVar6 = 0;
        puVar9 = param_3 + uVar13 * 6;
        puVar2 = local_4c;
        while( true ) {
          for (puVar7 = puVar2; puVar7 < local_4c + uVar5 * 6; puVar7 = puVar7 + 6) {
            puVar9 = puVar9 + -6;
            uVar19 = uVar6;
            puVar2 = puVar9;
            if (*puVar7 <= *puVar3) {
              uVar19 = uVar6 + 1;
              puVar2 = param_3;
            }
            puVar2 = puVar2 + uVar6 * 6;
            uVar6 = puVar7[1];
            uVar14 = puVar7[2];
            uVar16 = puVar7[3];
            uVar18 = puVar7[4];
            uVar20 = puVar7[5];
            *puVar2 = *puVar7;
            puVar2[1] = uVar6;
            puVar2[2] = uVar14;
            puVar2[3] = uVar16;
            puVar2[4] = uVar18;
            puVar2[5] = uVar20;
            uVar6 = uVar19;
          }
          if (uVar5 == uVar13) break;
          puVar10 = param_3 + uVar6 * 6;
          uVar5 = puVar7[1];
          uVar19 = puVar7[2];
          uVar14 = puVar7[3];
          uVar16 = puVar7[4];
          uVar18 = puVar7[5];
          puVar2 = puVar7 + 6;
          uVar6 = uVar6 + 1;
          puVar9 = puVar9 + -6;
          *puVar10 = *puVar7;
          puVar10[1] = uVar5;
          puVar10[2] = uVar19;
          puVar10[3] = uVar14;
          puVar10[4] = uVar16;
          puVar10[5] = uVar18;
          uVar5 = uVar13;
        }
        FUN_016dd1aa(local_4c,param_3,uVar6 * 0x18);
        param_2 = uVar13 - uVar6;
        if (param_2 == 0) {
          return;
        }
        local_4c = local_4c + uVar6 * 6;
        puVar2 = param_3 + uVar13 * 6 + -6;
        puVar9 = local_4c;
        uVar5 = param_2;
        do {
          uVar19 = *puVar2;
          uVar14 = puVar2[1];
          uVar16 = puVar2[2];
          uVar18 = puVar2[3];
          uVar20 = puVar2[4];
          uVar12 = puVar2[5];
          puVar2 = puVar2 + -6;
          uVar5 = uVar5 - 1;
          *puVar9 = uVar19;
          puVar9[1] = uVar14;
          puVar9[2] = uVar16;
          puVar9[3] = uVar18;
          puVar9[4] = uVar20;
          puVar9[5] = uVar12;
          puVar9 = puVar9 + 6;
        } while (uVar5 != 0);
        if (uVar13 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar6,uVar13,uVar13,&DAT_018af348);
        }
        local_5c = (uint *)0x0;
        uVar13 = param_2;
        if (param_2 < 0x21) goto LAB_00b923a4;
      }
      if (param_4 < uVar13) goto LAB_00b92cf0;
      param_2 = 0;
      puVar9 = param_3 + uVar13 * 6;
      puVar2 = local_4c;
      uVar6 = uVar5;
      while( true ) {
        for (puVar7 = puVar2; puVar7 < local_4c + uVar6 * 6; puVar7 = puVar7 + 6) {
          puVar9 = puVar9 + -6;
          uVar19 = param_2;
          puVar2 = puVar9;
          if (*puVar7 < *puVar3) {
            uVar19 = param_2 + 1;
            puVar2 = param_3;
          }
          puVar2 = puVar2 + param_2 * 6;
          uVar14 = puVar7[1];
          uVar16 = puVar7[2];
          uVar18 = puVar7[3];
          uVar20 = puVar7[4];
          uVar12 = puVar7[5];
          *puVar2 = *puVar7;
          puVar2[1] = uVar14;
          puVar2[2] = uVar16;
          puVar2[3] = uVar18;
          puVar2[4] = uVar20;
          puVar2[5] = uVar12;
          param_2 = uVar19;
        }
        if (uVar6 == uVar13) break;
        puVar9 = puVar9 + -6;
        puVar10 = puVar9 + param_2 * 6;
        uVar6 = puVar7[1];
        uVar19 = puVar7[2];
        uVar14 = puVar7[3];
        uVar16 = puVar7[4];
        uVar18 = puVar7[5];
        puVar2 = puVar7 + 6;
        *puVar10 = *puVar7;
        puVar10[1] = uVar6;
        puVar10[2] = uVar19;
        puVar10[3] = uVar14;
        puVar10[4] = uVar16;
        puVar10[5] = uVar18;
        uVar6 = uVar13;
      }
      FUN_016dd1aa(local_4c,param_3,param_2 * 0x18);
      iVar11 = uVar13 - param_2;
      if (iVar11 != 0) {
        puVar2 = param_3 + uVar13 * 6 + -6;
        puVar9 = local_4c + param_2 * 6;
        iVar4 = iVar11;
        do {
          uVar6 = *puVar2;
          uVar19 = puVar2[1];
          uVar14 = puVar2[2];
          uVar16 = puVar2[3];
          uVar18 = puVar2[4];
          uVar20 = puVar2[5];
          puVar2 = puVar2 + -6;
          iVar4 = iVar4 + -1;
          *puVar9 = uVar6;
          puVar9[1] = uVar19;
          puVar9[2] = uVar14;
          puVar9[3] = uVar16;
          puVar9[4] = uVar18;
          puVar9[5] = uVar20;
          puVar9 = puVar9 + 6;
        } while (iVar4 != 0);
      }
      if (param_2 == 0) goto LAB_00b92808;
      if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_00b92380(local_4c + param_2 * 6,iVar11,param_3,param_4,param_5,&local_40);
      uVar13 = param_2;
    } while (0x20 < param_2);
  }
LAB_00b923a4:
  uVar13 = param_2 >> 1;
  if (uVar13 != 0) {
    if (param_2 < 8) {
      uVar5 = local_4c[1];
      uVar6 = local_4c[2];
      uVar19 = local_4c[3];
      uVar14 = local_4c[4];
      uVar16 = local_4c[5];
      *param_3 = *local_4c;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      param_3[3] = uVar19;
      param_3[4] = uVar14;
      param_3[5] = uVar16;
      puVar2 = local_4c + uVar13 * 6;
      puVar9 = param_3 + uVar13 * 6;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar19 = puVar2[3];
      uVar14 = puVar2[4];
      uVar16 = puVar2[5];
      *puVar9 = *puVar2;
      puVar9[1] = uVar5;
      puVar9[2] = uVar6;
      puVar9[3] = uVar19;
      puVar9[4] = uVar14;
      puVar9[5] = uVar16;
      uVar5 = 1;
    }
    else {
      uVar6 = (uint)(*local_4c <= local_4c[6]);
      uVar5 = (uint)(*local_4c > local_4c[6]);
      iVar11 = 0x30;
      if (local_4c[0x12] < local_4c[0xc]) {
        iVar11 = 0x48;
      }
      iVar4 = 0x48;
      puVar9 = (uint *)((int)local_4c + iVar11);
      uVar19 = *puVar9;
      if (local_4c[0x12] < local_4c[0xc]) {
        iVar4 = 0x30;
      }
      puVar7 = (uint *)((int)local_4c + iVar4);
      puVar3 = local_4c + (uVar5 | uVar5 << 1) * 2;
      uVar5 = *puVar3;
      puVar10 = local_4c + (uVar6 | uVar6 << 1) * 2;
      puVar2 = puVar9;
      if (uVar19 < uVar5) {
        puVar2 = puVar10;
      }
      puVar15 = puVar10;
      puVar8 = puVar7;
      if (*puVar7 < *puVar10) {
        puVar15 = puVar9;
        puVar8 = puVar10;
        puVar2 = puVar7;
      }
      if (uVar19 < uVar5) {
        puVar15 = puVar3;
      }
      uVar6 = *puVar15;
      if (uVar19 < uVar5) {
        puVar3 = puVar9;
      }
      uVar19 = *puVar2;
      uVar5 = puVar3[1];
      uVar14 = puVar3[2];
      uVar16 = puVar3[3];
      uVar18 = puVar3[4];
      uVar20 = puVar3[5];
      *param_3 = *puVar3;
      param_3[1] = uVar5;
      param_3[2] = uVar14;
      param_3[3] = uVar16;
      param_3[4] = uVar18;
      param_3[5] = uVar20;
      if (uVar19 < uVar6) {
        puVar9 = puVar15;
        puVar15 = puVar2;
      }
      else {
        puVar9 = puVar2;
      }
      uVar5 = puVar15[1];
      uVar6 = puVar15[2];
      uVar19 = puVar15[3];
      uVar14 = puVar15[4];
      uVar16 = puVar15[5];
      param_3[6] = *puVar15;
      param_3[7] = uVar5;
      param_3[8] = uVar6;
      param_3[9] = uVar19;
      param_3[10] = uVar14;
      param_3[0xb] = uVar16;
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar19 = puVar9[3];
      uVar14 = puVar9[4];
      uVar16 = puVar9[5];
      param_3[0xc] = *puVar9;
      param_3[0xd] = uVar5;
      param_3[0xe] = uVar6;
      param_3[0xf] = uVar19;
      param_3[0x10] = uVar14;
      param_3[0x11] = uVar16;
      uVar5 = puVar8[1];
      uVar6 = puVar8[2];
      uVar19 = puVar8[3];
      uVar14 = puVar8[4];
      uVar16 = puVar8[5];
      param_3[0x12] = *puVar8;
      param_3[0x13] = uVar5;
      param_3[0x14] = uVar6;
      param_3[0x15] = uVar19;
      param_3[0x16] = uVar14;
      param_3[0x17] = uVar16;
      iVar11 = 0x30;
      puVar9 = local_4c + uVar13 * 6;
      uVar6 = (uint)(puVar9[6] < *puVar9);
      uVar5 = (uint)(puVar9[6] >= *puVar9);
      iVar4 = 0x48;
      if (puVar9[0x12] < puVar9[0xc]) {
        iVar4 = 0x30;
      }
      if (puVar9[0x12] < puVar9[0xc]) {
        iVar11 = 0x48;
      }
      puVar7 = (uint *)((int)puVar9 + iVar4);
      puVar10 = (uint *)((int)puVar9 + iVar11);
      puVar3 = puVar9 + (uVar6 | uVar6 << 1) * 2;
      puVar9 = puVar9 + (uVar5 | uVar5 << 1) * 2;
      puVar2 = puVar10;
      if (*puVar10 < *puVar3) {
        puVar2 = puVar9;
      }
      puVar8 = puVar7;
      if (*puVar7 < *puVar9) {
        puVar8 = puVar9;
        puVar2 = puVar7;
      }
      uVar5 = *puVar2;
      if (*puVar7 < *puVar9) {
        puVar9 = puVar10;
      }
      puVar7 = puVar3;
      if (*puVar10 < *puVar3) {
        puVar7 = puVar10;
        puVar9 = puVar3;
      }
      puVar3 = param_3 + uVar13 * 6;
      uVar6 = *puVar9;
      uVar19 = puVar7[1];
      uVar14 = puVar7[2];
      uVar16 = puVar7[3];
      uVar18 = puVar7[4];
      uVar20 = puVar7[5];
      *puVar3 = *puVar7;
      puVar3[1] = uVar19;
      puVar3[2] = uVar14;
      puVar3[3] = uVar16;
      puVar3[4] = uVar18;
      puVar3[5] = uVar20;
      if (uVar5 < uVar6) {
        puVar7 = puVar9;
        puVar9 = puVar2;
      }
      else {
        puVar7 = puVar2;
      }
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar19 = puVar9[3];
      uVar14 = puVar9[4];
      uVar16 = puVar9[5];
      puVar3[6] = *puVar9;
      puVar3[7] = uVar5;
      puVar3[8] = uVar6;
      puVar3[9] = uVar19;
      puVar3[10] = uVar14;
      puVar3[0xb] = uVar16;
      uVar5 = puVar7[1];
      uVar6 = puVar7[2];
      uVar19 = puVar7[3];
      uVar14 = puVar7[4];
      uVar16 = puVar7[5];
      puVar3[0xc] = *puVar7;
      puVar3[0xd] = uVar5;
      puVar3[0xe] = uVar6;
      puVar3[0xf] = uVar19;
      puVar3[0x10] = uVar14;
      puVar3[0x11] = uVar16;
      uVar5 = puVar8[1];
      uVar6 = puVar8[2];
      uVar19 = puVar8[3];
      uVar14 = puVar8[4];
      uVar16 = puVar8[5];
      puVar3[0x12] = *puVar8;
      puVar3[0x13] = uVar5;
      puVar3[0x14] = uVar6;
      puVar3[0x15] = uVar19;
      puVar3[0x16] = uVar14;
      puVar3[0x17] = uVar16;
      uVar5 = 4;
    }
    if (uVar5 < uVar13) {
      iVar11 = uVar5 * 0x18;
      uVar6 = uVar5;
      do {
        puVar9 = local_4c + uVar6 * 6;
        puVar2 = param_3 + uVar6 * 6;
        uVar19 = puVar9[1];
        uVar14 = puVar9[2];
        uVar16 = puVar9[3];
        uVar18 = puVar9[4];
        uVar20 = puVar9[5];
        *puVar2 = *puVar9;
        puVar2[1] = uVar19;
        puVar2[2] = uVar14;
        puVar2[3] = uVar16;
        puVar2[4] = uVar18;
        puVar2[5] = uVar20;
        uVar19 = param_3[uVar6 * 6];
        if (uVar19 < puVar2[-6]) {
          local_40 = puVar9[1];
          uStack_3c = puVar9[2];
          uStack_38 = puVar9[3];
          uStack_34 = puVar9[4];
          uStack_30 = puVar9[5];
          iVar4 = iVar11;
          do {
            puVar17 = (undefined4 *)((int)param_3 + iVar4);
            *puVar17 = puVar17[-6];
            puVar17[1] = puVar17[-5];
            puVar17[2] = puVar17[-4];
            puVar17[3] = puVar17[-3];
            puVar17[4] = puVar17[-2];
            puVar17[5] = puVar17[-1];
            if (iVar4 == 0x18) {
              puVar9 = param_3;
              goto LAB_00b929b4;
            }
            iVar4 = iVar4 + -0x18;
          } while (uVar19 < (uint)puVar17[-0xc]);
          puVar9 = (uint *)((int)param_3 + iVar4);
LAB_00b929b4:
          *puVar9 = uVar19;
          puVar9[1] = local_40;
          puVar9[2] = uStack_3c;
          puVar9[3] = uStack_38;
          puVar9[4] = uStack_34;
          puVar9[5] = uStack_30;
        }
        uVar6 = uVar6 + 1;
        iVar11 = iVar11 + 0x18;
      } while (uVar6 != uVar13);
    }
    puVar9 = param_3 + uVar13 * 6;
    if (uVar5 < param_2 - uVar13) {
      local_54 = 0x18;
      uVar6 = uVar5;
      local_58 = puVar9;
      do {
        puVar3 = local_4c + uVar13 * 6 + uVar6 * 6;
        puVar2 = puVar9 + uVar6 * 6;
        uVar19 = puVar3[1];
        uVar14 = puVar3[2];
        uVar16 = puVar3[3];
        uVar18 = puVar3[4];
        uVar20 = puVar3[5];
        *puVar2 = *puVar3;
        puVar2[1] = uVar19;
        puVar2[2] = uVar14;
        puVar2[3] = uVar16;
        puVar2[4] = uVar18;
        puVar2[5] = uVar20;
        uVar19 = puVar9[uVar6 * 6];
        if (uVar19 < puVar2[-6]) {
          local_40 = puVar3[1];
          uStack_3c = puVar3[2];
          uStack_38 = puVar3[3];
          uStack_34 = puVar3[4];
          uStack_30 = puVar3[5];
          iVar11 = local_54;
          puVar2 = local_58;
          do {
            puVar3 = puVar2 + uVar5 * 6;
            *puVar3 = puVar3[-6];
            puVar3[1] = puVar3[-5];
            puVar3[2] = puVar3[-4];
            puVar3[3] = puVar3[-3];
            puVar3[4] = puVar3[-2];
            puVar3[5] = puVar3[-1];
            if (uVar5 * 0x18 == iVar11) {
              puVar2 = puVar9;
              goto LAB_00b92ab4;
            }
            iVar11 = iVar11 + 0x18;
            puVar2 = puVar2 + -6;
          } while (uVar19 < puVar3[-0xc]);
          puVar2 = puVar2 + uVar5 * 6;
LAB_00b92ab4:
          *puVar2 = uVar19;
          puVar2[1] = local_40;
          puVar2[2] = uStack_3c;
          puVar2[3] = uStack_38;
          puVar2[4] = uStack_34;
          puVar2[5] = uStack_30;
        }
        uVar6 = uVar6 + 1;
        local_54 = local_54 + -0x18;
        local_58 = local_58 + 6;
      } while (uVar6 != param_2 - uVar13);
    }
    puVar3 = puVar9 + -6;
    puVar2 = param_3 + param_2 * 6 + -6;
    iVar11 = 0;
    do {
      bVar21 = *puVar9 < *param_3;
      puVar7 = param_3;
      if (bVar21) {
        puVar7 = puVar9;
      }
      uVar5 = puVar7[1];
      uVar6 = puVar7[2];
      uVar19 = puVar7[3];
      uVar14 = puVar7[4];
      uVar16 = puVar7[5];
      puVar10 = (uint *)((int)local_4c + iVar11);
      *puVar10 = *puVar7;
      puVar10[1] = uVar5;
      puVar10[2] = uVar6;
      puVar10[3] = uVar19;
      puVar10[4] = uVar14;
      puVar10[5] = uVar16;
      bVar22 = *puVar2 < *puVar3;
      puVar7 = puVar2;
      if (bVar22) {
        puVar7 = puVar3;
      }
      puVar10 = (uint *)((int)local_4c + ((param_2 * 0x18 + -0x18) - iVar11));
      uVar5 = puVar7[1];
      uVar6 = puVar7[2];
      uVar19 = puVar7[3];
      uVar14 = puVar7[4];
      uVar16 = puVar7[5];
      iVar11 = iVar11 + 0x18;
      *puVar10 = *puVar7;
      puVar10[1] = uVar5;
      puVar10[2] = uVar6;
      puVar10[3] = uVar19;
      puVar10[4] = uVar14;
      puVar10[5] = uVar16;
      param_3 = param_3 + ((uint)!bVar21 | (uint)!bVar21 << 1) * 2;
      puVar9 = puVar9 + ((uint)bVar21 | (uint)bVar21 << 1) * 2;
      iVar4 = 0;
      if (bVar22) {
        iVar4 = -1;
      }
      puVar3 = puVar3 + iVar4 * 6;
      iVar4 = 0;
      if (!bVar22) {
        iVar4 = -1;
      }
      uVar13 = uVar13 - 1;
      puVar7 = (uint *)(iVar4 * 3);
      puVar2 = puVar2 + iVar4 * 6;
    } while (uVar13 != 0);
    puVar3 = puVar3 + 6;
    if ((param_2 & 1) != 0) {
      bVar21 = puVar3 <= param_3;
      local_4c = (uint *)((int)local_4c + iVar11);
      puVar7 = puVar9;
      if (!bVar21) {
        puVar7 = param_3;
      }
      uVar13 = puVar7[1];
      uVar5 = puVar7[2];
      uVar6 = puVar7[3];
      uVar19 = puVar7[4];
      uVar14 = puVar7[5];
      *local_4c = *puVar7;
      local_4c[1] = uVar13;
      local_4c[2] = uVar5;
      local_4c[3] = uVar6;
      local_4c[4] = uVar19;
      local_4c[5] = uVar14;
      puVar7 = (uint *)((uint)!bVar21 | (uint)!bVar21 << 1);
      puVar9 = puVar9 + ((uint)bVar21 | (uint)bVar21 << 1) * 2;
      param_3 = param_3 + (int)puVar7 * 2;
    }
    if (param_3 == puVar3) {
      puVar7 = puVar2 + 6;
    }
    if (param_3 != puVar3 || puVar9 != puVar7) {
      FUN_00fb7254();
LAB_00b92cf0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb92cf0);
      (*pcVar1)();
    }
  }
  return;
}

