// FUN_0072d770 @ 0072d770 size=2000 calls_out=8 calls_in=2
// strings: 

void FUN_0072d770(uint *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  uint *local_6c;
  uint *local_5c;
  uint *local_58;
  int local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int local_2c [2];
  
  if (&DAT_00000020 < param_2) {
    local_6c = param_6;
    puVar14 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_0071bce0(param_1,puVar14,param_3,param_4,1);
          return;
        }
        puVar17 = param_1 + ((uint)puVar14 >> 3) * 0x2a;
        puVar4 = param_1 + ((uint)puVar14 >> 3) * 0x18;
        if (&DAT_0000003f < puVar14) {
          puVar3 = (uint *)FUN_007230cc(param_1,puVar4,puVar17);
        }
        else {
          uVar13 = puVar17[1];
          uVar10 = puVar4[1];
          uVar6 = param_1[1];
          bVar23 = uVar6 <= uVar10 && (uint)(*puVar4 <= *param_1) <= uVar6 - uVar10;
          puVar3 = puVar17;
          if (bVar23 == (uVar10 <= uVar13 && (uint)(*puVar17 <= *puVar4) <= uVar10 - uVar13)) {
            puVar3 = puVar4;
          }
          if (bVar23 != (uVar6 <= uVar13 && (uint)(*puVar17 <= *param_1) <= uVar6 - uVar13)) {
            puVar3 = param_1;
          }
        }
        param_5 = param_5 + -1;
        puVar4 = (uint *)(((uint)((int)puVar3 - (int)param_1) >> 3) * -0x55555555);
        local_50 = *puVar3;
        uStack_4c = puVar3[1];
        uStack_48 = puVar3[2];
        uStack_44 = puVar3[3];
        uStack_40 = puVar3[4];
        uStack_3c = puVar3[5];
        if ((local_6c == (uint *)0x0) ||
           (local_6c[1] <= puVar3[1] && (uint)(*puVar3 <= *local_6c) <= local_6c[1] - puVar3[1]))
        break;
LAB_0072da68:
        if (param_4 < puVar14) goto LAB_0072df28;
        puVar9 = (uint *)0x0;
        puVar15 = param_3 + (int)puVar14 * 6;
        puVar17 = param_1;
        while( true ) {
          puVar16 = puVar9;
          for (puVar19 = puVar17; puVar19 < param_1 + (int)puVar4 * 6; puVar19 = puVar19 + 6) {
            puVar15 = puVar15 + -6;
            puVar9 = puVar15;
            puVar17 = puVar16;
            if (puVar19[1] < puVar3[1] || puVar3[1] - puVar19[1] < (uint)(*puVar19 <= *puVar3)) {
              puVar17 = (uint *)((int)puVar16 + 1);
              puVar9 = param_3;
            }
            puVar9 = puVar9 + (int)puVar16 * 6;
            uVar10 = puVar19[1];
            uVar6 = puVar19[2];
            uVar13 = puVar19[3];
            uVar8 = puVar19[4];
            uVar7 = puVar19[5];
            *puVar9 = *puVar19;
            puVar9[1] = uVar10;
            puVar9[2] = uVar6;
            puVar9[3] = uVar13;
            puVar9[4] = uVar8;
            puVar9[5] = uVar7;
            puVar16 = puVar17;
          }
          if (puVar4 == puVar14) break;
          puVar9 = (uint *)((int)puVar16 + 1);
          puVar15 = puVar15 + -6;
          puVar4 = param_3 + (int)puVar16 * 6;
          uVar10 = puVar19[1];
          uVar6 = puVar19[2];
          uVar13 = puVar19[3];
          uVar8 = puVar19[4];
          uVar7 = puVar19[5];
          puVar17 = puVar19 + 6;
          *puVar4 = *puVar19;
          puVar4[1] = uVar10;
          puVar4[2] = uVar6;
          puVar4[3] = uVar13;
          puVar4[4] = uVar8;
          puVar4[5] = uVar7;
          puVar4 = puVar14;
        }
        FUN_01bed4e2(param_1,param_3,(int)puVar16 * 0x18);
        param_2 = (uint *)((int)puVar14 - (int)puVar16);
        if (param_2 == (uint *)0x0) {
          return;
        }
        puVar3 = param_3 + (int)puVar14 * 6 + -6;
        puVar4 = param_1 + (int)puVar16 * 6;
        puVar17 = param_2;
        do {
          uVar10 = *puVar3;
          uVar6 = puVar3[1];
          uVar13 = puVar3[2];
          uVar8 = puVar3[3];
          uVar7 = puVar3[4];
          uVar11 = puVar3[5];
          puVar3 = puVar3 + -6;
          puVar17 = (uint *)((int)puVar17 + -1);
          *puVar4 = uVar10;
          puVar4[1] = uVar6;
          puVar4[2] = uVar13;
          puVar4[3] = uVar8;
          puVar4[4] = uVar7;
          puVar4[5] = uVar11;
          puVar4 = puVar4 + 6;
        } while (puVar17 != (uint *)0x0);
        if (puVar14 < puVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(puVar16,puVar14,puVar14,&DAT_01d30598);
        }
        param_1 = param_1 + (int)puVar16 * 6;
        local_6c = (uint *)0x0;
        puVar14 = param_2;
        if (param_2 < &DAT_00000021) goto LAB_0072d794;
      }
      if (param_4 < puVar14) goto LAB_0072df28;
      param_2 = (uint *)0x0;
      puVar17 = param_3 + (int)puVar14 * 6;
      puVar9 = param_1;
      puVar15 = puVar4;
      while( true ) {
        puVar16 = puVar9;
        while (puVar16 < param_1 + (int)puVar15 * 6) {
          uVar10 = puVar3[1];
          puVar17 = puVar17 + -6;
          uVar6 = puVar16[1];
          puVar19 = puVar16 + 6;
          bVar23 = (uint)(*puVar3 <= *puVar16) <= uVar6 - uVar10;
          puVar9 = puVar17;
          if (uVar6 <= uVar10 && bVar23) {
            puVar9 = param_3;
          }
          puVar9 = puVar9 + (int)param_2 * 6;
          uVar13 = puVar16[1];
          uVar8 = puVar16[2];
          uVar7 = puVar16[3];
          uVar11 = puVar16[4];
          uVar12 = puVar16[5];
          *puVar9 = *puVar16;
          puVar9[1] = uVar13;
          puVar9[2] = uVar8;
          puVar9[3] = uVar7;
          puVar9[4] = uVar11;
          puVar9[5] = uVar12;
          puVar16 = puVar19;
          if (uVar6 <= uVar10 && bVar23) {
            param_2 = (uint *)((int)param_2 + 1);
          }
        }
        if (puVar15 == puVar14) break;
        uVar10 = puVar16[1];
        uVar6 = puVar16[2];
        uVar13 = puVar16[3];
        uVar8 = puVar16[4];
        uVar7 = puVar16[5];
        puVar17 = puVar17 + -6;
        puVar15 = puVar17 + (int)param_2 * 6;
        puVar9 = puVar16 + 6;
        *puVar15 = *puVar16;
        puVar15[1] = uVar10;
        puVar15[2] = uVar6;
        puVar15[3] = uVar13;
        puVar15[4] = uVar8;
        puVar15[5] = uVar7;
        puVar15 = puVar14;
      }
      FUN_01bed4e2(param_1,param_3,(int)param_2 * 0x18);
      iVar21 = (int)puVar14 - (int)param_2;
      if (iVar21 != 0) {
        puVar9 = param_3 + (int)puVar14 * 6 + -6;
        puVar17 = param_1 + (int)param_2 * 6;
        iVar5 = iVar21;
        do {
          uVar10 = *puVar9;
          uVar6 = puVar9[1];
          uVar13 = puVar9[2];
          uVar8 = puVar9[3];
          uVar7 = puVar9[4];
          uVar11 = puVar9[5];
          puVar9 = puVar9 + -6;
          iVar5 = iVar5 + -1;
          *puVar17 = uVar10;
          puVar17[1] = uVar6;
          puVar17[2] = uVar13;
          puVar17[3] = uVar8;
          puVar17[4] = uVar7;
          puVar17[5] = uVar11;
          puVar17 = puVar17 + 6;
        } while (iVar5 != 0);
      }
      if (param_2 == (uint *)0x0) goto LAB_0072da68;
      if (puVar14 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_0072d770(param_1 + (int)param_2 * 6,iVar21,param_3,param_4,param_5,&local_50);
      puVar14 = param_2;
    } while (&DAT_00000021 <= param_2);
  }
