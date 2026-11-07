// FUN_015de018 @ 015de018 size=2912 calls_out=7 calls_in=2
// strings: 

void FUN_015de018(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  byte in_Q;
  uint *local_64;
  uint *local_60;
  int local_5c;
  uint *local_58;
  int local_50;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (0x20 < param_2) {
    local_64 = param_6;
    do {
      uVar8 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_015dd928(param_1,uVar8,param_3,param_4,1);
          return;
        }
        puVar20 = param_1 + (uVar8 >> 3) * 0x2a;
        puVar13 = param_1 + (uVar8 >> 3) * 0x18;
        if (uVar8 < 0x40) {
          uVar12 = puVar20[1];
          uVar9 = puVar13[1];
          uVar21 = param_1[1];
          bVar24 = uVar21 <= uVar9 && (uint)(*puVar13 <= *param_1) <= uVar21 - uVar9;
          puVar6 = puVar20;
          if (bVar24 == (uVar9 <= uVar12 && (uint)(*puVar20 <= *puVar13) <= uVar9 - uVar12)) {
            puVar6 = puVar13;
          }
          if (bVar24 != (uVar21 <= uVar12 && (uint)(*puVar20 <= *param_1) <= uVar21 - uVar12)) {
            puVar6 = param_1;
          }
        }
        else {
          puVar6 = (uint *)FUN_015deba4(param_1);
        }
        param_5 = param_5 + -1;
        uVar9 = ((uint)((int)puVar6 - (int)param_1) >> 3) * -0x55555555;
        local_40 = *puVar6;
        uStack_3c = puVar6[1];
        uStack_38 = puVar6[2];
        local_34 = puVar6[3];
        uStack_30 = puVar6[4];
        uStack_2c = puVar6[5];
        if ((local_64 != (uint *)0x0) &&
           (puVar6[1] < local_64[1] || local_64[1] - puVar6[1] < (uint)(*puVar6 <= *local_64)))
        break;
        if (param_4 < uVar8) goto LAB_015deb60;
        param_2 = 0;
        puVar20 = param_3 + uVar8 * 6;
        puVar13 = param_1;
        uVar21 = uVar9;
        while( true ) {
          for (; puVar13 < param_1 + uVar21 * 6; puVar13 = puVar13 + 6) {
            puVar20 = puVar20 + -6;
            puVar5 = puVar20;
            uVar12 = param_2;
            if (puVar13[1] <= puVar6[1] && (uint)(*puVar6 <= *puVar13) <= puVar13[1] - puVar6[1]) {
              uVar12 = param_2 + 1;
              puVar5 = param_3;
            }
            puVar5 = puVar5 + param_2 * 6;
            uVar14 = puVar13[1];
            uVar18 = puVar13[2];
            uVar16 = puVar13[3];
            uVar19 = puVar13[4];
            uVar22 = puVar13[5];
            *puVar5 = *puVar13;
            puVar5[1] = uVar14;
            puVar5[2] = uVar18;
            puVar5[3] = uVar16;
            puVar5[4] = uVar19;
            puVar5[5] = uVar22;
            param_2 = uVar12;
          }
          if (uVar21 == uVar8) break;
          puVar20 = puVar20 + -6;
          puVar5 = puVar20 + param_2 * 6;
          uVar21 = *puVar13;
          uVar12 = puVar13[1];
          uVar14 = puVar13[2];
          uVar18 = puVar13[3];
          uVar16 = puVar13[4];
          uVar19 = puVar13[5];
          puVar13 = puVar13 + 6;
          *puVar5 = uVar21;
          puVar5[1] = uVar12;
          puVar5[2] = uVar14;
          puVar5[3] = uVar18;
          puVar5[4] = uVar16;
          puVar5[5] = uVar19;
          uVar21 = uVar8;
        }
        FUN_016dd1aa(param_1,param_3,param_2 * 0x18);
        iVar4 = uVar8 - param_2;
        if (iVar4 != 0) {
          puVar20 = param_3 + uVar8 * 6 + -6;
          puVar13 = param_1 + param_2 * 6;
          iVar10 = iVar4;
          do {
            uVar21 = *puVar20;
            uVar12 = puVar20[1];
            uVar14 = puVar20[2];
            uVar18 = puVar20[3];
            uVar16 = puVar20[4];
            uVar19 = puVar20[5];
            puVar20 = puVar20 + -6;
            iVar10 = iVar10 + -1;
            *puVar13 = uVar21;
            puVar13[1] = uVar12;
            puVar13[2] = uVar14;
            puVar13[3] = uVar18;
            puVar13[4] = uVar16;
            puVar13[5] = uVar19;
            puVar13 = puVar13 + 6;
          } while (iVar10 != 0);
        }
        if (param_2 == 0) break;
        if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ab268);
        }
        FUN_015de018(param_1 + param_2 * 6,iVar4,param_3,param_4,param_5,&local_40);
        uVar8 = param_2;
        if (param_2 < 0x21) goto LAB_015de040;
      }
      if (param_4 < uVar8) goto LAB_015deb60;
      uVar21 = 0;
      puVar13 = param_3 + uVar8 * 6;
      puVar20 = param_1;
      while( true ) {
        for (puVar5 = puVar20; puVar5 < param_1 + uVar9 * 6; puVar5 = puVar5 + 6) {
          puVar13 = puVar13 + -6;
          puVar20 = puVar13;
          uVar12 = uVar21;
          if (puVar5[1] < puVar6[1] || puVar6[1] - puVar5[1] < (uint)(*puVar5 <= *puVar6)) {
            uVar12 = uVar21 + 1;
            puVar20 = param_3;
          }
          puVar20 = puVar20 + uVar21 * 6;
          uVar21 = puVar5[1];
          uVar14 = puVar5[2];
          uVar18 = puVar5[3];
          uVar16 = puVar5[4];
          uVar19 = puVar5[5];
          *puVar20 = *puVar5;
          puVar20[1] = uVar21;
          puVar20[2] = uVar14;
          puVar20[3] = uVar18;
          puVar20[4] = uVar16;
          puVar20[5] = uVar19;
          uVar21 = uVar12;
        }
        if (uVar9 == uVar8) break;
        puVar15 = param_3 + uVar21 * 6;
        uVar9 = puVar5[1];
        uVar12 = puVar5[2];
        uVar14 = puVar5[3];
        uVar18 = puVar5[4];
        uVar16 = puVar5[5];
        puVar20 = puVar5 + 6;
        uVar21 = uVar21 + 1;
        puVar13 = puVar13 + -6;
        *puVar15 = *puVar5;
        puVar15[1] = uVar9;
        puVar15[2] = uVar12;
        puVar15[3] = uVar14;
        puVar15[4] = uVar18;
        puVar15[5] = uVar16;
        uVar9 = uVar8;
      }
      FUN_016dd1aa(param_1,param_3,uVar21 * 0x18);
      param_2 = uVar8 - uVar21;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar21 * 6;
      puVar20 = param_3 + uVar8 * 6 + -6;
      puVar13 = param_1;
      uVar9 = param_2;
      do {
        uVar12 = *puVar20;
        uVar14 = puVar20[1];
        uVar18 = puVar20[2];
        uVar16 = puVar20[3];
        uVar19 = puVar20[4];
        uVar22 = puVar20[5];
        puVar20 = puVar20 + -6;
        uVar9 = uVar9 - 1;
        *puVar13 = uVar12;
        puVar13[1] = uVar14;
        puVar13[2] = uVar18;
        puVar13[3] = uVar16;
        puVar13[4] = uVar19;
        puVar13[5] = uVar22;
        puVar13 = puVar13 + 6;
      } while (uVar9 != 0);
      if (uVar8 < uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar21,uVar8,uVar8,&DAT_018ab278);
      }
      local_64 = (uint *)0x0;
    } while (0x20 < param_2);
  }
