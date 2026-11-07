// FUN_006106d8 @ 006106d8 size=2828 calls_out=7 calls_in=2
// strings: 

void FUN_006106d8(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  byte in_Q;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  int local_50;
  int local_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (0x20 < param_2) {
    local_5c = param_6;
    do {
      uVar8 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_0060deec(param_1,uVar8,param_3,param_4,1);
          return;
        }
        puVar5 = param_1 + (uVar8 >> 3) * 0x2a;
        puVar6 = param_1 + (uVar8 >> 3) * 0x18;
        if (uVar8 < 0x40) {
          uVar16 = puVar5[1];
          uVar11 = puVar6[1];
          uVar13 = param_1[1];
          bVar24 = uVar13 <= uVar11 && (uint)(*puVar6 <= *param_1) <= uVar13 - uVar11;
          puVar14 = puVar5;
          if (bVar24 == (uVar11 <= uVar16 && (uint)(*puVar5 <= *puVar6) <= uVar11 - uVar16)) {
            puVar14 = puVar6;
          }
          if (bVar24 != (uVar13 <= uVar16 && (uint)(*puVar5 <= *param_1) <= uVar13 - uVar16)) {
            puVar14 = param_1;
          }
        }
        else {
          puVar14 = (uint *)FUN_0061917c(param_1,puVar6,puVar5);
        }
        param_5 = param_5 + -1;
        uVar11 = ((uint)((int)puVar14 - (int)param_1) >> 3) * -0x55555555;
        local_40 = *puVar14;
        uStack_3c = puVar14[1];
        uStack_38 = puVar14[2];
        local_34 = puVar14[3];
        uStack_30 = puVar14[4];
        uStack_2c = puVar14[5];
        if ((local_5c != (uint *)0x0) &&
           (puVar14[1] < local_5c[1] || local_5c[1] - puVar14[1] < (uint)(*puVar14 <= *local_5c)))
        break;
        if (param_4 < uVar8) goto LAB_006111cc;
        param_2 = 0;
        puVar5 = param_3 + uVar8 * 6;
        puVar6 = param_1;
        uVar13 = uVar11;
        while( true ) {
          for (; puVar6 < param_1 + uVar13 * 6; puVar6 = puVar6 + 6) {
            puVar5 = puVar5 + -6;
            puVar9 = puVar5;
            uVar16 = param_2;
            if (puVar6[1] <= puVar14[1] && (uint)(*puVar14 <= *puVar6) <= puVar6[1] - puVar14[1]) {
              uVar16 = param_2 + 1;
              puVar9 = param_3;
            }
            puVar9 = puVar9 + param_2 * 6;
            uVar17 = puVar6[1];
            uVar15 = puVar6[2];
            uVar18 = puVar6[3];
            uVar19 = puVar6[4];
            uVar22 = puVar6[5];
            *puVar9 = *puVar6;
            puVar9[1] = uVar17;
            puVar9[2] = uVar15;
            puVar9[3] = uVar18;
            puVar9[4] = uVar19;
            puVar9[5] = uVar22;
            param_2 = uVar16;
          }
          if (uVar13 == uVar8) break;
          puVar5 = puVar5 + -6;
          puVar9 = puVar5 + param_2 * 6;
          uVar13 = *puVar6;
          uVar16 = puVar6[1];
          uVar17 = puVar6[2];
          uVar15 = puVar6[3];
          uVar18 = puVar6[4];
          uVar19 = puVar6[5];
          puVar6 = puVar6 + 6;
          *puVar9 = uVar13;
          puVar9[1] = uVar16;
          puVar9[2] = uVar17;
          puVar9[3] = uVar15;
          puVar9[4] = uVar18;
          puVar9[5] = uVar19;
          uVar13 = uVar8;
        }
        FUN_016dd1aa(param_1,param_3,param_2 * 0x18);
        iVar4 = uVar8 - param_2;
        if (iVar4 != 0) {
          puVar5 = param_3 + uVar8 * 6 + -6;
          puVar6 = param_1 + param_2 * 6;
          iVar10 = iVar4;
          do {
            uVar13 = *puVar5;
            uVar16 = puVar5[1];
            uVar17 = puVar5[2];
            uVar15 = puVar5[3];
            uVar18 = puVar5[4];
            uVar19 = puVar5[5];
            puVar5 = puVar5 + -6;
            iVar10 = iVar10 + -1;
            *puVar6 = uVar13;
            puVar6[1] = uVar16;
            puVar6[2] = uVar17;
            puVar6[3] = uVar15;
            puVar6[4] = uVar18;
            puVar6[5] = uVar19;
            puVar6 = puVar6 + 6;
          } while (iVar10 != 0);
        }
        if (param_2 == 0) break;
        if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_006106d8(param_1 + param_2 * 6,iVar4,param_3,param_4,param_5,&local_40);
        uVar8 = param_2;
        if (param_2 < 0x21) goto LAB_00610700;
      }
      if (param_4 < uVar8) goto LAB_006111cc;
      uVar13 = 0;
      puVar6 = param_3 + uVar8 * 6;
      puVar5 = param_1;
      while( true ) {
        uVar16 = uVar13;
        for (puVar9 = puVar5; puVar9 < param_1 + uVar11 * 6; puVar9 = puVar9 + 6) {
          puVar6 = puVar6 + -6;
          puVar5 = puVar6;
          uVar13 = uVar16;
          if (puVar9[1] < puVar14[1] || puVar14[1] - puVar9[1] < (uint)(*puVar9 <= *puVar14)) {
            uVar13 = uVar16 + 1;
            puVar5 = param_3;
          }
          puVar5 = puVar5 + uVar16 * 6;
          uVar16 = puVar9[1];
          uVar17 = puVar9[2];
          uVar15 = puVar9[3];
          uVar18 = puVar9[4];
          uVar19 = puVar9[5];
          *puVar5 = *puVar9;
          puVar5[1] = uVar16;
          puVar5[2] = uVar17;
          puVar5[3] = uVar15;
          puVar5[4] = uVar18;
          puVar5[5] = uVar19;
          uVar16 = uVar13;
        }
        if (uVar11 == uVar8) break;
        puVar5 = puVar9 + 6;
        uVar13 = uVar16 + 1;
        puVar12 = param_3 + uVar16 * 6;
        uVar11 = puVar9[1];
        uVar16 = puVar9[2];
        uVar17 = puVar9[3];
        uVar15 = puVar9[4];
        uVar18 = puVar9[5];
        puVar6 = puVar6 + -6;
        *puVar12 = *puVar9;
        puVar12[1] = uVar11;
        puVar12[2] = uVar16;
        puVar12[3] = uVar17;
        puVar12[4] = uVar15;
        puVar12[5] = uVar18;
        uVar11 = uVar8;
      }
      FUN_016dd1aa(param_1,param_3,uVar16 * 0x18);
      param_2 = uVar8 - uVar16;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar16 * 6;
      puVar5 = param_3 + uVar8 * 6 + -6;
      puVar6 = param_1;
      uVar11 = param_2;
      do {
        uVar13 = *puVar5;
        uVar17 = puVar5[1];
        uVar15 = puVar5[2];
        uVar18 = puVar5[3];
        uVar19 = puVar5[4];
        uVar22 = puVar5[5];
        puVar5 = puVar5 + -6;
        uVar11 = uVar11 - 1;
        *puVar6 = uVar13;
        puVar6[1] = uVar17;
        puVar6[2] = uVar15;
        puVar6[3] = uVar18;
        puVar6[4] = uVar19;
        puVar6[5] = uVar22;
        puVar6 = puVar6 + 6;
      } while (uVar11 != 0);
      if (uVar8 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar16,uVar8,uVar8,&DAT_018af348);
      }
      local_5c = (uint *)0x0;
    } while (0x20 < param_2);
  }
