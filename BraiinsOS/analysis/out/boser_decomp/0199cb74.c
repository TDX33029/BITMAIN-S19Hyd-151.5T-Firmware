// FUN_0199cb74 @ 0199cb74 size=2944 calls_out=7 calls_in=2
// strings: 

void FUN_0199cb74(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  bool bVar24;
  byte in_Q;
  undefined4 *local_68;
  int local_64;
  undefined4 *local_60;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0x20 < param_2) {
    do {
      uVar8 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_0199c528(param_1,uVar8,param_3,param_4,1);
          return;
        }
        puVar6 = param_1 + (uVar8 >> 3) * 0x20;
        puVar7 = param_1 + ((uVar8 >> 3) * 8 - (uVar8 >> 3)) * 8;
        if (uVar8 < 0x40) {
          uVar10 = puVar7[3];
          uVar13 = puVar6[3];
          uVar17 = param_1[3];
          bVar24 = uVar17 <= uVar13 &&
                   (uint)((uint)puVar6[2] <= (uint)param_1[2]) <= uVar17 - uVar13;
          if (bVar24 != (uVar13 <= uVar10 &&
                        (uint)((uint)puVar7[2] <= (uint)puVar6[2]) <= uVar13 - uVar10)) {
            puVar6 = puVar7;
          }
          if (bVar24 != (uVar17 <= uVar10 &&
                        (uint)((uint)puVar7[2] <= (uint)param_1[2]) <= uVar17 - uVar10)) {
            puVar6 = param_1;
          }
        }
        else {
          puVar6 = (undefined4 *)FUN_0199d71c(param_1);
        }
        param_5 = param_5 + -1;
        local_48 = *puVar6;
        uStack_44 = puVar6[1];
        uStack_40 = puVar6[2];
        uStack_3c = puVar6[3];
        local_38 = puVar6[4];
        uStack_34 = puVar6[5];
        uStack_30 = puVar6[6];
        uStack_2c = puVar6[7];
        uVar10 = (uint)((int)puVar6 - (int)param_1) >> 5;
        if ((param_6 != 0) &&
           ((uint)puVar6[3] < *(uint *)(param_6 + 0xc) ||
            *(uint *)(param_6 + 0xc) - puVar6[3] < (uint)((uint)puVar6[2] <= *(uint *)(param_6 + 8))
           )) break;
        if (param_4 < uVar8) goto LAB_0199d6d8;
        param_2 = 0;
        puVar6 = param_3 + uVar8 * 8;
        puVar7 = param_1;
        uVar13 = uVar10;
        while( true ) {
          for (puVar5 = puVar7; puVar5 < param_1 + uVar13 * 8; puVar5 = puVar5 + 8) {
            uVar21 = param_1[uVar10 * 8 + 3];
            puVar6 = puVar6 + -8;
            uVar17 = puVar5[3];
            bVar24 = (uint)((uint)param_1[uVar10 * 8 + 2] <= (uint)puVar5[2]) <= uVar17 - uVar21;
            uVar11 = puVar5[1];
            uVar20 = puVar5[2];
            uVar23 = puVar5[3];
            puVar7 = puVar6;
            if (uVar17 <= uVar21 && bVar24) {
              puVar7 = param_3;
            }
            puVar7 = puVar7 + param_2 * 8;
            if (uVar17 <= uVar21 && bVar24) {
              param_2 = param_2 + 1;
            }
            *puVar7 = *puVar5;
            puVar7[1] = uVar11;
            puVar7[2] = uVar20;
            puVar7[3] = uVar23;
            uVar11 = puVar5[5];
            uVar20 = puVar5[6];
            uVar23 = puVar5[7];
            puVar7[4] = puVar5[4];
            puVar7[5] = uVar11;
            puVar7[6] = uVar20;
            puVar7[7] = uVar23;
          }
          if (uVar13 == uVar8) break;
          puVar6 = puVar6 + -8;
          uVar11 = puVar5[1];
          uVar20 = puVar5[2];
          uVar23 = puVar5[3];
          puVar9 = puVar6 + param_2 * 8;
          puVar7 = puVar5 + 8;
          *puVar9 = *puVar5;
          puVar9[1] = uVar11;
          puVar9[2] = uVar20;
          puVar9[3] = uVar23;
          uVar11 = puVar5[5];
          uVar20 = puVar5[6];
          uVar23 = puVar5[7];
          puVar9[4] = puVar5[4];
          puVar9[5] = uVar11;
          puVar9[6] = uVar20;
          puVar9[7] = uVar23;
          uVar13 = uVar8;
        }
        FUN_01bed4e2(param_1,param_3,param_2 << 5);
        iVar19 = uVar8 - param_2;
        if (iVar19 != 0) {
          puVar6 = param_1 + param_2 * 8;
          iVar16 = iVar19;
          puVar7 = param_3 + uVar8 * 8 + -8;
          do {
            uVar11 = puVar7[1];
            uVar20 = puVar7[2];
            uVar23 = puVar7[3];
            iVar16 = iVar16 + -1;
            *puVar6 = *puVar7;
            puVar6[1] = uVar11;
            puVar6[2] = uVar20;
            puVar6[3] = uVar23;
            uVar11 = puVar7[5];
            uVar20 = puVar7[6];
            uVar23 = puVar7[7];
            puVar6[4] = puVar7[4];
            puVar6[5] = uVar11;
            puVar6[6] = uVar20;
            puVar6[7] = uVar23;
            puVar6 = puVar6 + 8;
            puVar7 = puVar7 + -8;
          } while (iVar16 != 0);
        }
        if (param_2 == 0) break;
        if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d27e64);
        }
        FUN_0199cb74(param_1 + param_2 * 8,iVar19,param_3,param_4,param_5,&local_48);
        uVar8 = param_2;
        if (param_2 < 0x21) goto LAB_0199cb98;
      }
      if (param_4 < uVar8) goto LAB_0199d6d8;
      uVar13 = 0;
      puVar6 = param_3 + uVar8 * 8;
      puVar7 = param_1;
      uVar17 = uVar10;
      while( true ) {
        puVar5 = puVar7;
        while (puVar5 < param_1 + uVar17 * 8) {
          uVar21 = puVar5[3];
          puVar6 = puVar6 + -8;
          uVar12 = param_1[uVar10 * 8 + 3];
          puVar9 = puVar5 + 8;
          bVar24 = uVar12 - uVar21 < (uint)((uint)puVar5[2] <= (uint)param_1[uVar10 * 8 + 2]);
          puVar7 = puVar6;
          if (uVar21 < uVar12 || bVar24) {
            puVar7 = param_3;
          }
          puVar7 = puVar7 + uVar13 * 8;
          uVar11 = puVar5[1];
          uVar20 = puVar5[2];
          uVar23 = puVar5[3];
          *puVar7 = *puVar5;
          puVar7[1] = uVar11;
          puVar7[2] = uVar20;
          puVar7[3] = uVar23;
          uVar11 = puVar5[5];
          uVar20 = puVar5[6];
          uVar23 = puVar5[7];
          puVar7[4] = puVar5[4];
          puVar7[5] = uVar11;
          puVar7[6] = uVar20;
          puVar7[7] = uVar23;
          puVar5 = puVar9;
          if (uVar21 < uVar12 || bVar24) {
            uVar13 = uVar13 + 1;
          }
        }
        if (uVar17 == uVar8) break;
        puVar9 = param_3 + uVar13 * 8;
        uVar11 = puVar5[1];
        uVar20 = puVar5[2];
        uVar23 = puVar5[3];
        puVar7 = puVar5 + 8;
        puVar6 = puVar6 + -8;
        *puVar9 = *puVar5;
        puVar9[1] = uVar11;
        puVar9[2] = uVar20;
        puVar9[3] = uVar23;
        uVar11 = puVar5[5];
        uVar20 = puVar5[6];
        uVar23 = puVar5[7];
        puVar9[4] = puVar5[4];
        puVar9[5] = uVar11;
        puVar9[6] = uVar20;
        puVar9[7] = uVar23;
        uVar13 = uVar13 + 1;
        uVar17 = uVar8;
      }
      FUN_01bed4e2(param_1,param_3,uVar13 << 5);
      param_2 = uVar8 - uVar13;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar13 * 8;
      puVar6 = param_3 + uVar8 * 8 + -8;
      puVar7 = param_1;
      uVar10 = param_2;
      do {
        uVar11 = puVar6[1];
        uVar20 = puVar6[2];
        uVar23 = puVar6[3];
        uVar10 = uVar10 - 1;
        *puVar7 = *puVar6;
        puVar7[1] = uVar11;
        puVar7[2] = uVar20;
        puVar7[3] = uVar23;
        uVar11 = puVar6[5];
        uVar20 = puVar6[6];
        uVar23 = puVar6[7];
        puVar7[4] = puVar6[4];
        puVar7[5] = uVar11;
        puVar7[6] = uVar20;
        puVar7[7] = uVar23;
        puVar6 = puVar6 + -8;
        puVar7 = puVar7 + 8;
      } while (uVar10 != 0);
      if (uVar8 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar13,uVar8,uVar8,&DAT_01d27e74);
      }
      param_6 = 0;
    } while (0x20 < param_2);
  }
