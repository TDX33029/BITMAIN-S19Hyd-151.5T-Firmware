// FUN_00611210 @ 00611210 size=2916 calls_out=7 calls_in=2
// strings: 

void FUN_00611210(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  bool bVar23;
  byte in_Q;
  undefined4 *local_60;
  int local_5c;
  undefined4 *local_58;
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
      uVar20 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_0060cc28(param_1,uVar20,param_3,param_4,1);
          return;
        }
        puVar4 = param_1 + (uVar20 >> 3) * 0x20;
        puVar9 = param_1 + ((uVar20 >> 3) * 8 - (uVar20 >> 3)) * 8;
        if (uVar20 < 0x40) {
          uVar11 = puVar9[3];
          uVar6 = puVar4[3];
          uVar18 = param_1[3];
          bVar23 = uVar18 <= uVar6 && (uint)((uint)puVar4[2] <= (uint)param_1[2]) <= uVar18 - uVar6;
          if (bVar23 != (uVar6 <= uVar11 &&
                        (uint)((uint)puVar9[2] <= (uint)puVar4[2]) <= uVar6 - uVar11)) {
            puVar4 = puVar9;
          }
          if (bVar23 != (uVar18 <= uVar11 &&
                        (uint)((uint)puVar9[2] <= (uint)param_1[2]) <= uVar18 - uVar11)) {
            puVar4 = param_1;
          }
        }
        else {
          puVar4 = (undefined4 *)FUN_00618e84(param_1,puVar4);
        }
        param_5 = param_5 + -1;
        local_48 = *puVar4;
        uStack_44 = puVar4[1];
        uStack_40 = puVar4[2];
        uStack_3c = puVar4[3];
        local_38 = puVar4[4];
        uStack_34 = puVar4[5];
        uStack_30 = puVar4[6];
        uStack_2c = puVar4[7];
        uVar6 = (uint)((int)puVar4 - (int)param_1) >> 5;
        if ((param_6 != 0) &&
           ((uint)puVar4[3] < *(uint *)(param_6 + 0xc) ||
            *(uint *)(param_6 + 0xc) - puVar4[3] < (uint)((uint)puVar4[2] <= *(uint *)(param_6 + 8))
           )) break;
        if (param_4 < uVar20) goto LAB_00611d5c;
        puVar13 = param_3 + uVar20 * 8;
        param_2 = 0;
        puVar3 = param_1 + uVar6 * 8;
        puVar4 = param_1;
        puVar9 = param_1;
        uVar11 = uVar6;
        if (puVar3 <= param_1) goto LAB_00611694;
LAB_00611650:
        do {
          uVar19 = param_1[uVar6 * 8 + 3];
          puVar13 = puVar13 + -8;
          uVar18 = puVar4[3];
          bVar23 = (uint)((uint)param_1[uVar6 * 8 + 2] <= (uint)puVar4[2]) <= uVar18 - uVar19;
          puVar9 = puVar4 + 8;
          uVar8 = puVar4[1];
          uVar17 = puVar4[2];
          uVar21 = puVar4[3];
          puVar22 = puVar13;
          if (uVar18 <= uVar19 && bVar23) {
            puVar22 = param_3;
          }
          puVar22 = puVar22 + param_2 * 8;
          if (uVar18 <= uVar19 && bVar23) {
            param_2 = param_2 + 1;
          }
          *puVar22 = *puVar4;
          puVar22[1] = uVar8;
          puVar22[2] = uVar17;
          puVar22[3] = uVar21;
          uVar8 = puVar4[5];
          uVar17 = puVar4[6];
          uVar21 = puVar4[7];
          puVar22[4] = puVar4[4];
          puVar22[5] = uVar8;
          puVar22[6] = uVar17;
          puVar22[7] = uVar21;
          puVar4 = puVar9;
        } while (puVar9 < puVar3);
