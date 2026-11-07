// FUN_00973d34 @ 00973d34 size=2096 calls_out=10 calls_in=2
// strings: 

void FUN_00973d34(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  bool bVar20;
  int local_78;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48 [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0x20 < param_2) {
    local_78 = param_6;
    uVar15 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_009409d0(param_1,uVar15,param_3,param_4,1);
          return;
        }
        puVar5 = param_1 + (uVar15 >> 3) * 0x46;
        puVar14 = param_1 + (uVar15 >> 3) * 0x28;
        if (uVar15 < 0x40) {
          uVar16 = puVar14[2];
          uVar9 = puVar14[1];
          uVar6 = param_1[2];
          uVar10 = param_1[1];
          uVar8 = uVar16;
          if (uVar6 < uVar16) {
            uVar8 = uVar6;
          }
          uVar8 = FUN_01bed842(uVar10,uVar9,uVar8);
          uVar12 = puVar5[1];
          uVar17 = puVar5[2];
          if (uVar8 == 0) {
            uVar8 = uVar6 - uVar16;
          }
          uVar2 = uVar17;
          if (uVar6 < uVar17) {
            uVar2 = uVar6;
          }
          uVar2 = FUN_01bed842(uVar10,uVar12,uVar2);
          if (uVar2 == 0) {
            uVar2 = uVar6 - uVar17;
          }
          puVar7 = param_1;
          if (-1 < (int)(uVar2 ^ uVar8)) {
            uVar6 = uVar17;
            if (uVar16 < uVar17) {
              uVar6 = uVar16;
            }
            uVar6 = FUN_01bed842(uVar9,uVar12,uVar6);
            if (uVar6 == 0) {
              uVar6 = uVar16 - uVar17;
            }
            puVar7 = puVar14;
            if ((int)(uVar6 ^ uVar8) < 0) {
              puVar7 = puVar5;
            }
          }
        }
        else {
          puVar7 = (undefined4 *)FUN_00b1c430(param_1,puVar14,puVar5);
        }
        param_5 = param_5 + -1;
        uVar8 = ((uint)((int)puVar7 - (int)param_1) >> 3) * -0x33333333;
        local_50 = *puVar7;
        uStack_4c = puVar7[1];
        local_48[0] = puVar7[2];
        local_48[1] = puVar7[3];
        local_48[2] = puVar7[4];
        local_48[3] = puVar7[5];
        uStack_38 = puVar7[6];
        uStack_34 = puVar7[7];
        uStack_30 = puVar7[8];
        uStack_2c = puVar7[9];
        if (local_78 == 0) break;
        uVar16 = puVar7[2];
        uVar17 = *(uint *)(local_78 + 8);
        uVar6 = uVar16;
        if (uVar17 < uVar16) {
          uVar6 = uVar17;
        }
        uVar6 = FUN_01bed842(*(undefined4 *)(local_78 + 4),puVar7[1],uVar6);
        if (uVar6 == 0) {
          uVar6 = uVar17 - uVar16;
        }
        if (0x7fffffff < uVar6) break;
LAB_009740cc:
        if (param_4 < uVar15) goto LAB_0097454c;
        uVar6 = 0;
        puVar5 = param_3 + uVar15 * 10;
        puVar14 = param_1;
        while( true ) {
          uVar16 = uVar6;
          for (; puVar14 < param_1 + uVar8 * 10; puVar14 = puVar14 + 10) {
            uVar2 = puVar14[2];
            uVar17 = puVar7[2];
            uVar6 = uVar2;
            if (uVar17 < uVar2) {
              uVar6 = uVar17;
            }
            uVar6 = FUN_01bed842(puVar7[1],puVar14[1],uVar6);
            puVar5 = puVar5 + -10;
            if (uVar6 == 0) {
              uVar6 = uVar17 - uVar2;
            }
            uVar17 = uVar16;
            puVar18 = puVar5;
            if (uVar6 < 0x80000000) {
              uVar17 = uVar16 + 1;
              puVar18 = param_3;
            }
            puVar18 = puVar18 + uVar16 * 10;
            uVar9 = puVar14[1];
            uVar10 = puVar14[2];
            uVar12 = puVar14[3];
            uVar13 = puVar14[4];
            *puVar18 = *puVar14;
            puVar18[1] = uVar9;
            puVar18[2] = uVar10;
            puVar18[3] = uVar12;
            puVar18[4] = uVar13;
            uVar9 = puVar14[6];
            uVar10 = puVar14[7];
            uVar12 = puVar14[8];
            uVar13 = puVar14[9];
            puVar18[5] = puVar14[5];
            puVar18[6] = uVar9;
            puVar18[7] = uVar10;
            puVar18[8] = uVar12;
            puVar18[9] = uVar13;
            uVar16 = uVar17;
          }
          if (uVar8 == uVar15) break;
          uVar6 = uVar16 + 1;
          puVar5 = puVar5 + -10;
          puVar18 = param_3 + uVar16 * 10;
          uVar9 = puVar14[1];
          uVar10 = puVar14[2];
          uVar12 = puVar14[3];
          uVar13 = puVar14[4];
          *puVar18 = *puVar14;
          puVar18[1] = uVar9;
          puVar18[2] = uVar10;
          puVar18[3] = uVar12;
          puVar18[4] = uVar13;
          uVar9 = puVar14[6];
          uVar10 = puVar14[7];
          uVar12 = puVar14[8];
          uVar13 = puVar14[9];
          puVar18[5] = puVar14[5];
          puVar18[6] = uVar9;
          puVar18[7] = uVar10;
          puVar18[8] = uVar12;
          puVar18[9] = uVar13;
          puVar14 = puVar14 + 10;
          uVar8 = uVar15;
        }
        FUN_01bed4e2(param_1,param_3,uVar16 * 0x28);
        param_2 = uVar15 - uVar16;
        if (param_2 == 0) {
          return;
        }
        puVar14 = param_1 + uVar16 * 10;
        uVar8 = param_2;
        puVar5 = param_3 + uVar15 * 10 + -10;
        do {
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          uVar12 = puVar5[3];
          uVar13 = puVar5[4];
          uVar8 = uVar8 - 1;
          *puVar14 = *puVar5;
          puVar14[1] = uVar9;
          puVar14[2] = uVar10;
          puVar14[3] = uVar12;
          puVar14[4] = uVar13;
          uVar9 = puVar5[6];
          uVar10 = puVar5[7];
          uVar12 = puVar5[8];
          uVar13 = puVar5[9];
          puVar14[5] = puVar5[5];
          puVar14[6] = uVar9;
          puVar14[7] = uVar10;
          puVar14[8] = uVar12;
          puVar14[9] = uVar13;
          puVar14 = puVar14 + 10;
          puVar5 = puVar5 + -10;
        } while (uVar8 != 0);
        if (uVar15 < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar16,uVar15,uVar15,&DAT_01d30598);
        }
        param_1 = param_1 + uVar16 * 10;
        local_78 = 0;
        uVar15 = param_2;
        if (param_2 < 0x21) goto LAB_00973d58;
      }
      if (param_4 < uVar15) goto LAB_0097454c;
      param_2 = 0;
      puVar14 = param_3 + uVar15 * 10;
      uVar6 = uVar8;
      puVar5 = param_1;
      while( true ) {
        for (puVar18 = puVar5; puVar18 < param_1 + uVar6 * 10; puVar18 = puVar18 + 10) {
          uVar2 = puVar7[2];
          uVar17 = puVar18[2];
          uVar16 = uVar2;
          if (uVar17 < uVar2) {
            uVar16 = uVar17;
          }
          iVar11 = FUN_01bed842(puVar18[1],puVar7[1],uVar16);
          puVar14 = puVar14 + -10;
          if (iVar11 == 0) {
            iVar11 = uVar17 - uVar2;
          }
          puVar5 = puVar14;
          if (iVar11 < 0) {
            puVar5 = param_3;
          }
          puVar5 = puVar5 + param_2 * 10;
          uVar9 = puVar18[1];
          uVar10 = puVar18[2];
          uVar12 = puVar18[3];
          uVar13 = puVar18[4];
          *puVar5 = *puVar18;
          puVar5[1] = uVar9;
          puVar5[2] = uVar10;
          puVar5[3] = uVar12;
          puVar5[4] = uVar13;
          uVar9 = puVar18[6];
          uVar10 = puVar18[7];
          uVar12 = puVar18[8];
          uVar13 = puVar18[9];
          puVar5[5] = puVar18[5];
          puVar5[6] = uVar9;
          puVar5[7] = uVar10;
          puVar5[8] = uVar12;
          puVar5[9] = uVar13;
          param_2 = param_2 - (iVar11 >> 0x1f);
        }
        if (uVar6 == uVar15) break;
        puVar14 = puVar14 + -10;
        uVar9 = puVar18[1];
        uVar10 = puVar18[2];
        uVar12 = puVar18[3];
        uVar13 = puVar18[4];
        puVar3 = puVar14 + param_2 * 10;
        puVar5 = puVar18 + 10;
        *puVar3 = *puVar18;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar12;
        puVar3[4] = uVar13;
        uVar9 = puVar18[6];
        uVar10 = puVar18[7];
        uVar12 = puVar18[8];
        uVar13 = puVar18[9];
        puVar3[5] = puVar18[5];
        puVar3[6] = uVar9;
        puVar3[7] = uVar10;
        puVar3[8] = uVar12;
        puVar3[9] = uVar13;
        uVar6 = uVar15;
      }
      FUN_01bed4e2(param_1,param_3,param_2 * 0x28);
      iVar11 = uVar15 - param_2;
      if (iVar11 != 0) {
        puVar14 = param_1 + param_2 * 10;
        iVar4 = iVar11;
        puVar5 = param_3 + uVar15 * 10 + -10;
        do {
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          uVar12 = puVar5[3];
          uVar13 = puVar5[4];
          iVar4 = iVar4 + -1;
          *puVar14 = *puVar5;
          puVar14[1] = uVar9;
          puVar14[2] = uVar10;
          puVar14[3] = uVar12;
          puVar14[4] = uVar13;
          uVar9 = puVar5[6];
          uVar10 = puVar5[7];
          uVar12 = puVar5[8];
          uVar13 = puVar5[9];
          puVar14[5] = puVar5[5];
          puVar14[6] = uVar9;
          puVar14[7] = uVar10;
          puVar14[8] = uVar12;
          puVar14[9] = uVar13;
          puVar14 = puVar14 + 10;
          puVar5 = puVar5 + -10;
        } while (iVar4 != 0);
      }
      if (param_2 == 0) goto LAB_009740cc;
      if (uVar15 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_00973d34(param_1 + param_2 * 10,iVar11,param_3,param_4,param_5,&local_50);
      uVar15 = param_2;
    } while (0x20 < param_2);
  }
