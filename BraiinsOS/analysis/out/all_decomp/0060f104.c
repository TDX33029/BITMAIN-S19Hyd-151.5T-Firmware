// FUN_0060f104 @ 0060f104 size=2896 calls_out=7 calls_in=2
// strings: 

void FUN_0060f104(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  bool bVar26;
  byte in_Q;
  undefined4 *local_5c;
  int local_58;
  uint local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0x20 < param_2) {
    local_50 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_0060c588(param_1,local_50,param_3,param_4,1);
          return;
        }
        puVar3 = param_1 + (local_50 >> 3) * 0x2a;
        puVar13 = param_1 + (local_50 >> 3) * 0x18;
        if (local_50 < 0x40) {
          uVar6 = puVar3[3];
          uVar7 = puVar13[3];
          uVar20 = param_1[3];
          bVar26 = uVar20 <= uVar7 && (uint)((uint)puVar13[2] <= (uint)param_1[2]) <= uVar20 - uVar7
          ;
          puVar9 = puVar3;
          if (bVar26 == (uVar7 <= uVar6 &&
                        (uint)((uint)puVar3[2] <= (uint)puVar13[2]) <= uVar7 - uVar6)) {
            puVar9 = puVar13;
          }
          if (bVar26 != (uVar20 <= uVar6 &&
                        (uint)((uint)puVar3[2] <= (uint)param_1[2]) <= uVar20 - uVar6)) {
            puVar9 = param_1;
          }
        }
        else {
          puVar9 = (undefined4 *)FUN_00618f38(param_1,puVar13,puVar3);
        }
        uVar6 = (uint)((int)puVar9 - (int)param_1) >> 3;
        param_5 = param_5 + -1;
        local_40 = *puVar9;
        uStack_3c = puVar9[1];
        uStack_38 = puVar9[2];
        uStack_34 = puVar9[3];
        uStack_30 = puVar9[4];
        uStack_2c = puVar9[5];
        if ((param_6 != 0) &&
           ((uint)puVar9[3] < *(uint *)(param_6 + 0xc) ||
            *(uint *)(param_6 + 0xc) - puVar9[3] < (uint)((uint)puVar9[2] <= *(uint *)(param_6 + 8))
           )) break;
        if (param_4 < local_50) goto LAB_0060fc3c;
        param_2 = 0;
        puVar13 = param_3 + local_50 * 6;
        puVar3 = param_1;
        uVar7 = uVar6 * -0x55555555;
        while( true ) {
          for (puVar9 = puVar3; puVar9 < param_1 + uVar7 * 6; puVar9 = puVar9 + 6) {
            puVar13 = puVar13 + -6;
            puVar3 = puVar13;
            uVar20 = param_2;
            if ((uint)puVar9[3] <= (uint)param_1[uVar6 * 2 + 3] &&
                (uint)((uint)param_1[uVar6 * 2 + 2] <= (uint)puVar9[2]) <=
                (uint)(puVar9[3] - param_1[uVar6 * 2 + 3])) {
              uVar20 = param_2 + 1;
              puVar3 = param_3;
            }
            puVar3 = puVar3 + param_2 * 6;
            uVar12 = puVar9[1];
            uVar18 = puVar9[2];
            uVar19 = puVar9[3];
            uVar21 = puVar9[4];
            uVar23 = puVar9[5];
            *puVar3 = *puVar9;
            puVar3[1] = uVar12;
            puVar3[2] = uVar18;
            puVar3[3] = uVar19;
            puVar3[4] = uVar21;
            puVar3[5] = uVar23;
            param_2 = uVar20;
          }
          if (uVar7 == local_50) break;
          puVar13 = puVar13 + -6;
          uVar12 = puVar9[1];
          uVar18 = puVar9[2];
          uVar19 = puVar9[3];
          uVar21 = puVar9[4];
          uVar23 = puVar9[5];
          puVar16 = puVar13 + param_2 * 6;
          puVar3 = puVar9 + 6;
          *puVar16 = *puVar9;
          puVar16[1] = uVar12;
          puVar16[2] = uVar18;
          puVar16[3] = uVar19;
          puVar16[4] = uVar21;
          puVar16[5] = uVar23;
          uVar7 = local_50;
        }
        FUN_016dd1aa(param_1,param_3,param_2 * 0x18);
        iVar8 = local_50 - param_2;
        if (iVar8 != 0) {
          puVar3 = param_3 + local_50 * 6 + -6;
          puVar13 = param_1 + param_2 * 6;
          iVar11 = iVar8;
          do {
            uVar12 = *puVar3;
            uVar18 = puVar3[1];
            uVar19 = puVar3[2];
            uVar21 = puVar3[3];
            uVar23 = puVar3[4];
            uVar17 = puVar3[5];
            puVar3 = puVar3 + -6;
            iVar11 = iVar11 + -1;
            *puVar13 = uVar12;
            puVar13[1] = uVar18;
            puVar13[2] = uVar19;
            puVar13[3] = uVar21;
            puVar13[4] = uVar23;
            puVar13[5] = uVar17;
            puVar13 = puVar13 + 6;
          } while (iVar11 != 0);
        }
        if (param_2 == 0) break;
        if (local_50 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_0060f104(param_1 + param_2 * 6,iVar8,param_3,param_4,param_5,&local_40);
        local_50 = param_2;
        if (param_2 < 0x21) goto LAB_0060f124;
      }
      if (param_4 < local_50) goto LAB_0060fc3c;
      uVar7 = 0;
      puVar13 = param_3 + local_50 * 6;
      uVar20 = uVar6 * -0x55555555;
      puVar3 = param_1;
      while( true ) {
        for (puVar9 = puVar3; puVar9 < param_1 + uVar20 * 6; puVar9 = puVar9 + 6) {
          puVar13 = puVar13 + -6;
          uVar10 = uVar7;
          puVar3 = puVar13;
          if ((uint)puVar9[3] < (uint)param_1[uVar6 * 2 + 3] ||
              (uint)(param_1[uVar6 * 2 + 3] - puVar9[3]) <
              (uint)((uint)puVar9[2] <= (uint)param_1[uVar6 * 2 + 2])) {
            uVar10 = uVar7 + 1;
            puVar3 = param_3;
          }
          puVar3 = puVar3 + uVar7 * 6;
          uVar12 = puVar9[1];
          uVar18 = puVar9[2];
          uVar19 = puVar9[3];
          uVar21 = puVar9[4];
          uVar23 = puVar9[5];
          *puVar3 = *puVar9;
          puVar3[1] = uVar12;
          puVar3[2] = uVar18;
          puVar3[3] = uVar19;
          puVar3[4] = uVar21;
          puVar3[5] = uVar23;
          uVar7 = uVar10;
        }
        if (uVar20 == local_50) break;
        puVar16 = param_3 + uVar7 * 6;
        uVar12 = puVar9[1];
        uVar18 = puVar9[2];
        uVar19 = puVar9[3];
        uVar21 = puVar9[4];
        uVar23 = puVar9[5];
        puVar3 = puVar9 + 6;
        uVar7 = uVar7 + 1;
        puVar13 = puVar13 + -6;
        *puVar16 = *puVar9;
        puVar16[1] = uVar12;
        puVar16[2] = uVar18;
        puVar16[3] = uVar19;
        puVar16[4] = uVar21;
        puVar16[5] = uVar23;
        uVar20 = local_50;
      }
      FUN_016dd1aa(param_1,param_3,uVar7 * 0x18);
      param_2 = local_50 - uVar7;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar7 * 6;
      puVar3 = param_3 + local_50 * 6 + -6;
      puVar13 = param_1;
      uVar6 = param_2;
      do {
        uVar12 = *puVar3;
        uVar18 = puVar3[1];
        uVar19 = puVar3[2];
        uVar21 = puVar3[3];
        uVar23 = puVar3[4];
        uVar17 = puVar3[5];
        puVar3 = puVar3 + -6;
        uVar6 = uVar6 - 1;
        *puVar13 = uVar12;
        puVar13[1] = uVar18;
        puVar13[2] = uVar19;
        puVar13[3] = uVar21;
        puVar13[4] = uVar23;
        puVar13[5] = uVar17;
        puVar13 = puVar13 + 6;
      } while (uVar6 != 0);
      if (local_50 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar7,local_50,local_50,&DAT_018af348);
      }
      param_6 = 0;
      local_50 = param_2;
    } while (0x20 < param_2);
  }
