// FUN_015d318c @ 015d318c size=2968 calls_out=7 calls_in=2
// strings: 

void FUN_015d318c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5,int param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  bool bVar26;
  byte in_Q;
  undefined4 *local_60;
  int local_5c;
  undefined4 *local_58;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (&DAT_00000020 < param_2) {
    do {
      puVar13 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_015d2a88(param_1,puVar13,param_3,param_4,1);
          return;
        }
        puVar4 = param_1 + ((uint)puVar13 >> 3) * 0x2a;
        puVar18 = param_1 + ((uint)puVar13 >> 3) * 0x18;
        if (&DAT_0000003f < puVar13) {
          puVar14 = (undefined4 *)FUN_015d3d50(param_1,puVar18,puVar4);
        }
        else {
          uVar7 = puVar4[3];
          uVar8 = puVar18[3];
          uVar16 = param_1[3];
          bVar26 = uVar16 <= uVar8 && (uint)((uint)puVar18[2] <= (uint)param_1[2]) <= uVar16 - uVar8
          ;
          puVar14 = puVar4;
          if (bVar26 == (uVar8 <= uVar7 &&
                        (uint)((uint)puVar4[2] <= (uint)puVar18[2]) <= uVar8 - uVar7)) {
            puVar14 = puVar18;
          }
          if (bVar26 != (uVar16 <= uVar7 &&
                        (uint)((uint)puVar4[2] <= (uint)param_1[2]) <= uVar16 - uVar7)) {
            puVar14 = param_1;
          }
        }
        param_5 = param_5 + -1;
        uVar7 = (uint)((int)puVar14 - (int)param_1) >> 3;
        local_40 = *puVar14;
        uStack_3c = puVar14[1];
        uStack_38 = puVar14[2];
        uStack_34 = puVar14[3];
        uStack_30 = puVar14[4];
        uStack_2c = puVar14[5];
        if ((param_6 != 0) &&
           ((uint)puVar14[3] < *(uint *)(param_6 + 0xc) ||
            *(uint *)(param_6 + 0xc) - puVar14[3] <
            (uint)((uint)puVar14[2] <= *(uint *)(param_6 + 8)))) break;
        if (param_4 < puVar13) goto LAB_015d3d0c;
        param_2 = (undefined4 *)0x0;
        puVar18 = param_3 + (int)puVar13 * 6;
        puVar4 = param_1;
        puVar14 = (undefined4 *)(uVar7 * -0x55555555);
        while( true ) {
          puVar19 = puVar4;
          while (puVar19 < param_1 + (int)puVar14 * 6) {
            uVar16 = param_1[uVar7 * 2 + 3];
            puVar18 = puVar18 + -6;
            uVar8 = puVar19[3];
            puVar10 = puVar19 + 6;
            bVar26 = (uint)((uint)param_1[uVar7 * 2 + 2] <= (uint)puVar19[2]) <= uVar8 - uVar16;
            puVar4 = puVar18;
            if (uVar8 <= uVar16 && bVar26) {
              puVar4 = param_3;
            }
            puVar4 = puVar4 + (int)param_2 * 6;
            uVar11 = puVar19[1];
            uVar22 = puVar19[2];
            uVar23 = puVar19[3];
            uVar24 = puVar19[4];
            uVar25 = puVar19[5];
            *puVar4 = *puVar19;
            puVar4[1] = uVar11;
            puVar4[2] = uVar22;
            puVar4[3] = uVar23;
            puVar4[4] = uVar24;
            puVar4[5] = uVar25;
            puVar19 = puVar10;
            if (uVar8 <= uVar16 && bVar26) {
              param_2 = (undefined4 *)((int)param_2 + 1);
            }
          }
          if (puVar14 == puVar13) break;
          uVar11 = puVar19[1];
          uVar22 = puVar19[2];
          uVar23 = puVar19[3];
          uVar24 = puVar19[4];
          uVar25 = puVar19[5];
          puVar18 = puVar18 + -6;
          puVar14 = puVar18 + (int)param_2 * 6;
          puVar4 = puVar19 + 6;
          *puVar14 = *puVar19;
          puVar14[1] = uVar11;
          puVar14[2] = uVar22;
          puVar14[3] = uVar23;
          puVar14[4] = uVar24;
          puVar14[5] = uVar25;
          puVar14 = puVar13;
        }
        FUN_016dd1aa(param_1,param_3,(int)param_2 * 0x18);
        iVar3 = (int)puVar13 - (int)param_2;
        if (iVar3 != 0) {
          puVar4 = param_3 + (int)puVar13 * 6 + -6;
          puVar18 = param_1 + (int)param_2 * 6;
          iVar9 = iVar3;
          do {
            uVar11 = *puVar4;
            uVar22 = puVar4[1];
            uVar23 = puVar4[2];
            uVar24 = puVar4[3];
            uVar25 = puVar4[4];
            uVar20 = puVar4[5];
            puVar4 = puVar4 + -6;
            iVar9 = iVar9 + -1;
            *puVar18 = uVar11;
            puVar18[1] = uVar22;
            puVar18[2] = uVar23;
            puVar18[3] = uVar24;
            puVar18[4] = uVar25;
            puVar18[5] = uVar20;
            puVar18 = puVar18 + 6;
          } while (iVar9 != 0);
        }
        if (param_2 == (undefined4 *)0x0) break;
        if (puVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ab268);
        }
        FUN_015d318c(param_1 + (int)param_2 * 6,iVar3,param_3,param_4,param_5,&local_40);
        puVar13 = param_2;
        if (param_2 < &DAT_00000021) goto LAB_015d31b4;
      }
      if (param_4 < puVar13) goto LAB_015d3d0c;
      puVar18 = (undefined4 *)0x0;
      puVar4 = param_3 + (int)puVar13 * 6;
      puVar14 = (undefined4 *)(uVar7 * -0x55555555);
      puVar19 = param_1;
      while( true ) {
        for (puVar10 = puVar19; puVar10 < param_1 + (int)puVar14 * 6; puVar10 = puVar10 + 6) {
          puVar4 = puVar4 + -6;
          puVar5 = puVar4;
          puVar19 = puVar18;
          if ((uint)puVar10[3] < (uint)param_1[uVar7 * 2 + 3] ||
              (uint)(param_1[uVar7 * 2 + 3] - puVar10[3]) <
              (uint)((uint)puVar10[2] <= (uint)param_1[uVar7 * 2 + 2])) {
            puVar19 = (undefined4 *)((int)puVar18 + 1);
            puVar5 = param_3;
          }
          puVar5 = puVar5 + (int)puVar18 * 6;
          uVar11 = puVar10[1];
          uVar22 = puVar10[2];
          uVar23 = puVar10[3];
          uVar24 = puVar10[4];
          uVar25 = puVar10[5];
          *puVar5 = *puVar10;
          puVar5[1] = uVar11;
          puVar5[2] = uVar22;
          puVar5[3] = uVar23;
          puVar5[4] = uVar24;
          puVar5[5] = uVar25;
          puVar18 = puVar19;
        }
        if (puVar14 == puVar13) break;
        puVar14 = param_3 + (int)puVar18 * 6;
        uVar11 = puVar10[1];
        uVar22 = puVar10[2];
        uVar23 = puVar10[3];
        uVar24 = puVar10[4];
        uVar25 = puVar10[5];
        puVar19 = puVar10 + 6;
        puVar18 = (undefined4 *)((int)puVar18 + 1);
        puVar4 = puVar4 + -6;
        *puVar14 = *puVar10;
        puVar14[1] = uVar11;
        puVar14[2] = uVar22;
        puVar14[3] = uVar23;
        puVar14[4] = uVar24;
        puVar14[5] = uVar25;
        puVar14 = puVar13;
      }
      FUN_016dd1aa(param_1,param_3,(int)puVar18 * 0x18);
      param_2 = (undefined4 *)((int)puVar13 - (int)puVar18);
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      param_1 = param_1 + (int)puVar18 * 6;
      puVar19 = param_3 + (int)puVar13 * 6 + -6;
      puVar4 = param_1;
      puVar14 = param_2;
      do {
        uVar11 = *puVar19;
        uVar22 = puVar19[1];
        uVar23 = puVar19[2];
        uVar24 = puVar19[3];
        uVar25 = puVar19[4];
        uVar20 = puVar19[5];
        puVar19 = puVar19 + -6;
        puVar14 = (undefined4 *)((int)puVar14 + -1);
        *puVar4 = uVar11;
        puVar4[1] = uVar22;
        puVar4[2] = uVar23;
        puVar4[3] = uVar24;
        puVar4[4] = uVar25;
        puVar4[5] = uVar20;
        puVar4 = puVar4 + 6;
      } while (puVar14 != (undefined4 *)0x0);
      if (puVar13 < puVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(puVar18,puVar13,puVar13,&DAT_018ab278);
      }
      param_6 = 0;
    } while (&DAT_00000020 < param_2);
  }