LAB_00611694:
        if (uVar11 != uVar20) goto code_r0x006116a4;
        FUN_016dd1aa(param_1,param_3,param_2 << 5);
        iVar7 = uVar20 - param_2;
        if (iVar7 != 0) {
          puVar4 = param_1 + param_2 * 8;
          iVar16 = iVar7;
          puVar9 = param_3 + uVar20 * 8 + -8;
          do {
            uVar8 = puVar9[1];
            uVar17 = puVar9[2];
            uVar21 = puVar9[3];
            iVar16 = iVar16 + -1;
            *puVar4 = *puVar9;
            puVar4[1] = uVar8;
            puVar4[2] = uVar17;
            puVar4[3] = uVar21;
            uVar8 = puVar9[5];
            uVar17 = puVar9[6];
            uVar21 = puVar9[7];
            puVar4[4] = puVar9[4];
            puVar4[5] = uVar8;
            puVar4[6] = uVar17;
            puVar4[7] = uVar21;
            puVar4 = puVar4 + 8;
            puVar9 = puVar9 + -8;
          } while (iVar16 != 0);
        }
        if (param_2 == 0) break;
        if (uVar20 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_00611210(param_1 + param_2 * 8,iVar7,param_3,param_4,param_5,&local_48);
        uVar20 = param_2;
        if (param_2 < 0x21) goto LAB_00611234;
      }
      if (param_4 < uVar20) goto LAB_00611d5c;
      puVar4 = param_3 + uVar20 * 8;
      uVar11 = 0;
      puVar9 = param_1;
      uVar18 = uVar6;
      while( true ) {
        for (puVar13 = puVar9; puVar13 < param_1 + uVar18 * 8; puVar13 = puVar13 + 8) {
          uVar19 = puVar13[3];
          puVar4 = puVar4 + -8;
          uVar10 = param_1[uVar6 * 8 + 3];
          bVar23 = uVar10 - uVar19 < (uint)((uint)puVar13[2] <= (uint)param_1[uVar6 * 8 + 2]);
          uVar8 = puVar13[1];
          uVar17 = puVar13[2];
          uVar21 = puVar13[3];
          puVar9 = puVar4;
          if (uVar19 < uVar10 || bVar23) {
            puVar9 = param_3;
          }
          puVar9 = puVar9 + uVar11 * 8;
          *puVar9 = *puVar13;
          puVar9[1] = uVar8;
          puVar9[2] = uVar17;
          puVar9[3] = uVar21;
          if (uVar19 < uVar10 || bVar23) {
            uVar11 = uVar11 + 1;
          }
          uVar8 = puVar13[5];
          uVar17 = puVar13[6];
          uVar21 = puVar13[7];
          puVar9[4] = puVar13[4];
          puVar9[5] = uVar8;
          puVar9[6] = uVar17;
          puVar9[7] = uVar21;
        }
        if (uVar18 == uVar20) break;
        puVar3 = param_3 + uVar11 * 8;
        uVar8 = puVar13[1];
        uVar17 = puVar13[2];
        uVar21 = puVar13[3];
        puVar9 = puVar13 + 8;
        uVar11 = uVar11 + 1;
        puVar4 = puVar4 + -8;
        *puVar3 = *puVar13;
        puVar3[1] = uVar8;
        puVar3[2] = uVar17;
        puVar3[3] = uVar21;
        uVar8 = puVar13[5];
        uVar17 = puVar13[6];
        uVar21 = puVar13[7];
        puVar3[4] = puVar13[4];
        puVar3[5] = uVar8;
        puVar3[6] = uVar17;
        puVar3[7] = uVar21;
        uVar18 = uVar20;
      }
      FUN_016dd1aa(param_1,param_3,uVar11 << 5);
      param_2 = uVar20 - uVar11;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar11 * 8;
      puVar4 = param_3 + uVar20 * 8 + -8;
      puVar9 = param_1;
      uVar6 = param_2;
      do {
        uVar8 = puVar4[1];
        uVar17 = puVar4[2];
        uVar21 = puVar4[3];
        uVar6 = uVar6 - 1;
        *puVar9 = *puVar4;
        puVar9[1] = uVar8;
        puVar9[2] = uVar17;
        puVar9[3] = uVar21;
        uVar8 = puVar4[5];
        uVar17 = puVar4[6];
        uVar21 = puVar4[7];
        puVar9[4] = puVar4[4];
        puVar9[5] = uVar8;
        puVar9[6] = uVar17;
        puVar9[7] = uVar21;
        puVar4 = puVar4 + -8;
        puVar9 = puVar9 + 8;
      } while (uVar6 != 0);
      if (uVar20 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar11,uVar20,uVar20,&DAT_018af348);
      }
      param_6 = 0;
    } while (0x20 < param_2);
  }