LAB_00973d58:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar15 = param_2 >> 1;
    puVar14 = param_3 + uVar15 * 10;
    puVar5 = param_1 + uVar15 * 10;
    if (param_2 < 8) {
      uVar9 = param_1[1];
      uVar10 = param_1[2];
      uVar12 = param_1[3];
      uVar13 = param_1[4];
      *param_3 = *param_1;
      param_3[1] = uVar9;
      param_3[2] = uVar10;
      param_3[3] = uVar12;
      param_3[4] = uVar13;
      uVar9 = param_1[6];
      uVar10 = param_1[7];
      uVar12 = param_1[8];
      uVar13 = param_1[9];
      param_3[5] = param_1[5];
      param_3[6] = uVar9;
      param_3[7] = uVar10;
      param_3[8] = uVar12;
      param_3[9] = uVar13;
      uVar9 = puVar5[1];
      uVar10 = puVar5[2];
      uVar12 = puVar5[3];
      uVar13 = puVar5[4];
      *puVar14 = *puVar5;
      puVar14[1] = uVar9;
      puVar14[2] = uVar10;
      puVar14[3] = uVar12;
      puVar14[4] = uVar13;
      uVar9 = puVar5[6];
      uVar10 = puVar5[7];
      uVar12 = puVar5[8];
      uVar13 = puVar5[9];
      puVar14[5] = puVar5[5];
      puVar14[6] = uVar9;
      puVar14[7] = uVar10;
      puVar14[8] = uVar12;
      puVar14[9] = uVar13;
      uVar8 = 1;
    }
    else {
      FUN_014981e0(param_1,param_3);
      FUN_014981e0(puVar5,puVar14);
      uVar8 = 4;
    }
    local_48[0] = 0;
    iVar11 = 0;
    local_48[1] = uVar15;
    do {
      iVar4 = local_48[iVar11];
      uVar6 = uVar15;
      if (iVar4 != 0) {
        uVar6 = param_2 - uVar15;
      }
      if (uVar8 < uVar6) {
        iVar19 = uVar6 - uVar8;
        puVar7 = param_1 + uVar8 * 10 + iVar4 * 10;
        puVar5 = param_3 + uVar8 * 10 + iVar4 * 10;
        do {
          uVar9 = puVar7[1];
          uVar10 = puVar7[2];
          uVar12 = puVar7[3];
          uVar13 = puVar7[4];
          *puVar5 = *puVar7;
          puVar5[1] = uVar9;
          puVar5[2] = uVar10;
          puVar5[3] = uVar12;
          puVar5[4] = uVar13;
          uVar9 = puVar7[6];
          uVar10 = puVar7[7];
          uVar12 = puVar7[8];
          uVar13 = puVar7[9];
          puVar5[5] = puVar7[5];
          puVar5[6] = uVar9;
          puVar5[7] = uVar10;
          puVar5[8] = uVar12;
          puVar5[9] = uVar13;
          FUN_0093fd04(param_3 + iVar4 * 10,puVar5);
          puVar7 = puVar7 + 10;
          puVar5 = puVar5 + 10;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
      bVar20 = iVar11 == 0;
      iVar11 = 1;
    } while (bVar20);
    iVar11 = 0;
    local_68 = param_3 + param_2 * 10 + -10;
    local_6c = puVar14 + -10;
    do {
      uVar16 = param_3[2];
      uVar6 = puVar14[2];
      uVar8 = uVar16;
      if (uVar6 < uVar16) {
        uVar8 = uVar6;
      }
      uVar8 = FUN_01bed842(puVar14[1],param_3[1],uVar8);
      if (uVar8 == 0) {
        uVar8 = uVar6 - uVar16;
      }
      puVar5 = puVar14;
      if (uVar8 < 0x80000000) {
        puVar5 = param_3;
      }
      puVar7 = (undefined4 *)((int)param_1 + iVar11);
      uVar9 = puVar5[1];
      uVar10 = puVar5[2];
      uVar12 = puVar5[3];
      uVar13 = puVar5[4];
      *puVar7 = *puVar5;
      puVar7[1] = uVar9;
      puVar7[2] = uVar10;
      puVar7[3] = uVar12;
      puVar7[4] = uVar13;
      uVar9 = puVar5[6];
      uVar10 = puVar5[7];
      uVar12 = puVar5[8];
      uVar13 = puVar5[9];
      puVar7[5] = puVar5[5];
      puVar7[6] = uVar9;
      puVar7[7] = uVar10;
      puVar7[8] = uVar12;
      puVar7[9] = uVar13;
      uVar17 = local_68[2];
      uVar16 = local_6c[2];
      uVar6 = uVar16;
      if (uVar17 < uVar16) {
        uVar6 = uVar17;
      }
      uVar6 = FUN_01bed842(local_68[1],local_6c[1],uVar6);
      if (uVar6 == 0) {
        uVar6 = uVar17 - uVar16;
      }
      puVar7 = (undefined4 *)((int)param_1 + ((param_2 * 0x28 + -0x28) - iVar11));
      puVar5 = local_6c;
      if (uVar6 < 0x80000000) {
        puVar5 = local_68;
      }
      uVar9 = puVar5[1];
      uVar10 = puVar5[2];
      uVar12 = puVar5[3];
      uVar13 = puVar5[4];
      *puVar7 = *puVar5;
      puVar7[1] = uVar9;
      puVar7[2] = uVar10;
      puVar7[3] = uVar12;
      puVar7[4] = uVar13;
      uVar9 = puVar5[6];
      uVar10 = puVar5[7];
      uVar12 = puVar5[8];
      uVar13 = puVar5[9];
      puVar7[5] = puVar5[5];
      puVar7[6] = uVar9;
      puVar7[7] = uVar10;
      puVar7[8] = uVar12;
      puVar7[9] = uVar13;
      puVar14 = puVar14 + (uVar8 >> 0x1f | (uVar8 >> 0x1f) << 2) * 2;
      uVar8 = uVar8 >> 0x1f ^ 1;
      iVar11 = iVar11 + 0x28;
      param_3 = param_3 + (uVar8 | uVar8 << 2) * 2;
      local_6c = local_6c + ((int)uVar6 >> 0x1f) * 10;
      uVar15 = uVar15 - 1;
      local_68 = local_68 + ~((int)uVar6 >> 0x1f) * 10;
    } while (uVar15 != 0);
    local_6c = local_6c + 10;
    if ((param_2 & 1) != 0) {
      bVar20 = local_6c <= param_3;
      puVar5 = puVar14;
      if (!bVar20) {
        puVar5 = param_3;
      }
      param_1 = (undefined4 *)((int)param_1 + iVar11);
      uVar9 = puVar5[1];
      uVar10 = puVar5[2];
      uVar12 = puVar5[3];
      uVar13 = puVar5[4];
      *param_1 = *puVar5;
      param_1[1] = uVar9;
      param_1[2] = uVar10;
      param_1[3] = uVar12;
      param_1[4] = uVar13;
      uVar9 = puVar5[6];
      uVar10 = puVar5[7];
      uVar12 = puVar5[8];
      uVar13 = puVar5[9];
      param_1[5] = puVar5[5];
      param_1[6] = uVar9;
      param_1[7] = uVar10;
      param_1[8] = uVar12;
      param_1[9] = uVar13;
      puVar14 = puVar14 + ((uint)bVar20 | (uint)bVar20 << 2) * 2;
      param_3 = param_3 + ((uint)!bVar20 | (uint)!bVar20 << 2) * 2;
    }
    bVar20 = param_3 == local_6c;
    if (bVar20) {
      local_6c = local_68 + 10;
    }
    if (bVar20 && puVar14 == local_6c) {
      return;
    }
    FUN_01307140();
  }
LAB_0097454c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x97454c);
  (*pcVar1)();
}