LAB_015d31b4:
  uVar7 = (uint)param_2 >> 1;
  if (uVar7 != 0) {
    if (param_2 < &DAT_00000008) {
      uVar11 = param_1[1];
      uVar22 = param_1[2];
      uVar23 = param_1[3];
      uVar24 = param_1[4];
      uVar25 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar11;
      param_3[2] = uVar22;
      param_3[3] = uVar23;
      param_3[4] = uVar24;
      param_3[5] = uVar25;
      puVar18 = param_1 + uVar7 * 6;
      puVar13 = param_3 + uVar7 * 6;
      uVar11 = puVar18[1];
      uVar22 = puVar18[2];
      uVar23 = puVar18[3];
      uVar24 = puVar18[4];
      uVar25 = puVar18[5];
      *puVar13 = *puVar18;
      puVar13[1] = uVar11;
      puVar13[2] = uVar22;
      puVar13[3] = uVar23;
      puVar13[4] = uVar24;
      puVar13[5] = uVar25;
      uVar8 = 1;
    }
    else {
      uVar12 = param_1[3];
      uVar15 = param_1[9];
      uVar21 = param_1[0xf];
      bVar26 = uVar15 - uVar12 < (uint)((uint)param_1[2] <= (uint)param_1[8]);
      uVar8 = param_1[0x15];
      uVar16 = (uint)(uVar12 < uVar15 || bVar26);
      uVar12 = (uint)(uVar12 >= uVar15 && !bVar26);
      bVar26 = (uint)((uint)param_1[0xe] <= (uint)param_1[0x14]) <= uVar8 - uVar21;
      iVar9 = 0x48;
      iVar3 = 0x30;
      if (uVar8 <= uVar21 && bVar26) {
        iVar9 = 0x30;
      }
      puVar13 = (undefined4 *)((int)param_1 + iVar9);
      if (uVar8 <= uVar21 && bVar26) {
        iVar3 = 0x48;
      }
      puVar14 = (undefined4 *)((int)param_1 + iVar3);
      puVar4 = param_1 + (uVar12 | uVar12 << 1) * 2;
      puVar19 = param_1 + (uVar16 | uVar16 << 1) * 2;
      uVar16 = puVar14[3];
      uVar8 = puVar4[3];
      bVar26 = uVar16 - uVar8 < (uint)((uint)puVar4[2] <= (uint)puVar14[2]);
      puVar18 = puVar14;
      if (uVar8 >= uVar16 && !bVar26) {
        puVar18 = puVar19;
      }
      puVar5 = puVar19;
      puVar10 = puVar13;
      if ((uint)puVar13[3] <= (uint)puVar19[3] &&
          (uint)((uint)puVar19[2] <= (uint)puVar13[2]) <= (uint)(puVar13[3] - puVar19[3])) {
        puVar5 = puVar14;
        puVar10 = puVar19;
        puVar18 = puVar13;
      }
      bVar26 = (((byte)((uVar8 < uVar16 || bVar26) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0;
      if (bVar26) {
        puVar5 = puVar4;
      }
      uVar8 = puVar5[2];
      if (bVar26) {
        puVar4 = puVar14;
      }
      uVar12 = puVar18[2];
      uVar16 = puVar18[3];
      uVar15 = puVar5[3];
      uVar11 = puVar4[1];
      uVar22 = puVar4[2];
      uVar23 = puVar4[3];
      uVar24 = puVar4[4];
      uVar25 = puVar4[5];
      *param_3 = *puVar4;
      param_3[1] = uVar11;
      param_3[2] = uVar22;
      param_3[3] = uVar23;
      param_3[4] = uVar24;
      param_3[5] = uVar25;
      if (uVar15 < uVar16 || uVar16 - uVar15 < (uint)(uVar8 <= uVar12)) {
        puVar13 = puVar18;
      }
      else {
        puVar13 = puVar5;
        puVar5 = puVar18;
      }
      uVar11 = puVar5[1];
      uVar22 = puVar5[2];
      uVar23 = puVar5[3];
      uVar24 = puVar5[4];
      uVar25 = puVar5[5];
      param_3[6] = *puVar5;
      param_3[7] = uVar11;
      param_3[8] = uVar22;
      param_3[9] = uVar23;
      param_3[10] = uVar24;
      param_3[0xb] = uVar25;
      uVar11 = puVar13[1];
      uVar22 = puVar13[2];
      uVar23 = puVar13[3];
      uVar24 = puVar13[4];
      uVar25 = puVar13[5];
      param_3[0xc] = *puVar13;
      param_3[0xd] = uVar11;
      param_3[0xe] = uVar22;
      param_3[0xf] = uVar23;
      param_3[0x10] = uVar24;
      param_3[0x11] = uVar25;
      uVar11 = puVar10[1];
      uVar22 = puVar10[2];
      uVar23 = puVar10[3];
      uVar24 = puVar10[4];
      uVar25 = puVar10[5];
      param_3[0x12] = *puVar10;
      param_3[0x13] = uVar11;
      param_3[0x14] = uVar22;
      param_3[0x15] = uVar23;
      param_3[0x16] = uVar24;
      param_3[0x17] = uVar25;
      uVar16 = param_1[uVar7 * 6 + 3];
      uVar15 = param_1[uVar7 * 6 + 9];
      bVar26 = uVar15 - uVar16 <
               (uint)((uint)param_1[uVar7 * 6 + 2] <= (uint)param_1[uVar7 * 6 + 8]);
      uVar21 = param_1[uVar7 * 6 + 0xf];
      uVar8 = (uint)(uVar16 < uVar15 || bVar26);
      uVar12 = param_1[uVar7 * 6 + 0x15];
      uVar16 = (uint)(uVar16 >= uVar15 && !bVar26);
      bVar26 = (uint)((uint)param_1[uVar7 * 6 + 0xe] <= (uint)param_1[uVar7 * 6 + 0x14]) <=
               uVar12 - uVar21;
      iVar3 = 0x30;
      if (uVar12 <= uVar21 && bVar26) {
        iVar3 = 0x48;
      }
      puVar18 = (undefined4 *)((int)param_1 + iVar3 + uVar7 * 0x18);
      iVar3 = 0x48;
      puVar13 = param_1 + uVar7 * 6 + (uVar16 | uVar16 << 1) * 2;
      if (uVar12 <= uVar21 && bVar26) {
        iVar3 = 0x30;
      }
      puVar19 = (undefined4 *)((int)param_1 + iVar3 + uVar7 * 0x18);
      puVar14 = param_1 + uVar7 * 6 + (uVar8 | uVar8 << 1) * 2;
      bVar26 = (uint)puVar18[3] <= (uint)puVar13[3];
      bVar2 = (uint)((uint)puVar13[2] <= (uint)puVar18[2]) <= (uint)(puVar18[3] - puVar13[3]);
      puVar4 = puVar18;
      if (bVar26 && bVar2) {
        puVar4 = puVar14;
      }
      puVar5 = puVar14;
      puVar10 = puVar19;
      if ((uint)puVar19[3] <= (uint)puVar14[3] &&
          (uint)((uint)puVar14[2] <= (uint)puVar19[2]) <= (uint)(puVar19[3] - puVar14[3])) {
        puVar5 = puVar18;
        puVar10 = puVar14;
        puVar4 = puVar19;
      }
      if (bVar26 && bVar2) {
        puVar5 = puVar13;
      }
      uVar16 = puVar5[2];
      uVar12 = puVar5[3];
      uVar8 = puVar4[3];
      if (bVar26 && bVar2) {
        puVar13 = puVar18;
      }
      uVar15 = puVar4[2];
      puVar18 = param_3 + uVar7 * 6;
      uVar11 = puVar13[1];
      uVar22 = puVar13[2];
      uVar23 = puVar13[3];
      uVar24 = puVar13[4];
      uVar25 = puVar13[5];
      *puVar18 = *puVar13;
      puVar18[1] = uVar11;
      puVar18[2] = uVar22;
      puVar18[3] = uVar23;
      puVar18[4] = uVar24;
      puVar18[5] = uVar25;
      if (uVar12 < uVar8 || uVar8 - uVar12 < (uint)(uVar16 <= uVar15)) {
        puVar13 = puVar4;
      }
      else {
        puVar13 = puVar5;
        puVar5 = puVar4;
      }
      uVar11 = puVar5[1];
      uVar22 = puVar5[2];
      uVar23 = puVar5[3];
      uVar24 = puVar5[4];
      uVar25 = puVar5[5];
      puVar18[6] = *puVar5;
      puVar18[7] = uVar11;
      puVar18[8] = uVar22;
      puVar18[9] = uVar23;
      puVar18[10] = uVar24;
      puVar18[0xb] = uVar25;
      uVar11 = puVar13[1];
      uVar22 = puVar13[2];
      uVar23 = puVar13[3];
      uVar24 = puVar13[4];
      uVar25 = puVar13[5];
      puVar18[0xc] = *puVar13;
      puVar18[0xd] = uVar11;
      puVar18[0xe] = uVar22;
      puVar18[0xf] = uVar23;
      puVar18[0x10] = uVar24;
      puVar18[0x11] = uVar25;
      uVar11 = puVar10[1];
      uVar22 = puVar10[2];
      uVar23 = puVar10[3];
      uVar24 = puVar10[4];
      uVar25 = puVar10[5];
      puVar18[0x12] = *puVar10;
      puVar18[0x13] = uVar11;
      puVar18[0x14] = uVar22;
      puVar18[0x15] = uVar23;
      puVar18[0x16] = uVar24;
      puVar18[0x17] = uVar25;
      uVar8 = 4;
    }
    if (uVar8 < uVar7) {
      iVar3 = uVar8 * -0x18 + 0x18;
      uVar16 = uVar8;
      do {
        puVar18 = param_1 + uVar16 * 6;
        puVar13 = param_3 + uVar16 * 6;
        uVar11 = puVar18[1];
        uVar22 = puVar18[2];
        uVar23 = puVar18[3];
        uVar24 = puVar18[4];
        uVar25 = puVar18[5];
        *puVar13 = *puVar18;
        puVar13[1] = uVar11;
        puVar13[2] = uVar22;
        puVar13[3] = uVar23;
        puVar13[4] = uVar24;
        puVar13[5] = uVar25;
        uVar15 = puVar13[2];
        uVar12 = puVar13[3];
        if (uVar12 <= (uint)puVar13[-3] &&
            (uint)((uint)puVar13[-4] <= uVar15) <= uVar12 - puVar13[-3]) {
          uVar11 = *puVar13;
          uVar23 = puVar13[1];
          uVar22 = puVar13[5];
          uVar24 = puVar13[4];
          iVar9 = iVar3;
          do {
            puVar18 = puVar13;
            puVar13 = puVar18 + -6;
            *puVar18 = *puVar13;
            puVar18[1] = puVar18[-5];
            puVar18[2] = puVar18[-4];
            puVar18[3] = puVar18[-3];
            puVar18[4] = puVar18[-2];
            puVar18[5] = puVar18[-1];
            if (iVar9 == 0) {
              puVar13 = param_3;
              break;
            }
            iVar9 = iVar9 + 0x18;
          } while (uVar12 <= (uint)puVar18[-9] &&
                   (uint)((uint)puVar18[-10] <= uVar15) <= uVar12 - puVar18[-9]);
          *puVar13 = uVar11;
          puVar13[1] = uVar23;
          puVar18[-2] = uVar24;
          puVar18[-3] = uVar12;
          puVar18[-4] = uVar15;
          puVar18[-1] = uVar22;
        }
        uVar16 = uVar16 + 1;
        iVar3 = iVar3 + -0x18;
      } while (uVar16 != uVar7);
    }
    puVar13 = param_3 + uVar7 * 6;
    if (uVar8 < (int)param_2 - uVar7) {
      local_58 = param_3 + uVar7 * 6 + -10;
      local_5c = 0x18;
      uVar16 = uVar8;
      local_60 = puVar13;
      do {
        puVar18 = param_1 + uVar7 * 6 + uVar16 * 6;
        puVar4 = puVar13 + uVar16 * 6;
        uVar11 = puVar18[1];
        uVar22 = puVar18[2];
        uVar23 = puVar18[3];
        uVar24 = puVar18[4];
        uVar25 = puVar18[5];
        *puVar4 = *puVar18;
        puVar4[1] = uVar11;
        puVar4[2] = uVar22;
        puVar4[3] = uVar23;
        puVar4[4] = uVar24;
        puVar4[5] = uVar25;
        uVar15 = puVar4[2];
        uVar12 = puVar4[3];
        if (uVar12 <= (uint)puVar4[-3] && (uint)((uint)puVar4[-4] <= uVar15) <= uVar12 - puVar4[-3])
        {
          uVar11 = *puVar4;
          uVar23 = puVar4[1];
          uVar24 = puVar4[4];
          uVar22 = puVar4[5];
          iVar3 = local_5c;
          puVar18 = local_58;
          puVar4 = local_60;
          do {
            puVar14 = puVar4 + uVar8 * 6;
            *puVar14 = puVar14[-6];
            puVar14[1] = puVar14[-5];
            puVar14[2] = puVar14[-4];
            puVar14[3] = puVar14[-3];
            puVar14[4] = puVar14[-2];
            puVar14[5] = puVar14[-1];
            if (uVar8 * 0x18 == iVar3) {
              puVar18 = puVar13;
              goto LAB_015d3a28;
            }
            puVar17 = puVar18 + uVar8 * 6;
            iVar3 = iVar3 + 0x18;
            uVar21 = puVar17[1];
            puVar4 = puVar4 + -6;
            puVar18 = puVar18 + -6;
          } while (uVar12 <= uVar21 && (uint)(*puVar17 <= uVar15) <= uVar12 - uVar21);
          puVar18 = puVar4 + uVar8 * 6;
LAB_015d3a28:
          *puVar18 = uVar11;
          puVar18[1] = uVar23;
          puVar14[-4] = uVar15;
          puVar14[-3] = uVar12;
          puVar14[-2] = uVar24;
          puVar14[-1] = uVar22;
        }
        uVar16 = uVar16 + 1;
        local_5c = local_5c + -0x18;
        local_58 = local_58 + 6;
        local_60 = local_60 + 6;
      } while (uVar16 != (int)param_2 - uVar7);
    }
    puVar4 = puVar13 + -6;
    iVar3 = 0;
    puVar18 = param_3 + (int)param_2 * 6 + -6;
    do {
      uVar16 = param_3[3];
      uVar12 = puVar13[3];
      bVar26 = uVar12 - uVar16 < (uint)((uint)param_3[2] <= (uint)puVar13[2]);
      uVar8 = (uint)(uVar16 < uVar12 || bVar26);
      uVar16 = (uint)(uVar16 >= uVar12 && !bVar26);
      puVar14 = param_3;
      if (uVar16 != 0) {
        puVar14 = puVar13;
      }
      uVar11 = puVar14[1];
      uVar22 = puVar14[2];
      uVar23 = puVar14[3];
      uVar24 = puVar14[4];
      uVar25 = puVar14[5];
      puVar19 = (undefined4 *)((int)param_1 + iVar3);
      *puVar19 = *puVar14;
      puVar19[1] = uVar11;
      puVar19[2] = uVar22;
      puVar19[3] = uVar23;
      puVar19[4] = uVar24;
      puVar19[5] = uVar25;
      bVar26 = (uint)puVar18[3] <= (uint)puVar4[3];
      bVar2 = (uint)((uint)puVar4[2] <= (uint)puVar18[2]) <= (uint)(puVar18[3] - puVar4[3]);
      puVar14 = puVar18;
      if (bVar26 && bVar2) {
        puVar14 = puVar4;
      }
      puVar19 = (undefined4 *)((int)param_1 + (((int)param_2 * 0x18 + -0x18) - iVar3));
      uVar11 = puVar14[1];
      uVar22 = puVar14[2];
      uVar23 = puVar14[3];
      uVar24 = puVar14[4];
      uVar25 = puVar14[5];
      iVar3 = iVar3 + 0x18;
      *puVar19 = *puVar14;
      puVar19[1] = uVar11;
      puVar19[2] = uVar22;
      puVar19[3] = uVar23;
      puVar19[4] = uVar24;
      puVar19[5] = uVar25;
      iVar9 = 0;
      if (!bVar26 || !bVar2) {
        iVar9 = -1;
      }
      iVar6 = 0;
      if (bVar26 && bVar2) {
        iVar6 = -1;
      }
      puVar18 = puVar18 + iVar9 * 6;
      puVar4 = puVar4 + iVar6 * 6;
      param_3 = param_3 + (uVar8 | uVar8 << 1) * 2;
      puVar13 = puVar13 + (uVar16 | uVar16 << 1) * 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar4 = puVar4 + 6;
    if (((uint)param_2 & 1) != 0) {
      bVar26 = puVar4 <= param_3;
      param_1 = (undefined4 *)((int)param_1 + iVar3);
      puVar14 = puVar13;
      if (!bVar26) {
        puVar14 = param_3;
      }
      uVar11 = puVar14[1];
      uVar22 = puVar14[2];
      uVar23 = puVar14[3];
      uVar24 = puVar14[4];
      uVar25 = puVar14[5];
      *param_1 = *puVar14;
      param_1[1] = uVar11;
      param_1[2] = uVar22;
      param_1[3] = uVar23;
      param_1[4] = uVar24;
      param_1[5] = uVar25;
      param_2 = (undefined4 *)((uint)!bVar26 | (uint)!bVar26 << 1);
      puVar13 = puVar13 + ((uint)bVar26 | (uint)bVar26 << 1) * 2;
      param_3 = param_3 + (int)param_2 * 2;
    }
    if (param_3 == puVar4) {
      param_2 = puVar18 + 6;
    }
    if (param_3 != puVar4 || puVar13 != param_2) {
      FUN_00fb7254();
LAB_015d3d0c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15d3d0c);
      (*pcVar1)();
    }
  }
  return;
}