LAB_00611234:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar20 = param_2 >> 1;
    if (param_2 < 8) {
      uVar8 = param_1[1];
      uVar17 = param_1[2];
      uVar21 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = uVar8;
      param_3[2] = uVar17;
      param_3[3] = uVar21;
      uVar8 = param_1[5];
      uVar17 = param_1[6];
      uVar21 = param_1[7];
      param_3[4] = param_1[4];
      param_3[5] = uVar8;
      param_3[6] = uVar17;
      param_3[7] = uVar21;
      puVar4 = param_1 + uVar20 * 8;
      puVar9 = param_3 + uVar20 * 8;
      uVar8 = puVar4[1];
      uVar17 = puVar4[2];
      uVar21 = puVar4[3];
      *puVar9 = *puVar4;
      puVar9[1] = uVar8;
      puVar9[2] = uVar17;
      puVar9[3] = uVar21;
      uVar8 = puVar4[5];
      uVar17 = puVar4[6];
      uVar21 = puVar4[7];
      uVar6 = 1;
      puVar9[4] = puVar4[4];
      puVar9[5] = uVar8;
      puVar9[6] = uVar17;
      puVar9[7] = uVar21;
    }
    else {
      uVar11 = param_1[3];
      uVar6 = param_1[0xb];
      bVar23 = uVar6 - uVar11 < (uint)((uint)param_1[2] <= (uint)param_1[10]);
      iVar16 = 0x60;
      puVar4 = param_1 + (uint)(uVar11 < uVar6 || bVar23) * 8;
      puVar9 = param_1 + (uint)(uVar11 >= uVar6 && !bVar23) * 8;
      iVar7 = 0x40;
      if ((uint)param_1[0x1b] <= (uint)param_1[0x13] &&
          (uint)((uint)param_1[0x12] <= (uint)param_1[0x1a]) <=
          (uint)(param_1[0x1b] - param_1[0x13])) {
        iVar7 = 0x60;
        iVar16 = 0x40;
      }
      puVar3 = (undefined4 *)((int)param_1 + iVar7);
      uVar6 = puVar9[3];
      puVar22 = (undefined4 *)((int)param_1 + iVar16);
      uVar11 = puVar3[3];
      bVar23 = uVar11 - uVar6 < (uint)((uint)puVar9[2] <= (uint)puVar3[2]);
      puVar13 = puVar3;
      if (uVar6 >= uVar11 && !bVar23) {
        puVar13 = puVar4;
      }
      puVar12 = puVar4;
      puVar14 = puVar22;
      if ((uint)puVar22[3] <= (uint)puVar4[3] &&
          (uint)((uint)puVar4[2] <= (uint)puVar22[2]) <= (uint)(puVar22[3] - puVar4[3])) {
        puVar12 = puVar3;
        puVar14 = puVar4;
        puVar13 = puVar22;
      }
      puVar4 = puVar9;
      if ((((byte)((uVar6 < uVar11 || bVar23) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0) {
        puVar4 = puVar3;
        puVar12 = puVar9;
      }
      uVar6 = puVar12[2];
      uVar11 = puVar12[3];
      uVar18 = puVar13[2];
      uVar19 = puVar13[3];
      uVar8 = puVar4[1];
      uVar17 = puVar4[2];
      uVar21 = puVar4[3];
      *param_3 = *puVar4;
      param_3[1] = uVar8;
      param_3[2] = uVar17;
      param_3[3] = uVar21;
      uVar8 = puVar4[5];
      uVar17 = puVar4[6];
      uVar21 = puVar4[7];
      param_3[4] = puVar4[4];
      param_3[5] = uVar8;
      param_3[6] = uVar17;
      param_3[7] = uVar21;
      if (uVar11 < uVar19 || uVar19 - uVar11 < (uint)(uVar6 <= uVar18)) {
        puVar4 = puVar12;
        puVar12 = puVar13;
      }
      else {
        puVar4 = puVar13;
      }
      uVar8 = puVar4[1];
      uVar17 = puVar4[2];
      uVar21 = puVar4[3];
      param_3[8] = *puVar4;
      param_3[9] = uVar8;
      param_3[10] = uVar17;
      param_3[0xb] = uVar21;
      uVar8 = puVar4[5];
      uVar17 = puVar4[6];
      uVar21 = puVar4[7];
      param_3[0xc] = puVar4[4];
      param_3[0xd] = uVar8;
      param_3[0xe] = uVar17;
      param_3[0xf] = uVar21;
      uVar8 = puVar12[1];
      uVar17 = puVar12[2];
      uVar21 = puVar12[3];
      param_3[0x10] = *puVar12;
      param_3[0x11] = uVar8;
      param_3[0x12] = uVar17;
      param_3[0x13] = uVar21;
      uVar8 = puVar12[5];
      uVar17 = puVar12[6];
      uVar21 = puVar12[7];
      param_3[0x14] = puVar12[4];
      param_3[0x15] = uVar8;
      param_3[0x16] = uVar17;
      param_3[0x17] = uVar21;
      uVar8 = puVar14[1];
      uVar17 = puVar14[2];
      uVar21 = puVar14[3];
      param_3[0x18] = *puVar14;
      param_3[0x19] = uVar8;
      param_3[0x1a] = uVar17;
      param_3[0x1b] = uVar21;
      uVar8 = puVar14[5];
      uVar17 = puVar14[6];
      uVar21 = puVar14[7];
      param_3[0x1c] = puVar14[4];
      param_3[0x1d] = uVar8;
      param_3[0x1e] = uVar17;
      param_3[0x1f] = uVar21;
      uVar11 = param_1[uVar20 * 8 + 3];
      uVar18 = param_1[uVar20 * 8 + 0xb];
      uVar19 = param_1[uVar20 * 8 + 0x1b];
      bVar23 = uVar18 - uVar11 <
               (uint)((uint)param_1[uVar20 * 8 + 2] <= (uint)param_1[uVar20 * 8 + 10]);
      uVar6 = param_1[uVar20 * 8 + 0x13];
      puVar4 = param_1 + uVar20 * 8 + (uint)(uVar11 < uVar18 || bVar23) * 8;
      bVar2 = (uint)((uint)param_1[uVar20 * 8 + 0x12] <= (uint)param_1[uVar20 * 8 + 0x1a]) <=
              uVar19 - uVar6;
      iVar7 = 0x40;
      if (uVar19 <= uVar6 && bVar2) {
        iVar7 = 0x60;
      }
      puVar13 = param_1 + uVar20 * 8 + (uint)(uVar11 >= uVar18 && !bVar23) * 8;
      puVar9 = (undefined4 *)((int)param_1 + iVar7 + uVar20 * 0x20);
      iVar7 = 0x60;
      if (uVar19 <= uVar6 && bVar2) {
        iVar7 = 0x40;
      }
      puVar22 = (undefined4 *)((int)param_1 + iVar7 + uVar20 * 0x20);
      uVar11 = puVar9[3];
      uVar6 = puVar13[3];
      bVar23 = (uint)((uint)puVar13[2] <= (uint)puVar9[2]) <= uVar11 - uVar6;
      puVar3 = puVar9;
      if (uVar11 <= uVar6 && bVar23) {
        puVar3 = puVar4;
      }
      puVar12 = puVar4;
      puVar14 = puVar22;
      if ((uint)puVar22[3] <= (uint)puVar4[3] &&
          (uint)((uint)puVar4[2] <= (uint)puVar22[2]) <= (uint)(puVar22[3] - puVar4[3])) {
        puVar12 = puVar9;
        puVar14 = puVar4;
        puVar3 = puVar22;
      }
      puVar4 = puVar13;
      if (uVar11 <= uVar6 && bVar23) {
        puVar4 = puVar9;
        puVar12 = puVar13;
      }
      uVar6 = puVar12[3];
      uVar18 = puVar12[2];
      uVar11 = puVar3[3];
      uVar19 = puVar3[2];
      puVar9 = param_3 + uVar20 * 8;
      uVar8 = puVar4[1];
      uVar17 = puVar4[2];
      uVar21 = puVar4[3];
      *puVar9 = *puVar4;
      puVar9[1] = uVar8;
      puVar9[2] = uVar17;
      puVar9[3] = uVar21;
      uVar8 = puVar4[5];
      uVar17 = puVar4[6];
      uVar21 = puVar4[7];
      puVar9[4] = puVar4[4];
      puVar9[5] = uVar8;
      puVar9[6] = uVar17;
      puVar9[7] = uVar21;
      if (uVar6 < uVar11 || uVar11 - uVar6 < (uint)(uVar18 <= uVar19)) {
        puVar4 = puVar12;
        puVar12 = puVar3;
      }
      else {
        puVar4 = puVar3;
      }
      uVar8 = puVar4[1];
      uVar17 = puVar4[2];
      uVar21 = puVar4[3];
      puVar9[8] = *puVar4;
      puVar9[9] = uVar8;
      puVar9[10] = uVar17;
      puVar9[0xb] = uVar21;
      uVar8 = puVar4[5];
      uVar17 = puVar4[6];
      uVar21 = puVar4[7];
      puVar9[0xc] = puVar4[4];
      puVar9[0xd] = uVar8;
      puVar9[0xe] = uVar17;
      puVar9[0xf] = uVar21;
      uVar8 = puVar12[1];
      uVar17 = puVar12[2];
      uVar21 = puVar12[3];
      puVar9[0x10] = *puVar12;
      puVar9[0x11] = uVar8;
      puVar9[0x12] = uVar17;
      puVar9[0x13] = uVar21;
      uVar8 = puVar12[5];
      uVar17 = puVar12[6];
      uVar21 = puVar12[7];
      puVar9[0x14] = puVar12[4];
      puVar9[0x15] = uVar8;
      puVar9[0x16] = uVar17;
      puVar9[0x17] = uVar21;
      uVar8 = puVar14[1];
      uVar17 = puVar14[2];
      uVar21 = puVar14[3];
      puVar9[0x18] = *puVar14;
      puVar9[0x19] = uVar8;
      puVar9[0x1a] = uVar17;
      puVar9[0x1b] = uVar21;
      uVar8 = puVar14[5];
      uVar17 = puVar14[6];
      uVar21 = puVar14[7];
      puVar9[0x1c] = puVar14[4];
      puVar9[0x1d] = uVar8;
      puVar9[0x1e] = uVar17;
      puVar9[0x1f] = uVar21;
      uVar6 = 4;
    }
    if (uVar6 < uVar20) {
      iVar7 = uVar6 * -0x20 + 0x20;
      uVar11 = uVar6;
      do {
        puVar9 = param_1 + uVar11 * 8;
        puVar4 = param_3 + uVar11 * 8;
        uVar8 = puVar9[1];
        uVar17 = puVar9[2];
        uVar21 = puVar9[3];
        *puVar4 = *puVar9;
        puVar4[1] = uVar8;
        puVar4[2] = uVar17;
        puVar4[3] = uVar21;
        uVar8 = puVar9[5];
        uVar17 = puVar9[6];
        uVar21 = puVar9[7];
        puVar4[4] = puVar9[4];
        puVar4[5] = uVar8;
        puVar4[6] = uVar17;
        puVar4[7] = uVar21;
        uVar19 = puVar4[2];
        uVar18 = puVar4[3];
        if (uVar18 <= (uint)puVar4[-5] && (uint)((uint)puVar4[-6] <= uVar19) <= uVar18 - puVar4[-5])
        {
          uVar8 = puVar4[1];
          uVar17 = *puVar4;
          iVar16 = iVar7;
          do {
            puVar13 = puVar4;
            puVar4 = puVar13 + -8;
            *puVar13 = *puVar4;
            puVar13[1] = puVar13[-7];
            puVar13[2] = puVar13[-6];
            puVar13[3] = puVar13[-5];
            puVar13[4] = puVar13[-4];
            puVar13[5] = puVar13[-3];
            puVar13[6] = puVar13[-2];
            puVar13[7] = puVar13[-1];
            if (iVar16 == 0) {
              puVar4 = param_3;
              break;
            }
            iVar16 = iVar16 + 0x20;
          } while (uVar18 <= (uint)puVar13[-0xd] &&
                   (uint)((uint)puVar13[-0xe] <= uVar19) <= uVar18 - puVar13[-0xd]);
          *puVar4 = uVar17;
          puVar13[-6] = uVar19;
          puVar4[1] = uVar8;
          puVar13[-5] = uVar18;
          uVar8 = puVar9[6];
          uVar17 = puVar9[5];
          uVar21 = puVar9[7];
          puVar13[-4] = puVar9[4];
          puVar13[-1] = uVar21;
          puVar13[-2] = uVar8;
          puVar13[-3] = uVar17;
        }
        iVar7 = iVar7 + -0x20;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar20);
    }
    puVar4 = param_3 + uVar20 * 8;
    if (uVar6 < param_2 - uVar20) {
      local_58 = param_3 + uVar20 * 8 + -0xe;
      local_5c = 0x20;
      uVar11 = uVar6;
      local_60 = puVar4;
      do {
        puVar9 = puVar4 + uVar11 * 8;
        puVar13 = param_1 + uVar20 * 8 + uVar11 * 8;
        uVar8 = puVar13[1];
        uVar17 = puVar13[2];
        uVar21 = puVar13[3];
        *puVar9 = *puVar13;
        puVar9[1] = uVar8;
        puVar9[2] = uVar17;
        puVar9[3] = uVar21;
        uVar8 = puVar13[5];
        uVar17 = puVar13[6];
        uVar21 = puVar13[7];
        puVar9[4] = puVar13[4];
        puVar9[5] = uVar8;
        puVar9[6] = uVar17;
        puVar9[7] = uVar21;
        uVar19 = puVar9[2];
        uVar18 = puVar9[3];
        if (uVar18 <= (uint)puVar9[-5] && (uint)((uint)puVar9[-6] <= uVar19) <= uVar18 - puVar9[-5])
        {
          uVar17 = *puVar9;
          uVar8 = puVar9[1];
          puVar9 = local_58;
          puVar3 = local_60;
          iVar7 = local_5c;
          do {
            puVar22 = puVar3 + uVar6 * 8;
            *puVar22 = puVar22[-8];
            puVar22[1] = puVar22[-7];
            puVar22[2] = puVar22[-6];
            puVar22[3] = puVar22[-5];
            puVar22[4] = puVar22[-4];
            puVar22[5] = puVar22[-3];
            puVar22[6] = puVar22[-2];
            puVar22[7] = puVar22[-1];
            if (uVar6 * 0x20 == iVar7) {
              puVar9 = puVar4;
              goto LAB_00611aa4;
            }
            puVar15 = puVar9 + uVar6 * 8;
            iVar7 = iVar7 + 0x20;
            puVar3 = puVar3 + -8;
            uVar10 = puVar15[1];
            puVar9 = puVar9 + -8;
          } while (uVar18 <= uVar10 && (uint)(*puVar15 <= uVar19) <= uVar18 - uVar10);
          puVar9 = puVar3 + uVar6 * 8;
LAB_00611aa4:
          *puVar9 = uVar17;
          puVar22[-6] = uVar19;
          puVar9[1] = uVar8;
          uVar17 = puVar13[6];
          uVar8 = puVar13[4];
          puVar22[-5] = uVar18;
          uVar21 = puVar13[5];
          puVar22[-1] = puVar13[7];
          puVar22[-2] = uVar17;
          puVar22[-4] = uVar8;
          puVar22[-3] = uVar21;
        }
        uVar11 = uVar11 + 1;
        local_5c = local_5c + -0x20;
        local_58 = local_58 + 8;
        local_60 = local_60 + 8;
      } while (uVar11 != param_2 - uVar20);
    }
    puVar9 = puVar4 + -8;
    puVar13 = param_3 + param_2 * 8 + -8;
    iVar7 = 0;
    do {
      uVar6 = param_3[3];
      uVar11 = puVar4[3];
      bVar23 = uVar11 - uVar6 < (uint)((uint)param_3[2] <= (uint)puVar4[2]);
      puVar3 = (undefined4 *)(uint)(uVar6 < uVar11 || bVar23);
      uVar6 = (uint)(uVar6 >= uVar11 && !bVar23);
      puVar22 = param_3;
      if (uVar6 != 0) {
        puVar22 = puVar4;
      }
      puVar4 = puVar4 + uVar6 * 8;
      puVar14 = (undefined4 *)((int)param_1 + iVar7);
      uVar8 = puVar22[1];
      uVar17 = puVar22[2];
      uVar21 = puVar22[3];
      *puVar14 = *puVar22;
      puVar14[1] = uVar8;
      puVar14[2] = uVar17;
      puVar14[3] = uVar21;
      uVar8 = puVar22[5];
      uVar17 = puVar22[6];
      uVar21 = puVar22[7];
      puVar14[4] = puVar22[4];
      puVar14[5] = uVar8;
      puVar14[6] = uVar17;
      puVar14[7] = uVar21;
      bVar23 = (uint)puVar13[3] <= (uint)puVar9[3];
      bVar2 = (uint)((uint)puVar9[2] <= (uint)puVar13[2]) <= (uint)(puVar13[3] - puVar9[3]);
      puVar22 = puVar13;
      if (bVar23 && bVar2) {
        puVar22 = puVar9;
      }
      puVar14 = (undefined4 *)((int)param_1 + ((param_2 * 0x20 + -0x20) - iVar7));
      uVar8 = puVar22[1];
      uVar17 = puVar22[2];
      uVar21 = puVar22[3];
      iVar7 = iVar7 + 0x20;
      *puVar14 = *puVar22;
      puVar14[1] = uVar8;
      puVar14[2] = uVar17;
      puVar14[3] = uVar21;
      uVar8 = puVar22[5];
      uVar17 = puVar22[6];
      uVar21 = puVar22[7];
      puVar14[4] = puVar22[4];
      puVar14[5] = uVar8;
      puVar14[6] = uVar17;
      puVar14[7] = uVar21;
      iVar16 = 0;
      if (!bVar23 || !bVar2) {
        iVar16 = -1;
      }
      iVar5 = 0;
      if (bVar23 && bVar2) {
        iVar5 = -1;
      }
      puVar13 = puVar13 + iVar16 * 8;
      puVar9 = puVar9 + iVar5 * 8;
      uVar20 = uVar20 - 1;
      param_3 = param_3 + (int)puVar3 * 8;
    } while (uVar20 != 0);
    puVar9 = puVar9 + 8;
    if ((param_2 & 1) != 0) {
      bVar23 = puVar9 <= param_3;
      puVar3 = puVar4;
      if (!bVar23) {
        puVar3 = param_3;
      }
      uVar8 = puVar3[1];
      uVar17 = puVar3[2];
      uVar21 = puVar3[3];
      param_1 = (undefined4 *)((int)param_1 + iVar7);
      *param_1 = *puVar3;
      param_1[1] = uVar8;
      param_1[2] = uVar17;
      param_1[3] = uVar21;
      uVar8 = puVar3[5];
      uVar17 = puVar3[6];
      uVar21 = puVar3[7];
      puVar4 = puVar4 + (uint)bVar23 * 8;
      param_1[4] = puVar3[4];
      param_1[5] = uVar8;
      param_1[6] = uVar17;
      param_1[7] = uVar21;
      puVar3 = (undefined4 *)(uint)!bVar23;
      param_3 = param_3 + (int)puVar3 * 8;
    }
    if (param_3 == puVar9) {
      puVar3 = puVar13 + 8;
    }
    if (param_3 == puVar9 && puVar4 == puVar3) {
      return;
    }
    FUN_00fb7254();
  }
LAB_00611d5c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x611d5c);
  (*pcVar1)();
code_r0x006116a4:
  puVar13 = puVar13 + -8;
  uVar8 = puVar9[1];
  uVar17 = puVar9[2];
  uVar21 = puVar9[3];
  puVar3 = puVar13 + param_2 * 8;
  puVar4 = puVar9 + 8;
  *puVar3 = *puVar9;
  puVar3[1] = uVar8;
  puVar3[2] = uVar17;
  puVar3[3] = uVar21;
  uVar8 = puVar9[5];
  uVar17 = puVar9[6];
  uVar21 = puVar9[7];
  puVar3[4] = puVar9[4];
  puVar3[5] = uVar8;
  puVar3[6] = uVar17;
  puVar3[7] = uVar21;
  puVar3 = param_1 + uVar20 * 8;
  puVar9 = puVar4;
  uVar11 = uVar20;
  if (puVar4 < puVar3) goto LAB_00611650;
  goto LAB_00611694;
}