LAB_0072d794:
  if (param_2 <= &DAT_00000001) {
    return;
  }
  if (param_2 + 4 <= param_4) {
    uVar10 = (uint)param_2 >> 1;
    puVar4 = param_3 + uVar10 * 6;
    puVar14 = param_1 + uVar10 * 6;
    if (param_2 < &DAT_00000008) {
      uVar6 = param_1[1];
      uVar13 = param_1[2];
      uVar8 = param_1[3];
      uVar7 = param_1[4];
      uVar11 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar6;
      param_3[2] = uVar13;
      param_3[3] = uVar8;
      param_3[4] = uVar7;
      param_3[5] = uVar11;
      uVar6 = puVar14[1];
      uVar13 = puVar14[2];
      uVar8 = puVar14[3];
      uVar7 = puVar14[4];
      uVar11 = puVar14[5];
      *puVar4 = *puVar14;
      puVar4[1] = uVar6;
      puVar4[2] = uVar13;
      puVar4[3] = uVar8;
      puVar4[4] = uVar7;
      puVar4[5] = uVar11;
      uVar6 = 1;
    }
    else {
      FUN_007340f4(param_1,param_3);
      FUN_007340f4(puVar14,puVar4);
      uVar6 = 4;
    }
    local_2c[0] = 0;
    iVar21 = 0;
    do {
      iVar5 = local_2c[iVar21];
      uVar13 = uVar10;
      if (iVar5 != 0) {
        uVar13 = (int)param_2 - uVar10;
      }
      if (uVar6 < uVar13) {
        puVar14 = param_3 + iVar5 * 6;
        local_5c = param_3 + iVar5 * 6 + -0xc;
        local_54 = 0x18;
        uVar8 = uVar6;
        local_58 = puVar14;
        do {
          puVar3 = param_1 + iVar5 * 6 + uVar8 * 6;
          puVar17 = puVar14 + uVar8 * 6;
          uVar7 = puVar3[1];
          uVar11 = puVar3[2];
          uVar12 = puVar3[3];
          uVar18 = puVar3[4];
          uVar20 = puVar3[5];
          *puVar17 = *puVar3;
          puVar17[1] = uVar7;
          puVar17[2] = uVar11;
          puVar17[3] = uVar12;
          puVar17[4] = uVar18;
          puVar17[5] = uVar20;
          uVar7 = puVar14[uVar8 * 6];
          uVar11 = puVar17[1];
          if (uVar11 <= puVar17[-5] && (uint)(puVar17[-6] <= uVar7) <= uVar11 - puVar17[-5]) {
            local_50 = puVar3[2];
            uStack_4c = puVar3[3];
            uStack_48 = puVar3[4];
            uStack_44 = puVar3[5];
            puVar17 = local_58;
            puVar3 = local_5c;
            iVar22 = local_54;
            do {
              puVar9 = puVar17 + uVar6 * 6;
              *puVar9 = puVar9[-6];
              puVar9[1] = puVar9[-5];
              puVar9[2] = puVar9[-4];
              puVar9[3] = puVar9[-3];
              puVar9[4] = puVar9[-2];
              puVar9[5] = puVar9[-1];
              if (uVar6 * 0x18 == iVar22) {
                puVar17 = puVar14;
                goto LAB_0072dd28;
              }
              puVar9 = puVar3 + uVar6 * 6;
              iVar22 = iVar22 + 0x18;
              puVar17 = puVar17 + -6;
              uVar12 = puVar9[1];
              puVar3 = puVar3 + -6;
            } while (uVar11 <= uVar12 && (uint)(*puVar9 <= uVar7) <= uVar11 - uVar12);
            puVar17 = puVar17 + uVar6 * 6;
LAB_0072dd28:
            *puVar17 = uVar7;
            puVar17[1] = uVar11;
            puVar17[2] = local_50;
            puVar17[3] = uStack_4c;
            puVar17[4] = uStack_48;
            puVar17[5] = uStack_44;
          }
          local_54 = local_54 + -0x18;
          uVar8 = uVar8 + 1;
          local_5c = local_5c + 6;
          local_58 = local_58 + 6;
        } while (uVar8 != uVar13);
      }
      bVar23 = iVar21 == 0;
      iVar21 = 1;
    } while (bVar23);
    iVar21 = 0;
    puVar17 = puVar4 + -6;
    puVar14 = param_3 + (int)param_2 * 6 + -6;
    uVar6 = uVar10;
    do {
      uVar7 = param_3[1];
      uVar8 = puVar4[1];
      bVar23 = uVar8 - uVar7 < (uint)(*param_3 <= *puVar4);
      uVar13 = (uint)(uVar7 < uVar8 || bVar23);
      uVar8 = (uint)(uVar7 >= uVar8 && !bVar23);
      puVar3 = param_3;
      if (uVar8 != 0) {
        puVar3 = puVar4;
      }
      puVar9 = (uint *)((int)param_1 + iVar21);
      uVar7 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      uVar18 = puVar3[4];
      uVar20 = puVar3[5];
      *puVar9 = *puVar3;
      puVar9[1] = uVar7;
      puVar9[2] = uVar11;
      puVar9[3] = uVar12;
      puVar9[4] = uVar18;
      puVar9[5] = uVar20;
      bVar23 = puVar14[1] <= puVar17[1];
      bVar2 = (uint)(*puVar17 <= *puVar14) <= puVar14[1] - puVar17[1];
      puVar3 = puVar14;
      if (bVar23 && bVar2) {
        puVar3 = puVar17;
      }
      puVar9 = (uint *)((int)param_1 + (((int)param_2 * 0x18 + -0x18) - iVar21));
      uVar7 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      uVar18 = puVar3[4];
      uVar20 = puVar3[5];
      iVar21 = iVar21 + 0x18;
      *puVar9 = *puVar3;
      puVar9[1] = uVar7;
      puVar9[2] = uVar11;
      puVar9[3] = uVar12;
      puVar9[4] = uVar18;
      puVar9[5] = uVar20;
      iVar5 = 0;
      if (!bVar23 || !bVar2) {
        iVar5 = -1;
      }
      iVar22 = 0;
      if (bVar23 && bVar2) {
        iVar22 = -1;
      }
      uVar6 = uVar6 - 1;
      puVar14 = puVar14 + iVar5 * 6;
      puVar17 = puVar17 + iVar22 * 6;
      param_3 = param_3 + (uVar13 | uVar13 << 1) * 2;
      puVar4 = puVar4 + (uVar8 | uVar8 << 1) * 2;
    } while (uVar6 != 0);
    puVar17 = puVar17 + 6;
    if (((uint)param_2 & 1) != 0) {
      bVar23 = puVar17 <= param_3;
      puVar3 = puVar4;
      if (!bVar23) {
        puVar3 = param_3;
      }
      uVar6 = puVar3[1];
      uVar13 = puVar3[2];
      uVar8 = puVar3[3];
      uVar7 = puVar3[4];
      uVar11 = puVar3[5];
      param_1 = (uint *)((int)param_1 + iVar21);
      *param_1 = *puVar3;
      param_1[1] = uVar6;
      param_1[2] = uVar13;
      param_1[3] = uVar8;
      param_1[4] = uVar7;
      param_1[5] = uVar11;
      param_2 = (uint *)((uint)!bVar23 | (uint)!bVar23 << 1);
      puVar4 = puVar4 + ((uint)bVar23 | (uint)bVar23 << 1) * 2;
      param_3 = param_3 + (int)param_2 * 2;
    }
    if (param_3 == puVar17) {
      param_2 = puVar14 + 6;
    }
    if (param_3 == puVar17 && puVar4 == param_2) {
      return;
    }
    local_2c[1] = uVar10;
    FUN_01307140();
  }
LAB_0072df28:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x72df28);
  (*pcVar1)();
}

