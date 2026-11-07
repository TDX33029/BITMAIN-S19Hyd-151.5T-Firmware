// FUN_01675d94 @ 01675d94 size=2456 calls_out=7 calls_in=2
// strings: 

void FUN_01675d94(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  bool bVar21;
  bool bVar22;
  int local_5c;
  undefined4 *local_50;
  int local_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (&DAT_00000020 < param_2) {
    local_5c = param_6;
    do {
      puVar4 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_0167bb28(param_1,puVar4,param_3,param_4,1);
          return;
        }
        puVar20 = param_1 + ((uint)puVar4 >> 3) * 0x2a;
        puVar10 = param_1 + ((uint)puVar4 >> 3) * 0x18;
        if (&DAT_0000003f < puVar4) {
          puVar5 = (undefined4 *)FUN_01684320(param_1,puVar10,puVar20);
        }
        else {
          uVar14 = puVar10[4];
          uVar8 = param_1[4];
          puVar5 = puVar20;
          if (uVar8 < uVar14 == uVar14 < (uint)puVar20[4]) {
            puVar5 = puVar10;
          }
          if (uVar8 < uVar14 != uVar8 < (uint)puVar20[4]) {
            puVar5 = param_1;
          }
        }
        uVar14 = (uint)((int)puVar5 - (int)param_1) >> 3;
        param_5 = param_5 + -1;
        local_40 = *puVar5;
        uStack_3c = puVar5[1];
        uStack_38 = puVar5[2];
        uStack_34 = puVar5[3];
        uStack_30 = puVar5[4];
        uStack_2c = puVar5[5];
        if ((local_5c != 0) && ((uint)puVar5[4] <= *(uint *)(local_5c + 0x10))) break;
        if (param_4 < puVar4) goto LAB_01676714;
        param_2 = (undefined4 *)0x0;
        puVar10 = param_3 + (int)puVar4 * 6;
        puVar5 = (undefined4 *)(uVar14 * -0x55555555);
        puVar20 = param_1;
        while( true ) {
          for (; puVar20 < param_1 + (int)puVar5 * 6; puVar20 = puVar20 + 6) {
            puVar10 = puVar10 + -6;
            puVar13 = param_2;
            puVar6 = puVar10;
            if ((uint)puVar20[4] < (uint)param_1[uVar14 * 2 + 4]) {
              puVar13 = (undefined4 *)((int)param_2 + 1);
              puVar6 = param_3;
            }
            puVar6 = puVar6 + (int)param_2 * 6;
            uVar9 = puVar20[1];
            uVar15 = puVar20[2];
            uVar16 = puVar20[3];
            uVar18 = puVar20[4];
            uVar19 = puVar20[5];
            *puVar6 = *puVar20;
            puVar6[1] = uVar9;
            puVar6[2] = uVar15;
            puVar6[3] = uVar16;
            puVar6[4] = uVar18;
            puVar6[5] = uVar19;
            param_2 = puVar13;
          }
          if (puVar5 == puVar4) break;
          uVar9 = *puVar20;
          uVar15 = puVar20[1];
          uVar16 = puVar20[2];
          uVar18 = puVar20[3];
          uVar19 = puVar20[4];
          uVar12 = puVar20[5];
          puVar10 = puVar10 + -6;
          puVar5 = puVar10 + (int)param_2 * 6;
          puVar20 = puVar20 + 6;
          *puVar5 = uVar9;
          puVar5[1] = uVar15;
          puVar5[2] = uVar16;
          puVar5[3] = uVar18;
          puVar5[4] = uVar19;
          puVar5[5] = uVar12;
          puVar5 = puVar4;
        }
        FUN_016dd1aa(param_1,param_3,(int)param_2 * 0x18);
        iVar2 = (int)puVar4 - (int)param_2;
        if (iVar2 != 0) {
          puVar20 = param_3 + (int)puVar4 * 6 + -6;
          puVar10 = param_1 + (int)param_2 * 6;
          iVar7 = iVar2;
          do {
            uVar9 = *puVar20;
            uVar15 = puVar20[1];
            uVar16 = puVar20[2];
            uVar18 = puVar20[3];
            uVar19 = puVar20[4];
            uVar12 = puVar20[5];
            puVar20 = puVar20 + -6;
            iVar7 = iVar7 + -1;
            *puVar10 = uVar9;
            puVar10[1] = uVar15;
            puVar10[2] = uVar16;
            puVar10[3] = uVar18;
            puVar10[4] = uVar19;
            puVar10[5] = uVar12;
            puVar10 = puVar10 + 6;
          } while (iVar7 != 0);
        }
        if (param_2 == (undefined4 *)0x0) break;
        if (puVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_01675d94(param_1 + (int)param_2 * 6,iVar2,param_3,param_4,param_5,&local_40);
        puVar4 = param_2;
        if (param_2 < &DAT_00000021) goto LAB_01675dbc;
      }
      if (param_4 < puVar4) goto LAB_01676714;
      puVar6 = (undefined4 *)0x0;
      puVar10 = param_3 + (int)puVar4 * 6;
      puVar20 = (undefined4 *)(uVar14 * -0x55555555);
      puVar5 = param_1;
      while( true ) {
        puVar11 = puVar6;
        for (puVar13 = puVar5; puVar13 < param_1 + (int)puVar20 * 6; puVar13 = puVar13 + 6) {
          puVar10 = puVar10 + -6;
          puVar6 = puVar11;
          puVar5 = puVar10;
          if ((uint)puVar13[4] <= (uint)param_1[uVar14 * 2 + 4]) {
            puVar6 = (undefined4 *)((int)puVar11 + 1);
            puVar5 = param_3;
          }
          puVar5 = puVar5 + (int)puVar11 * 6;
          uVar9 = puVar13[1];
          uVar15 = puVar13[2];
          uVar16 = puVar13[3];
          uVar18 = puVar13[4];
          uVar19 = puVar13[5];
          *puVar5 = *puVar13;
          puVar5[1] = uVar9;
          puVar5[2] = uVar15;
          puVar5[3] = uVar16;
          puVar5[4] = uVar18;
          puVar5[5] = uVar19;
          puVar11 = puVar6;
        }
        if (puVar20 == puVar4) break;
        puVar5 = puVar13 + 6;
        puVar6 = (undefined4 *)((int)puVar11 + 1);
        puVar20 = param_3 + (int)puVar11 * 6;
        uVar9 = puVar13[1];
        uVar15 = puVar13[2];
        uVar16 = puVar13[3];
        uVar18 = puVar13[4];
        uVar19 = puVar13[5];
        puVar10 = puVar10 + -6;
        *puVar20 = *puVar13;
        puVar20[1] = uVar9;
        puVar20[2] = uVar15;
        puVar20[3] = uVar16;
        puVar20[4] = uVar18;
        puVar20[5] = uVar19;
        puVar20 = puVar4;
      }
      FUN_016dd1aa(param_1,param_3,(int)puVar11 * 0x18);
      param_2 = (undefined4 *)((int)puVar4 - (int)puVar11);
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      param_1 = param_1 + (int)puVar11 * 6;
      puVar5 = param_3 + (int)puVar4 * 6 + -6;
      puVar10 = param_1;
      puVar20 = param_2;
      do {
        uVar9 = *puVar5;
        uVar15 = puVar5[1];
        uVar16 = puVar5[2];
        uVar18 = puVar5[3];
        uVar19 = puVar5[4];
        uVar12 = puVar5[5];
        puVar5 = puVar5 + -6;
        puVar20 = (undefined4 *)((int)puVar20 + -1);
        *puVar10 = uVar9;
        puVar10[1] = uVar15;
        puVar10[2] = uVar16;
        puVar10[3] = uVar18;
        puVar10[4] = uVar19;
        puVar10[5] = uVar12;
        puVar10 = puVar10 + 6;
      } while (puVar20 != (undefined4 *)0x0);
      if (puVar4 < puVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(puVar11,puVar4,puVar4,&DAT_018af348);
      }
      local_5c = 0;
    } while (&DAT_00000020 < param_2);
  }
