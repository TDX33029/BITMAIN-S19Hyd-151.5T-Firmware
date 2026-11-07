// FUN_00b72d38 @ 00b72d38 size=3148 calls_out=7 calls_in=2
// strings: 

void FUN_00b72d38(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  bool bVar22;
  bool bVar23;
  uint *local_64;
  uint *local_5c;
  int local_58;
  int local_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_2 < 0x21) {
LAB_00b72d5c:
    uVar16 = param_2 >> 1;
    if (uVar16 != 0) {
      if (param_2 < 8) {
        uVar3 = param_1[1];
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        uVar9 = param_1[4];
        uVar10 = param_1[5];
        *param_3 = *param_1;
        param_3[1] = uVar3;
        param_3[2] = uVar6;
        param_3[3] = uVar7;
        param_3[4] = uVar9;
        param_3[5] = uVar10;
        puVar12 = param_1 + uVar16 * 6;
        puVar18 = param_3 + uVar16 * 6;
        uVar3 = puVar12[1];
        uVar6 = puVar12[2];
        uVar7 = puVar12[3];
        uVar9 = puVar12[4];
        uVar10 = puVar12[5];
        *puVar18 = *puVar12;
        puVar18[1] = uVar3;
        puVar18[2] = uVar6;
        puVar18[3] = uVar7;
        puVar18[4] = uVar9;
        puVar18[5] = uVar10;
        uVar3 = 1;
      }
      else {
        bVar23 = param_1[0xc] <= param_1[0x12];
        if (param_1[0x12] == param_1[0xc]) {
          bVar23 = param_1[0xd] <= param_1[0x13];
        }
        iVar2 = 0x30;
        iVar5 = 0x48;
        if (!bVar23) {
          iVar2 = 0x48;
          iVar5 = 0x30;
        }
        puVar18 = (uint *)((int)param_1 + iVar5);
        bVar23 = *param_1 <= param_1[6];
        if (param_1[6] == *param_1) {
          bVar23 = param_1[1] <= param_1[7];
        }
        uVar3 = (uint)!bVar23;
        puVar12 = (uint *)((int)param_1 + iVar2);
        puVar4 = param_1 + (uVar3 | uVar3 << 1) * 2;
        puVar8 = param_1 + (uVar3 ^ 1 | (uVar3 ^ 1) << 1) * 2;
        bVar23 = *puVar4 <= *puVar12;
        if (*puVar12 == *puVar4) {
          bVar23 = puVar4[1] <= puVar12[1];
        }
        puVar21 = puVar12;
        if (!bVar23) {
          puVar21 = puVar8;
        }
        bVar22 = *puVar8 <= *puVar18;
        if (*puVar18 == *puVar8) {
          bVar22 = puVar8[1] <= puVar18[1];
        }
        puVar17 = puVar8;
        puVar13 = puVar18;
        if (!bVar22) {
          puVar17 = puVar12;
          puVar13 = puVar8;
          puVar21 = puVar18;
        }
        uVar3 = *puVar21;
        uVar6 = puVar21[1];
        puVar18 = puVar4;
        if (!bVar23) {
          puVar18 = puVar12;
          puVar17 = puVar4;
        }
        uVar7 = *puVar17;
        uVar9 = puVar17[1];
        uVar10 = puVar18[1];
        uVar11 = puVar18[2];
        uVar14 = puVar18[3];
        uVar19 = puVar18[4];
        uVar20 = puVar18[5];
        *param_3 = *puVar18;
        param_3[1] = uVar10;
        param_3[2] = uVar11;
        param_3[3] = uVar14;
        param_3[4] = uVar19;
        param_3[5] = uVar20;
        bVar23 = uVar7 <= uVar3;
        if (uVar3 == uVar7) {
          bVar23 = uVar9 <= uVar6;
        }
        puVar18 = puVar17;
        if (!bVar23) {
          puVar18 = puVar21;
        }
        uVar3 = puVar18[1];
        uVar6 = puVar18[2];
        uVar7 = puVar18[3];
        uVar9 = puVar18[4];
        uVar10 = puVar18[5];
        if (bVar23) {
          puVar17 = puVar21;
        }
        param_3[6] = *puVar18;
        param_3[7] = uVar3;
        param_3[8] = uVar6;
        param_3[9] = uVar7;
        param_3[10] = uVar9;
        param_3[0xb] = uVar10;
        uVar3 = puVar17[1];
        uVar6 = puVar17[2];
        uVar7 = puVar17[3];
        uVar9 = puVar17[4];
        uVar10 = puVar17[5];
        param_3[0xc] = *puVar17;
        param_3[0xd] = uVar3;
        param_3[0xe] = uVar6;
        param_3[0xf] = uVar7;
        param_3[0x10] = uVar9;
        param_3[0x11] = uVar10;
        uVar3 = puVar13[1];
        uVar6 = puVar13[2];
        uVar7 = puVar13[3];
        uVar9 = puVar13[4];
        uVar10 = puVar13[5];
        param_3[0x12] = *puVar13;
        param_3[0x13] = uVar3;
        param_3[0x14] = uVar6;
        param_3[0x15] = uVar7;
        param_3[0x16] = uVar9;
        param_3[0x17] = uVar10;
        puVar18 = param_1 + uVar16 * 6;
        bVar23 = puVar18[0xc] <= puVar18[0x12];
        if (puVar18[0x12] == puVar18[0xc]) {
          bVar23 = puVar18[0xd] <= puVar18[0x13];
        }
        iVar5 = 0x30;
        iVar2 = 0x48;
        if (!bVar23) {
          iVar2 = 0x30;
          iVar5 = 0x48;
        }
        puVar12 = (uint *)((int)puVar18 + iVar2);
        bVar23 = *puVar18 <= puVar18[6];
        if (puVar18[6] == *puVar18) {
          bVar23 = puVar18[1] <= puVar18[7];
        }
        uVar3 = (uint)!bVar23;
        puVar8 = (uint *)((int)puVar18 + iVar5);
        puVar4 = puVar18 + (uVar3 | uVar3 << 1) * 2;
        puVar18 = puVar18 + (uVar3 ^ 1 | (uVar3 ^ 1) << 1) * 2;
        bVar23 = *puVar4 <= *puVar8;
        if (*puVar8 == *puVar4) {
          bVar23 = puVar4[1] <= puVar8[1];
        }
        puVar21 = puVar8;
        if (!bVar23) {
          puVar21 = puVar18;
        }
        bVar22 = *puVar18 <= *puVar12;
        if (*puVar12 == *puVar18) {
          bVar22 = puVar18[1] <= puVar12[1];
        }
        puVar17 = puVar18;
        puVar13 = puVar12;
        if (!bVar22) {
          puVar17 = puVar8;
          puVar13 = puVar18;
          puVar21 = puVar12;
        }
        uVar3 = *puVar21;
        uVar6 = puVar21[1];
        puVar18 = puVar4;
        if (!bVar23) {
          puVar18 = puVar8;
          puVar17 = puVar4;
        }
        uVar7 = *puVar17;
        uVar11 = puVar17[1];
        puVar12 = param_3 + uVar16 * 6;
        uVar9 = puVar18[1];
        uVar10 = puVar18[2];
        uVar14 = puVar18[3];
        uVar19 = puVar18[4];
        uVar20 = puVar18[5];
        *puVar12 = *puVar18;
        puVar12[1] = uVar9;
        puVar12[2] = uVar10;
        puVar12[3] = uVar14;
        puVar12[4] = uVar19;
        puVar12[5] = uVar20;
        bVar23 = uVar7 <= uVar3;
        if (uVar3 == uVar7) {
          bVar23 = uVar11 <= uVar6;
        }
        puVar18 = puVar17;
        if (!bVar23) {
          puVar18 = puVar21;
        }
        uVar3 = puVar18[1];
        uVar6 = puVar18[2];
        uVar7 = puVar18[3];
        uVar9 = puVar18[4];
        uVar10 = puVar18[5];
        if (bVar23) {
          puVar17 = puVar21;
        }
        puVar12[6] = *puVar18;
        puVar12[7] = uVar3;
        puVar12[8] = uVar6;
        puVar12[9] = uVar7;
        puVar12[10] = uVar9;
        puVar12[0xb] = uVar10;
        uVar3 = puVar17[1];
        uVar6 = puVar17[2];
        uVar7 = puVar17[3];
        uVar9 = puVar17[4];
        uVar10 = puVar17[5];
        puVar12[0xc] = *puVar17;
        puVar12[0xd] = uVar3;
        puVar12[0xe] = uVar6;
        puVar12[0xf] = uVar7;
        puVar12[0x10] = uVar9;
        puVar12[0x11] = uVar10;
        uVar3 = puVar13[1];
        uVar6 = puVar13[2];
        uVar7 = puVar13[3];
        uVar9 = puVar13[4];
        uVar10 = puVar13[5];
        puVar12[0x12] = *puVar13;
        puVar12[0x13] = uVar3;
        puVar12[0x14] = uVar6;
        puVar12[0x15] = uVar7;
        puVar12[0x16] = uVar9;
        puVar12[0x17] = uVar10;
        uVar3 = 4;
      }
      if (uVar3 < uVar16) {
        local_44 = uVar3 * 0x18;
        uVar6 = uVar3;
        do {
          puVar12 = param_1 + uVar6 * 6;
          puVar18 = param_3 + uVar6 * 6;
          uVar7 = puVar12[1];
          uVar9 = puVar12[2];
          uVar10 = puVar12[3];
          uVar11 = puVar12[4];
          uVar14 = puVar12[5];
          *puVar18 = *puVar12;
          puVar18[1] = uVar7;
          puVar18[2] = uVar9;
          puVar18[3] = uVar10;
          puVar18[4] = uVar11;
          puVar18[5] = uVar14;
          uVar9 = puVar18[1];
          uVar7 = param_3[uVar6 * 6];
          bVar23 = puVar18[-6] <= uVar7;
          if (uVar7 == puVar18[-6]) {
            bVar23 = puVar18[-5] <= uVar9;
          }
          if (!bVar23) {
            local_34 = puVar12[5];
            local_40 = puVar12[2];
            local_3c = puVar12[3];
            uStack_38 = puVar12[4];
            iVar2 = local_44;
            do {
              puVar15 = (undefined4 *)((int)param_3 + iVar2);
              *puVar15 = puVar15[-6];
              puVar15[1] = puVar15[-5];
              puVar15[2] = puVar15[-4];
              puVar15[3] = puVar15[-3];
              puVar15[4] = puVar15[-2];
              puVar15[5] = puVar15[-1];
              if (iVar2 == 0x18) {
                puVar18 = param_3;
                goto LAB_00b73564;
              }
              iVar2 = iVar2 + -0x18;
              bVar23 = (uint)puVar15[-0xc] <= uVar7;
              if (uVar7 == puVar15[-0xc]) {
                bVar23 = (uint)puVar15[-0xb] <= uVar9;
              }
            } while (!bVar23);
            puVar18 = (uint *)((int)param_3 + iVar2);
LAB_00b73564:
            *puVar18 = uVar7;
            puVar18[1] = uVar9;
            puVar18[2] = local_40;
            puVar18[3] = local_3c;
            puVar18[4] = uStack_38;
            puVar18[5] = local_34;
          }
          uVar6 = uVar6 + 1;
          local_44 = local_44 + 0x18;
        } while (uVar6 != uVar16);
      }
      puVar18 = param_3 + uVar16 * 6;
      if (uVar3 < param_2 - uVar16) {
        local_58 = 0x18;
        uVar6 = uVar3;
        local_5c = puVar18;
        do {
          puVar4 = param_1 + uVar16 * 6 + uVar6 * 6;
          puVar12 = puVar18 + uVar6 * 6;
          uVar7 = puVar4[1];
          uVar9 = puVar4[2];
          uVar10 = puVar4[3];
          uVar11 = puVar4[4];
          uVar14 = puVar4[5];
          *puVar12 = *puVar4;
          puVar12[1] = uVar7;
          puVar12[2] = uVar9;
          puVar12[3] = uVar10;
          puVar12[4] = uVar11;
          puVar12[5] = uVar14;
          uVar7 = puVar18[uVar6 * 6];
          uVar9 = puVar12[1];
          bVar23 = puVar12[-6] <= uVar7;
          if (uVar7 == puVar12[-6]) {
            bVar23 = puVar12[-5] <= uVar9;
          }
          if (!bVar23) {
            local_40 = puVar4[2];
            local_3c = puVar4[3];
            uStack_38 = puVar4[4];
            local_34 = puVar4[5];
            puVar12 = local_5c;
            iVar2 = local_58;
            do {
              puVar4 = puVar12 + uVar3 * 6;
              *puVar4 = puVar4[-6];
              puVar4[1] = puVar4[-5];
              puVar4[2] = puVar4[-4];
              puVar4[3] = puVar4[-3];
              puVar4[4] = puVar4[-2];
              puVar4[5] = puVar4[-1];
              if (uVar3 * 0x18 == iVar2) {
                puVar12 = puVar18;
                goto LAB_00b736a4;
              }
              iVar2 = iVar2 + 0x18;
              puVar12 = puVar12 + -6;
              bVar23 = puVar4[-0xc] <= uVar7;
              if (uVar7 == puVar4[-0xc]) {
                bVar23 = puVar4[-0xb] <= uVar9;
              }
            } while (!bVar23);
            puVar12 = puVar12 + uVar3 * 6;
LAB_00b736a4:
            *puVar12 = uVar7;
            puVar12[1] = uVar9;
            puVar12[2] = local_40;
            puVar12[3] = local_3c;
            puVar12[4] = uStack_38;
            puVar12[5] = local_34;
          }
          local_58 = local_58 + -0x18;
          uVar6 = uVar6 + 1;
          local_5c = local_5c + 6;
        } while (uVar6 != param_2 - uVar16);
      }
      puVar4 = puVar18 + -6;
      iVar2 = 0;
      puVar12 = param_3 + param_2 * 6;
      do {
        puVar8 = puVar12 + -6;
        bVar23 = *param_3 <= *puVar18;
        if (*puVar18 == *param_3) {
          bVar23 = param_3[1] <= puVar18[1];
        }
        uVar3 = (uint)!bVar23;
        puVar13 = (uint *)((int)param_1 + iVar2);
        puVar21 = param_3;
        if (uVar3 != 0) {
          puVar21 = puVar18;
        }
        uVar6 = puVar21[1];
        uVar7 = puVar21[2];
        uVar9 = puVar21[3];
        uVar10 = puVar21[4];
        uVar11 = puVar21[5];
        *puVar13 = *puVar21;
        puVar13[1] = uVar6;
        puVar13[2] = uVar7;
        puVar13[3] = uVar9;
        puVar13[4] = uVar10;
        puVar13[5] = uVar11;
        bVar23 = *puVar4 <= *puVar8;
        if (*puVar8 == *puVar4) {
          bVar23 = puVar4[1] <= puVar12[-5];
        }
        uVar6 = (uint)!bVar23;
        puVar12 = puVar8;
        if (uVar6 != 0) {
          puVar12 = puVar4;
        }
        puVar21 = (uint *)((int)param_1 + ((param_2 * 0x18 + -0x18) - iVar2));
        uVar7 = puVar12[1];
        uVar9 = puVar12[2];
        uVar10 = puVar12[3];
        uVar11 = puVar12[4];
        uVar14 = puVar12[5];
        iVar2 = iVar2 + 0x18;
        uVar16 = uVar16 - 1;
        *puVar21 = *puVar12;
        puVar21[1] = uVar7;
        puVar21[2] = uVar9;
        puVar21[3] = uVar10;
        puVar21[4] = uVar11;
        puVar21[5] = uVar14;
        puVar4 = puVar4 + uVar6 * -6;
        puVar18 = puVar18 + (uVar3 | uVar3 << 1) * 2;
        param_3 = param_3 + (uVar3 ^ 1 | (uVar3 ^ 1) << 1) * 2;
        puVar12 = puVar8 + (uVar6 | uVar6 << 1) * 2;
      } while (uVar16 != 0);
      puVar4 = puVar4 + 6;
      puVar8 = puVar12;
      if ((param_2 & 1) != 0) {
        bVar23 = puVar4 <= param_3;
        puVar8 = puVar18;
        if (!bVar23) {
          puVar8 = param_3;
        }
        param_1 = (uint *)((int)param_1 + iVar2);
        uVar16 = puVar8[1];
        uVar3 = puVar8[2];
        uVar6 = puVar8[3];
        uVar7 = puVar8[4];
        uVar9 = puVar8[5];
        *param_1 = *puVar8;
        param_1[1] = uVar16;
        param_1[2] = uVar3;
        param_1[3] = uVar6;
        param_1[4] = uVar7;
        param_1[5] = uVar9;
        puVar8 = (uint *)((uint)!bVar23 | (uint)!bVar23 << 1);
        puVar18 = puVar18 + ((uint)bVar23 | (uint)bVar23 << 1) * 2;
        param_3 = param_3 + (int)puVar8 * 2;
      }
      if (param_3 == puVar4) {
        puVar8 = puVar12;
      }
      if (param_3 != puVar4 || puVar18 != puVar8) {
        FUN_00fb7254();
LAB_00b73968:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb73968);
        (*pcVar1)();
      }
    }
    return;
  }
  local_64 = param_6;
