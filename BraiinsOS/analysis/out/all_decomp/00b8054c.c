// FUN_00b8054c @ 00b8054c size=4508 calls_out=8 calls_in=2
// strings: 

void FUN_00b8054c(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  byte in_Q;
  undefined8 uVar27;
  uint *local_54;
  uint *local_48;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_2 < 0x21) {
LAB_00b8056c:
    uVar16 = param_2 >> 1;
    if (uVar16 != 0) {
      puVar4 = param_3 + param_2 * 4;
      if (param_2 < 0x10) {
        if (param_2 < 8) {
          uVar3 = param_1[1];
          uVar18 = param_1[2];
          uVar10 = param_1[3];
          *param_3 = *param_1;
          param_3[2] = uVar18;
          puVar9 = param_1 + uVar16 * 4;
          uVar8 = *puVar9;
          param_3[3] = uVar10;
          param_3[1] = uVar3;
          uVar18 = puVar9[1];
          uVar10 = puVar9[2];
          uVar3 = puVar9[3];
          puVar9 = param_3 + uVar16 * 4;
          *puVar9 = uVar8;
          puVar9[1] = uVar18;
          puVar9[2] = uVar10;
          puVar9[3] = uVar3;
          uVar3 = 1;
        }
        else {
          uVar10 = param_1[1];
          uVar18 = param_1[9];
          uVar8 = param_1[0xd];
          uVar3 = param_1[5];
          uVar14 = (uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18;
          bVar24 = (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar8 >> 0x1f) >> 1) ^ param_1[0xc]) <
                   (((uint)((byte)((int)uVar18 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar18 >> 0x1f) >> 1) ^ param_1[8]);
          uVar8 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
          iVar23 = 0x30;
          iVar22 = 0x20;
          if ((int)(uVar8 - (uVar14 + bVar24)) < 0 !=
              (SBORROW4(uVar8,uVar14) != SBORROW4(uVar8 - uVar14,(uint)bVar24))) {
            iVar23 = 0x20;
            iVar22 = 0x30;
          }
          uVar8 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          uVar18 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
          bVar24 = (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar3 >> 0x1f) >> 1) ^ param_1[4]) <
                   (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar10 >> 0x1f) >> 1) ^ *param_1);
          bVar25 = SBORROW4(uVar18,uVar8) != SBORROW4(uVar18 - uVar8,(uint)bVar24);
          bVar24 = (int)(uVar18 - (uVar8 + bVar24)) < 0;
          puVar21 = param_1 + (uint)(bVar24 != bVar25) * 4;
          puVar5 = (uint *)((int)param_1 + iVar22);
          puVar12 = (uint *)((int)param_1 + iVar23);
          uVar14 = puVar21[1];
          puVar7 = param_1 + (uint)(bVar24 == bVar25) * 4;
          uVar3 = puVar5[1];
          uVar15 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
          uVar10 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
          uVar8 = puVar7[1];
          uVar18 = puVar12[1];
          bVar24 = (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar3 >> 0x1f) >> 1) ^ *puVar5) <
                   (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar14 >> 0x1f) >> 1) ^ *puVar21);
          bVar25 = SBORROW4(uVar10,uVar15) != SBORROW4(uVar10 - uVar15,(uint)bVar24);
          bVar24 = (int)(uVar10 - (uVar15 + bVar24)) < 0;
          puVar9 = puVar5;
          if (bVar24 != bVar25) {
            puVar9 = puVar7;
          }
          uVar3 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
          uVar10 = (uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18;
          bVar26 = (((uint)((byte)((int)uVar18 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar18 >> 0x1f) >> 1) ^ *puVar12) <
                   (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar8 >> 0x1f) >> 1) ^ *puVar7);
          puVar13 = puVar7;
          puVar2 = puVar12;
          if ((int)(uVar10 - (uVar3 + bVar26)) < 0 !=
              (SBORROW4(uVar10,uVar3) != SBORROW4(uVar10 - uVar3,(uint)bVar26))) {
            puVar13 = puVar5;
            puVar2 = puVar7;
            puVar9 = puVar12;
          }
          uVar3 = (byte)(bVar24 << 4 | bVar25 << 1 | in_Q) & 0x1f;
          bVar25 = (uVar3 >> 1 & 1) != 0;
          bVar24 = uVar3 >> 4 != 0;
          if (bVar24 == bVar25) {
            puVar5 = puVar21;
          }
          uVar3 = *puVar9;
          uVar18 = puVar9[1];
          if (bVar24 != bVar25) {
            puVar13 = puVar21;
          }
          uVar10 = *puVar5;
          uVar14 = puVar5[1];
          uVar15 = *puVar13;
          uVar17 = puVar13[1];
          param_3[2] = puVar5[2];
          uVar8 = puVar5[3];
          *param_3 = uVar10;
          uVar10 = (uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18;
          param_3[3] = uVar8;
          uVar8 = (uint)((int)uVar17 >> 0x1f) >> 1 ^ uVar17;
          bVar24 = (((uint)((byte)((int)uVar18 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar18 >> 0x1f) >> 1) ^ uVar3) <
                   (((uint)((byte)((int)uVar17 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar17 >> 0x1f) >> 1) ^ uVar15);
          bVar25 = SBORROW4(uVar10,uVar8) != SBORROW4(uVar10 - uVar8,(uint)bVar24);
          bVar24 = (int)(uVar10 - (uVar8 + bVar24)) < 0;
          param_3[1] = uVar14;
          puVar5 = puVar13;
          if (bVar24 != bVar25) {
            puVar5 = puVar9;
          }
          if (bVar24 == bVar25) {
            puVar13 = puVar9;
          }
          uVar8 = puVar5[2];
          param_3[4] = *puVar5;
          uVar3 = puVar5[1];
          uVar18 = *puVar13;
          param_3[6] = uVar8;
          uVar8 = puVar5[3];
          uVar10 = puVar13[2];
          param_3[5] = uVar3;
          param_3[8] = uVar18;
          param_3[7] = uVar8;
          param_3[9] = puVar13[1];
          uVar3 = puVar13[3];
          param_3[10] = uVar10;
          param_3[0xb] = uVar3;
          uVar3 = puVar2[1];
          uVar18 = puVar2[2];
          uVar8 = puVar2[3];
          param_3[0xc] = *puVar2;
          iVar23 = 0x30;
          param_3[0xe] = uVar18;
          param_3[0xf] = uVar8;
          puVar9 = param_1 + uVar16 * 4;
          uVar15 = *puVar9;
          param_3[0xd] = uVar3;
          uVar18 = puVar9[9];
          uVar8 = puVar9[0xd];
          uVar14 = puVar9[5];
          uVar17 = (uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18;
          uVar3 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
          uVar10 = puVar9[1];
          bVar24 = (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar8 >> 0x1f) >> 1) ^ puVar9[0xc]) <
                   (((uint)((byte)((int)uVar18 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar18 >> 0x1f) >> 1) ^ puVar9[8]);
          iVar22 = 0x20;
          if ((int)(uVar3 - (uVar17 + bVar24)) < 0 !=
              (SBORROW4(uVar3,uVar17) != SBORROW4(uVar3 - uVar17,(uint)bVar24))) {
            iVar23 = 0x20;
            iVar22 = 0x30;
          }
          uVar3 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          uVar18 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
          bVar24 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar14 >> 0x1f) >> 1) ^ puVar9[4]) <
                   (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar15);
          bVar25 = SBORROW4(uVar18,uVar3) != SBORROW4(uVar18 - uVar3,(uint)bVar24);
          bVar24 = (int)(uVar18 - (uVar3 + bVar24)) < 0;
          puVar7 = puVar9 + (uint)(bVar24 != bVar25) * 4;
          puVar12 = (uint *)((int)puVar9 + iVar22);
          puVar21 = (uint *)((int)puVar9 + iVar23);
          uVar3 = puVar7[1];
          puVar9 = puVar9 + (uint)(bVar24 == bVar25) * 4;
          uVar18 = puVar12[1];
          uVar8 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
          uVar14 = puVar9[1];
          uVar10 = puVar21[1];
          bVar24 = (((uint)((byte)((int)uVar18 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar18 >> 0x1f) >> 1) ^ *puVar12) <
                   (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar3 >> 0x1f) >> 1) ^ *puVar7);
          uVar18 = (uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18;
          bVar25 = SBORROW4(uVar18,uVar8) != SBORROW4(uVar18 - uVar8,(uint)bVar24);
          bVar24 = (int)(uVar18 - (uVar8 + bVar24)) < 0;
          puVar5 = puVar12;
          if (bVar24 != bVar25) {
            puVar5 = puVar9;
          }
          uVar18 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
          uVar3 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          bVar26 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar10 >> 0x1f) >> 1) ^ *puVar21) <
                   (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar14 >> 0x1f) >> 1) ^ *puVar9);
          puVar13 = puVar9;
          puVar2 = puVar21;
          if ((int)(uVar3 - (uVar18 + bVar26)) < 0 !=
              (SBORROW4(uVar3,uVar18) != SBORROW4(uVar3 - uVar18,(uint)bVar26))) {
            puVar13 = puVar12;
            puVar2 = puVar9;
            puVar5 = puVar21;
          }
          if (bVar24 == bVar25) {
            puVar12 = puVar7;
          }
          else {
            puVar13 = puVar7;
          }
          uVar10 = puVar12[1];
          uVar8 = puVar12[2];
          uVar3 = puVar12[3];
          uVar14 = *puVar13;
          uVar18 = puVar13[1];
          uVar15 = *puVar5;
          uVar17 = puVar5[1];
          puVar7 = param_3 + uVar16 * 4;
          *puVar7 = *puVar12;
          puVar7[2] = uVar8;
          uVar8 = (uint)((int)uVar17 >> 0x1f) >> 1 ^ uVar17;
          bVar24 = (((uint)((byte)((int)uVar17 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar17 >> 0x1f) >> 1) ^ uVar15) <
                   (((uint)((byte)((int)uVar18 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar18 >> 0x1f) >> 1) ^ uVar14);
          uVar18 = (uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18;
          bVar25 = SBORROW4(uVar8,uVar18) != SBORROW4(uVar8 - uVar18,(uint)bVar24);
          bVar24 = (int)(uVar8 - (uVar18 + bVar24)) < 0;
          puVar7[3] = uVar3;
          puVar9 = puVar13;
          if (bVar24 != bVar25) {
            puVar9 = puVar5;
          }
          uVar3 = *puVar9;
          if (bVar24 == bVar25) {
            puVar13 = puVar5;
          }
          uVar15 = puVar9[2];
          puVar7[1] = uVar10;
          uVar10 = puVar9[1];
          uVar18 = puVar9[3];
          puVar7[4] = uVar3;
          puVar7[7] = uVar18;
          uVar3 = *puVar13;
          uVar18 = puVar13[1];
          uVar8 = puVar13[2];
          puVar7[0xb] = puVar13[3];
          puVar7[8] = uVar3;
          puVar7[9] = uVar18;
          puVar7[10] = uVar8;
          uVar3 = *puVar2;
          uVar18 = puVar2[1];
          uVar8 = puVar2[2];
          uVar14 = puVar2[3];
          puVar7[5] = uVar10;
          puVar7[6] = uVar15;
          puVar7[0xc] = uVar3;
          puVar7[0xd] = uVar18;
          puVar7[0xe] = uVar8;
          puVar7[0xf] = uVar14;
          uVar3 = 4;
        }
      }
      else {
        FUN_00b81714(param_1,param_3,puVar4);
        FUN_00b81714(param_1 + uVar16 * 4,param_3 + uVar16 * 4,puVar4 + 0x20);
        uVar3 = 8;
      }
      if (uVar3 < uVar16) {
        iVar22 = uVar3 * 0x10 + -0x20;
        iVar23 = uVar3 << 4;
        uVar18 = uVar3;
        do {
          puVar9 = param_1 + uVar18 * 4;
          uVar14 = *puVar9;
          uVar15 = puVar9[1];
          uVar8 = puVar9[2];
          uVar10 = puVar9[3];
          puVar9 = param_3 + uVar18 * 4;
          *puVar9 = uVar14;
          puVar9[2] = uVar8;
          uVar17 = puVar9[-3];
          puVar9[3] = uVar10;
          uVar19 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
          uVar8 = (uint)((int)uVar17 >> 0x1f) >> 1 ^ uVar17;
          uVar10 = ((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f |
                   (uint)((int)uVar15 >> 0x1f) >> 1) ^ uVar14;
          bVar24 = uVar10 < (((uint)((byte)((int)uVar17 >> 0x1f) & 1) << 0x1f |
                             (uint)((int)uVar17 >> 0x1f) >> 1) ^ puVar9[-4]);
          puVar9[1] = uVar15;
          if ((int)(uVar19 - (uVar8 + bVar24)) < 0 !=
              (SBORROW4(uVar19,uVar8) != SBORROW4(uVar19 - uVar8,(uint)bVar24))) {
            uVar27 = *(undefined8 *)(puVar9 + 2);
            iVar6 = iVar22;
            iVar11 = iVar23;
            do {
              *(undefined4 *)((int)param_3 + iVar11) =
                   *(undefined4 *)((int)param_3 + iVar11 + -0x10);
              *(undefined4 *)((int)param_3 + iVar11 + 4) =
                   *(undefined4 *)((int)param_3 + iVar11 + -0xc);
              *(undefined4 *)((int)param_3 + iVar11 + 8) =
                   *(undefined4 *)((int)param_3 + iVar11 + -8);
              *(undefined4 *)((int)param_3 + iVar11 + 0xc) =
                   *(undefined4 *)((int)param_3 + iVar11 + -4);
              if (iVar11 == 0x10) {
                puVar9 = param_3;
                goto LAB_00b81298;
              }
              iVar11 = iVar11 + -0x10;
              puVar9 = (uint *)((int)param_3 + iVar6);
              iVar6 = iVar6 + -0x10;
              uVar8 = puVar9[1];
              uVar17 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
              bVar24 = uVar10 < (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f |
                                 (uint)((int)uVar8 >> 0x1f) >> 1) ^ *puVar9);
            } while ((int)(uVar19 - (uVar17 + bVar24)) < 0 !=
                     (SBORROW4(uVar19,uVar17) != SBORROW4(uVar19 - uVar17,(uint)bVar24)));
            puVar9 = (uint *)((int)param_3 + iVar11);
LAB_00b81298:
            *(undefined8 *)(puVar9 + 2) = uVar27;
            *puVar9 = uVar14;
            puVar9[1] = uVar15;
          }
          uVar18 = uVar18 + 1;
          iVar23 = iVar23 + 0x10;
          iVar22 = iVar22 + 0x10;
        } while (uVar18 != uVar16);
      }
      puVar9 = param_3 + uVar16 * 4;
      if (uVar3 < param_2 - uVar16) {
        puVar5 = param_3 + uVar16 * 4 + -8;
        local_40 = 0x10;
        uVar18 = uVar3;
        local_48 = puVar9;
        do {
          puVar12 = param_1 + uVar16 * 4 + uVar18 * 4;
          uVar10 = *puVar12;
          uVar14 = puVar12[1];
          uVar15 = puVar12[2];
          uVar8 = puVar12[3];
          puVar12 = puVar9 + uVar18 * 4;
          *puVar12 = uVar10;
          puVar12[1] = uVar14;
          puVar12[2] = uVar15;
          puVar12[3] = uVar8;
          uVar19 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
          uVar8 = puVar12[-3];
          uVar15 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
          uVar17 = ((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                   (uint)((int)uVar14 >> 0x1f) >> 1) ^ uVar10;
          bVar24 = uVar17 < (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f |
                             (uint)((int)uVar8 >> 0x1f) >> 1) ^ puVar12[-4]);
          if ((int)(uVar19 - (uVar15 + bVar24)) < 0 !=
              (SBORROW4(uVar19,uVar15) != SBORROW4(uVar19 - uVar15,(uint)bVar24))) {
            uVar27 = *(undefined8 *)(puVar12 + 2);
            iVar23 = local_40;
            puVar12 = local_48;
            puVar7 = puVar5;
            do {
              uVar15 = puVar12[uVar3 * 4 + -1];
              uVar8 = puVar12[uVar3 * 4 + -3];
              uVar20 = puVar12[uVar3 * 4 + -2];
              puVar12[uVar3 * 4] = puVar12[uVar3 * 4 + -4];
              puVar12[uVar3 * 4 + 1] = uVar8;
              puVar12[uVar3 * 4 + 2] = uVar20;
              puVar12[uVar3 * 4 + 3] = uVar15;
              if (uVar3 * 0x10 == iVar23) {
                puVar12 = puVar9;
                goto LAB_00b813e8;
              }
              iVar23 = iVar23 + 0x10;
              puVar12 = puVar12 + -4;
              uVar15 = (puVar7 + uVar3 * 4)[1];
              uVar8 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
              bVar24 = uVar17 < (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f |
                                 (uint)((int)uVar15 >> 0x1f) >> 1) ^ puVar7[uVar3 * 4]);
              puVar7 = puVar7 + -4;
            } while ((int)(uVar19 - (uVar8 + bVar24)) < 0 !=
                     (SBORROW4(uVar19,uVar8) != SBORROW4(uVar19 - uVar8,(uint)bVar24)));
            puVar12 = puVar12 + uVar3 * 4;
LAB_00b813e8:
            *puVar12 = uVar10;
            puVar12[1] = uVar14;
            *(undefined8 *)(puVar12 + 2) = uVar27;
          }
          uVar18 = uVar18 + 1;
          puVar5 = puVar5 + 4;
          local_40 = local_40 + -0x10;
          local_48 = local_48 + 4;
        } while (uVar18 != param_2 - uVar16);
      }
      iVar23 = 0;
      puVar5 = puVar9 + -4;
      puVar4 = puVar4 + -4;
      do {
        uVar8 = param_3[1];
        uVar10 = puVar9[1];
        uVar3 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
        uVar18 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
        bVar24 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar10 >> 0x1f) >> 1) ^ *puVar9) <
                 (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1)
                 ^ *param_3);
        bVar25 = SBORROW4(uVar18,uVar3) != SBORROW4(uVar18 - uVar3,(uint)bVar24);
        bVar24 = (int)(uVar18 - (uVar3 + bVar24)) < 0;
        uVar3 = (uint)(bVar24 != bVar25);
        puVar12 = param_3;
        if (uVar3 != 0) {
          puVar12 = puVar9;
        }
        uVar18 = puVar12[1];
        uVar8 = puVar12[2];
        param_3 = param_3 + (uint)(bVar24 == bVar25) * 4;
        puVar9 = puVar9 + uVar3 * 4;
        uVar3 = puVar12[3];
        puVar7 = (uint *)((int)param_1 + iVar23);
        *puVar7 = *puVar12;
        puVar7[1] = uVar18;
        puVar7[2] = uVar8;
        puVar7[3] = uVar3;
        uVar3 = puVar5[1];
        uVar8 = puVar4[1];
        uVar18 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
        uVar10 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
        bVar24 = (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1)
                 ^ *puVar4) <
                 (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1)
                 ^ *puVar5);
        bVar26 = SBORROW4(uVar10,uVar18) != SBORROW4(uVar10 - uVar18,(uint)bVar24);
        bVar25 = (int)(uVar10 - (uVar18 + bVar24)) < 0;
        bVar24 = bVar25 == bVar26;
        puVar12 = puVar4;
        if (!bVar24) {
          puVar12 = puVar5;
        }
        uVar3 = puVar12[1];
        uVar18 = puVar12[2];
        iVar22 = 0;
        if (bVar25 != bVar26) {
          iVar22 = -1;
        }
        uVar8 = puVar12[3];
        iVar6 = 0;
        if (bVar24) {
          iVar6 = -1;
        }
        puVar4 = puVar4 + iVar6 * 4;
        puVar5 = puVar5 + iVar22 * 4;
        puVar7 = (uint *)((int)param_1 + ((param_2 * 0x10 + -0x10) - iVar23));
        *puVar7 = *puVar12;
        iVar23 = iVar23 + 0x10;
        puVar7[1] = uVar3;
        puVar7[2] = uVar18;
        uVar16 = uVar16 - 1;
        puVar7[3] = uVar8;
      } while (uVar16 != 0);
      puVar5 = puVar5 + 4;
      if ((param_2 & 1) != 0) {
        bVar24 = puVar5 <= param_3;
        puVar12 = puVar9;
        if (!bVar24) {
          puVar12 = param_3;
        }
        uVar16 = *puVar12;
        uVar18 = puVar12[1];
        param_1 = (uint *)((int)param_1 + iVar23);
        uVar3 = puVar12[2];
        param_1[3] = puVar12[3];
        *param_1 = uVar16;
        param_1[1] = uVar18;
        puVar9 = puVar9 + (uint)bVar24 * 4;
        param_1[2] = uVar3;
        param_3 = param_3 + (uint)!bVar24 * 4;
      }
      bVar24 = param_3 != puVar5;
      if (!bVar24) {
        puVar5 = puVar4 + 4;
      }
      if (bVar24 || puVar9 != puVar5) {
        FUN_00fb7254();
LAB_00b816d0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb816d0);
        (*pcVar1)();
      }
    }
    return;
  }
  local_54 = param_6;
