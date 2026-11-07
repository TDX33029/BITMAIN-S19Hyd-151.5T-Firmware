// FUN_013fe9a4 @ 013fe9a4 size=3312 calls_out=7 calls_in=2
// strings: 

void FUN_013fe9a4(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  bool bVar22;
  bool bVar23;
  uint *local_64;
  uint *local_58;
  int local_48;
  int local_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_2 < 0x21) {
LAB_013fe9c8:
    if (param_2 < 2) {
      return;
    }
    if (param_2 + 0x10 <= param_4) {
      uVar14 = param_2 >> 1;
      if (param_2 < 8) {
        uVar7 = param_1[1];
        uVar13 = param_1[2];
        uVar4 = param_1[3];
        uVar5 = param_1[4];
        uVar9 = param_1[5];
        *param_3 = *param_1;
        param_3[1] = uVar7;
        param_3[2] = uVar13;
        param_3[3] = uVar4;
        param_3[4] = uVar5;
        param_3[5] = uVar9;
        puVar21 = param_1 + uVar14 * 6;
        puVar11 = param_3 + uVar14 * 6;
        uVar7 = puVar21[1];
        uVar13 = puVar21[2];
        uVar4 = puVar21[3];
        uVar5 = puVar21[4];
        uVar9 = puVar21[5];
        *puVar11 = *puVar21;
        puVar11[1] = uVar7;
        puVar11[2] = uVar13;
        puVar11[3] = uVar4;
        puVar11[4] = uVar5;
        puVar11[5] = uVar9;
        uVar7 = 1;
      }
      else {
        bVar23 = param_1[0xc] <= param_1[0x12];
        if (param_1[0x12] == param_1[0xc]) {
          bVar23 = param_1[0xf] <= param_1[0x15];
        }
        iVar2 = 0x30;
        iVar3 = 0x48;
        if (!bVar23) {
          iVar2 = 0x48;
          iVar3 = 0x30;
        }
        puVar11 = (uint *)((int)param_1 + iVar2);
        bVar23 = *param_1 <= param_1[6];
        if (param_1[6] == *param_1) {
          bVar23 = param_1[3] <= param_1[9];
        }
        uVar7 = (uint)!bVar23;
        puVar10 = (uint *)((int)param_1 + iVar3);
        puVar21 = param_1 + (uVar7 | uVar7 << 1) * 2;
        puVar6 = param_1 + (uVar7 ^ 1 | (uVar7 ^ 1) << 1) * 2;
        bVar23 = *puVar21 <= *puVar11;
        if (*puVar11 == *puVar21) {
          bVar23 = puVar21[3] <= puVar11[3];
        }
        puVar19 = puVar11;
        if (!bVar23) {
          puVar19 = puVar6;
        }
        bVar22 = *puVar6 <= *puVar10;
        if (*puVar10 == *puVar6) {
          bVar22 = puVar6[3] <= puVar10[3];
        }
        puVar12 = puVar6;
        puVar8 = puVar10;
        if (!bVar22) {
          puVar12 = puVar11;
          puVar8 = puVar6;
          puVar19 = puVar10;
        }
        if (!bVar23) {
          puVar12 = puVar21;
        }
        uVar7 = puVar19[3];
        uVar13 = *puVar19;
        if (!bVar23) {
          puVar21 = puVar11;
        }
        uVar4 = *puVar12;
        uVar5 = puVar12[3];
        uVar9 = puVar21[1];
        uVar15 = puVar21[2];
        uVar16 = puVar21[3];
        uVar17 = puVar21[4];
        uVar20 = puVar21[5];
        *param_3 = *puVar21;
        param_3[1] = uVar9;
        param_3[2] = uVar15;
        param_3[3] = uVar16;
        param_3[4] = uVar17;
        param_3[5] = uVar20;
        bVar23 = uVar4 <= uVar13;
        if (uVar13 == uVar4) {
          bVar23 = uVar5 <= uVar7;
        }
        puVar11 = puVar12;
        if (!bVar23) {
          puVar11 = puVar19;
        }
        uVar7 = puVar11[1];
        uVar13 = puVar11[2];
        uVar4 = puVar11[3];
        uVar5 = puVar11[4];
        uVar9 = puVar11[5];
        if (bVar23) {
          puVar12 = puVar19;
        }
        param_3[6] = *puVar11;
        param_3[7] = uVar7;
        param_3[8] = uVar13;
        param_3[9] = uVar4;
        param_3[10] = uVar5;
        param_3[0xb] = uVar9;
        uVar7 = puVar12[1];
        uVar13 = puVar12[2];
        uVar4 = puVar12[3];
        uVar5 = puVar12[4];
        uVar9 = puVar12[5];
        param_3[0xc] = *puVar12;
        param_3[0xd] = uVar7;
        param_3[0xe] = uVar13;
        param_3[0xf] = uVar4;
        param_3[0x10] = uVar5;
        param_3[0x11] = uVar9;
        uVar7 = puVar8[1];
        uVar13 = puVar8[2];
        uVar4 = puVar8[3];
        uVar5 = puVar8[4];
        uVar9 = puVar8[5];
        param_3[0x12] = *puVar8;
        param_3[0x13] = uVar7;
        param_3[0x14] = uVar13;
        param_3[0x15] = uVar4;
        param_3[0x16] = uVar5;
        param_3[0x17] = uVar9;
        puVar11 = param_1 + uVar14 * 6;
        bVar23 = puVar11[0xc] <= puVar11[0x12];
        if (puVar11[0x12] == puVar11[0xc]) {
          bVar23 = puVar11[0xf] <= puVar11[0x15];
        }
        iVar2 = 0x30;
        iVar3 = 0x48;
        if (!bVar23) {
          iVar2 = 0x48;
          iVar3 = 0x30;
        }
        puVar21 = (uint *)((int)puVar11 + iVar3);
        bVar23 = *puVar11 <= puVar11[6];
        if (puVar11[6] == *puVar11) {
          bVar23 = puVar11[3] <= puVar11[9];
        }
        uVar7 = (uint)!bVar23;
        puVar6 = (uint *)((int)puVar11 + iVar2);
        puVar10 = puVar11 + (uVar7 | uVar7 << 1) * 2;
        puVar11 = puVar11 + (uVar7 ^ 1 | (uVar7 ^ 1) << 1) * 2;
        bVar23 = *puVar10 <= *puVar6;
        if (*puVar6 == *puVar10) {
          bVar23 = puVar10[3] <= puVar6[3];
        }
        puVar19 = puVar6;
        if (!bVar23) {
          puVar19 = puVar11;
        }
        bVar22 = *puVar11 <= *puVar21;
        if (*puVar21 == *puVar11) {
          bVar22 = puVar11[3] <= puVar21[3];
        }
        puVar12 = puVar11;
        puVar8 = puVar21;
        if (!bVar22) {
          puVar12 = puVar6;
          puVar8 = puVar11;
          puVar19 = puVar21;
        }
        uVar7 = *puVar19;
        puVar11 = puVar10;
        if (!bVar23) {
          puVar11 = puVar6;
          puVar12 = puVar10;
        }
        uVar13 = puVar19[3];
        uVar4 = *puVar12;
        uVar5 = puVar12[3];
        puVar21 = param_3 + uVar14 * 6;
        uVar9 = puVar11[1];
        uVar15 = puVar11[2];
        uVar16 = puVar11[3];
        uVar17 = puVar11[4];
        uVar20 = puVar11[5];
        *puVar21 = *puVar11;
        puVar21[1] = uVar9;
        puVar21[2] = uVar15;
        puVar21[3] = uVar16;
        puVar21[4] = uVar17;
        puVar21[5] = uVar20;
        bVar23 = uVar4 <= uVar7;
        if (uVar7 == uVar4) {
          bVar23 = uVar5 <= uVar13;
        }
        puVar11 = puVar12;
        if (!bVar23) {
          puVar11 = puVar19;
        }
        uVar7 = puVar11[1];
        uVar13 = puVar11[2];
        uVar4 = puVar11[3];
        uVar5 = puVar11[4];
        uVar9 = puVar11[5];
        if (bVar23) {
          puVar12 = puVar19;
        }
        puVar21[6] = *puVar11;
        puVar21[7] = uVar7;
        puVar21[8] = uVar13;
        puVar21[9] = uVar4;
        puVar21[10] = uVar5;
        puVar21[0xb] = uVar9;
        uVar7 = puVar12[1];
        uVar13 = puVar12[2];
        uVar4 = puVar12[3];
        uVar5 = puVar12[4];
        uVar9 = puVar12[5];
        puVar21[0xc] = *puVar12;
        puVar21[0xd] = uVar7;
        puVar21[0xe] = uVar13;
        puVar21[0xf] = uVar4;
        puVar21[0x10] = uVar5;
        puVar21[0x11] = uVar9;
        uVar7 = puVar8[1];
        uVar13 = puVar8[2];
        uVar4 = puVar8[3];
        uVar5 = puVar8[4];
        uVar9 = puVar8[5];
        puVar21[0x12] = *puVar8;
        puVar21[0x13] = uVar7;
        puVar21[0x14] = uVar13;
        puVar21[0x15] = uVar4;
        puVar21[0x16] = uVar5;
        puVar21[0x17] = uVar9;
        uVar7 = 4;
      }
      if (uVar7 < uVar14) {
        local_44 = uVar7 * 0x18;
        uVar13 = uVar7;
        do {
          puVar21 = param_1 + uVar13 * 6;
          puVar11 = param_3 + uVar13 * 6;
          uVar4 = puVar21[1];
          uVar5 = puVar21[2];
          uVar9 = puVar21[3];
          uVar15 = puVar21[4];
          uVar16 = puVar21[5];
          *puVar11 = *puVar21;
          puVar11[1] = uVar4;
          puVar11[2] = uVar5;
          puVar11[3] = uVar9;
          puVar11[4] = uVar15;
          puVar11[5] = uVar16;
          uVar4 = puVar11[3];
          uVar5 = param_3[uVar13 * 6];
          bVar23 = puVar11[-6] <= uVar5;
          if (uVar5 == puVar11[-6]) {
            bVar23 = puVar11[-3] <= uVar4;
          }
          if (!bVar23) {
            uVar9 = puVar11[2];
            uVar15 = puVar11[5];
            uVar17 = puVar11[1];
            uVar16 = puVar11[4];
            iVar2 = local_44;
            do {
              puVar18 = (undefined4 *)((int)param_3 + iVar2);
              *puVar18 = puVar18[-6];
              puVar18[1] = puVar18[-5];
              puVar18[2] = puVar18[-4];
              puVar18[3] = puVar18[-3];
              puVar18[4] = puVar18[-2];
              puVar18[5] = puVar18[-1];
              if (iVar2 == 0x18) {
                puVar11 = param_3;
                goto LAB_013ff238;
              }
              iVar2 = iVar2 + -0x18;
              bVar23 = (uint)puVar18[-0xc] <= uVar5;
              if (uVar5 == puVar18[-0xc]) {
                bVar23 = (uint)puVar18[-9] <= uVar4;
              }
            } while (!bVar23);
            puVar11 = (uint *)((int)param_3 + iVar2);
LAB_013ff238:
            *puVar11 = uVar5;
            puVar11[1] = uVar17;
            puVar11[2] = uVar9;
            puVar11[3] = uVar4;
            puVar11[4] = uVar16;
            puVar11[5] = uVar15;
          }
          uVar13 = uVar13 + 1;
          local_44 = local_44 + 0x18;
        } while (uVar13 != uVar14);
      }
      puVar11 = param_3 + uVar14 * 6;
      if (uVar7 < param_2 - uVar14) {
        local_48 = 0x18;
        uVar13 = uVar7;
        local_58 = puVar11;
        do {
          puVar21 = puVar11 + uVar13 * 6;
          puVar10 = param_1 + uVar14 * 6 + uVar13 * 6;
          uVar4 = puVar10[1];
          uVar5 = puVar10[2];
          uVar9 = puVar10[3];
          uVar15 = puVar10[4];
          uVar16 = puVar10[5];
          *puVar21 = *puVar10;
          puVar21[1] = uVar4;
          puVar21[2] = uVar5;
          puVar21[3] = uVar9;
          puVar21[4] = uVar15;
          puVar21[5] = uVar16;
          uVar4 = puVar21[3];
          uVar5 = puVar11[uVar13 * 6];
          bVar23 = puVar21[-6] <= uVar5;
          if (uVar5 == puVar21[-6]) {
            bVar23 = puVar21[-3] <= uVar4;
          }
          if (!bVar23) {
            uVar16 = puVar21[1];
            uVar9 = puVar21[2];
            uVar17 = puVar21[4];
            uVar15 = puVar21[5];
            iVar2 = local_48;
            puVar21 = local_58;
            do {
              puVar10 = puVar21 + uVar7 * 6;
              *puVar10 = puVar10[-6];
              puVar10[1] = puVar10[-5];
              puVar10[2] = puVar10[-4];
              puVar10[3] = puVar10[-3];
              puVar10[4] = puVar10[-2];
              puVar10[5] = puVar10[-1];
              if (uVar7 * 0x18 == iVar2) {
                puVar21 = puVar11;
                goto LAB_013ff398;
              }
              iVar2 = iVar2 + 0x18;
              puVar21 = puVar21 + -6;
              bVar23 = puVar10[-0xc] <= uVar5;
              if (uVar5 == puVar10[-0xc]) {
                bVar23 = puVar10[-9] <= uVar4;
              }
            } while (!bVar23);
            puVar21 = puVar21 + uVar7 * 6;
LAB_013ff398:
            puVar21[2] = uVar9;
            *puVar21 = uVar5;
            puVar21[1] = uVar16;
            puVar21[3] = uVar4;
            puVar21[4] = uVar17;
            puVar21[5] = uVar15;
          }
          local_48 = local_48 + -0x18;
          uVar13 = uVar13 + 1;
          local_58 = local_58 + 6;
        } while (uVar13 != param_2 - uVar14);
      }
      puVar10 = puVar11 + -6;
      puVar21 = param_3 + param_2 * 6;
      iVar2 = 0;
      do {
        puVar6 = puVar21 + -6;
        bVar23 = *param_3 <= *puVar11;
        if (*puVar11 == *param_3) {
          bVar23 = param_3[3] <= puVar11[3];
        }
        uVar7 = (uint)!bVar23;
        puVar19 = param_3;
        if (uVar7 != 0) {
          puVar19 = puVar11;
        }
        puVar8 = (uint *)((int)param_1 + iVar2);
        uVar13 = puVar19[1];
        uVar4 = puVar19[2];
        uVar5 = puVar19[3];
        uVar9 = puVar19[4];
        uVar15 = puVar19[5];
        *puVar8 = *puVar19;
        puVar8[1] = uVar13;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        puVar8[4] = uVar9;
        puVar8[5] = uVar15;
        bVar23 = *puVar10 <= *puVar6;
        if (*puVar6 == *puVar10) {
          bVar23 = puVar10[3] <= puVar21[-3];
        }
        uVar13 = (uint)!bVar23;
        puVar19 = (uint *)((int)param_1 + ((param_2 * 0x18 + -0x18) - iVar2));
        puVar21 = puVar6;
        if (uVar13 != 0) {
          puVar21 = puVar10;
        }
        uVar14 = uVar14 - 1;
        uVar4 = puVar21[1];
        uVar5 = puVar21[2];
        uVar9 = puVar21[3];
        uVar15 = puVar21[4];
        uVar16 = puVar21[5];
        *puVar19 = *puVar21;
        puVar19[1] = uVar4;
        puVar19[2] = uVar5;
        puVar19[3] = uVar9;
        puVar19[4] = uVar15;
        puVar19[5] = uVar16;
        puVar10 = puVar10 + uVar13 * -6;
        iVar2 = iVar2 + 0x18;
        puVar11 = puVar11 + (uVar7 | uVar7 << 1) * 2;
        param_3 = param_3 + (uVar7 ^ 1 | (uVar7 ^ 1) << 1) * 2;
        puVar21 = puVar6 + (uVar13 | uVar13 << 1) * 2;
      } while (uVar14 != 0);
      puVar10 = puVar10 + 6;
      puVar6 = puVar21;
      if ((param_2 & 1) != 0) {
        bVar23 = puVar10 <= param_3;
        puVar6 = puVar11;
        if (!bVar23) {
          puVar6 = param_3;
        }
        param_1 = (uint *)((int)param_1 + iVar2);
        uVar14 = puVar6[1];
        uVar7 = puVar6[2];
        uVar13 = puVar6[3];
        uVar4 = puVar6[4];
        uVar5 = puVar6[5];
        *param_1 = *puVar6;
        param_1[1] = uVar14;
        param_1[2] = uVar7;
        param_1[3] = uVar13;
        param_1[4] = uVar4;
        param_1[5] = uVar5;
        puVar6 = (uint *)((uint)!bVar23 | (uint)!bVar23 << 1);
        puVar11 = puVar11 + ((uint)bVar23 | (uint)bVar23 << 1) * 2;
        param_3 = param_3 + (int)puVar6 * 2;
      }
      if (param_3 == puVar10) {
        puVar6 = puVar21;
      }
      if (param_3 == puVar10 && puVar11 == puVar6) {
        return;
      }
      FUN_00fb7254();
    }
LAB_013ff67c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x13ff67c);
    (*pcVar1)();
  }
  local_64 = param_6;