LAB_0199cb98:
  uVar8 = param_2 >> 1;
  if (uVar8 != 0) {
    if (param_2 < 8) {
      uVar11 = param_1[1];
      uVar20 = param_1[2];
      uVar23 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = uVar11;
      param_3[2] = uVar20;
      param_3[3] = uVar23;
      uVar11 = param_1[5];
      uVar20 = param_1[6];
      uVar23 = param_1[7];
      puVar6 = param_1 + uVar8 * 8;
      param_3[4] = param_1[4];
      param_3[5] = uVar11;
      param_3[6] = uVar20;
      param_3[7] = uVar23;
      puVar7 = param_3 + uVar8 * 8;
      uVar11 = puVar6[1];
      uVar20 = puVar6[2];
      uVar23 = puVar6[3];
      *puVar7 = *puVar6;
      puVar7[1] = uVar11;
      puVar7[2] = uVar20;
      puVar7[3] = uVar23;
      uVar11 = puVar6[5];
      uVar20 = puVar6[6];
      uVar23 = puVar6[7];
      uVar10 = 1;
      puVar7[4] = puVar6[4];
      puVar7[5] = uVar11;
      puVar7[6] = uVar20;
      puVar7[7] = uVar23;
    }
    else {
      uVar13 = param_1[3];
      uVar17 = param_1[0xb];
      uVar21 = param_1[0x13];
      uVar10 = param_1[0x1b];
      bVar24 = uVar17 - uVar13 < (uint)((uint)param_1[2] <= (uint)param_1[10]);
      puVar6 = param_1 + (uint)(uVar13 < uVar17 || bVar24) * 8;
      puVar7 = param_1 + (uint)(uVar13 >= uVar17 && !bVar24) * 8;
      bVar24 = (uint)((uint)param_1[0x12] <= (uint)param_1[0x1a]) <= uVar10 - uVar21;
      iVar19 = 0x40;
      if (uVar10 <= uVar21 && bVar24) {
        iVar19 = 0x60;
      }
      puVar5 = (undefined4 *)((int)param_1 + iVar19);
      iVar19 = 0x60;
      if (uVar10 <= uVar21 && bVar24) {
        iVar19 = 0x40;
      }
      puVar22 = (undefined4 *)((int)param_1 + iVar19);
      uVar13 = puVar5[3];
      uVar10 = puVar7[3];
      bVar24 = uVar13 - uVar10 < (uint)((uint)puVar7[2] <= (uint)puVar5[2]);
      puVar9 = puVar5;
      if (uVar10 >= uVar13 && !bVar24) {
        puVar9 = puVar6;
      }
      puVar14 = puVar6;
      puVar4 = puVar22;
      if ((uint)puVar22[3] <= (uint)puVar6[3] &&
          (uint)((uint)puVar6[2] <= (uint)puVar22[2]) <= (uint)(puVar22[3] - puVar6[3])) {
        puVar14 = puVar5;
        puVar4 = puVar6;
        puVar9 = puVar22;
      }
      puVar6 = puVar7;
      if ((((byte)((uVar10 < uVar13 || bVar24) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0) {
        puVar6 = puVar5;
        puVar14 = puVar7;
      }
      uVar13 = puVar14[3];
      uVar21 = puVar14[2];
      uVar17 = puVar9[2];
      uVar10 = puVar9[3];
      uVar11 = puVar6[1];
      uVar20 = puVar6[2];
      uVar23 = puVar6[3];
      *param_3 = *puVar6;
      param_3[1] = uVar11;
      param_3[2] = uVar20;
      param_3[3] = uVar23;
      uVar11 = puVar6[5];
      uVar20 = puVar6[6];
      uVar23 = puVar6[7];
      param_3[4] = puVar6[4];
      param_3[5] = uVar11;
      param_3[6] = uVar20;
      param_3[7] = uVar23;
      if (uVar13 < uVar10 || uVar10 - uVar13 < (uint)(uVar21 <= uVar17)) {
        puVar6 = puVar14;
        puVar14 = puVar9;
      }
      else {
        puVar6 = puVar9;
      }
      uVar11 = puVar6[1];
      uVar20 = puVar6[2];
      uVar23 = puVar6[3];
      param_3[8] = *puVar6;
      param_3[9] = uVar11;
      param_3[10] = uVar20;
      param_3[0xb] = uVar23;
      uVar11 = puVar6[5];
      uVar20 = puVar6[6];
      uVar23 = puVar6[7];
      param_3[0xc] = puVar6[4];
      param_3[0xd] = uVar11;
      param_3[0xe] = uVar20;
      param_3[0xf] = uVar23;
      uVar11 = puVar14[1];
      uVar20 = puVar14[2];
      uVar23 = puVar14[3];
      param_3[0x10] = *puVar14;
      param_3[0x11] = uVar11;
      param_3[0x12] = uVar20;
      param_3[0x13] = uVar23;
      uVar11 = puVar14[5];
      uVar20 = puVar14[6];
      uVar23 = puVar14[7];
      param_3[0x14] = puVar14[4];
      param_3[0x15] = uVar11;
      param_3[0x16] = uVar20;
      param_3[0x17] = uVar23;
      uVar11 = puVar4[1];
      uVar20 = puVar4[2];
      uVar23 = puVar4[3];
      param_3[0x18] = *puVar4;
      param_3[0x19] = uVar11;
      param_3[0x1a] = uVar20;
      param_3[0x1b] = uVar23;
      uVar11 = puVar4[5];
      uVar20 = puVar4[6];
      uVar23 = puVar4[7];
      param_3[0x1c] = puVar4[4];
      param_3[0x1d] = uVar11;
      param_3[0x1e] = uVar20;
      param_3[0x1f] = uVar23;
      uVar13 = param_1[uVar8 * 8 + 3];
      uVar17 = param_1[uVar8 * 8 + 0xb];
      uVar21 = param_1[uVar8 * 8 + 0x1b];
      bVar24 = uVar17 - uVar13 <
               (uint)((uint)param_1[uVar8 * 8 + 2] <= (uint)param_1[uVar8 * 8 + 10]);
      uVar10 = param_1[uVar8 * 8 + 0x13];
      puVar7 = param_1 + uVar8 * 8 + (uint)(uVar13 < uVar17 || bVar24) * 8;
      bVar2 = (uint)((uint)param_1[uVar8 * 8 + 0x12] <= (uint)param_1[uVar8 * 8 + 0x1a]) <=
              uVar21 - uVar10;
      puVar6 = param_1 + uVar8 * 8 + (uint)(uVar13 >= uVar17 && !bVar24) * 8;
      iVar19 = 0x40;
      iVar16 = 0x60;
      if (uVar21 <= uVar10 && bVar2) {
        iVar19 = 0x60;
      }
      puVar5 = (undefined4 *)((int)param_1 + iVar19 + uVar8 * 0x20);
      if (uVar21 <= uVar10 && bVar2) {
        iVar16 = 0x40;
      }
      puVar22 = (undefined4 *)((int)param_1 + iVar16 + uVar8 * 0x20);
      bVar24 = (uint)puVar5[3] <= (uint)puVar6[3];
      bVar2 = (uint)((uint)puVar6[2] <= (uint)puVar5[2]) <= (uint)(puVar5[3] - puVar6[3]);
      puVar9 = puVar5;
      if (bVar24 && bVar2) {
        puVar9 = puVar7;
      }
      puVar14 = puVar7;
      puVar4 = puVar22;
      if ((uint)puVar22[3] <= (uint)puVar7[3] &&
          (uint)((uint)puVar7[2] <= (uint)puVar22[2]) <= (uint)(puVar22[3] - puVar7[3])) {
        puVar14 = puVar5;
        puVar4 = puVar7;
        puVar9 = puVar22;
      }
      if (bVar24 && bVar2) {
        puVar14 = puVar6;
      }
      uVar10 = puVar14[3];
      if (bVar24 && bVar2) {
        puVar6 = puVar5;
      }
      uVar17 = puVar14[2];
      uVar13 = puVar9[3];
      uVar21 = puVar9[2];
      uVar11 = puVar6[1];
      uVar20 = puVar6[2];
      uVar23 = puVar6[3];
      puVar7 = param_3 + uVar8 * 8;
      *puVar7 = *puVar6;
      puVar7[1] = uVar11;
      puVar7[2] = uVar20;
      puVar7[3] = uVar23;
      uVar11 = puVar6[5];
      uVar20 = puVar6[6];
      uVar23 = puVar6[7];
      puVar7[4] = puVar6[4];
      puVar7[5] = uVar11;
      puVar7[6] = uVar20;
      puVar7[7] = uVar23;
      if (uVar10 < uVar13 || uVar13 - uVar10 < (uint)(uVar17 <= uVar21)) {
        puVar6 = puVar14;
        puVar14 = puVar9;
      }
      else {
        puVar6 = puVar9;
      }
      uVar11 = puVar6[1];
      uVar20 = puVar6[2];
      uVar23 = puVar6[3];
      puVar7[8] = *puVar6;
      puVar7[9] = uVar11;
      puVar7[10] = uVar20;
      puVar7[0xb] = uVar23;
      uVar11 = puVar6[5];
      uVar20 = puVar6[6];
      uVar23 = puVar6[7];
      puVar7[0xc] = puVar6[4];
      puVar7[0xd] = uVar11;
      puVar7[0xe] = uVar20;
      puVar7[0xf] = uVar23;
      uVar11 = puVar14[1];
      uVar20 = puVar14[2];
      uVar23 = puVar14[3];
      puVar7[0x10] = *puVar14;
      puVar7[0x11] = uVar11;
      puVar7[0x12] = uVar20;
      puVar7[0x13] = uVar23;
      uVar11 = puVar14[5];
      uVar20 = puVar14[6];
      uVar23 = puVar14[7];
      puVar7[0x14] = puVar14[4];
      puVar7[0x15] = uVar11;
      puVar7[0x16] = uVar20;
      puVar7[0x17] = uVar23;
      uVar11 = puVar4[1];
      uVar20 = puVar4[2];
      uVar23 = puVar4[3];
      puVar7[0x18] = *puVar4;
      puVar7[0x19] = uVar11;
      puVar7[0x1a] = uVar20;
      puVar7[0x1b] = uVar23;
      uVar11 = puVar4[5];
      uVar20 = puVar4[6];
      uVar23 = puVar4[7];
      puVar7[0x1c] = puVar4[4];
      puVar7[0x1d] = uVar11;
      puVar7[0x1e] = uVar20;
      puVar7[0x1f] = uVar23;
      uVar10 = 4;
    }
    if (uVar10 < uVar8) {
      iVar19 = uVar10 * -0x20 + 0x20;
      uVar13 = uVar10;
      do {
        puVar7 = param_1 + uVar13 * 8;
        puVar6 = param_3 + uVar13 * 8;
        uVar11 = puVar7[1];
        uVar20 = puVar7[2];
        uVar23 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar11;
        puVar6[2] = uVar20;
        puVar6[3] = uVar23;
        uVar11 = puVar7[5];
        uVar20 = puVar7[6];
        uVar23 = puVar7[7];
        puVar6[4] = puVar7[4];
        puVar6[5] = uVar11;
        puVar6[6] = uVar20;
        puVar6[7] = uVar23;
        uVar21 = puVar6[2];
        uVar17 = puVar6[3];
        if (uVar17 <= (uint)puVar6[-5] && (uint)((uint)puVar6[-6] <= uVar21) <= uVar17 - puVar6[-5])
        {
          uVar11 = puVar6[1];
          uVar20 = *puVar6;
          iVar16 = iVar19;
          do {
            puVar5 = puVar6;
            puVar6 = puVar5 + -8;
            *puVar5 = *puVar6;
            puVar5[1] = puVar5[-7];
            puVar5[2] = puVar5[-6];
            puVar5[3] = puVar5[-5];
            puVar5[4] = puVar5[-4];
            puVar5[5] = puVar5[-3];
            puVar5[6] = puVar5[-2];
            puVar5[7] = puVar5[-1];
            if (iVar16 == 0) {
              puVar6 = param_3;
              break;
            }
            iVar16 = iVar16 + 0x20;
          } while (uVar17 <= (uint)puVar5[-0xd] &&
                   (uint)((uint)puVar5[-0xe] <= uVar21) <= uVar17 - puVar5[-0xd]);
          *puVar6 = uVar20;
          puVar5[-6] = uVar21;
          uVar20 = puVar7[6];
          puVar6[1] = uVar11;
          uVar11 = puVar7[4];
          puVar5[-5] = uVar17;
          uVar23 = puVar7[5];
          uVar15 = puVar7[7];
          puVar5[-4] = uVar11;
          puVar5[-1] = uVar15;
          puVar5[-2] = uVar20;
          puVar5[-3] = uVar23;
        }
        uVar13 = uVar13 + 1;
        iVar19 = iVar19 + -0x20;
      } while (uVar13 != uVar8);
    }
    puVar6 = param_3 + uVar8 * 8;
    if (uVar10 < param_2 - uVar8) {
      local_60 = param_3 + uVar8 * 8 + -0xe;
      local_64 = 0x20;
      uVar13 = uVar10;
      local_68 = puVar6;
      do {
        puVar7 = puVar6 + uVar13 * 8;
        puVar5 = param_1 + uVar8 * 8 + uVar13 * 8;
        uVar11 = puVar5[1];
        uVar20 = puVar5[2];
        uVar23 = puVar5[3];
        *puVar7 = *puVar5;
        puVar7[1] = uVar11;
        puVar7[2] = uVar20;
        puVar7[3] = uVar23;
        uVar11 = puVar5[5];
        uVar20 = puVar5[6];
        uVar23 = puVar5[7];
        puVar7[4] = puVar5[4];
        puVar7[5] = uVar11;
        puVar7[6] = uVar20;
        puVar7[7] = uVar23;
        uVar21 = puVar7[2];
        uVar17 = puVar7[3];
        if (uVar17 <= (uint)puVar7[-5] && (uint)((uint)puVar7[-6] <= uVar21) <= uVar17 - puVar7[-5])
        {
          uVar11 = puVar7[1];
          uVar20 = *puVar7;
          puVar7 = local_60;
          puVar9 = local_68;
          iVar19 = local_64;
          do {
            puVar22 = puVar9 + uVar10 * 8;
            *puVar22 = puVar22[-8];
            puVar22[1] = puVar22[-7];
            puVar22[2] = puVar22[-6];
            puVar22[3] = puVar22[-5];
            puVar22[4] = puVar22[-4];
            puVar22[5] = puVar22[-3];
            puVar22[6] = puVar22[-2];
            puVar22[7] = puVar22[-1];
            if (uVar10 * 0x20 == iVar19) {
              puVar7 = puVar6;
              goto LAB_0199d414;
            }
            puVar18 = puVar7 + uVar10 * 8;
            iVar19 = iVar19 + 0x20;
            uVar12 = puVar18[1];
            puVar9 = puVar9 + -8;
            puVar7 = puVar7 + -8;
          } while (uVar17 <= uVar12 && (uint)(*puVar18 <= uVar21) <= uVar17 - uVar12);
          puVar7 = puVar9 + uVar10 * 8;
LAB_0199d414:
          *puVar7 = uVar20;
          puVar22[-6] = uVar21;
          puVar7[1] = uVar11;
          uVar20 = puVar5[6];
          uVar11 = puVar5[4];
          puVar22[-5] = uVar17;
          uVar23 = puVar5[5];
          uVar15 = puVar5[7];
          puVar22[-4] = uVar11;
          puVar22[-1] = uVar15;
          puVar22[-2] = uVar20;
          puVar22[-3] = uVar23;
        }
        uVar13 = uVar13 + 1;
        local_64 = local_64 + -0x20;
        local_60 = local_60 + 8;
        local_68 = local_68 + 8;
      } while (uVar13 != param_2 - uVar8);
    }
    puVar7 = puVar6 + -8;
    iVar19 = 0;
    puVar5 = param_3 + param_2 * 8 + -8;
    do {
      uVar10 = param_3[3];
      uVar13 = puVar6[3];
      puVar22 = (undefined4 *)((int)param_1 + iVar19);
      bVar24 = (uint)((uint)param_3[2] <= (uint)puVar6[2]) <= uVar13 - uVar10;
      uVar17 = (uint)(uVar13 <= uVar10 && bVar24);
      puVar9 = param_3;
      if (uVar17 != 0) {
        puVar9 = puVar6;
      }
      uVar11 = puVar9[1];
      uVar20 = puVar9[2];
      uVar23 = puVar9[3];
      puVar6 = puVar6 + uVar17 * 8;
      *puVar22 = *puVar9;
      puVar22[1] = uVar11;
      puVar22[2] = uVar20;
      puVar22[3] = uVar23;
      uVar11 = puVar9[5];
      uVar20 = puVar9[6];
      uVar23 = puVar9[7];
      puVar22[4] = puVar9[4];
      puVar22[5] = uVar11;
      puVar22[6] = uVar20;
      puVar22[7] = uVar23;
      bVar2 = (uint)puVar5[3] <= (uint)puVar7[3];
      bVar3 = (uint)((uint)puVar7[2] <= (uint)puVar5[2]) <= (uint)(puVar5[3] - puVar7[3]);
      puVar9 = puVar5;
      if (bVar2 && bVar3) {
        puVar9 = puVar7;
      }
      puVar22 = (undefined4 *)((int)param_1 + ((param_2 * 0x20 + -0x20) - iVar19));
      uVar11 = puVar9[1];
      uVar20 = puVar9[2];
      uVar23 = puVar9[3];
      iVar19 = iVar19 + 0x20;
      *puVar22 = *puVar9;
      puVar22[1] = uVar11;
      puVar22[2] = uVar20;
      puVar22[3] = uVar23;
      uVar11 = puVar9[5];
      uVar20 = puVar9[6];
      uVar23 = puVar9[7];
      puVar22[4] = puVar9[4];
      puVar22[5] = uVar11;
      puVar22[6] = uVar20;
      puVar22[7] = uVar23;
      iVar16 = 0;
      if (!bVar2 || !bVar3) {
        iVar16 = -1;
      }
      puVar5 = puVar5 + iVar16 * 8;
      iVar16 = 0;
      if (bVar2 && bVar3) {
        iVar16 = -1;
      }
      puVar7 = puVar7 + iVar16 * 8;
      param_3 = param_3 + (uint)(uVar13 > uVar10 || !bVar24) * 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    puVar7 = puVar7 + 8;
    puVar9 = (undefined4 *)0x0;
    if ((param_2 & 1) != 0) {
      bVar24 = puVar7 <= param_3;
      puVar9 = puVar6;
      if (!bVar24) {
        puVar9 = param_3;
      }
      param_1 = (undefined4 *)((int)param_1 + iVar19);
      uVar11 = puVar9[1];
      uVar20 = puVar9[2];
      uVar23 = puVar9[3];
      *param_1 = *puVar9;
      param_1[1] = uVar11;
      param_1[2] = uVar20;
      param_1[3] = uVar23;
      uVar11 = puVar9[5];
      uVar20 = puVar9[6];
      uVar23 = puVar9[7];
      puVar6 = puVar6 + (uint)bVar24 * 8;
      param_1[4] = puVar9[4];
      param_1[5] = uVar11;
      param_1[6] = uVar20;
      param_1[7] = uVar23;
      puVar9 = (undefined4 *)(uint)!bVar24;
      param_3 = param_3 + (int)puVar9 * 8;
    }
    if (param_3 == puVar7) {
      puVar9 = puVar5 + 8;
    }
    if (param_3 != puVar7 || puVar6 != puVar9) {
      FUN_01307140();
LAB_0199d6d8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x199d6d8);
      (*pcVar1)();
    }
  }
  return;
}