LAB_00b805d8:
  uVar16 = param_2;
  do {
    if (param_5 == 0) {
      FUN_00b7fe44(param_1,uVar16,param_3,param_4,1);
      return;
    }
    puVar4 = param_1 + (uVar16 >> 3) * 0x10;
    puVar9 = param_1 + ((uVar16 >> 3) * 8 - (uVar16 >> 3)) * 4;
    if (uVar16 < 0x40) {
      uVar18 = param_1[1];
      uVar3 = puVar9[1];
      uVar15 = ((uint)((byte)((int)uVar18 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar18 >> 0x1f) >> 1)
               ^ *param_1;
      uVar18 = (uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18;
      uVar10 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
      uVar14 = puVar4[1];
      uVar8 = ((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1) ^
              *puVar9;
      uVar3 = ((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1) ^
              *puVar4;
      uVar14 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
      bVar24 = (int)(uVar18 - (uVar14 + (uVar15 < uVar3))) < 0 !=
               (SBORROW4(uVar18,uVar14) != SBORROW4(uVar18 - uVar14,(uint)(uVar15 < uVar3)));
      if (bVar24 != ((int)(uVar14 - (uVar10 + (uVar3 < uVar8))) < 0 !=
                    (SBORROW4(uVar14,uVar10) != SBORROW4(uVar14 - uVar10,(uint)(uVar3 < uVar8))))) {
        puVar4 = puVar9;
      }
      if (bVar24 != ((int)(uVar18 - (uVar10 + (uVar15 < uVar8))) < 0 !=
                    (SBORROW4(uVar18,uVar10) != SBORROW4(uVar18 - uVar10,(uint)(uVar15 < uVar8)))))
      {
        puVar4 = param_1;
      }
    }
    else {
      puVar4 = (uint *)FUN_00b81f6c(param_1,puVar4);
    }
    local_38 = *(undefined8 *)puVar4;
    local_30 = *(undefined8 *)(puVar4 + 2);
    param_5 = param_5 + -1;
    uVar3 = (uint)((int)puVar4 - (int)param_1) >> 4;
    if (local_54 != (uint *)0x0) {
      uVar8 = (uint)((ulonglong)local_38 >> 0x20);
      uVar10 = local_54[1];
      uVar14 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
      uVar18 = (int)uVar8 >> 0x1f;
      uVar8 = uVar18 >> 1 ^ uVar8;
      bVar24 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar10 >> 0x1f) >> 1)
               ^ *local_54) <
               (((uint)((byte)((longlong)local_38 >> 0x3f) & 1) << 0x1f | uVar18 >> 1) ^
               (uint)local_38);
      if ((int)(uVar14 - (uVar8 + bVar24)) < 0 ==
          (SBORROW4(uVar14,uVar8) != SBORROW4(uVar14 - uVar8,(uint)bVar24))) break;
    }
    if (param_4 < uVar16) goto LAB_00b816d0;
    puVar9 = param_3 + uVar16 * 4;
    param_2 = 0;
    puVar5 = param_1;
    uVar18 = uVar3;
    while( true ) {
      iVar23 = uVar18 - 3;
      if (uVar18 < 3) {
        iVar23 = 0;
      }
      for (puVar12 = puVar5; puVar12 < param_1 + iVar23 * 4; puVar12 = puVar12 + 0x10) {
        uVar17 = puVar4[1];
        uVar14 = (uint)((int)uVar17 >> 0x1f) >> 1 ^ uVar17;
        uVar10 = puVar12[1];
        uVar19 = puVar12[2];
        uVar15 = puVar12[3];
        uVar8 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
        bVar24 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar10 >> 0x1f) >> 1) ^ *puVar12) <
                 (((uint)((byte)((int)uVar17 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar17 >> 0x1f) >> 1) ^ *puVar4);
        bVar25 = SBORROW4(uVar8,uVar14) != SBORROW4(uVar8 - uVar14,(uint)bVar24);
        bVar24 = (int)(uVar8 - (uVar14 + bVar24)) < 0;
        puVar5 = param_3;
        if (bVar24 == bVar25) {
          puVar5 = puVar9 + -4;
        }
        puVar5 = puVar5 + param_2 * 4;
        *puVar5 = *puVar12;
        uVar8 = puVar4[1];
        if (bVar24 != bVar25) {
          param_2 = param_2 + 1;
        }
        puVar5[3] = uVar15;
        puVar5[1] = uVar10;
        puVar5[2] = uVar19;
        uVar10 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
        uVar14 = puVar12[5];
        uVar17 = puVar12[6];
        uVar15 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
        bVar24 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar14 >> 0x1f) >> 1) ^ puVar12[4]) <
                 (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1)
                 ^ *puVar4);
        bVar25 = SBORROW4(uVar15,uVar10) != SBORROW4(uVar15 - uVar10,(uint)bVar24);
        bVar24 = (int)(uVar15 - (uVar10 + bVar24)) < 0;
        puVar5 = param_3;
        if (bVar24 == bVar25) {
          puVar5 = puVar9 + -8;
        }
        puVar5 = puVar5 + param_2 * 4;
        *puVar5 = puVar12[4];
        if (bVar24 != bVar25) {
          param_2 = param_2 + 1;
        }
        uVar8 = puVar12[5];
        uVar10 = puVar12[7];
        puVar5[2] = uVar17;
        puVar5[1] = uVar8;
        puVar5[3] = uVar10;
        uVar8 = puVar4[1];
        uVar10 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
        uVar14 = puVar12[9];
        uVar15 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
        bVar24 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar14 >> 0x1f) >> 1) ^ puVar12[8]) <
                 (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1)
                 ^ *puVar4);
        bVar25 = SBORROW4(uVar15,uVar10) != SBORROW4(uVar15 - uVar10,(uint)bVar24);
        bVar24 = (int)(uVar15 - (uVar10 + bVar24)) < 0;
        uVar8 = puVar12[9];
        uVar10 = puVar12[10];
        uVar14 = puVar12[0xb];
        puVar5 = param_3;
        if (bVar24 == bVar25) {
          puVar5 = puVar9 + -0xc;
        }
        puVar9 = puVar9 + -0x10;
        puVar5 = puVar5 + param_2 * 4;
        *puVar5 = puVar12[8];
        if (bVar24 != bVar25) {
          param_2 = param_2 + 1;
        }
        puVar5[1] = uVar8;
        puVar5[2] = uVar10;
        puVar5[3] = uVar14;
        uVar14 = puVar12[0xd];
        uVar8 = puVar4[1];
        uVar10 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
        uVar15 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
        bVar24 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar14 >> 0x1f) >> 1) ^ puVar12[0xc]) <
                 (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1)
                 ^ *puVar4);
        bVar25 = SBORROW4(uVar15,uVar10) != SBORROW4(uVar15 - uVar10,(uint)bVar24);
        bVar24 = (int)(uVar15 - (uVar10 + bVar24)) < 0;
        puVar5 = puVar9;
        if (bVar24 != bVar25) {
          puVar5 = param_3;
        }
        uVar8 = puVar12[0xd];
        uVar10 = puVar12[0xe];
        uVar14 = puVar12[0xf];
        puVar5 = puVar5 + param_2 * 4;
        *puVar5 = puVar12[0xc];
        if (bVar24 != bVar25) {
          param_2 = param_2 + 1;
        }
        puVar5[1] = uVar8;
        puVar5[2] = uVar10;
        puVar5[3] = uVar14;
      }
      while (puVar12 < param_1 + uVar18 * 4) {
        uVar14 = puVar4[1];
        uVar19 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
        uVar15 = puVar12[1];
        uVar17 = *puVar12;
        puVar9 = puVar9 + -4;
        uVar10 = puVar12[2];
        uVar8 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
        bVar24 = (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar15 >> 0x1f) >> 1) ^ uVar17) <
                 (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar14 >> 0x1f) >> 1) ^ *puVar4);
        uVar14 = puVar12[3];
        bVar25 = SBORROW4(uVar8,uVar19) != SBORROW4(uVar8 - uVar19,(uint)bVar24);
        bVar24 = (int)(uVar8 - (uVar19 + bVar24)) < 0;
        puVar12 = puVar12 + 4;
        puVar5 = puVar9;
        if (bVar24 != bVar25) {
          puVar5 = param_3;
        }
        puVar5 = puVar5 + param_2 * 4;
        *puVar5 = uVar17;
        if (bVar24 != bVar25) {
          param_2 = param_2 + 1;
        }
        puVar5[1] = uVar15;
        puVar5[2] = uVar10;
        puVar5[3] = uVar14;
      }
      if (uVar18 == uVar16) break;
      puVar9 = puVar9 + -4;
      uVar18 = puVar12[1];
      uVar8 = puVar12[2];
      uVar10 = puVar12[3];
      puVar5 = puVar12 + 4;
      puVar7 = puVar9 + param_2 * 4;
      *puVar7 = *puVar12;
      puVar7[1] = uVar18;
      puVar7[2] = uVar8;
      puVar7[3] = uVar10;
      uVar18 = uVar16;
    }
    FUN_016dd1aa(param_1,param_3,param_2 << 4);
    iVar23 = uVar16 - param_2;
    if (iVar23 != 0) {
      puVar9 = param_3 + uVar16 * 4 + -4;
      puVar5 = param_1 + param_2 * 4;
      iVar22 = iVar23;
      do {
        uVar14 = *puVar9;
        iVar22 = iVar22 + -1;
        uVar10 = puVar9[1];
        uVar8 = puVar9[2];
        uVar18 = puVar9[3];
        puVar9 = puVar9 + -4;
        *puVar5 = uVar14;
        puVar5[1] = uVar10;
        puVar5[2] = uVar8;
        puVar5[3] = uVar18;
        puVar5 = puVar5 + 4;
      } while (iVar22 != 0);
    }
    if (param_2 == 0) break;
    if (uVar16 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
    }
    FUN_00b8054c(param_1 + param_2 * 4,iVar23,param_3,param_4,param_5,&local_38);
    uVar16 = param_2;
    if (param_2 < 0x21) goto LAB_00b8056c;
  } while( true );
  if (param_4 < uVar16) goto LAB_00b816d0;
  puVar9 = param_3 + uVar16 * 4;
  uVar18 = 0;
  puVar5 = param_1;
  while( true ) {
    iVar23 = uVar3 - 3;
    if (uVar3 < 3) {
      iVar23 = 0;
    }
    for (; puVar5 < param_1 + iVar23 * 4; puVar5 = puVar5 + 0x10) {
      uVar10 = puVar5[1];
      uVar17 = puVar5[2];
      uVar14 = puVar4[1];
      uVar15 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
      uVar8 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
      bVar24 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1)
               ^ *puVar4) <
               (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar10 >> 0x1f) >> 1)
               ^ *puVar5);
      uVar14 = puVar5[3];
      bVar25 = SBORROW4(uVar15,uVar8) != SBORROW4(uVar15 - uVar8,(uint)bVar24);
      bVar24 = (int)(uVar15 - (uVar8 + bVar24)) < 0;
      puVar12 = param_3;
      if (bVar24 != bVar25) {
        puVar12 = puVar9 + -4;
      }
      puVar12 = puVar12 + uVar18 * 4;
      *puVar12 = *puVar5;
      if (bVar24 == bVar25) {
        uVar18 = uVar18 + 1;
      }
      uVar8 = puVar5[5];
      puVar12[2] = uVar17;
      puVar12[3] = uVar14;
      puVar12[1] = uVar10;
      uVar15 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
      uVar14 = puVar4[1];
      uVar17 = puVar5[6];
      uVar10 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
      bVar24 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1)
               ^ *puVar4) <
               (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1) ^
               puVar5[4]);
      bVar25 = SBORROW4(uVar10,uVar15) != SBORROW4(uVar10 - uVar15,(uint)bVar24);
      bVar24 = (int)(uVar10 - (uVar15 + bVar24)) < 0;
      puVar12 = param_3;
      if (bVar24 != bVar25) {
        puVar12 = puVar9 + -8;
      }
      puVar12 = puVar12 + uVar18 * 4;
      *puVar12 = puVar5[4];
      if (bVar24 == bVar25) {
        uVar18 = uVar18 + 1;
      }
      uVar8 = puVar5[5];
      uVar10 = puVar5[7];
      puVar12[2] = uVar17;
      puVar12[1] = uVar8;
      puVar12[3] = uVar10;
      uVar8 = puVar5[9];
      uVar17 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
      uVar15 = puVar4[1];
      uVar10 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
      uVar14 = puVar5[10];
      bVar24 = (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar15 >> 0x1f) >> 1)
               ^ *puVar4) <
               (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1) ^
               puVar5[8]);
      uVar15 = puVar5[9];
      bVar25 = SBORROW4(uVar10,uVar17) != SBORROW4(uVar10 - uVar17,(uint)bVar24);
      bVar24 = (int)(uVar10 - (uVar17 + bVar24)) < 0;
      uVar8 = puVar5[0xb];
      puVar12 = param_3;
      if (bVar24 != bVar25) {
        puVar12 = puVar9 + -0xc;
      }
      puVar9 = puVar9 + -0x10;
      puVar12 = puVar12 + uVar18 * 4;
      *puVar12 = puVar5[8];
      if (bVar24 == bVar25) {
        uVar18 = uVar18 + 1;
      }
      uVar10 = puVar5[0xd];
      puVar12[1] = uVar15;
      puVar12[2] = uVar14;
      puVar12[3] = uVar8;
      uVar14 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
      uVar15 = puVar4[1];
      uVar8 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
      bVar24 = (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar15 >> 0x1f) >> 1)
               ^ *puVar4) <
               (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar10 >> 0x1f) >> 1)
               ^ puVar5[0xc]);
      uVar10 = puVar5[0xe];
      bVar25 = SBORROW4(uVar8,uVar14) != SBORROW4(uVar8 - uVar14,(uint)bVar24);
      bVar24 = (int)(uVar8 - (uVar14 + bVar24)) < 0;
      uVar8 = puVar5[0xd];
      puVar12 = puVar9;
      if (bVar24 == bVar25) {
        puVar12 = param_3;
      }
      uVar14 = puVar5[0xf];
      puVar12 = puVar12 + uVar18 * 4;
      *puVar12 = puVar5[0xc];
      if (bVar24 == bVar25) {
        uVar18 = uVar18 + 1;
      }
      puVar12[1] = uVar8;
      puVar12[2] = uVar10;
      puVar12[3] = uVar14;
    }
    while (puVar5 < param_1 + uVar3 * 4) {
      uVar8 = *puVar5;
      uVar14 = puVar5[1];
      uVar15 = puVar5[2];
      uVar20 = puVar5[3];
      puVar5 = puVar5 + 4;
      uVar17 = puVar4[1];
      uVar10 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
      uVar19 = (uint)((int)uVar17 >> 0x1f) >> 1 ^ uVar17;
      bVar24 = (((uint)((byte)((int)uVar17 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar17 >> 0x1f) >> 1)
               ^ *puVar4) <
               (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar14 >> 0x1f) >> 1)
               ^ uVar8);
      puVar9 = puVar9 + -4;
      bVar25 = SBORROW4(uVar19,uVar10) != SBORROW4(uVar19 - uVar10,(uint)bVar24);
      bVar24 = (int)(uVar19 - (uVar10 + bVar24)) < 0;
      puVar12 = puVar9;
      if (bVar24 == bVar25) {
        puVar12 = param_3;
      }
      puVar12 = puVar12 + uVar18 * 4;
      *puVar12 = uVar8;
      if (bVar24 == bVar25) {
        uVar18 = uVar18 + 1;
      }
      puVar12[1] = uVar14;
      puVar12[2] = uVar15;
      puVar12[3] = uVar20;
    }
    if (uVar3 == uVar16) break;
    uVar14 = *puVar5;
    uVar3 = puVar5[1];
    uVar10 = puVar5[2];
    puVar9 = puVar9 + -4;
    uVar8 = puVar5[3];
    puVar5 = puVar5 + 4;
    puVar12 = param_3 + uVar18 * 4;
    *puVar12 = uVar14;
    uVar18 = uVar18 + 1;
    puVar12[1] = uVar3;
    puVar12[2] = uVar10;
    puVar12[3] = uVar8;
    uVar3 = uVar16;
  }
  FUN_016dd1aa(param_1,param_3,uVar18 << 4);
  param_2 = uVar16 - uVar18;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar18 * 4;
  puVar9 = param_3 + uVar16 * 4 + -4;
  puVar4 = param_1;
  uVar3 = param_2;
  do {
    uVar15 = *puVar9;
    uVar3 = uVar3 - 1;
    uVar14 = puVar9[1];
    uVar10 = puVar9[2];
    uVar8 = puVar9[3];
    puVar9 = puVar9 + -4;
    *puVar4 = uVar15;
    puVar4[1] = uVar14;
    puVar4[2] = uVar10;
    puVar4[3] = uVar8;
    puVar4 = puVar4 + 4;
  } while (uVar3 != 0);
  if (uVar16 < uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar18,uVar16,uVar16,&DAT_018af348);
  }
  local_54 = (uint *)0x0;
  if (param_2 < 0x21) goto LAB_00b8056c;
  goto LAB_00b805d8;
}