LAB_00610700:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar8 = param_2 >> 1;
    if (param_2 < 8) {
      uVar11 = param_1[1];
      uVar13 = param_1[2];
      uVar16 = param_1[3];
      uVar17 = param_1[4];
      uVar15 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar11;
      param_3[2] = uVar13;
      param_3[3] = uVar16;
      param_3[4] = uVar17;
      param_3[5] = uVar15;
      puVar5 = param_1 + uVar8 * 6;
      puVar6 = param_3 + uVar8 * 6;
      uVar11 = puVar5[1];
      uVar13 = puVar5[2];
      uVar16 = puVar5[3];
      uVar17 = puVar5[4];
      uVar15 = puVar5[5];
      *puVar6 = *puVar5;
      puVar6[1] = uVar11;
      puVar6[2] = uVar13;
      puVar6[3] = uVar16;
      puVar6[4] = uVar17;
      puVar6[5] = uVar15;
      uVar11 = 1;
    }
    else {
      uVar16 = param_1[1];
      uVar13 = param_1[7];
      bVar24 = uVar13 - uVar16 < (uint)(*param_1 <= param_1[6]);
      uVar11 = (uint)(uVar16 < uVar13 || bVar24);
      uVar13 = (uint)(uVar16 >= uVar13 && !bVar24);
      iVar10 = 0x30;
      iVar4 = 0x48;
      if (param_1[0x13] <= param_1[0xd] &&
          (uint)(param_1[0xc] <= param_1[0x12]) <= param_1[0x13] - param_1[0xd]) {
        iVar4 = 0x30;
        iVar10 = 0x48;
      }
      puVar14 = (uint *)((int)param_1 + iVar4);
      puVar5 = (uint *)((int)param_1 + iVar10);
      puVar9 = param_1 + (uVar13 | uVar13 << 1) * 2;
      puVar12 = param_1 + (uVar11 | uVar11 << 1) * 2;
      uVar13 = puVar5[1];
      uVar11 = puVar9[1];
      bVar24 = uVar13 - uVar11 < (uint)(*puVar9 <= *puVar5);
      puVar6 = puVar5;
      if (uVar11 >= uVar13 && !bVar24) {
        puVar6 = puVar12;
      }
      puVar21 = puVar12;
      puVar3 = puVar14;
      if (puVar14[1] <= puVar12[1] && (uint)(*puVar12 <= *puVar14) <= puVar14[1] - puVar12[1]) {
        puVar21 = puVar5;
        puVar3 = puVar12;
        puVar6 = puVar14;
      }
      uVar16 = *puVar6;
      uVar17 = puVar6[1];
      puVar14 = puVar9;
      if ((((byte)((uVar11 < uVar13 || bVar24) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0) {
        puVar14 = puVar5;
        puVar21 = puVar9;
      }
      uVar15 = *puVar21;
      uVar11 = puVar21[1];
      uVar13 = puVar14[1];
      uVar18 = puVar14[2];
      uVar19 = puVar14[3];
      uVar22 = puVar14[4];
      uVar23 = puVar14[5];
      *param_3 = *puVar14;
      param_3[1] = uVar13;
      param_3[2] = uVar18;
      param_3[3] = uVar19;
      param_3[4] = uVar22;
      param_3[5] = uVar23;
      if (uVar11 < uVar17 || uVar17 - uVar11 < (uint)(uVar15 <= uVar16)) {
        puVar5 = puVar6;
      }
      else {
        puVar5 = puVar21;
        puVar21 = puVar6;
      }
      uVar11 = puVar21[1];
      uVar13 = puVar21[2];
      uVar16 = puVar21[3];
      uVar17 = puVar21[4];
      uVar15 = puVar21[5];
      param_3[6] = *puVar21;
      param_3[7] = uVar11;
      param_3[8] = uVar13;
      param_3[9] = uVar16;
      param_3[10] = uVar17;
      param_3[0xb] = uVar15;
      uVar11 = puVar5[1];
      uVar13 = puVar5[2];
      uVar16 = puVar5[3];
      uVar17 = puVar5[4];
      uVar15 = puVar5[5];
      param_3[0xc] = *puVar5;
      param_3[0xd] = uVar11;
      param_3[0xe] = uVar13;
      param_3[0xf] = uVar16;
      param_3[0x10] = uVar17;
      param_3[0x11] = uVar15;
      uVar11 = puVar3[1];
      uVar13 = puVar3[2];
      uVar16 = puVar3[3];
      uVar17 = puVar3[4];
      uVar15 = puVar3[5];
      param_3[0x12] = *puVar3;
      param_3[0x13] = uVar11;
      param_3[0x14] = uVar13;
      param_3[0x15] = uVar16;
      param_3[0x16] = uVar17;
      param_3[0x17] = uVar15;
      puVar6 = param_1 + uVar8 * 6;
      uVar11 = puVar6[1];
      uVar15 = puVar6[7];
      bVar24 = uVar15 - uVar11 < (uint)(*puVar6 <= puVar6[6]);
      uVar17 = puVar6[0xd];
      uVar13 = (uint)(uVar11 < uVar15 || bVar24);
      uVar16 = puVar6[0x13];
      uVar11 = (uint)(uVar11 >= uVar15 && !bVar24);
      iVar10 = 0x48;
      bVar24 = (uint)(puVar6[0xc] <= puVar6[0x12]) <= uVar16 - uVar17;
      iVar4 = 0x30;
      if (uVar16 <= uVar17 && bVar24) {
        iVar10 = 0x30;
      }
      puVar5 = (uint *)((int)puVar6 + iVar10);
      if (uVar16 <= uVar17 && bVar24) {
        iVar4 = 0x48;
      }
      puVar12 = (uint *)((int)puVar6 + iVar4);
      puVar9 = puVar6 + (uVar11 | uVar11 << 1) * 2;
      puVar6 = puVar6 + (uVar13 | uVar13 << 1) * 2;
      bVar24 = puVar12[1] <= puVar9[1];
      bVar2 = (uint)(*puVar9 <= *puVar12) <= puVar12[1] - puVar9[1];
      puVar14 = puVar12;
      if (bVar24 && bVar2) {
        puVar14 = puVar6;
      }
      puVar21 = puVar6;
      puVar3 = puVar5;
      if (puVar5[1] <= puVar6[1] && (uint)(*puVar6 <= *puVar5) <= puVar5[1] - puVar6[1]) {
        puVar21 = puVar12;
        puVar3 = puVar6;
        puVar14 = puVar5;
      }
      uVar11 = *puVar14;
      if (bVar24 && bVar2) {
        puVar21 = puVar9;
      }
      uVar13 = puVar14[1];
      if (bVar24 && bVar2) {
        puVar9 = puVar12;
      }
      puVar6 = param_3 + uVar8 * 6;
      uVar15 = *puVar21;
      uVar16 = puVar21[1];
      uVar17 = puVar9[1];
      uVar18 = puVar9[2];
      uVar19 = puVar9[3];
      uVar22 = puVar9[4];
      uVar23 = puVar9[5];
      *puVar6 = *puVar9;
      puVar6[1] = uVar17;
      puVar6[2] = uVar18;
      puVar6[3] = uVar19;
      puVar6[4] = uVar22;
      puVar6[5] = uVar23;
      if (uVar16 < uVar13 || uVar13 - uVar16 < (uint)(uVar15 <= uVar11)) {
        puVar5 = puVar14;
      }
      else {
        puVar5 = puVar21;
        puVar21 = puVar14;
      }
      uVar11 = puVar21[1];
      uVar13 = puVar21[2];
      uVar16 = puVar21[3];
      uVar17 = puVar21[4];
      uVar15 = puVar21[5];
      puVar6[6] = *puVar21;
      puVar6[7] = uVar11;
      puVar6[8] = uVar13;
      puVar6[9] = uVar16;
      puVar6[10] = uVar17;
      puVar6[0xb] = uVar15;
      uVar11 = puVar5[1];
      uVar13 = puVar5[2];
      uVar16 = puVar5[3];
      uVar17 = puVar5[4];
      uVar15 = puVar5[5];
      puVar6[0xc] = *puVar5;
      puVar6[0xd] = uVar11;
      puVar6[0xe] = uVar13;
      puVar6[0xf] = uVar16;
      puVar6[0x10] = uVar17;
      puVar6[0x11] = uVar15;
      uVar11 = puVar3[1];
      uVar13 = puVar3[2];
      uVar16 = puVar3[3];
      uVar17 = puVar3[4];
      uVar15 = puVar3[5];
      puVar6[0x12] = *puVar3;
      puVar6[0x13] = uVar11;
      puVar6[0x14] = uVar13;
      puVar6[0x15] = uVar16;
      puVar6[0x16] = uVar17;
      puVar6[0x17] = uVar15;
      uVar11 = 4;
    }
    if (uVar11 < uVar8) {
      local_44 = uVar11 * 0x18 + -0x30;
      local_50 = uVar11 * 0x18;
      uVar13 = uVar11;
      do {
        puVar5 = param_1 + uVar13 * 6;
        puVar6 = param_3 + uVar13 * 6;
        uVar16 = puVar5[1];
        uVar17 = puVar5[2];
        uVar15 = puVar5[3];
        uVar18 = puVar5[4];
        uVar19 = puVar5[5];
        *puVar6 = *puVar5;
        puVar6[1] = uVar16;
        puVar6[2] = uVar17;
        puVar6[3] = uVar15;
        puVar6[4] = uVar18;
        puVar6[5] = uVar19;
        uVar17 = puVar6[1];
        uVar16 = param_3[uVar13 * 6];
        if (uVar17 <= puVar6[-5] && (uint)(puVar6[-6] <= uVar16) <= uVar17 - puVar6[-5]) {
          local_40 = puVar5[2];
          uStack_3c = puVar5[3];
          uStack_38 = puVar5[4];
          local_34 = puVar5[5];
          iVar4 = local_50;
          iVar10 = local_44;
          do {
            puVar20 = (undefined4 *)((int)param_3 + iVar4);
            *puVar20 = puVar20[-6];
            puVar20[1] = puVar20[-5];
            puVar20[2] = puVar20[-4];
            puVar20[3] = puVar20[-3];
            puVar20[4] = puVar20[-2];
            puVar20[5] = puVar20[-1];
            puVar6 = param_3;
            if (iVar4 == 0x18) goto LAB_00610e00;
            puVar6 = (uint *)((int)param_3 + iVar10);
            iVar10 = iVar10 + -0x18;
            iVar4 = iVar4 + -0x18;
            uVar15 = puVar6[1];
          } while (uVar17 <= uVar15 && (uint)(*puVar6 <= uVar16) <= uVar17 - uVar15);
          puVar6 = (uint *)((int)param_3 + iVar4);
LAB_00610e00:
          *puVar6 = uVar16;
          puVar6[1] = uVar17;
          puVar6[2] = local_40;
          puVar6[3] = uStack_3c;
          puVar6[4] = uStack_38;
          puVar6[5] = local_34;
        }
        local_44 = local_44 + 0x18;
        uVar13 = uVar13 + 1;
        local_50 = local_50 + 0x18;
      } while (uVar13 != uVar8);
    }
    puVar6 = param_3 + uVar8 * 6;
    if (uVar11 < param_2 - uVar8) {
      local_58 = param_3 + uVar8 * 6 + -0xc;
      local_5c = (uint *)0x18;
      uVar13 = uVar11;
      local_60 = puVar6;
      do {
        puVar5 = puVar6 + uVar13 * 6;
        puVar14 = param_1 + uVar8 * 6 + uVar13 * 6;
        uVar16 = puVar14[1];
        uVar17 = puVar14[2];
        uVar15 = puVar14[3];
        uVar18 = puVar14[4];
        uVar19 = puVar14[5];
        *puVar5 = *puVar14;
        puVar5[1] = uVar16;
        puVar5[2] = uVar17;
        puVar5[3] = uVar15;
        puVar5[4] = uVar18;
        puVar5[5] = uVar19;
        uVar16 = puVar6[uVar13 * 6];
        uVar17 = puVar5[1];
        if (uVar17 <= puVar5[-5] && (uint)(puVar5[-6] <= uVar16) <= uVar17 - puVar5[-5]) {
          local_34 = puVar14[5];
          local_40 = puVar14[2];
          uStack_3c = puVar14[3];
          uStack_38 = puVar14[4];
          puVar5 = local_5c;
          puVar14 = local_60;
          puVar9 = local_58;
          do {
            puVar12 = puVar14 + uVar11 * 6;
            *puVar12 = puVar12[-6];
            puVar12[1] = puVar12[-5];
            puVar12[2] = puVar12[-4];
            puVar12[3] = puVar12[-3];
            puVar12[4] = puVar12[-2];
            puVar12[5] = puVar12[-1];
            if ((uint *)(uVar11 * 0x18) == puVar5) {
              puVar5 = puVar6;
              goto LAB_00610f30;
            }
            puVar12 = puVar9 + uVar11 * 6;
            puVar5 = (uint *)((int)puVar5 + 0x18);
            puVar14 = puVar14 + -6;
            uVar15 = puVar12[1];
            puVar9 = puVar9 + -6;
          } while (uVar17 <= uVar15 && (uint)(*puVar12 <= uVar16) <= uVar17 - uVar15);
          puVar5 = puVar14 + uVar11 * 6;
LAB_00610f30:
          *puVar5 = uVar16;
          puVar5[1] = uVar17;
          puVar5[2] = local_40;
          puVar5[3] = uStack_3c;
          puVar5[4] = uStack_38;
          puVar5[5] = local_34;
        }
        local_5c = (uint *)((int)local_5c + -0x18);
        uVar13 = uVar13 + 1;
        local_58 = local_58 + 6;
        local_60 = local_60 + 6;
      } while (uVar13 != param_2 - uVar8);
    }
    puVar14 = puVar6 + -6;
    iVar4 = 0;
    puVar5 = param_3 + param_2 * 6 + -6;
    do {
      uVar16 = param_3[1];
      uVar11 = puVar6[1];
      bVar24 = uVar11 - uVar16 < (uint)(*param_3 <= *puVar6);
      uVar13 = (uint)(uVar16 < uVar11 || bVar24);
      uVar11 = (uint)(uVar16 >= uVar11 && !bVar24);
      puVar9 = param_3;
      if (uVar11 != 0) {
        puVar9 = puVar6;
      }
      puVar12 = (uint *)((int)param_1 + iVar4);
      uVar16 = puVar9[1];
      uVar17 = puVar9[2];
      uVar15 = puVar9[3];
      uVar18 = puVar9[4];
      uVar19 = puVar9[5];
      *puVar12 = *puVar9;
      puVar12[1] = uVar16;
      puVar12[2] = uVar17;
      puVar12[3] = uVar15;
      puVar12[4] = uVar18;
      puVar12[5] = uVar19;
      bVar24 = puVar5[1] <= puVar14[1];
      bVar2 = (uint)(*puVar14 <= *puVar5) <= puVar5[1] - puVar14[1];
      puVar12 = (uint *)((int)param_1 + ((param_2 * 0x18 + -0x18) - iVar4));
      puVar9 = puVar5;
      if (bVar24 && bVar2) {
        puVar9 = puVar14;
      }
      iVar4 = iVar4 + 0x18;
      uVar16 = puVar9[1];
      uVar17 = puVar9[2];
      uVar15 = puVar9[3];
      uVar18 = puVar9[4];
      uVar19 = puVar9[5];
      *puVar12 = *puVar9;
      puVar12[1] = uVar16;
      puVar12[2] = uVar17;
      puVar12[3] = uVar15;
      puVar12[4] = uVar18;
      puVar12[5] = uVar19;
      iVar10 = 0;
      if (!bVar24 || !bVar2) {
        iVar10 = -1;
      }
      iVar7 = 0;
      if (bVar24 && bVar2) {
        iVar7 = -1;
      }
      puVar5 = puVar5 + iVar10 * 6;
      puVar14 = puVar14 + iVar7 * 6;
      param_3 = param_3 + (uVar13 | uVar13 << 1) * 2;
      puVar6 = puVar6 + (uVar11 | uVar11 << 1) * 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    puVar14 = puVar14 + 6;
    puVar9 = (uint *)0x0;
    if ((param_2 & 1) != 0) {
      bVar24 = puVar14 <= param_3;
      puVar9 = puVar6;
      if (!bVar24) {
        puVar9 = param_3;
      }
      param_1 = (uint *)((int)param_1 + iVar4);
      uVar8 = puVar9[1];
      uVar11 = puVar9[2];
      uVar13 = puVar9[3];
      uVar16 = puVar9[4];
      uVar17 = puVar9[5];
      *param_1 = *puVar9;
      param_1[1] = uVar8;
      param_1[2] = uVar11;
      param_1[3] = uVar13;
      param_1[4] = uVar16;
      param_1[5] = uVar17;
      puVar9 = (uint *)((uint)!bVar24 | (uint)!bVar24 << 1);
      puVar6 = puVar6 + ((uint)bVar24 | (uint)bVar24 << 1) * 2;
      param_3 = param_3 + (int)puVar9 * 2;
    }
    if (param_3 == puVar14) {
      puVar9 = puVar5 + 6;
    }
    if (param_3 == puVar14 && puVar6 == puVar9) {
      return;
    }
    FUN_00fb7254();
  }
LAB_006111cc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x6111cc);
  (*pcVar1)();
}