LAB_01675dbc:
  if (param_2 <= &DAT_00000001) {
    return;
  }
  if (param_2 + 4 <= param_4) {
    uVar14 = (uint)param_2 >> 1;
    if (param_2 < &DAT_00000008) {
      uVar9 = param_1[1];
      uVar15 = param_1[2];
      uVar16 = param_1[3];
      uVar18 = param_1[4];
      uVar19 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar9;
      param_3[2] = uVar15;
      param_3[3] = uVar16;
      param_3[4] = uVar18;
      param_3[5] = uVar19;
      puVar10 = param_1 + uVar14 * 6;
      puVar4 = param_3 + uVar14 * 6;
      uVar8 = 1;
      uVar9 = *puVar10;
      uVar15 = puVar10[1];
      uVar16 = puVar10[2];
      uVar18 = puVar10[3];
      uVar19 = puVar10[4];
      uVar12 = puVar10[5];
    }
    else {
      uVar8 = (uint)((uint)param_1[4] <= (uint)param_1[10]);
      uVar17 = (uint)((uint)param_1[4] > (uint)param_1[10]);
      iVar7 = 0x30;
      iVar2 = 0x48;
      if ((uint)param_1[0x16] < (uint)param_1[0x10]) {
        iVar7 = 0x48;
      }
      puVar10 = (undefined4 *)((int)param_1 + iVar7);
      puVar4 = param_1 + (uVar17 | uVar17 << 1) * 2;
      puVar20 = param_1 + (uVar8 | uVar8 << 1) * 2;
      if ((uint)param_1[0x16] < (uint)param_1[0x10]) {
        iVar2 = 0x30;
      }
      puVar6 = (undefined4 *)((int)param_1 + iVar2);
      uVar17 = puVar10[4];
      uVar8 = puVar4[4];
      puVar5 = puVar10;
      if (uVar17 < uVar8) {
        puVar5 = puVar20;
      }
      puVar11 = puVar20;
      puVar13 = puVar6;
      if ((uint)puVar6[4] < (uint)puVar20[4]) {
        puVar11 = puVar10;
        puVar13 = puVar20;
        puVar5 = puVar6;
      }
      if (uVar17 < uVar8) {
        puVar11 = puVar4;
      }
      uVar3 = puVar11[4];
      if (uVar17 < uVar8) {
        puVar4 = puVar10;
      }
      uVar8 = puVar5[4];
      uVar9 = puVar4[1];
      uVar15 = puVar4[2];
      uVar16 = puVar4[3];
      uVar18 = puVar4[4];
      uVar19 = puVar4[5];
      *param_3 = *puVar4;
      param_3[1] = uVar9;
      param_3[2] = uVar15;
      param_3[3] = uVar16;
      param_3[4] = uVar18;
      param_3[5] = uVar19;
      if (uVar8 < uVar3) {
        puVar4 = puVar11;
        puVar11 = puVar5;
      }
      else {
        puVar4 = puVar5;
      }
      uVar9 = puVar11[1];
      uVar15 = puVar11[2];
      uVar16 = puVar11[3];
      uVar18 = puVar11[4];
      uVar19 = puVar11[5];
      param_3[6] = *puVar11;
      param_3[7] = uVar9;
      param_3[8] = uVar15;
      param_3[9] = uVar16;
      param_3[10] = uVar18;
      param_3[0xb] = uVar19;
      uVar9 = puVar4[1];
      uVar15 = puVar4[2];
      uVar16 = puVar4[3];
      uVar18 = puVar4[4];
      uVar19 = puVar4[5];
      param_3[0xc] = *puVar4;
      param_3[0xd] = uVar9;
      param_3[0xe] = uVar15;
      param_3[0xf] = uVar16;
      param_3[0x10] = uVar18;
      param_3[0x11] = uVar19;
      uVar9 = puVar13[1];
      uVar15 = puVar13[2];
      uVar16 = puVar13[3];
      uVar18 = puVar13[4];
      uVar19 = puVar13[5];
      param_3[0x12] = *puVar13;
      param_3[0x13] = uVar9;
      param_3[0x14] = uVar15;
      param_3[0x15] = uVar16;
      param_3[0x16] = uVar18;
      param_3[0x17] = uVar19;
      iVar7 = 0x30;
      iVar2 = 0x48;
      if ((uint)param_1[uVar14 * 6 + 0x16] < (uint)param_1[uVar14 * 6 + 0x10]) {
        iVar2 = 0x30;
        iVar7 = 0x48;
      }
      puVar6 = (undefined4 *)((int)param_1 + iVar2 + uVar14 * 0x18);
      uVar8 = (uint)((uint)param_1[uVar14 * 6 + 10] < (uint)param_1[uVar14 * 6 + 4]);
      uVar17 = (uint)((uint)param_1[uVar14 * 6 + 10] >= (uint)param_1[uVar14 * 6 + 4]);
      puVar4 = (undefined4 *)((int)param_1 + iVar7 + uVar14 * 0x18);
      puVar20 = param_1 + uVar14 * 6 + (uVar8 | uVar8 << 1) * 2;
      puVar5 = param_1 + uVar14 * 6 + (uVar17 | uVar17 << 1) * 2;
      uVar8 = puVar4[4];
      uVar17 = puVar20[4];
      puVar10 = puVar4;
      if (uVar8 < uVar17) {
        puVar10 = puVar5;
      }
      puVar11 = puVar5;
      puVar13 = puVar6;
      if ((uint)puVar6[4] < (uint)puVar5[4]) {
        puVar11 = puVar4;
        puVar13 = puVar5;
        puVar10 = puVar6;
      }
      if (uVar8 < uVar17) {
        puVar11 = puVar20;
      }
      uVar3 = puVar10[4];
      if (uVar8 < uVar17) {
        puVar20 = puVar4;
      }
      puVar4 = param_3 + uVar14 * 6;
      uVar8 = puVar11[4];
      uVar9 = puVar20[1];
      uVar15 = puVar20[2];
      uVar16 = puVar20[3];
      uVar18 = puVar20[4];
      uVar19 = puVar20[5];
      *puVar4 = *puVar20;
      puVar4[1] = uVar9;
      puVar4[2] = uVar15;
      puVar4[3] = uVar16;
      puVar4[4] = uVar18;
      puVar4[5] = uVar19;
      if (uVar3 < uVar8) {
        puVar20 = puVar11;
        puVar11 = puVar10;
      }
      else {
        puVar20 = puVar10;
      }
      uVar9 = puVar11[1];
      uVar15 = puVar11[2];
      uVar16 = puVar11[3];
      uVar18 = puVar11[4];
      uVar19 = puVar11[5];
      puVar4[6] = *puVar11;
      puVar4[7] = uVar9;
      puVar4[8] = uVar15;
      puVar4[9] = uVar16;
      puVar4[10] = uVar18;
      puVar4[0xb] = uVar19;
      uVar9 = puVar20[1];
      uVar15 = puVar20[2];
      uVar16 = puVar20[3];
      uVar18 = puVar20[4];
      uVar19 = puVar20[5];
      puVar4[0xc] = *puVar20;
      puVar4[0xd] = uVar9;
      puVar4[0xe] = uVar15;
      puVar4[0xf] = uVar16;
      puVar4[0x10] = uVar18;
      puVar4[0x11] = uVar19;
      puVar4 = puVar4 + 0x12;
      uVar9 = *puVar13;
      uVar15 = puVar13[1];
      uVar16 = puVar13[2];
      uVar18 = puVar13[3];
      uVar19 = puVar13[4];
      uVar12 = puVar13[5];
      uVar8 = 4;
    }
    *puVar4 = uVar9;
    puVar4[1] = uVar15;
    puVar4[2] = uVar16;
    puVar4[3] = uVar18;
    puVar4[4] = uVar19;
    puVar4[5] = uVar12;
    if (uVar8 < uVar14) {
      iVar2 = uVar8 * 0x18;
      uVar17 = uVar8;
      do {
        puVar4 = param_1 + uVar17 * 6;
        puVar10 = param_3 + uVar17 * 6;
        uVar9 = puVar4[1];
        uVar15 = puVar4[2];
        uVar16 = puVar4[3];
        uVar18 = puVar4[4];
        uVar19 = puVar4[5];
        *puVar10 = *puVar4;
        puVar10[1] = uVar9;
        puVar10[2] = uVar15;
        puVar10[3] = uVar16;
        puVar10[4] = uVar18;
        puVar10[5] = uVar19;
        uVar3 = puVar10[4];
        if (uVar3 < (uint)puVar10[-2]) {
          uVar9 = puVar10[5];
          iVar7 = iVar2;
          do {
            puVar10 = (undefined4 *)((int)param_3 + iVar7);
            *puVar10 = puVar10[-6];
            puVar10[1] = puVar10[-5];
            puVar10[2] = puVar10[-4];
            puVar10[3] = puVar10[-3];
            puVar10[4] = puVar10[-2];
            puVar10[5] = puVar10[-1];
            if (iVar7 == 0x18) {
              puVar20 = param_3;
              goto LAB_016763f0;
            }
            iVar7 = iVar7 + -0x18;
          } while (uVar3 < (uint)puVar10[-8]);
          puVar20 = (undefined4 *)((int)param_3 + iVar7);
LAB_016763f0:
          uVar15 = puVar4[1];
          uVar16 = puVar4[2];
          uVar18 = puVar4[3];
          *puVar20 = *puVar4;
          puVar20[1] = uVar15;
          puVar20[2] = uVar16;
          puVar20[3] = uVar18;
          puVar10[-2] = uVar3;
          puVar10[-1] = uVar9;
        }
        uVar17 = uVar17 + 1;
        iVar2 = iVar2 + 0x18;
      } while (uVar17 != uVar14);
    }
    puVar4 = param_3 + uVar14 * 6;
    if (uVar8 < (int)param_2 - uVar14) {
      local_4c = 0x18;
      uVar17 = uVar8;
      local_50 = puVar4;
      do {
        puVar20 = param_1 + uVar14 * 6 + uVar17 * 6;
        puVar10 = puVar4 + uVar17 * 6;
        uVar9 = puVar20[1];
        uVar15 = puVar20[2];
        uVar16 = puVar20[3];
        uVar18 = puVar20[4];
        uVar19 = puVar20[5];
        *puVar10 = *puVar20;
        puVar10[1] = uVar9;
        puVar10[2] = uVar15;
        puVar10[3] = uVar16;
        puVar10[4] = uVar18;
        puVar10[5] = uVar19;
        uVar3 = puVar10[4];
        if (uVar3 < (uint)puVar10[-2]) {
          uVar9 = puVar10[5];
          iVar2 = local_4c;
          puVar10 = local_50;
          do {
            puVar5 = puVar10 + uVar8 * 6;
            *puVar5 = puVar5[-6];
            puVar5[1] = puVar5[-5];
            puVar5[2] = puVar5[-4];
            puVar5[3] = puVar5[-3];
            puVar5[4] = puVar5[-2];
            puVar5[5] = puVar5[-1];
            if (uVar8 * 0x18 == iVar2) {
              puVar10 = puVar4;
              goto LAB_016764dc;
            }
            iVar2 = iVar2 + 0x18;
            puVar10 = puVar10 + -6;
          } while (uVar3 < (uint)puVar5[-8]);
          puVar10 = puVar10 + uVar8 * 6;
LAB_016764dc:
          uVar15 = puVar20[1];
          uVar16 = puVar20[2];
          uVar18 = puVar20[3];
          *puVar10 = *puVar20;
          puVar10[1] = uVar15;
          puVar10[2] = uVar16;
          puVar10[3] = uVar18;
          puVar5[-2] = uVar3;
          puVar5[-1] = uVar9;
        }
        uVar17 = uVar17 + 1;
        local_4c = local_4c + -0x18;
        local_50 = local_50 + 6;
      } while (uVar17 != (int)param_2 - uVar14);
    }
    puVar20 = puVar4 + -6;
    iVar2 = 0;
    puVar10 = param_3 + (int)param_2 * 6 + -6;
    do {
      bVar21 = (uint)puVar4[4] < (uint)param_3[4];
      puVar5 = param_3;
      if (bVar21) {
        puVar5 = puVar4;
      }
      puVar6 = (undefined4 *)((int)param_1 + iVar2);
      uVar9 = puVar5[1];
      uVar15 = puVar5[2];
      uVar16 = puVar5[3];
      uVar18 = puVar5[4];
      uVar19 = puVar5[5];
      *puVar6 = *puVar5;
      puVar6[1] = uVar9;
      puVar6[2] = uVar15;
      puVar6[3] = uVar16;
      puVar6[4] = uVar18;
      puVar6[5] = uVar19;
      bVar22 = (uint)puVar10[4] < (uint)puVar20[4];
      puVar5 = puVar10;
      if (bVar22) {
        puVar5 = puVar20;
      }
      puVar6 = (undefined4 *)((int)param_1 + (((int)param_2 * 0x18 + -0x18) - iVar2));
      uVar9 = puVar5[1];
      uVar15 = puVar5[2];
      uVar16 = puVar5[3];
      uVar18 = puVar5[4];
      uVar19 = puVar5[5];
      iVar2 = iVar2 + 0x18;
      *puVar6 = *puVar5;
      puVar6[1] = uVar9;
      puVar6[2] = uVar15;
      puVar6[3] = uVar16;
      puVar6[4] = uVar18;
      puVar6[5] = uVar19;
      param_3 = param_3 + ((uint)!bVar21 | (uint)!bVar21 << 1) * 2;
      puVar4 = puVar4 + ((uint)bVar21 | (uint)bVar21 << 1) * 2;
      iVar7 = 0;
      if (bVar22) {
        iVar7 = -1;
      }
      puVar20 = puVar20 + iVar7 * 6;
      iVar7 = 0;
      if (!bVar22) {
        iVar7 = -1;
      }
      uVar14 = uVar14 - 1;
      puVar10 = puVar10 + iVar7 * 6;
    } while (uVar14 != 0);
    puVar20 = puVar20 + 6;
    if (((uint)param_2 & 1) != 0) {
      bVar21 = puVar20 <= param_3;
      param_1 = (undefined4 *)((int)param_1 + iVar2);
      puVar5 = puVar4;
      if (!bVar21) {
        puVar5 = param_3;
      }
      uVar9 = puVar5[1];
      uVar15 = puVar5[2];
      uVar16 = puVar5[3];
      uVar18 = puVar5[4];
      uVar19 = puVar5[5];
      *param_1 = *puVar5;
      param_1[1] = uVar9;
      param_1[2] = uVar15;
      param_1[3] = uVar16;
      param_1[4] = uVar18;
      param_1[5] = uVar19;
      param_2 = (undefined4 *)((uint)!bVar21 | (uint)!bVar21 << 1);
      puVar4 = puVar4 + ((uint)bVar21 | (uint)bVar21 << 1) * 2;
      param_3 = param_3 + (int)param_2 * 2;
    }
    if (param_3 == puVar20) {
      param_2 = puVar10 + 6;
    }
    if (param_3 == puVar20 && puVar4 == param_2) {
      return;
    }
    FUN_00fb7254();
  }
LAB_01676714:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1676714);
  (*pcVar1)();
}

