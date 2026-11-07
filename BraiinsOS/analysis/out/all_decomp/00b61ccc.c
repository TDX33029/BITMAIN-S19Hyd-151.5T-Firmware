// FUN_00b61ccc @ 00b61ccc size=4120 calls_out=8 calls_in=2
// strings: 

void FUN_00b61ccc(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  uint *puVar33;
  uint uVar34;
  uint *puVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  byte in_Q;
  uint *local_54;
  int local_4c;
  int local_48;
  uint *local_38;
  undefined8 local_30;
  
  if (param_2 < 0x21) {
LAB_00b61cf4:
    uVar11 = param_2 >> 1;
    if (uVar11 != 0) {
      if (param_2 < 0x10) {
        if (param_2 < 8) {
          uVar2 = param_1[1];
          *param_3 = *param_1;
          param_3[1] = uVar2;
          param_3[uVar11 * 2] = param_1[uVar11 * 2];
          (param_3 + uVar11 * 2)[1] = (param_1 + uVar11 * 2)[1];
          uVar2 = 1;
        }
        else {
          uVar10 = param_1[5];
          uVar15 = param_1[3];
          uVar31 = param_1[7];
          uVar5 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          uVar2 = param_1[1];
          bVar44 = (((uint)((byte)((int)uVar31 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar31 >> 0x1f) >> 1) ^ param_1[6]) <
                   (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar10 >> 0x1f) >> 1) ^ param_1[4]);
          uVar31 = (uint)((int)uVar31 >> 0x1f) >> 1 ^ uVar31;
          iVar41 = 0x10;
          iVar36 = 0x18;
          if ((int)(uVar31 - (uVar5 + bVar44)) < 0 !=
              (SBORROW4(uVar31,uVar5) != SBORROW4(uVar31 - uVar5,(uint)bVar44))) {
            iVar41 = 0x18;
            iVar36 = 0x10;
          }
          uVar5 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
          uVar31 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
          bVar44 = (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar15 >> 0x1f) >> 1) ^ param_1[2]) <
                   (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar2 >> 0x1f) >> 1) ^ *param_1);
          bVar42 = SBORROW4(uVar31,uVar5) != SBORROW4(uVar31 - uVar5,(uint)bVar44);
          bVar44 = (int)(uVar31 - (uVar5 + bVar44)) < 0;
          puVar32 = (uint *)((int)param_1 + iVar36);
          puVar6 = param_1 + (uint)(bVar44 == bVar42) * 2;
          uVar31 = puVar32[1];
          puVar7 = (uint *)((int)param_1 + iVar41);
          uVar5 = puVar6[1];
          puVar3 = param_1 + (uint)(bVar44 != bVar42) * 2;
          uVar15 = puVar7[1];
          uVar20 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
          uVar2 = puVar3[1];
          uVar10 = (uint)((int)uVar31 >> 0x1f) >> 1 ^ uVar31;
          bVar44 = (((uint)((byte)((int)uVar31 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar31 >> 0x1f) >> 1) ^ *puVar32) <
                   (((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar5 >> 0x1f) >> 1) ^ *puVar6);
          bVar42 = SBORROW4(uVar10,uVar20) != SBORROW4(uVar10 - uVar20,(uint)bVar44);
          bVar44 = (int)(uVar10 - (uVar20 + bVar44)) < 0;
          puVar35 = puVar6;
          if (bVar44 != bVar42) {
            puVar35 = puVar7;
          }
          uVar20 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
          uVar10 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
          bVar45 = (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar15 >> 0x1f) >> 1) ^ *puVar7) <
                   (((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar2 >> 0x1f) >> 1) ^ *puVar3);
          bVar48 = SBORROW4(uVar10,uVar20) != SBORROW4(uVar10 - uVar20,(uint)bVar45);
          bVar45 = (int)(uVar10 - (uVar20 + bVar45)) < 0;
          if (bVar45 != bVar48) {
            puVar35 = puVar3;
          }
          bVar45 = bVar45 != bVar48;
          puVar17 = puVar7;
          if (bVar45) {
            puVar17 = puVar6;
          }
          uVar10 = (byte)(bVar44 << 4 | bVar42 << 1 | in_Q) & 0x1f;
          bVar42 = (uVar10 >> 1 & 1) != 0;
          bVar44 = uVar10 >> 4 != 0;
          if (bVar44 != bVar42) {
            puVar17 = puVar32;
          }
          puVar4 = param_1 + uVar11 * 2;
          uVar20 = puVar4[5];
          uVar10 = puVar4[7];
          uVar25 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          uVar28 = puVar4[1];
          uVar24 = (uint)((int)uVar20 >> 0x1f) >> 1 ^ uVar20;
          bVar48 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar10 >> 0x1f) >> 1) ^ puVar4[6]) <
                   (((uint)((byte)((int)uVar20 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar20 >> 0x1f) >> 1) ^ puVar4[4]);
          uVar10 = puVar4[3];
          iVar41 = 0x18;
          iVar36 = 0x10;
          if ((int)(uVar25 - (uVar24 + bVar48)) < 0 !=
              (SBORROW4(uVar25,uVar24) != SBORROW4(uVar25 - uVar24,(uint)bVar48))) {
            iVar41 = 0x10;
            iVar36 = 0x18;
          }
          uVar20 = (uint)((int)uVar28 >> 0x1f) >> 1 ^ uVar28;
          uVar24 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          bVar48 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar10 >> 0x1f) >> 1) ^ puVar4[2]) <
                   (((uint)((byte)((int)uVar28 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar28 >> 0x1f) >> 1) ^ *puVar4);
          bVar49 = SBORROW4(uVar24,uVar20) != SBORROW4(uVar24 - uVar20,(uint)bVar48);
          bVar48 = (int)(uVar24 - (uVar20 + bVar48)) < 0;
          puVar21 = puVar4 + (uint)(bVar48 == bVar49) * 2;
          uVar18 = *puVar21;
          puVar12 = (uint *)((int)puVar4 + iVar36);
          uVar28 = *puVar12;
          puVar33 = (uint *)((int)puVar4 + iVar41);
          uVar20 = *puVar33;
          uVar37 = puVar21[1];
          puVar4 = puVar4 + (uint)(bVar48 != bVar49) * 2;
          uVar24 = *puVar4;
          uVar10 = puVar33[1];
          uVar25 = puVar4[1];
          uVar29 = (uint)((int)uVar37 >> 0x1f) >> 1 ^ uVar37;
          uVar26 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          bVar48 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar20) <
                   (((uint)((byte)((int)uVar37 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar37 >> 0x1f) >> 1) ^ uVar18);
          bVar49 = SBORROW4(uVar26,uVar29) != SBORROW4(uVar26 - uVar29,(uint)bVar48);
          bVar48 = (int)(uVar26 - (uVar29 + bVar48)) < 0;
          uVar26 = puVar12[1];
          puVar8 = puVar21;
          if (bVar48 != bVar49) {
            puVar8 = puVar12;
          }
          uVar38 = (uint)((int)uVar25 >> 0x1f) >> 1 ^ uVar25;
          uVar29 = (uint)((int)uVar26 >> 0x1f) >> 1 ^ uVar26;
          bVar43 = (((uint)((byte)((int)uVar26 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar26 >> 0x1f) >> 1) ^ uVar28) <
                   (((uint)((byte)((int)uVar25 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar25 >> 0x1f) >> 1) ^ uVar24);
          bVar46 = SBORROW4(uVar29,uVar38) != SBORROW4(uVar29 - uVar38,(uint)bVar43);
          bVar43 = (int)(uVar29 - (uVar38 + bVar43)) < 0;
          if (bVar43 != bVar46) {
            puVar8 = puVar4;
          }
          bVar43 = bVar43 != bVar46;
          if (bVar43) {
            puVar12 = puVar21;
          }
          if (bVar48 != bVar49) {
            puVar12 = puVar33;
          }
          uVar30 = puVar12[1];
          uVar34 = *puVar12;
          uVar19 = *puVar35;
          uVar22 = puVar35[1];
          uVar27 = *puVar17;
          uVar23 = puVar17[1];
          uVar29 = *puVar8;
          uVar38 = puVar8[1];
          uVar9 = (uint)((int)uVar38 >> 0x1f) >> 1 ^ uVar38;
          bVar46 = (((uint)((byte)((int)uVar30 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar30 >> 0x1f) >> 1) ^ uVar34) <
                   (((uint)((byte)((int)uVar38 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar38 >> 0x1f) >> 1) ^ uVar29);
          uVar39 = (uint)((int)uVar30 >> 0x1f) >> 1 ^ uVar30;
          bVar47 = SBORROW4(uVar39,uVar9) != SBORROW4(uVar39 - uVar9,(uint)bVar46);
          bVar46 = (int)(uVar39 - (uVar9 + bVar46)) < 0;
          uVar9 = uVar34;
          if (bVar46 != bVar47) {
            uVar9 = uVar29;
            uVar29 = uVar34;
          }
          uVar34 = uVar30;
          if (bVar46 != bVar47) {
            uVar34 = uVar38;
            uVar38 = uVar30;
          }
          uVar40 = (uint)((int)uVar23 >> 0x1f) >> 1 ^ uVar23;
          uVar14 = (uint)((int)uVar22 >> 0x1f) >> 1 ^ uVar22;
          bVar46 = (((uint)((byte)((int)uVar23 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar23 >> 0x1f) >> 1) ^ uVar27) <
                   (((uint)((byte)((int)uVar22 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar22 >> 0x1f) >> 1) ^ uVar19);
          uVar39 = uVar27;
          uVar30 = uVar23;
          if ((int)(uVar40 - (uVar14 + bVar46)) < 0 !=
              (SBORROW4(uVar40,uVar14) != SBORROW4(uVar40 - uVar14,(uint)bVar46))) {
            uVar39 = uVar19;
            uVar19 = uVar27;
            uVar30 = uVar22;
            uVar22 = uVar23;
          }
          uVar23 = *puVar3;
          if (bVar45) {
            uVar23 = *puVar7;
            uVar2 = uVar15;
          }
          uVar15 = *puVar32;
          if (bVar44 != bVar42) {
            uVar15 = *puVar6;
            uVar31 = uVar5;
          }
          if (bVar43) {
            uVar25 = uVar26;
          }
          *param_3 = uVar23;
          param_3[1] = uVar2;
          param_3[7] = uVar31;
          if (bVar43) {
            uVar24 = uVar28;
          }
          param_3[2] = uVar19;
          param_3[3] = uVar22;
          param_3[4] = uVar39;
          param_3[5] = uVar30;
          param_3[6] = uVar15;
          puVar35 = param_3 + uVar11 * 2;
          *puVar35 = uVar24;
          puVar35[1] = uVar25;
          if (bVar48 != bVar49) {
            uVar20 = uVar18;
            uVar10 = uVar37;
          }
          puVar35[5] = uVar34;
          puVar35[2] = uVar29;
          puVar35[3] = uVar38;
          puVar35[4] = uVar9;
          puVar35[6] = uVar20;
          puVar35[7] = uVar10;
          uVar2 = 4;
        }
      }
      else {
        FUN_00b62d0c(param_1,param_3);
        FUN_00b62d0c(param_1 + uVar11 * 2,param_3 + uVar11 * 2,param_3 + param_2 * 2 + 0x10);
        uVar2 = 8;
      }
      if (uVar2 < uVar11) {
        iVar36 = uVar2 * 8 + -0x10;
        iVar41 = uVar2 << 3;
        uVar31 = uVar2;
        do {
          uVar25 = param_1[uVar31 * 2];
          uVar20 = (param_1 + uVar31 * 2)[1];
          puVar35 = param_3 + uVar31 * 2;
          *puVar35 = uVar25;
          uVar5 = puVar35[-2];
          uVar10 = puVar35[-1];
          puVar35[1] = uVar20;
          uVar24 = ((uint)((byte)((int)uVar20 >> 0x1f) & 1) << 0x1f |
                   (uint)((int)uVar20 >> 0x1f) >> 1) ^ uVar25;
          uVar28 = (uint)((int)uVar20 >> 0x1f) >> 1 ^ uVar20;
          uVar15 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          bVar44 = uVar24 < (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                             (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar5);
          if ((int)(uVar28 - (uVar15 + bVar44)) < 0 !=
              (SBORROW4(uVar28,uVar15) != SBORROW4(uVar28 - uVar15,(uint)bVar44))) {
            iVar13 = iVar41;
            iVar16 = iVar36;
            do {
              *(uint *)((int)param_3 + iVar13) = uVar5;
              ((uint *)((int)param_3 + iVar13))[1] = uVar10;
              if (iVar13 == 8) {
                puVar35 = param_3;
                goto LAB_00b628a8;
              }
              puVar35 = (uint *)((int)param_3 + iVar16);
              uVar5 = *puVar35;
              iVar16 = iVar16 + -8;
              iVar13 = iVar13 + -8;
              uVar10 = puVar35[1];
              uVar15 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
              bVar44 = uVar24 < (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                                 (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar5);
            } while ((int)(uVar28 - (uVar15 + bVar44)) < 0 !=
                     (SBORROW4(uVar28,uVar15) != SBORROW4(uVar28 - uVar15,(uint)bVar44)));
            puVar35 = (uint *)((int)param_3 + iVar13);
LAB_00b628a8:
            *puVar35 = uVar25;
            puVar35[1] = uVar20;
          }
          iVar36 = iVar36 + 8;
          iVar41 = iVar41 + 8;
          uVar31 = uVar31 + 1;
        } while (uVar31 != uVar11);
      }
      puVar35 = param_3 + uVar11 * 2;
      if (uVar2 < param_2 - uVar11) {
        local_38 = param_3 + uVar11 * 2 + -4;
        local_48 = 8;
        uVar31 = uVar2;
        puVar6 = puVar35;
        do {
          uVar24 = param_1[uVar11 * 2 + uVar31 * 2];
          uVar15 = (param_1 + uVar11 * 2 + uVar31 * 2)[1];
          puVar3 = puVar35 + uVar31 * 2;
          *puVar3 = uVar24;
          uVar5 = puVar3[-2];
          uVar10 = puVar3[-1];
          puVar3[1] = uVar15;
          uVar25 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
          uVar28 = ((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f |
                   (uint)((int)uVar15 >> 0x1f) >> 1) ^ uVar24;
          uVar20 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          bVar44 = uVar28 < (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                             (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar5);
          if ((int)(uVar25 - (uVar20 + bVar44)) < 0 !=
              (SBORROW4(uVar25,uVar20) != SBORROW4(uVar25 - uVar20,(uint)bVar44))) {
            iVar41 = local_48;
            puVar3 = puVar6;
            puVar7 = local_38;
            do {
              puVar3[uVar2 * 2] = uVar5;
              (puVar3 + uVar2 * 2)[1] = uVar10;
              if (uVar2 * 8 == iVar41) {
                puVar3 = puVar35;
                goto LAB_00b629d0;
              }
              uVar5 = puVar7[uVar2 * 2];
              iVar41 = iVar41 + 8;
              puVar3 = puVar3 + -2;
              uVar10 = (puVar7 + uVar2 * 2)[1];
              uVar20 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
              bVar44 = uVar28 < (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                                 (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar5);
              puVar7 = puVar7 + -2;
            } while ((int)(uVar25 - (uVar20 + bVar44)) < 0 !=
                     (SBORROW4(uVar25,uVar20) != SBORROW4(uVar25 - uVar20,(uint)bVar44)));
            puVar3 = puVar3 + uVar2 * 2;
LAB_00b629d0:
            *puVar3 = uVar24;
            puVar3[1] = uVar15;
          }
          uVar31 = uVar31 + 1;
          puVar6 = puVar6 + 2;
          local_48 = local_48 + -8;
          local_38 = local_38 + 2;
        } while (uVar31 != param_2 - uVar11);
      }
      iVar41 = 0;
      puVar3 = param_3 + param_2 * 2 + -2;
      puVar6 = puVar35 + -2;
      do {
        uVar20 = puVar6[1];
        uVar31 = *puVar3;
        uVar10 = puVar3[1];
        uVar5 = (uint)((int)uVar20 >> 0x1f) >> 1 ^ uVar20;
        uVar24 = *puVar6;
        uVar25 = puVar35[1];
        uVar2 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
        bVar44 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar31) <
                 (((uint)((byte)((int)uVar20 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar20 >> 0x1f) >> 1) ^ uVar24);
        bVar48 = SBORROW4(uVar2,uVar5) != SBORROW4(uVar2 - uVar5,(uint)bVar44);
        bVar42 = (int)(uVar2 - (uVar5 + bVar44)) < 0;
        uVar5 = param_3[1];
        bVar44 = bVar42 != bVar48;
        uVar2 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
        uVar15 = (uint)((int)uVar25 >> 0x1f) >> 1 ^ uVar25;
        bVar45 = (((uint)((byte)((int)uVar25 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar25 >> 0x1f) >> 1) ^ *puVar35) <
                 (((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1)
                 ^ *param_3);
        bVar49 = SBORROW4(uVar15,uVar2) != SBORROW4(uVar15 - uVar2,(uint)bVar45);
        bVar45 = (int)(uVar15 - (uVar2 + bVar45)) < 0;
        uVar15 = (uint)(bVar45 != bVar49);
        uVar2 = *param_3;
        if (uVar15 != 0) {
          uVar5 = uVar25;
          uVar2 = *puVar35;
        }
        *(uint *)((int)param_1 + iVar41) = uVar2;
        iVar36 = 0;
        if (bVar44) {
          iVar36 = -1;
          uVar31 = uVar24;
        }
        ((uint *)((int)param_1 + iVar41))[1] = uVar5;
        puVar35 = puVar35 + uVar15 * 2;
        puVar7 = (uint *)((int)param_1 + ((param_2 * 8 + -8) - iVar41));
        *puVar7 = uVar31;
        iVar41 = iVar41 + 8;
        if (bVar44) {
          uVar10 = uVar20;
        }
        puVar7[1] = uVar10;
        iVar13 = 0;
        if (bVar42 == bVar48) {
          iVar13 = -1;
        }
        uVar11 = uVar11 - 1;
        puVar3 = puVar3 + iVar13 * 2;
        param_3 = param_3 + (uint)(bVar45 == bVar49) * 2;
        puVar6 = puVar6 + iVar36 * 2;
      } while (uVar11 != 0);
      puVar6 = puVar6 + 2;
      if ((param_2 & 1) != 0) {
        bVar44 = puVar6 <= param_3;
        puVar7 = puVar35;
        if (!bVar44) {
          puVar7 = param_3;
        }
        uVar11 = puVar7[1];
        *(uint *)((int)param_1 + iVar41) = *puVar7;
        ((uint *)((int)param_1 + iVar41))[1] = uVar11;
        puVar35 = puVar35 + (uint)bVar44 * 2;
        param_3 = param_3 + (uint)!bVar44 * 2;
      }
      bVar44 = param_3 != puVar6;
      if (!bVar44) {
        puVar6 = puVar3 + 2;
      }
      if (bVar44 || puVar35 != puVar6) {
        FUN_00fb7254();
LAB_00b62cc8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb62cc8);
        (*pcVar1)();
      }
    }
    return;
  }
  local_54 = param_6;
  local_4c = param_5;
LAB_00b61d58:
  uVar11 = param_2;
  do {
    if (local_4c == 0) {
      FUN_00b6163c(param_1,uVar11,param_3,param_4,1);
      return;
    }
    puVar35 = param_1 + (uVar11 >> 3) * 8;
    puVar6 = param_1 + ((uVar11 >> 3) * 8 - (uVar11 >> 3)) * 2;
    if (uVar11 < 0x40) {
      uVar2 = param_1[1];
      uVar20 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
      uVar31 = puVar6[1];
      uVar15 = ((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
               *param_1;
      uVar10 = (uint)((int)uVar31 >> 0x1f) >> 1 ^ uVar31;
      uVar5 = puVar35[1];
      uVar31 = ((uint)((byte)((int)uVar31 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar31 >> 0x1f) >> 1)
               ^ *puVar6;
      uVar2 = ((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1) ^
              *puVar35;
      uVar5 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
      bVar44 = (int)(uVar20 - (uVar5 + (uVar15 < uVar2))) < 0 !=
               (SBORROW4(uVar20,uVar5) != SBORROW4(uVar20 - uVar5,(uint)(uVar15 < uVar2)));
      if (bVar44 != ((int)(uVar5 - (uVar10 + (uVar2 < uVar31))) < 0 !=
                    (SBORROW4(uVar5,uVar10) != SBORROW4(uVar5 - uVar10,(uint)(uVar2 < uVar31))))) {
        puVar35 = puVar6;
      }
      if (bVar44 != ((int)(uVar20 - (uVar10 + (uVar15 < uVar31))) < 0 !=
                    (SBORROW4(uVar20,uVar10) != SBORROW4(uVar20 - uVar10,(uint)(uVar15 < uVar31)))))
      {
        puVar35 = param_1;
      }
    }
    else {
      puVar35 = (uint *)FUN_00b634ec(param_1,puVar35);
    }
    local_4c = local_4c + -1;
    local_30 = *(undefined8 *)puVar35;
    uVar2 = (uint)((int)puVar35 - (int)param_1) >> 3;
    if (local_54 != (uint *)0x0) {
      uVar5 = (uint)((ulonglong)local_30 >> 0x20);
      uVar10 = local_54[1];
      uVar15 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
      uVar31 = (int)uVar5 >> 0x1f;
      uVar5 = uVar31 >> 1 ^ uVar5;
      bVar44 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar10 >> 0x1f) >> 1)
               ^ *local_54) <
               (((uint)((byte)((longlong)local_30 >> 0x3f) & 1) << 0x1f | uVar31 >> 1) ^
               (uint)local_30);
      if ((int)(uVar15 - (uVar5 + bVar44)) < 0 ==
          (SBORROW4(uVar15,uVar5) != SBORROW4(uVar15 - uVar5,(uint)bVar44))) break;
    }
    if (param_4 < uVar11) goto LAB_00b62cc8;
    puVar3 = param_3 + uVar11 * 2;
    param_2 = 0;
    puVar6 = param_1;
    uVar31 = uVar2;
    while( true ) {
      iVar41 = uVar31 - 3;
      if (uVar31 < 3) {
        iVar41 = 0;
      }
      if (puVar6 < param_1 + iVar41 * 2) {
        uVar5 = puVar35[1];
        uVar10 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
        uVar5 = ((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1) ^
                *puVar35;
        do {
          uVar20 = puVar6[1];
          uVar15 = (uint)((int)uVar20 >> 0x1f) >> 1 ^ uVar20;
          bVar44 = (((uint)((byte)((int)uVar20 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar20 >> 0x1f) >> 1) ^ *puVar6) < uVar5;
          uVar24 = puVar6[3];
          bVar42 = SBORROW4(uVar15,uVar10) != SBORROW4(uVar15 - uVar10,(uint)bVar44);
          bVar44 = (int)(uVar15 - (uVar10 + bVar44)) < 0;
          uVar15 = puVar6[2];
          puVar7 = param_3;
          if (bVar44 == bVar42) {
            puVar7 = puVar3 + -2;
          }
          iVar36 = param_2 * 2;
          puVar7[iVar36] = *puVar6;
          if (bVar44 != bVar42) {
            param_2 = param_2 + 1;
          }
          (puVar7 + iVar36)[1] = uVar20;
          uVar20 = (uint)((int)uVar24 >> 0x1f) >> 1 ^ uVar24;
          bVar44 = (((uint)((byte)((int)uVar24 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar24 >> 0x1f) >> 1) ^ uVar15) < uVar5;
          bVar42 = SBORROW4(uVar20,uVar10) != SBORROW4(uVar20 - uVar10,(uint)bVar44);
          bVar44 = (int)(uVar20 - (uVar10 + bVar44)) < 0;
          puVar7 = param_3;
          if (bVar44 == bVar42) {
            puVar7 = puVar3 + -4;
          }
          iVar36 = param_2 * 2;
          puVar7[iVar36] = uVar15;
          if (bVar44 != bVar42) {
            param_2 = param_2 + 1;
          }
          uVar15 = puVar6[5];
          (puVar7 + iVar36)[1] = uVar24;
          uVar20 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
          bVar44 = (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar15 >> 0x1f) >> 1) ^ puVar6[4]) < uVar5;
          bVar42 = SBORROW4(uVar20,uVar10) != SBORROW4(uVar20 - uVar10,(uint)bVar44);
          bVar44 = (int)(uVar20 - (uVar10 + bVar44)) < 0;
          puVar7 = param_3;
          if (bVar44 == bVar42) {
            puVar7 = puVar3 + -6;
          }
          puVar3 = puVar3 + -8;
          iVar36 = param_2 * 2;
          puVar7[iVar36] = puVar6[4];
          if (bVar44 != bVar42) {
            param_2 = param_2 + 1;
          }
          uVar20 = puVar6[7];
          (puVar7 + iVar36)[1] = uVar15;
          puVar7 = puVar6 + 6;
          puVar6 = puVar6 + 8;
          uVar15 = (uint)((int)uVar20 >> 0x1f) >> 1 ^ uVar20;
          bVar44 = (((uint)((byte)((int)uVar20 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar20 >> 0x1f) >> 1) ^ *puVar7) < uVar5;
          bVar42 = SBORROW4(uVar15,uVar10) != SBORROW4(uVar15 - uVar10,(uint)bVar44);
          bVar44 = (int)(uVar15 - (uVar10 + bVar44)) < 0;
          puVar32 = puVar3;
          if (bVar44 != bVar42) {
            puVar32 = param_3;
          }
          iVar36 = param_2 * 2;
          puVar32[iVar36] = *puVar7;
          if (bVar44 != bVar42) {
            param_2 = param_2 + 1;
          }
          (puVar32 + iVar36)[1] = uVar20;
        } while (puVar6 < param_1 + iVar41 * 2);
      }
      if (puVar6 < param_1 + uVar31 * 2) {
        uVar5 = *puVar35;
        uVar10 = puVar35[1];
        uVar15 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
        do {
          uVar20 = *puVar6;
          uVar25 = puVar6[1];
          uVar24 = (uint)((int)uVar25 >> 0x1f) >> 1 ^ uVar25;
          puVar3 = puVar3 + -2;
          bVar44 = (((uint)((byte)((int)uVar25 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar25 >> 0x1f) >> 1) ^ uVar20) <
                   (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                    (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar5);
          puVar6 = puVar6 + 2;
          bVar42 = SBORROW4(uVar24,uVar15) != SBORROW4(uVar24 - uVar15,(uint)bVar44);
          bVar44 = (int)(uVar24 - (uVar15 + bVar44)) < 0;
          puVar7 = puVar3;
          if (bVar44 != bVar42) {
            puVar7 = param_3;
          }
          iVar41 = param_2 * 2;
          puVar7[iVar41] = uVar20;
          if (bVar44 != bVar42) {
            param_2 = param_2 + 1;
          }
          (puVar7 + iVar41)[1] = uVar25;
        } while (puVar6 < param_1 + uVar31 * 2);
      }
      if (uVar31 == uVar11) break;
      puVar3 = puVar3 + -2;
      uVar31 = *puVar6;
      uVar5 = puVar6[1];
      puVar6 = puVar6 + 2;
      puVar3[param_2 * 2] = uVar31;
      (puVar3 + param_2 * 2)[1] = uVar5;
      uVar31 = uVar11;
    }
    FUN_016dd1aa(param_1,param_3,param_2 << 3);
    iVar41 = uVar11 - param_2;
    if (iVar41 != 0) {
      puVar3 = param_1 + param_2 * 2;
      puVar6 = param_3 + uVar11 * 2 + -2;
      iVar36 = iVar41;
      do {
        uVar31 = *puVar6;
        uVar5 = puVar6[1];
        puVar6 = puVar6 + -2;
        *puVar3 = uVar31;
        puVar3[1] = uVar5;
        puVar3 = puVar3 + 2;
        iVar36 = iVar36 + -1;
      } while (iVar36 != 0);
    }
    if (param_2 == 0) break;
    if (uVar11 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
    }
    FUN_00b61ccc(param_1 + param_2 * 2,iVar41,param_3,param_4,local_4c,&local_30);
    uVar11 = param_2;
    if (param_2 < 0x21) goto LAB_00b61cf4;
  } while( true );
  if (param_4 < uVar11) goto LAB_00b62cc8;
  puVar3 = param_3 + uVar11 * 2;
  uVar31 = 0;
  puVar6 = param_1;
  while( true ) {
    iVar41 = uVar2 - 3;
    if (uVar2 < 3) {
      iVar41 = 0;
    }
    if (puVar6 < param_1 + iVar41 * 2) {
      uVar5 = puVar35[1];
      uVar10 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
      uVar5 = ((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1) ^
              *puVar35;
      do {
        uVar24 = puVar6[1];
        uVar25 = puVar6[2];
        uVar20 = puVar6[3];
        uVar15 = (uint)((int)uVar24 >> 0x1f) >> 1 ^ uVar24;
        bVar44 = uVar5 < (((uint)((byte)((int)uVar24 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar24 >> 0x1f) >> 1) ^ *puVar6);
        bVar42 = SBORROW4(uVar10,uVar15) != SBORROW4(uVar10 - uVar15,(uint)bVar44);
        bVar44 = (int)(uVar10 - (uVar15 + bVar44)) < 0;
        puVar7 = param_3;
        if (bVar44 != bVar42) {
          puVar7 = puVar3 + -2;
        }
        iVar36 = uVar31 * 2;
        puVar7[iVar36] = *puVar6;
        if (bVar44 == bVar42) {
          uVar31 = uVar31 + 1;
        }
        (puVar7 + iVar36)[1] = uVar24;
        uVar15 = (uint)((int)uVar20 >> 0x1f) >> 1 ^ uVar20;
        bVar44 = uVar5 < (((uint)((byte)((int)uVar20 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar20 >> 0x1f) >> 1) ^ uVar25);
        bVar42 = SBORROW4(uVar10,uVar15) != SBORROW4(uVar10 - uVar15,(uint)bVar44);
        bVar44 = (int)(uVar10 - (uVar15 + bVar44)) < 0;
        puVar7 = param_3;
        if (bVar44 != bVar42) {
          puVar7 = puVar3 + -4;
        }
        iVar36 = uVar31 * 2;
        puVar7[iVar36] = uVar25;
        if (bVar44 == bVar42) {
          uVar31 = uVar31 + 1;
        }
        uVar24 = puVar6[5];
        (puVar7 + iVar36)[1] = uVar20;
        uVar15 = (uint)((int)uVar24 >> 0x1f) >> 1 ^ uVar24;
        bVar44 = uVar5 < (((uint)((byte)((int)uVar24 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar24 >> 0x1f) >> 1) ^ puVar6[4]);
        bVar42 = SBORROW4(uVar10,uVar15) != SBORROW4(uVar10 - uVar15,(uint)bVar44);
        bVar44 = (int)(uVar10 - (uVar15 + bVar44)) < 0;
        puVar7 = param_3;
        if (bVar44 != bVar42) {
          puVar7 = puVar3 + -6;
        }
        puVar3 = puVar3 + -8;
        iVar36 = uVar31 * 2;
        puVar7[iVar36] = puVar6[4];
        if (bVar44 == bVar42) {
          uVar31 = uVar31 + 1;
        }
        uVar15 = puVar6[7];
        (puVar7 + iVar36)[1] = uVar24;
        puVar7 = puVar6 + 6;
        puVar6 = puVar6 + 8;
        uVar20 = (uint)((int)uVar15 >> 0x1f) >> 1 ^ uVar15;
        bVar44 = uVar5 < (((uint)((byte)((int)uVar15 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar15 >> 0x1f) >> 1) ^ *puVar7);
        bVar42 = SBORROW4(uVar10,uVar20) != SBORROW4(uVar10 - uVar20,(uint)bVar44);
        bVar44 = (int)(uVar10 - (uVar20 + bVar44)) < 0;
        puVar32 = puVar3;
        if (bVar44 == bVar42) {
          puVar32 = param_3;
        }
        iVar36 = uVar31 * 2;
        puVar32[iVar36] = *puVar7;
        if (bVar44 == bVar42) {
          uVar31 = uVar31 + 1;
        }
        (puVar32 + iVar36)[1] = uVar15;
      } while (puVar6 < param_1 + iVar41 * 2);
    }
    if (puVar6 < param_1 + uVar2 * 2) {
      uVar5 = puVar35[1];
      uVar15 = *puVar35;
      uVar10 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
      do {
        uVar24 = *puVar6;
        uVar25 = puVar6[1];
        uVar20 = (uint)((int)uVar25 >> 0x1f) >> 1 ^ uVar25;
        puVar3 = puVar3 + -2;
        bVar44 = (((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1)
                 ^ uVar15) <
                 (((uint)((byte)((int)uVar25 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar25 >> 0x1f) >> 1) ^ uVar24);
        puVar6 = puVar6 + 2;
        bVar42 = SBORROW4(uVar10,uVar20) != SBORROW4(uVar10 - uVar20,(uint)bVar44);
        bVar44 = (int)(uVar10 - (uVar20 + bVar44)) < 0;
        puVar7 = puVar3;
        if (bVar44 == bVar42) {
          puVar7 = param_3;
        }
        iVar41 = uVar31 * 2;
        puVar7[iVar41] = uVar24;
        if (bVar44 == bVar42) {
          uVar31 = uVar31 + 1;
        }
        (puVar7 + iVar41)[1] = uVar25;
      } while (puVar6 < param_1 + uVar2 * 2);
    }
    if (uVar2 == uVar11) break;
    uVar2 = puVar6[1];
    iVar41 = uVar31 * 2;
    param_3[iVar41] = *puVar6;
    puVar6 = puVar6 + 2;
    uVar31 = uVar31 + 1;
    puVar3 = puVar3 + -2;
    (param_3 + iVar41)[1] = uVar2;
    uVar2 = uVar11;
  }
  FUN_016dd1aa(param_1,param_3,uVar31 << 3);
  param_2 = uVar11 - uVar31;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar31 * 2;
  puVar6 = param_3 + uVar11 * 2 + -2;
  uVar2 = param_2;
  puVar35 = param_1;
  do {
    uVar10 = *puVar6;
    uVar2 = uVar2 - 1;
    uVar5 = puVar6[1];
    puVar6 = puVar6 + -2;
    *puVar35 = uVar10;
    puVar35[1] = uVar5;
    puVar35 = puVar35 + 2;
  } while (uVar2 != 0);
  if (uVar11 < uVar31) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar31,uVar11,uVar11,&DAT_018af348);
  }
  local_54 = (uint *)0x0;
  if (param_2 < 0x21) goto LAB_00b61cf4;
  goto LAB_00b61d58;
}