LAB_0060f124:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar6 = param_2 >> 1;
    if (param_2 < 8) {
      uVar12 = param_1[1];
      uVar18 = param_1[2];
      uVar19 = param_1[3];
      uVar21 = param_1[4];
      uVar23 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar12;
      param_3[2] = uVar18;
      param_3[3] = uVar19;
      param_3[4] = uVar21;
      param_3[5] = uVar23;
      puVar3 = param_1 + uVar6 * 6;
      puVar13 = param_3 + uVar6 * 6;
      uVar12 = puVar3[1];
      uVar18 = puVar3[2];
      uVar19 = puVar3[3];
      uVar21 = puVar3[4];
      uVar23 = puVar3[5];
      *puVar13 = *puVar3;
      puVar13[1] = uVar12;
      puVar13[2] = uVar18;
      puVar13[3] = uVar19;
      puVar13[4] = uVar21;
      puVar13[5] = uVar23;
      uVar7 = 1;
    }
    else {
      uVar10 = param_1[3];
      uVar7 = param_1[9];
      bVar26 = (uint)((uint)param_1[2] <= (uint)param_1[8]) <= uVar7 - uVar10;
      uVar20 = (uint)(uVar7 <= uVar10 && bVar26);
      uVar7 = (uint)(uVar7 > uVar10 || !bVar26);
      iVar8 = 0x30;
      iVar11 = 0x48;
      if ((uint)param_1[0x15] <= (uint)param_1[0xf] &&
          (uint)((uint)param_1[0xe] <= (uint)param_1[0x14]) <= (uint)(param_1[0x15] - param_1[0xf]))
      {
        iVar8 = 0x48;
        iVar11 = 0x30;
      }
      puVar16 = (undefined4 *)((int)param_1 + iVar11);
      puVar9 = (undefined4 *)((int)param_1 + iVar8);
      puVar3 = param_1 + (uVar20 | uVar20 << 1) * 2;
      puVar4 = param_1 + (uVar7 | uVar7 << 1) * 2;
      uVar20 = puVar9[3];
      uVar7 = puVar3[3];
      bVar26 = uVar20 - uVar7 < (uint)((uint)puVar3[2] <= (uint)puVar9[2]);
      puVar13 = puVar9;
      if (uVar7 >= uVar20 && !bVar26) {
        puVar13 = puVar4;
      }
      puVar24 = puVar4;
      puVar25 = puVar16;
      if ((uint)puVar16[3] <= (uint)puVar4[3] &&
          (uint)((uint)puVar4[2] <= (uint)puVar16[2]) <= (uint)(puVar16[3] - puVar4[3])) {
        puVar24 = puVar9;
        puVar25 = puVar4;
        puVar13 = puVar16;
      }
      bVar26 = (((byte)((uVar7 < uVar20 || bVar26) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0;
      if (bVar26) {
        puVar24 = puVar3;
      }
      uVar7 = puVar24[2];
      if (bVar26) {
        puVar3 = puVar9;
      }
      uVar10 = puVar13[2];
      uVar20 = puVar13[3];
      uVar15 = puVar24[3];
      uVar12 = puVar3[1];
      uVar18 = puVar3[2];
      uVar19 = puVar3[3];
      uVar21 = puVar3[4];
      uVar23 = puVar3[5];
      *param_3 = *puVar3;
      param_3[1] = uVar12;
      param_3[2] = uVar18;
      param_3[3] = uVar19;
      param_3[4] = uVar21;
      param_3[5] = uVar23;
      if (uVar15 < uVar20 || uVar20 - uVar15 < (uint)(uVar7 <= uVar10)) {
        puVar3 = puVar13;
      }
      else {
        puVar3 = puVar24;
        puVar24 = puVar13;
      }
      uVar12 = puVar24[1];
      uVar18 = puVar24[2];
      uVar19 = puVar24[3];
      uVar21 = puVar24[4];
      uVar23 = puVar24[5];
      param_3[6] = *puVar24;
      param_3[7] = uVar12;
      param_3[8] = uVar18;
      param_3[9] = uVar19;
      param_3[10] = uVar21;
      param_3[0xb] = uVar23;
      uVar12 = puVar3[1];
      uVar18 = puVar3[2];
      uVar19 = puVar3[3];
      uVar21 = puVar3[4];
      uVar23 = puVar3[5];
      param_3[0xc] = *puVar3;
      param_3[0xd] = uVar12;
      param_3[0xe] = uVar18;
      param_3[0xf] = uVar19;
      param_3[0x10] = uVar21;
      param_3[0x11] = uVar23;
      uVar12 = puVar25[1];
      uVar18 = puVar25[2];
      uVar19 = puVar25[3];
      uVar21 = puVar25[4];
      uVar23 = puVar25[5];
      param_3[0x12] = *puVar25;
      param_3[0x13] = uVar12;
      param_3[0x14] = uVar18;
      param_3[0x15] = uVar19;
      param_3[0x16] = uVar21;
      param_3[0x17] = uVar23;
      uVar15 = param_1[uVar6 * 6 + 3];
      uVar22 = param_1[uVar6 * 6 + 9];
      bVar26 = uVar22 - uVar15 <
               (uint)((uint)param_1[uVar6 * 6 + 2] <= (uint)param_1[uVar6 * 6 + 8]);
      uVar7 = (uint)(uVar15 < uVar22 || bVar26);
      uVar10 = param_1[uVar6 * 6 + 0xf];
      uVar20 = param_1[uVar6 * 6 + 0x15];
      uVar15 = (uint)(uVar15 >= uVar22 && !bVar26);
      bVar26 = (uint)((uint)param_1[uVar6 * 6 + 0xe] <= (uint)param_1[uVar6 * 6 + 0x14]) <=
               uVar20 - uVar10;
      iVar8 = 0x30;
      puVar13 = param_1 + uVar6 * 6 + (uVar7 | uVar7 << 1) * 2;
      if (uVar20 <= uVar10 && bVar26) {
        iVar8 = 0x48;
      }
      puVar9 = (undefined4 *)((int)param_1 + iVar8 + uVar6 * 0x18);
      iVar8 = 0x48;
      puVar3 = param_1 + uVar6 * 6 + (uVar15 | uVar15 << 1) * 2;
      if (uVar20 <= uVar10 && bVar26) {
        iVar8 = 0x30;
      }
      puVar4 = (undefined4 *)((int)param_1 + iVar8 + uVar6 * 0x18);
      uVar20 = puVar9[3];
      uVar7 = puVar3[3];
      bVar26 = (uint)((uint)puVar3[2] <= (uint)puVar9[2]) <= uVar20 - uVar7;
      puVar16 = puVar9;
      if (uVar20 <= uVar7 && bVar26) {
        puVar16 = puVar13;
      }
      puVar25 = puVar13;
      puVar24 = puVar4;
      if ((uint)puVar4[3] <= (uint)puVar13[3] &&
          (uint)((uint)puVar13[2] <= (uint)puVar4[2]) <= (uint)(puVar4[3] - puVar13[3])) {
        puVar25 = puVar9;
        puVar24 = puVar13;
        puVar16 = puVar4;
      }
      uVar10 = puVar16[3];
      uVar15 = puVar16[2];
      puVar13 = puVar3;
      if (uVar20 <= uVar7 && bVar26) {
        puVar13 = puVar9;
        puVar25 = puVar3;
      }
      uVar7 = puVar25[2];
      puVar3 = param_3 + uVar6 * 6;
      uVar20 = puVar25[3];
      uVar12 = puVar13[1];
      uVar18 = puVar13[2];
      uVar19 = puVar13[3];
      uVar21 = puVar13[4];
      uVar23 = puVar13[5];
      *puVar3 = *puVar13;
      puVar3[1] = uVar12;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar3[4] = uVar21;
      puVar3[5] = uVar23;
      if (uVar20 < uVar10 || uVar10 - uVar20 < (uint)(uVar7 <= uVar15)) {
        puVar13 = puVar16;
      }
      else {
        puVar13 = puVar25;
        puVar25 = puVar16;
      }
      uVar12 = puVar25[1];
      uVar18 = puVar25[2];
      uVar19 = puVar25[3];
      uVar21 = puVar25[4];
      uVar23 = puVar25[5];
      puVar3[6] = *puVar25;
      puVar3[7] = uVar12;
      puVar3[8] = uVar18;
      puVar3[9] = uVar19;
      puVar3[10] = uVar21;
      puVar3[0xb] = uVar23;
      uVar12 = puVar13[1];
      uVar18 = puVar13[2];
      uVar19 = puVar13[3];
      uVar21 = puVar13[4];
      uVar23 = puVar13[5];
      puVar3[0xc] = *puVar13;
      puVar3[0xd] = uVar12;
      puVar3[0xe] = uVar18;
      puVar3[0xf] = uVar19;
      puVar3[0x10] = uVar21;
      puVar3[0x11] = uVar23;
      uVar12 = puVar24[1];
      uVar18 = puVar24[2];
      uVar19 = puVar24[3];
      uVar21 = puVar24[4];
      uVar23 = puVar24[5];
      puVar3[0x12] = *puVar24;
      puVar3[0x13] = uVar12;
      puVar3[0x14] = uVar18;
      puVar3[0x15] = uVar19;
      puVar3[0x16] = uVar21;
      puVar3[0x17] = uVar23;
      uVar7 = 4;
    }
    if (uVar7 < uVar6) {
      iVar8 = uVar7 * -0x18 + 0x18;
      uVar20 = uVar7;
      do {
        puVar3 = param_1 + uVar20 * 6;
        puVar13 = param_3 + uVar20 * 6;
        uVar12 = puVar3[1];
        uVar18 = puVar3[2];
        uVar19 = puVar3[3];
        uVar21 = puVar3[4];
        uVar23 = puVar3[5];
        *puVar13 = *puVar3;
        puVar13[1] = uVar12;
        puVar13[2] = uVar18;
        puVar13[3] = uVar19;
        puVar13[4] = uVar21;
        puVar13[5] = uVar23;
        uVar15 = puVar13[2];
        uVar10 = puVar13[3];
        if (uVar10 <= (uint)puVar13[-3] &&
            (uint)((uint)puVar13[-4] <= uVar15) <= uVar10 - puVar13[-3]) {
          uVar12 = *puVar13;
          uVar19 = puVar13[1];
          uVar21 = puVar13[4];
          uVar18 = puVar13[5];
          iVar11 = iVar8;
          do {
            puVar3 = puVar13;
            puVar13 = puVar3 + -6;
            *puVar3 = *puVar13;
            puVar3[1] = puVar3[-5];
            puVar3[2] = puVar3[-4];
            puVar3[3] = puVar3[-3];
            puVar3[4] = puVar3[-2];
            puVar3[5] = puVar3[-1];
            if (iVar11 == 0) {
              puVar13 = param_3;
              break;
            }
            iVar11 = iVar11 + 0x18;
          } while (uVar10 <= (uint)puVar3[-9] &&
                   (uint)((uint)puVar3[-10] <= uVar15) <= uVar10 - puVar3[-9]);
          *puVar13 = uVar12;
          puVar13[1] = uVar19;
          puVar3[-2] = uVar21;
          puVar3[-3] = uVar10;
          puVar3[-4] = uVar15;
          puVar3[-1] = uVar18;
        }
        iVar8 = iVar8 + -0x18;
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar6);
    }
    puVar13 = param_3 + uVar6 * 6;
    if (uVar7 < param_2 - uVar6) {
      puVar3 = param_3 + uVar6 * 6 + -10;
      local_58 = 0x18;
      uVar20 = uVar7;
      local_5c = puVar13;
      do {
        puVar16 = param_1 + uVar6 * 6 + uVar20 * 6;
        puVar9 = puVar13 + uVar20 * 6;
        uVar12 = puVar16[1];
        uVar18 = puVar16[2];
        uVar19 = puVar16[3];
        uVar21 = puVar16[4];
        uVar23 = puVar16[5];
        *puVar9 = *puVar16;
        puVar9[1] = uVar12;
        puVar9[2] = uVar18;
        puVar9[3] = uVar19;
        puVar9[4] = uVar21;
        puVar9[5] = uVar23;
        uVar15 = puVar9[2];
        uVar10 = puVar9[3];
        if (uVar10 <= (uint)puVar9[-3] && (uint)((uint)puVar9[-4] <= uVar15) <= uVar10 - puVar9[-3])
        {
          uVar12 = *puVar9;
          uVar19 = puVar9[1];
          uVar18 = puVar9[4];
          uVar21 = puVar9[5];
          puVar9 = local_5c;
          puVar16 = puVar3;
          iVar8 = local_58;
          do {
            puVar4 = puVar9 + uVar7 * 6;
            *puVar4 = puVar4[-6];
            puVar4[1] = puVar4[-5];
            puVar4[2] = puVar4[-4];
            puVar4[3] = puVar4[-3];
            puVar4[4] = puVar4[-2];
            puVar4[5] = puVar4[-1];
            if (uVar7 * 0x18 == iVar8) {
              puVar9 = puVar13;
              goto LAB_0060f97c;
            }
            puVar14 = puVar16 + uVar7 * 6;
            iVar8 = iVar8 + 0x18;
            puVar9 = puVar9 + -6;
            uVar22 = puVar14[1];
            puVar16 = puVar16 + -6;
          } while (uVar10 <= uVar22 && (uint)(*puVar14 <= uVar15) <= uVar10 - uVar22);
          puVar9 = puVar9 + uVar7 * 6;
LAB_0060f97c:
          *puVar9 = uVar12;
          puVar9[1] = uVar19;
          puVar4[-4] = uVar15;
          puVar4[-1] = uVar21;
          puVar4[-2] = uVar18;
          puVar4[-3] = uVar10;
        }
        puVar3 = puVar3 + 6;
        uVar20 = uVar20 + 1;
        local_58 = local_58 + -0x18;
        local_5c = local_5c + 6;
      } while (uVar20 != param_2 - uVar6);
    }
    puVar9 = puVar13 + -6;
    iVar8 = 0;
    puVar3 = param_3 + param_2 * 6 + -6;
    do {
      uVar7 = param_3[3];
      uVar10 = puVar13[3];
      puVar4 = (undefined4 *)((int)param_1 + iVar8);
      bVar26 = uVar10 - uVar7 < (uint)((uint)param_3[2] <= (uint)puVar13[2]);
      uVar20 = (uint)(uVar7 < uVar10 || bVar26);
      uVar7 = (uint)(uVar7 >= uVar10 && !bVar26);
      puVar16 = param_3;
      if (uVar7 != 0) {
        puVar16 = puVar13;
      }
      uVar12 = puVar16[1];
      uVar18 = puVar16[2];
      uVar19 = puVar16[3];
      uVar21 = puVar16[4];
      uVar23 = puVar16[5];
      *puVar4 = *puVar16;
      puVar4[1] = uVar12;
      puVar4[2] = uVar18;
      puVar4[3] = uVar19;
      puVar4[4] = uVar21;
      puVar4[5] = uVar23;
      bVar26 = (uint)puVar3[3] <= (uint)puVar9[3];
      bVar2 = (uint)((uint)puVar9[2] <= (uint)puVar3[2]) <= (uint)(puVar3[3] - puVar9[3]);
      puVar16 = puVar3;
      if (bVar26 && bVar2) {
        puVar16 = puVar9;
      }
      puVar4 = (undefined4 *)((int)param_1 + ((param_2 * 0x18 + -0x18) - iVar8));
      uVar12 = puVar16[1];
      uVar18 = puVar16[2];
      uVar19 = puVar16[3];
      uVar21 = puVar16[4];
      uVar23 = puVar16[5];
      iVar8 = iVar8 + 0x18;
      *puVar4 = *puVar16;
      puVar4[1] = uVar12;
      puVar4[2] = uVar18;
      puVar4[3] = uVar19;
      puVar4[4] = uVar21;
      puVar4[5] = uVar23;
      iVar11 = 0;
      if (!bVar26 || !bVar2) {
        iVar11 = -1;
      }
      iVar5 = 0;
      if (bVar26 && bVar2) {
        iVar5 = -1;
      }
      puVar3 = puVar3 + iVar11 * 6;
      puVar9 = puVar9 + iVar5 * 6;
      param_3 = param_3 + (uVar20 | uVar20 << 1) * 2;
      puVar13 = puVar13 + (uVar7 | uVar7 << 1) * 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar9 = puVar9 + 6;
    puVar16 = (undefined4 *)0x0;
    if ((param_2 & 1) != 0) {
      bVar26 = puVar9 <= param_3;
      puVar16 = puVar13;
      if (!bVar26) {
        puVar16 = param_3;
      }
      param_1 = (undefined4 *)((int)param_1 + iVar8);
      uVar12 = puVar16[1];
      uVar18 = puVar16[2];
      uVar19 = puVar16[3];
      uVar21 = puVar16[4];
      uVar23 = puVar16[5];
      *param_1 = *puVar16;
      param_1[1] = uVar12;
      param_1[2] = uVar18;
      param_1[3] = uVar19;
      param_1[4] = uVar21;
      param_1[5] = uVar23;
      puVar16 = (undefined4 *)((uint)!bVar26 | (uint)!bVar26 << 1);
      puVar13 = puVar13 + ((uint)bVar26 | (uint)bVar26 << 1) * 2;
      param_3 = param_3 + (int)puVar16 * 2;
    }
    if (param_3 == puVar9) {
      puVar16 = puVar3 + 6;
    }
    if (param_3 == puVar9 && puVar13 == puVar16) {
      return;
    }
    FUN_00fb7254();
  }
LAB_0060fc3c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x60fc3c);
  (*pcVar1)();
}