LAB_00b730d4:
  uVar16 = param_2;
  do {
    if (param_5 == 0) {
      FUN_00b72668(param_1,uVar16,param_3,param_4,1);
      return;
    }
    puVar12 = param_1 + (uVar16 >> 3) * 0x2a;
    puVar18 = param_1 + (uVar16 >> 3) * 0x18;
    if (uVar16 < 0x40) {
      uVar3 = *puVar18;
      uVar6 = *param_1;
      bVar23 = uVar3 <= uVar6;
      if (uVar6 == uVar3) {
        bVar23 = puVar18[1] <= param_1[1];
      }
      uVar7 = *puVar12;
      bVar22 = uVar7 <= uVar6;
      if (uVar6 == uVar7) {
        bVar22 = puVar12[1] <= param_1[1];
      }
      puVar4 = param_1;
      if (!bVar23 == !bVar22) {
        bVar22 = uVar7 <= uVar3;
        if (uVar3 == uVar7) {
          bVar22 = puVar12[1] <= puVar18[1];
        }
        puVar4 = puVar18;
        if (!bVar23 != !bVar22) {
          puVar4 = puVar12;
        }
      }
    }
    else {
      puVar4 = (uint *)FUN_00b65df8(param_1);
    }
    param_5 = param_5 + -1;
    uVar3 = ((uint)((int)puVar4 - (int)param_1) >> 3) * -0x55555555;
    local_40 = *puVar4;
    local_3c = puVar4[1];
    uStack_38 = puVar4[2];
    local_34 = puVar4[3];
    uStack_30 = puVar4[4];
    uStack_2c = puVar4[5];
    if (local_64 != (uint *)0x0) {
      bVar23 = *puVar4 <= *local_64;
      if (*local_64 == *puVar4) {
        bVar23 = puVar4[1] <= local_64[1];
      }
      if (bVar23) break;
    }
    if (param_4 < uVar16) goto LAB_00b73968;
    param_2 = 0;
    puVar18 = param_3 + uVar16 * 6;
    uVar6 = uVar3;
    puVar12 = param_1;
    while( true ) {
      for (puVar8 = puVar12; puVar8 < param_1 + uVar6 * 6; puVar8 = puVar8 + 6) {
        puVar18 = puVar18 + -6;
        bVar23 = *puVar4 <= *puVar8;
        if (*puVar8 == *puVar4) {
          bVar23 = puVar4[1] <= puVar8[1];
        }
        puVar12 = puVar18;
        if (!bVar23 != 0) {
          puVar12 = param_3;
        }
        puVar12 = puVar12 + param_2 * 6;
        uVar7 = puVar8[1];
        uVar9 = puVar8[2];
        uVar10 = puVar8[3];
        uVar11 = puVar8[4];
        uVar14 = puVar8[5];
        *puVar12 = *puVar8;
        puVar12[1] = uVar7;
        puVar12[2] = uVar9;
        puVar12[3] = uVar10;
        puVar12[4] = uVar11;
        puVar12[5] = uVar14;
        param_2 = param_2 + !bVar23;
      }
      if (uVar6 == uVar16) break;
      puVar18 = puVar18 + -6;
      uVar6 = puVar8[1];
      uVar7 = puVar8[2];
      uVar9 = puVar8[3];
      uVar10 = puVar8[4];
      uVar11 = puVar8[5];
      puVar21 = puVar18 + param_2 * 6;
      puVar12 = puVar8 + 6;
      *puVar21 = *puVar8;
      puVar21[1] = uVar6;
      puVar21[2] = uVar7;
      puVar21[3] = uVar9;
      puVar21[4] = uVar10;
      puVar21[5] = uVar11;
      uVar6 = uVar16;
    }
    FUN_016dd1aa(param_1,param_3,param_2 * 0x18);
    iVar2 = uVar16 - param_2;
    if (iVar2 != 0) {
      puVar12 = param_3 + uVar16 * 6 + -6;
      puVar18 = param_1 + param_2 * 6;
      iVar5 = iVar2;
      do {
        uVar6 = *puVar12;
        uVar7 = puVar12[1];
        uVar9 = puVar12[2];
        uVar10 = puVar12[3];
        uVar11 = puVar12[4];
        uVar14 = puVar12[5];
        puVar12 = puVar12 + -6;
        iVar5 = iVar5 + -1;
        *puVar18 = uVar6;
        puVar18[1] = uVar7;
        puVar18[2] = uVar9;
        puVar18[3] = uVar10;
        puVar18[4] = uVar11;
        puVar18[5] = uVar14;
        puVar18 = puVar18 + 6;
      } while (iVar5 != 0);
    }
    if (param_2 == 0) break;
    if (uVar16 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
    }
    FUN_00b72d38(param_1 + param_2 * 6,iVar2,param_3,param_4,param_5,&local_40);
    uVar16 = param_2;
    if (param_2 < 0x21) goto LAB_00b72d5c;
  } while( true );
  if (param_4 < uVar16) goto LAB_00b73968;
  uVar6 = 0;
  puVar18 = param_3 + uVar16 * 6;
  puVar12 = param_1;
  while( true ) {
    for (puVar8 = puVar12; puVar8 < param_1 + uVar3 * 6; puVar8 = puVar8 + 6) {
      puVar18 = puVar18 + -6;
      bVar23 = *puVar4 < *puVar8;
      if (*puVar4 == *puVar8) {
        bVar23 = puVar4[1] < puVar8[1];
      }
      puVar12 = puVar18;
      if (!bVar23 != 0) {
        puVar12 = param_3;
      }
      puVar12 = puVar12 + uVar6 * 6;
      uVar7 = puVar8[1];
      uVar9 = puVar8[2];
      uVar10 = puVar8[3];
      uVar11 = puVar8[4];
      uVar14 = puVar8[5];
      *puVar12 = *puVar8;
      puVar12[1] = uVar7;
      puVar12[2] = uVar9;
      puVar12[3] = uVar10;
      puVar12[4] = uVar11;
      puVar12[5] = uVar14;
      uVar6 = uVar6 + !bVar23;
    }
    if (uVar3 == uVar16) break;
    puVar12 = puVar8 + 6;
    puVar21 = param_3 + uVar6 * 6;
    uVar3 = puVar8[1];
    uVar7 = puVar8[2];
    uVar9 = puVar8[3];
    uVar10 = puVar8[4];
    uVar11 = puVar8[5];
    puVar18 = puVar18 + -6;
    *puVar21 = *puVar8;
    puVar21[1] = uVar3;
    puVar21[2] = uVar7;
    puVar21[3] = uVar9;
    puVar21[4] = uVar10;
    puVar21[5] = uVar11;
    uVar6 = uVar6 + 1;
    uVar3 = uVar16;
  }
  FUN_016dd1aa(param_1,param_3,uVar6 * 0x18);
  param_2 = uVar16 - uVar6;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar6 * 6;
  puVar12 = param_3 + uVar16 * 6 + -6;
  puVar18 = param_1;
  uVar3 = param_2;
  do {
    uVar7 = *puVar12;
    uVar9 = puVar12[1];
    uVar10 = puVar12[2];
    uVar11 = puVar12[3];
    uVar14 = puVar12[4];
    uVar19 = puVar12[5];
    puVar12 = puVar12 + -6;
    uVar3 = uVar3 - 1;
    *puVar18 = uVar7;
    puVar18[1] = uVar9;
    puVar18[2] = uVar10;
    puVar18[3] = uVar11;
    puVar18[4] = uVar14;
    puVar18[5] = uVar19;
    puVar18 = puVar18 + 6;
  } while (uVar3 != 0);
  if (uVar16 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar6,uVar16,uVar16,&DAT_018af348);
  }
  local_64 = (uint *)0x0;
  if (param_2 < 0x21) goto LAB_00b72d5c;
  goto LAB_00b730d4;
}