LAB_013fed88:
  uVar14 = param_2;
  do {
    if (param_5 == 0) {
      FUN_013fa678(param_1,uVar14,param_3,param_4,1);
      return;
    }
    puVar21 = param_1 + (uVar14 >> 3) * 0x2a;
    puVar11 = param_1 + (uVar14 >> 3) * 0x18;
    if (uVar14 < 0x40) {
      uVar4 = *puVar11;
      uVar7 = *param_1;
      uVar13 = *puVar21;
      bVar23 = uVar4 <= uVar7;
      if (uVar7 == uVar4) {
        bVar23 = puVar11[3] <= param_1[3];
      }
      bVar22 = uVar13 <= uVar7;
      if (uVar7 == uVar13) {
        bVar22 = puVar21[3] <= param_1[3];
      }
      puVar10 = param_1;
      if (!bVar23 == !bVar22) {
        bVar22 = uVar13 <= uVar4;
        if (uVar4 == uVar13) {
          bVar22 = puVar21[3] <= puVar11[3];
        }
        puVar10 = puVar11;
        if (!bVar23 != !bVar22) {
          puVar10 = puVar21;
        }
      }
    }
    else {
      puVar10 = (uint *)FUN_013ff6c0(param_1);
    }
    param_5 = param_5 + -1;
    uVar7 = ((uint)((int)puVar10 - (int)param_1) >> 3) * -0x55555555;
    local_40 = *puVar10;
    uStack_3c = puVar10[1];
    uStack_38 = puVar10[2];
    uStack_34 = puVar10[3];
    uStack_30 = puVar10[4];
    uStack_2c = puVar10[5];
    if (local_64 != (uint *)0x0) {
      bVar23 = *puVar10 <= *local_64;
      if (*local_64 == *puVar10) {
        bVar23 = puVar10[3] <= local_64[3];
      }
      if (bVar23) break;
    }
    if (param_4 < uVar14) goto LAB_013ff67c;
    param_2 = 0;
    puVar11 = param_3 + uVar14 * 6;
    puVar21 = param_1;
    uVar13 = uVar7;
    while( true ) {
      for (puVar6 = puVar21; puVar6 < param_1 + uVar13 * 6; puVar6 = puVar6 + 6) {
        puVar11 = puVar11 + -6;
        bVar23 = *puVar10 <= *puVar6;
        if (*puVar6 == *puVar10) {
          bVar23 = puVar10[3] <= puVar6[3];
        }
        puVar21 = puVar11;
        if (!bVar23 != 0) {
          puVar21 = param_3;
        }
        puVar21 = puVar21 + param_2 * 6;
        uVar4 = puVar6[1];
        uVar5 = puVar6[2];
        uVar9 = puVar6[3];
        uVar15 = puVar6[4];
        uVar16 = puVar6[5];
        *puVar21 = *puVar6;
        puVar21[1] = uVar4;
        puVar21[2] = uVar5;
        puVar21[3] = uVar9;
        puVar21[4] = uVar15;
        puVar21[5] = uVar16;
        param_2 = param_2 + !bVar23;
      }
      if (uVar13 == uVar14) break;
      puVar11 = puVar11 + -6;
      puVar19 = puVar11 + param_2 * 6;
      uVar13 = puVar6[1];
      uVar4 = puVar6[2];
      uVar5 = puVar6[3];
      uVar9 = puVar6[4];
      uVar15 = puVar6[5];
      puVar21 = puVar6 + 6;
      *puVar19 = *puVar6;
      puVar19[1] = uVar13;
      puVar19[2] = uVar4;
      puVar19[3] = uVar5;
      puVar19[4] = uVar9;
      puVar19[5] = uVar15;
      uVar13 = uVar14;
    }
    FUN_016dd1aa(param_1,param_3,param_2 * 0x18);
    iVar2 = uVar14 - param_2;
    if (iVar2 != 0) {
      puVar21 = param_3 + uVar14 * 6 + -6;
      puVar11 = param_1 + param_2 * 6;
      iVar3 = iVar2;
      do {
        uVar13 = *puVar21;
        uVar4 = puVar21[1];
        uVar5 = puVar21[2];
        uVar9 = puVar21[3];
        uVar15 = puVar21[4];
        uVar16 = puVar21[5];
        puVar21 = puVar21 + -6;
        iVar3 = iVar3 + -1;
        *puVar11 = uVar13;
        puVar11[1] = uVar4;
        puVar11[2] = uVar5;
        puVar11[3] = uVar9;
        puVar11[4] = uVar15;
        puVar11[5] = uVar16;
        puVar11 = puVar11 + 6;
      } while (iVar3 != 0);
    }
    if (param_2 == 0) break;
    if (uVar14 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
    }
    FUN_013fe9a4(param_1 + param_2 * 6,iVar2,param_3,param_4,param_5,&local_40);
    uVar14 = param_2;
    if (param_2 < 0x21) goto LAB_013fe9c8;
  } while( true );
  if (param_4 < uVar14) goto LAB_013ff67c;
  uVar13 = 0;
  puVar11 = param_3 + uVar14 * 6;
  puVar21 = param_1;
  while( true ) {
    uVar4 = uVar13;
    for (puVar6 = puVar21; puVar6 < param_1 + uVar7 * 6; puVar6 = puVar6 + 6) {
      puVar11 = puVar11 + -6;
      bVar23 = *puVar10 < *puVar6;
      if (*puVar10 == *puVar6) {
        bVar23 = puVar10[3] < puVar6[3];
      }
      puVar21 = puVar11;
      if (!bVar23 != 0) {
        puVar21 = param_3;
      }
      puVar21 = puVar21 + uVar4 * 6;
      uVar13 = puVar6[1];
      uVar5 = puVar6[2];
      uVar9 = puVar6[3];
      uVar15 = puVar6[4];
      uVar16 = puVar6[5];
      *puVar21 = *puVar6;
      puVar21[1] = uVar13;
      puVar21[2] = uVar5;
      puVar21[3] = uVar9;
      puVar21[4] = uVar15;
      puVar21[5] = uVar16;
      uVar4 = uVar4 + !bVar23;
    }
    if (uVar7 == uVar14) break;
    puVar21 = puVar6 + 6;
    uVar13 = uVar4 + 1;
    puVar19 = param_3 + uVar4 * 6;
    uVar7 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    uVar9 = puVar6[4];
    uVar15 = puVar6[5];
    puVar11 = puVar11 + -6;
    *puVar19 = *puVar6;
    puVar19[1] = uVar7;
    puVar19[2] = uVar4;
    puVar19[3] = uVar5;
    puVar19[4] = uVar9;
    puVar19[5] = uVar15;
    uVar7 = uVar14;
  }
  FUN_016dd1aa(param_1,param_3,uVar4 * 0x18);
  param_2 = uVar14 - uVar4;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar4 * 6;
  puVar21 = param_3 + uVar14 * 6 + -6;
  puVar11 = param_1;
  uVar7 = param_2;
  do {
    uVar13 = *puVar21;
    uVar5 = puVar21[1];
    uVar9 = puVar21[2];
    uVar15 = puVar21[3];
    uVar16 = puVar21[4];
    uVar17 = puVar21[5];
    puVar21 = puVar21 + -6;
    uVar7 = uVar7 - 1;
    *puVar11 = uVar13;
    puVar11[1] = uVar5;
    puVar11[2] = uVar9;
    puVar11[3] = uVar15;
    puVar11[4] = uVar16;
    puVar11[5] = uVar17;
    puVar11 = puVar11 + 6;
  } while (uVar7 != 0);
  if (uVar14 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar14,uVar14,&DAT_018af348);
  }
  local_64 = (uint *)0x0;
  if (param_2 < 0x21) goto LAB_013fe9c8;
  goto LAB_013fed88;
}