LAB_015de040:
  uVar8 = param_2 >> 1;
  if (uVar8 != 0) {
    if (param_2 < 8) {
      uVar9 = param_1[1];
      uVar21 = param_1[2];
      uVar12 = param_1[3];
      uVar14 = param_1[4];
      uVar18 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar9;
      param_3[2] = uVar21;
      param_3[3] = uVar12;
      param_3[4] = uVar14;
      param_3[5] = uVar18;
      puVar20 = param_1 + uVar8 * 6;
      puVar13 = param_3 + uVar8 * 6;
      uVar9 = puVar20[1];
      uVar21 = puVar20[2];
      uVar12 = puVar20[3];
      uVar14 = puVar20[4];
      uVar18 = puVar20[5];
      *puVar13 = *puVar20;
      puVar13[1] = uVar9;
      puVar13[2] = uVar21;
      puVar13[3] = uVar12;
      puVar13[4] = uVar14;
      puVar13[5] = uVar18;
      uVar9 = 1;
    }
    else {
      uVar12 = param_1[7];
      uVar14 = param_1[1];
      bVar24 = uVar12 - uVar14 < (uint)(*param_1 <= param_1[6]);
      uVar18 = param_1[0xd];
      uVar9 = param_1[0x13];
      uVar21 = (uint)(uVar14 < uVar12 || bVar24);
      uVar12 = (uint)(uVar14 >= uVar12 && !bVar24);
      bVar24 = (uint)(param_1[0xc] <= param_1[0x12]) <= uVar9 - uVar18;
      iVar4 = 0x48;
      iVar10 = 0x30;
      if (uVar9 <= uVar18 && bVar24) {
        iVar4 = 0x30;
      }
      puVar13 = (uint *)((int)param_1 + iVar4);
      if (uVar9 <= uVar18 && bVar24) {
        iVar10 = 0x48;
      }
      puVar5 = (uint *)((int)param_1 + iVar10);
      puVar6 = param_1 + (uVar12 | uVar12 << 1) * 2;
      puVar15 = param_1 + (uVar21 | uVar21 << 1) * 2;
      uVar21 = puVar5[1];
      uVar9 = puVar6[1];
      bVar24 = uVar21 - uVar9 < (uint)(*puVar6 <= *puVar5);
      puVar20 = puVar5;
      if (uVar9 >= uVar21 && !bVar24) {
        puVar20 = puVar15;
      }
      puVar11 = puVar15;
      puVar3 = puVar13;
      if (puVar13[1] <= puVar15[1] && (uint)(*puVar15 <= *puVar13) <= puVar13[1] - puVar15[1]) {
        puVar11 = puVar5;
        puVar3 = puVar15;
        puVar20 = puVar13;
      }
      bVar24 = (((byte)((uVar9 < uVar21 || bVar24) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0;
      if (bVar24) {
        puVar11 = puVar6;
      }
      uVar9 = *puVar11;
      uVar21 = puVar11[1];
      if (bVar24) {
        puVar6 = puVar5;
      }
      uVar14 = *puVar20;
      uVar12 = puVar20[1];
      uVar18 = puVar6[1];
      uVar16 = puVar6[2];
      uVar19 = puVar6[3];
      uVar22 = puVar6[4];
      uVar23 = puVar6[5];
      *param_3 = *puVar6;
      param_3[1] = uVar18;
      param_3[2] = uVar16;
      param_3[3] = uVar19;
      param_3[4] = uVar22;
      param_3[5] = uVar23;
      if (uVar21 < uVar12 || uVar12 - uVar21 < (uint)(uVar9 <= uVar14)) {
        puVar13 = puVar20;
      }
      else {
        puVar13 = puVar11;
        puVar11 = puVar20;
      }
      uVar9 = puVar11[1];
      uVar21 = puVar11[2];
      uVar12 = puVar11[3];
      uVar14 = puVar11[4];
      uVar18 = puVar11[5];
      param_3[6] = *puVar11;
      param_3[7] = uVar9;
      param_3[8] = uVar21;
      param_3[9] = uVar12;
      param_3[10] = uVar14;
      param_3[0xb] = uVar18;
      uVar9 = puVar13[1];
      uVar21 = puVar13[2];
      uVar12 = puVar13[3];
      uVar14 = puVar13[4];
      uVar18 = puVar13[5];
      param_3[0xc] = *puVar13;
      param_3[0xd] = uVar9;
      param_3[0xe] = uVar21;
      param_3[0xf] = uVar12;
      param_3[0x10] = uVar14;
      param_3[0x11] = uVar18;
      uVar9 = puVar3[1];
      uVar21 = puVar3[2];
      uVar12 = puVar3[3];
      uVar14 = puVar3[4];
      uVar18 = puVar3[5];
      param_3[0x12] = *puVar3;
      param_3[0x13] = uVar9;
      param_3[0x14] = uVar21;
      param_3[0x15] = uVar12;
      param_3[0x16] = uVar14;
      param_3[0x17] = uVar18;
      puVar13 = param_1 + uVar8 * 6;
      uVar12 = puVar13[1];
      uVar21 = puVar13[7];
      bVar24 = uVar21 - uVar12 < (uint)(*puVar13 <= puVar13[6]);
      uVar18 = puVar13[0xd];
      uVar9 = (uint)(uVar12 < uVar21 || bVar24);
      uVar14 = puVar13[0x13];
      uVar21 = (uint)(uVar12 >= uVar21 && !bVar24);
      iVar10 = 0x48;
      bVar24 = (uint)(puVar13[0xc] <= puVar13[0x12]) <= uVar14 - uVar18;
      iVar4 = 0x30;
      if (uVar14 <= uVar18 && bVar24) {
        iVar10 = 0x30;
      }
      puVar20 = (uint *)((int)puVar13 + iVar10);
      if (uVar14 <= uVar18 && bVar24) {
        iVar4 = 0x48;
      }
      puVar15 = (uint *)((int)puVar13 + iVar4);
      puVar5 = puVar13 + (uVar21 | uVar21 << 1) * 2;
      puVar13 = puVar13 + (uVar9 | uVar9 << 1) * 2;
      bVar24 = puVar15[1] <= puVar5[1];
      bVar2 = (uint)(*puVar5 <= *puVar15) <= puVar15[1] - puVar5[1];
      puVar6 = puVar15;
      if (bVar24 && bVar2) {
        puVar6 = puVar13;
      }
      puVar11 = puVar13;
      puVar3 = puVar20;
      if (puVar20[1] <= puVar13[1] && (uint)(*puVar13 <= *puVar20) <= puVar20[1] - puVar13[1]) {
        puVar11 = puVar15;
        puVar3 = puVar13;
        puVar6 = puVar20;
      }
      if (bVar24 && bVar2) {
        puVar11 = puVar5;
      }
      uVar9 = *puVar11;
      uVar21 = puVar11[1];
      if (bVar24 && bVar2) {
        puVar5 = puVar15;
      }
      uVar14 = *puVar6;
      uVar12 = puVar6[1];
      uVar18 = puVar5[1];
      uVar16 = puVar5[2];
      uVar19 = puVar5[3];
      uVar22 = puVar5[4];
      uVar23 = puVar5[5];
      puVar13 = param_3 + uVar8 * 6;
      *puVar13 = *puVar5;
      puVar13[1] = uVar18;
      puVar13[2] = uVar16;
      puVar13[3] = uVar19;
      puVar13[4] = uVar22;
      puVar13[5] = uVar23;
      if (uVar21 < uVar12 || uVar12 - uVar21 < (uint)(uVar9 <= uVar14)) {
        puVar20 = puVar6;
      }
      else {
        puVar20 = puVar11;
        puVar11 = puVar6;
      }
      uVar9 = puVar11[1];
      uVar21 = puVar11[2];
      uVar12 = puVar11[3];
      uVar14 = puVar11[4];
      uVar18 = puVar11[5];
      puVar13[6] = *puVar11;
      puVar13[7] = uVar9;
      puVar13[8] = uVar21;
      puVar13[9] = uVar12;
      puVar13[10] = uVar14;
      puVar13[0xb] = uVar18;
      uVar9 = puVar20[1];
      uVar21 = puVar20[2];
      uVar12 = puVar20[3];
      uVar14 = puVar20[4];
      uVar18 = puVar20[5];
      puVar13[0xc] = *puVar20;
      puVar13[0xd] = uVar9;
      puVar13[0xe] = uVar21;
      puVar13[0xf] = uVar12;
      puVar13[0x10] = uVar14;
      puVar13[0x11] = uVar18;
      uVar9 = puVar3[1];
      uVar21 = puVar3[2];
      uVar12 = puVar3[3];
      uVar14 = puVar3[4];
      uVar18 = puVar3[5];
      puVar13[0x12] = *puVar3;
      puVar13[0x13] = uVar9;
      puVar13[0x14] = uVar21;
      puVar13[0x15] = uVar12;
      puVar13[0x16] = uVar14;
      puVar13[0x17] = uVar18;
      uVar9 = 4;
    }
    if (uVar9 < uVar8) {
      local_50 = uVar9 * 0x18 + -0x30;
      local_58 = (uint *)(uVar9 * 0x18);
      uVar21 = uVar9;
      do {
        puVar20 = param_1 + uVar21 * 6;
        puVar13 = param_3 + uVar21 * 6;
        uVar12 = puVar20[1];
        uVar14 = puVar20[2];
        uVar18 = puVar20[3];
        uVar16 = puVar20[4];
        uVar19 = puVar20[5];
        *puVar13 = *puVar20;
        puVar13[1] = uVar12;
        puVar13[2] = uVar14;
        puVar13[3] = uVar18;
        puVar13[4] = uVar16;
        puVar13[5] = uVar19;
        uVar12 = param_3[uVar21 * 6];
        uVar14 = puVar13[1];
        if (uVar14 <= puVar13[-5] && (uint)(puVar13[-6] <= uVar12) <= uVar14 - puVar13[-5]) {
          local_40 = puVar20[2];
          uStack_3c = puVar20[3];
          uStack_38 = puVar20[4];
          local_34 = puVar20[5];
          puVar13 = local_58;
          iVar4 = local_50;
          do {
            puVar17 = (undefined4 *)((int)param_3 + (int)puVar13);
            *puVar17 = puVar17[-6];
            puVar17[1] = puVar17[-5];
            puVar17[2] = puVar17[-4];
            puVar17[3] = puVar17[-3];
            puVar17[4] = puVar17[-2];
            puVar17[5] = puVar17[-1];
            if (puVar13 == (uint *)0x18) {
              puVar13 = param_3;
              goto LAB_015de758;
            }
            puVar20 = (uint *)((int)param_3 + iVar4);
            puVar13 = (uint *)((int)puVar13 + -0x18);
            iVar4 = iVar4 + -0x18;
            uVar18 = puVar20[1];
          } while (uVar14 <= uVar18 && (uint)(*puVar20 <= uVar12) <= uVar14 - uVar18);
          puVar13 = (uint *)((int)param_3 + (int)puVar13);
LAB_015de758:
          *puVar13 = uVar12;
          puVar13[1] = uVar14;
          puVar13[2] = local_40;
          puVar13[3] = uStack_3c;
          puVar13[4] = uStack_38;
          puVar13[5] = local_34;
        }
        local_58 = (uint *)((int)local_58 + 0x18);
        uVar21 = uVar21 + 1;
        local_50 = local_50 + 0x18;
      } while (uVar21 != uVar8);
    }
    puVar13 = param_3 + uVar8 * 6;
    if (uVar9 < param_2 - uVar8) {
      local_58 = param_3 + uVar8 * 6 + -0xc;
      local_5c = 0x18;
      uVar21 = uVar9;
      local_60 = puVar13;
      do {
        puVar20 = param_1 + uVar8 * 6 + uVar21 * 6;
        puVar6 = puVar13 + uVar21 * 6;
        uVar12 = puVar20[1];
        uVar14 = puVar20[2];
        uVar18 = puVar20[3];
        uVar16 = puVar20[4];
        uVar19 = puVar20[5];
        *puVar6 = *puVar20;
        puVar6[1] = uVar12;
        puVar6[2] = uVar14;
        puVar6[3] = uVar18;
        puVar6[4] = uVar16;
        puVar6[5] = uVar19;
        uVar12 = puVar13[uVar21 * 6];
        uVar14 = puVar6[1];
        if (uVar14 <= puVar6[-5] && (uint)(puVar6[-6] <= uVar12) <= uVar14 - puVar6[-5]) {
          local_34 = puVar20[5];
          local_40 = puVar20[2];
          uStack_3c = puVar20[3];
          uStack_38 = puVar20[4];
          puVar20 = local_60;
          puVar6 = local_58;
          iVar4 = local_5c;
          do {
            puVar5 = puVar20 + uVar9 * 6;
            *puVar5 = puVar5[-6];
            puVar5[1] = puVar5[-5];
            puVar5[2] = puVar5[-4];
            puVar5[3] = puVar5[-3];
            puVar5[4] = puVar5[-2];
            puVar5[5] = puVar5[-1];
            if (uVar9 * 0x18 == iVar4) {
              puVar20 = puVar13;
              goto LAB_015de89c;
            }
            puVar5 = puVar6 + uVar9 * 6;
            iVar4 = iVar4 + 0x18;
            uVar18 = puVar5[1];
            puVar20 = puVar20 + -6;
            puVar6 = puVar6 + -6;
          } while (uVar14 <= uVar18 && (uint)(*puVar5 <= uVar12) <= uVar14 - uVar18);
          puVar20 = puVar20 + uVar9 * 6;
LAB_015de89c:
          *puVar20 = uVar12;
          puVar20[1] = uVar14;
          puVar20[2] = local_40;
          puVar20[3] = uStack_3c;
          puVar20[4] = uStack_38;
          puVar20[5] = local_34;
        }
        uVar21 = uVar21 + 1;
        local_5c = local_5c + -0x18;
        local_58 = local_58 + 6;
        local_60 = local_60 + 6;
      } while (uVar21 != param_2 - uVar8);
    }
    puVar6 = puVar13 + -6;
    puVar20 = param_3 + param_2 * 6 + -6;
    iVar4 = 0;
    do {
      uVar12 = param_3[1];
      uVar9 = puVar13[1];
      bVar24 = uVar9 - uVar12 < (uint)(*param_3 <= *puVar13);
      puVar15 = (uint *)((int)param_1 + iVar4);
      uVar21 = (uint)(uVar12 < uVar9 || bVar24);
      uVar9 = (uint)(uVar12 >= uVar9 && !bVar24);
      puVar5 = param_3;
      if (uVar9 != 0) {
        puVar5 = puVar13;
      }
      uVar12 = puVar5[1];
      uVar14 = puVar5[2];
      uVar18 = puVar5[3];
      uVar16 = puVar5[4];
      uVar19 = puVar5[5];
      *puVar15 = *puVar5;
      puVar15[1] = uVar12;
      puVar15[2] = uVar14;
      puVar15[3] = uVar18;
      puVar15[4] = uVar16;
      puVar15[5] = uVar19;
      bVar24 = puVar20[1] <= puVar6[1];
      bVar2 = (uint)(*puVar6 <= *puVar20) <= puVar20[1] - puVar6[1];
      puVar5 = puVar20;
      if (bVar24 && bVar2) {
        puVar5 = puVar6;
      }
      puVar15 = (uint *)((int)param_1 + ((param_2 * 0x18 + -0x18) - iVar4));
      uVar12 = puVar5[1];
      uVar14 = puVar5[2];
      uVar18 = puVar5[3];
      uVar16 = puVar5[4];
      uVar19 = puVar5[5];
      *puVar15 = *puVar5;
      puVar15[1] = uVar12;
      puVar15[2] = uVar14;
      puVar15[3] = uVar18;
      puVar15[4] = uVar16;
      puVar15[5] = uVar19;
      iVar10 = 0;
      if (!bVar24 || !bVar2) {
        iVar10 = -1;
      }
      iVar7 = 0;
      if (bVar24 && bVar2) {
        iVar7 = -1;
      }
      puVar20 = puVar20 + iVar10 * 6;
      iVar4 = iVar4 + 0x18;
      puVar6 = puVar6 + iVar7 * 6;
      param_3 = param_3 + (uVar21 | uVar21 << 1) * 2;
      puVar13 = puVar13 + (uVar9 | uVar9 << 1) * 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    puVar6 = puVar6 + 6;
    puVar5 = (uint *)0x0;
    if ((param_2 & 1) != 0) {
      param_1 = (uint *)((int)param_1 + iVar4);
      bVar24 = puVar6 <= param_3;
      puVar5 = puVar13;
      if (!bVar24) {
        puVar5 = param_3;
      }
      uVar8 = puVar5[1];
      uVar9 = puVar5[2];
      uVar21 = puVar5[3];
      uVar12 = puVar5[4];
      uVar14 = puVar5[5];
      *param_1 = *puVar5;
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar21;
      param_1[4] = uVar12;
      param_1[5] = uVar14;
      puVar5 = (uint *)((uint)!bVar24 | (uint)!bVar24 << 1);
      puVar13 = puVar13 + ((uint)bVar24 | (uint)bVar24 << 1) * 2;
      param_3 = param_3 + (int)puVar5 * 2;
    }
    if (param_3 == puVar6) {
      puVar5 = puVar20 + 6;
    }
    if (param_3 != puVar6 || puVar13 != puVar5) {
      FUN_00fb7254();
LAB_015deb60:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15deb60);
      (*pcVar1)();
    }
  }
  return;
}

