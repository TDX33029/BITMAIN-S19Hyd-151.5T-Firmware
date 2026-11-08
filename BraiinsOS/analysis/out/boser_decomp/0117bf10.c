// FUN_0117bf10 @ 0117bf10 size=2128 calls_out=10 calls_in=2
// strings: 

void FUN_0117bf10(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  int local_80;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0x20 < param_2) {
    local_80 = param_6;
    uVar12 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_0117b828(param_1,uVar12,param_3,param_4,1);
          return;
        }
        puVar6 = param_1 + (uVar12 >> 3) * 0x54;
        puVar16 = param_1 + (uVar12 >> 3) * 0x30;
        if (uVar12 < 0x40) {
          uVar7 = puVar16[10];
          uVar10 = puVar16[9];
          uVar11 = param_1[9];
          uVar18 = param_1[10];
          uVar9 = uVar7;
          if (uVar18 < uVar7) {
            uVar9 = uVar18;
          }
          uVar9 = FUN_01bed842(uVar11,uVar10,uVar9);
          uVar19 = puVar6[10];
          uVar13 = puVar6[9];
          if (uVar9 == 0) {
            uVar9 = uVar18 - uVar7;
          }
          uVar2 = uVar19;
          if (uVar18 < uVar19) {
            uVar2 = uVar18;
          }
          uVar2 = FUN_01bed842(uVar11,uVar13,uVar2);
          if (uVar2 == 0) {
            uVar2 = uVar18 - uVar19;
          }
          puVar3 = param_1;
          if (-1 < (int)(uVar2 ^ uVar9)) {
            uVar18 = uVar19;
            if (uVar7 < uVar19) {
              uVar18 = uVar7;
            }
            uVar18 = FUN_01bed842(uVar10,uVar13,uVar18);
            if (uVar18 == 0) {
              uVar18 = uVar7 - uVar19;
            }
            puVar3 = puVar16;
            if ((int)(uVar18 ^ uVar9) < 0) {
              puVar3 = puVar6;
            }
          }
        }
        else {
          puVar3 = (undefined4 *)FUN_005fd178(param_1,puVar16,puVar6);
        }
        param_5 = param_5 + -1;
        uVar9 = ((uint)((int)puVar3 - (int)param_1) >> 4) * -0x55555555;
        local_58 = *puVar3;
        uStack_54 = puVar3[1];
        local_50[0] = puVar3[2];
        local_50[1] = puVar3[3];
        local_50[2] = puVar3[4];
        local_50[3] = puVar3[5];
        local_40 = puVar3[6];
        uStack_3c = puVar3[7];
        uStack_38 = puVar3[8];
        uStack_34 = puVar3[9];
        uStack_30 = puVar3[10];
        uStack_2c = puVar3[0xb];
        if (local_80 == 0) break;
        uVar18 = puVar3[10];
        uVar19 = *(uint *)(local_80 + 0x28);
        uVar7 = uVar18;
        if (uVar19 < uVar18) {
          uVar7 = uVar19;
        }
        uVar7 = FUN_01bed842(*(undefined4 *)(local_80 + 0x24),puVar3[9],uVar7);
        if (uVar7 == 0) {
          uVar7 = uVar19 - uVar18;
        }
        if (0x7fffffff < uVar7) break;
LAB_0117c2ac:
        if (param_4 < uVar12) goto LAB_0117c748;
        uVar7 = 0;
        puVar6 = param_3 + uVar12 * 0xc;
        puVar16 = param_1;
        while( true ) {
          for (; puVar16 < param_1 + uVar9 * 0xc; puVar16 = puVar16 + 0xc) {
            uVar2 = puVar16[10];
            uVar19 = puVar3[10];
            uVar18 = uVar2;
            if (uVar19 < uVar2) {
              uVar18 = uVar19;
            }
            uVar18 = FUN_01bed842(puVar3[9],puVar16[9],uVar18);
            puVar6 = puVar6 + -0xc;
            if (uVar18 == 0) {
              uVar18 = uVar19 - uVar2;
            }
            puVar8 = puVar6;
            if (uVar18 < 0x80000000) {
              puVar8 = param_3;
            }
            puVar8 = puVar8 + uVar7 * 0xc;
            uVar10 = puVar16[1];
            uVar11 = puVar16[2];
            uVar13 = puVar16[3];
            uVar14 = puVar16[4];
            uVar15 = puVar16[5];
            if (uVar18 < 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            *puVar8 = *puVar16;
            puVar8[1] = uVar10;
            puVar8[2] = uVar11;
            puVar8[3] = uVar13;
            puVar8[4] = uVar14;
            puVar8[5] = uVar15;
            uVar10 = puVar16[7];
            uVar11 = puVar16[8];
            uVar13 = puVar16[9];
            uVar14 = puVar16[10];
            uVar15 = puVar16[0xb];
            puVar8[6] = puVar16[6];
            puVar8[7] = uVar10;
            puVar8[8] = uVar11;
            puVar8[9] = uVar13;
            puVar8[10] = uVar14;
            puVar8[0xb] = uVar15;
          }
          if (uVar9 == uVar12) break;
          puVar8 = param_3 + uVar7 * 0xc;
          uVar10 = puVar16[1];
          uVar11 = puVar16[2];
          uVar13 = puVar16[3];
          uVar14 = puVar16[4];
          uVar15 = puVar16[5];
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + -0xc;
          *puVar8 = *puVar16;
          puVar8[1] = uVar10;
          puVar8[2] = uVar11;
          puVar8[3] = uVar13;
          puVar8[4] = uVar14;
          puVar8[5] = uVar15;
          uVar10 = puVar16[7];
          uVar11 = puVar16[8];
          uVar13 = puVar16[9];
          uVar14 = puVar16[10];
          uVar15 = puVar16[0xb];
          puVar8[6] = puVar16[6];
          puVar8[7] = uVar10;
          puVar8[8] = uVar11;
          puVar8[9] = uVar13;
          puVar8[10] = uVar14;
          puVar8[0xb] = uVar15;
          uVar9 = uVar12;
          puVar16 = puVar16 + 0xc;
        }
        FUN_01bed4e2(param_1,param_3,uVar7 * 0x30);
        param_2 = uVar12 - uVar7;
        if (param_2 == 0) {
          return;
        }
        param_1 = param_1 + uVar7 * 0xc;
        puVar16 = param_1;
        uVar9 = param_2;
        puVar6 = param_3 + uVar12 * 0xc + -0xc;
        do {
          uVar10 = puVar6[1];
          uVar11 = puVar6[2];
          uVar13 = puVar6[3];
          uVar14 = puVar6[4];
          uVar15 = puVar6[5];
          uVar9 = uVar9 - 1;
          *puVar16 = *puVar6;
          puVar16[1] = uVar10;
          puVar16[2] = uVar11;
          puVar16[3] = uVar13;
          puVar16[4] = uVar14;
          puVar16[5] = uVar15;
          uVar10 = puVar6[7];
          uVar11 = puVar6[8];
          uVar13 = puVar6[9];
          uVar14 = puVar6[10];
          uVar15 = puVar6[0xb];
          puVar16[6] = puVar6[6];
          puVar16[7] = uVar10;
          puVar16[8] = uVar11;
          puVar16[9] = uVar13;
          puVar16[10] = uVar14;
          puVar16[0xb] = uVar15;
          puVar16 = puVar16 + 0xc;
          puVar6 = puVar6 + -0xc;
        } while (uVar9 != 0);
        if (uVar12 < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar7,uVar12,uVar12,&DAT_01d30598);
        }
        local_80 = 0;
        uVar12 = param_2;
        if (param_2 < 0x21) goto LAB_0117bf34;
      }
      if (param_4 < uVar12) goto LAB_0117c748;
      param_2 = 0;
      puVar6 = param_3 + uVar12 * 0xc;
      puVar16 = param_1;
      uVar7 = uVar9;
      while( true ) {
        for (; puVar16 < param_1 + uVar7 * 0xc; puVar16 = puVar16 + 0xc) {
          uVar2 = puVar16[10];
          uVar19 = puVar3[10];
          uVar18 = uVar19;
          if (uVar2 < uVar19) {
            uVar18 = uVar2;
          }
          iVar4 = FUN_01bed842(puVar16[9],puVar3[9],uVar18);
          puVar6 = puVar6 + -0xc;
          if (iVar4 == 0) {
            iVar4 = uVar2 - uVar19;
          }
          puVar8 = puVar6;
          if (iVar4 < 0) {
            puVar8 = param_3;
          }
          puVar8 = puVar8 + param_2 * 0xc;
          uVar10 = puVar16[1];
          uVar11 = puVar16[2];
          uVar13 = puVar16[3];
          uVar14 = puVar16[4];
          uVar15 = puVar16[5];
          *puVar8 = *puVar16;
          puVar8[1] = uVar10;
          puVar8[2] = uVar11;
          puVar8[3] = uVar13;
          puVar8[4] = uVar14;
          puVar8[5] = uVar15;
          uVar10 = puVar16[7];
          uVar11 = puVar16[8];
          uVar13 = puVar16[9];
          uVar14 = puVar16[10];
          uVar15 = puVar16[0xb];
          puVar8[6] = puVar16[6];
          puVar8[7] = uVar10;
          puVar8[8] = uVar11;
          puVar8[9] = uVar13;
          puVar8[10] = uVar14;
          puVar8[0xb] = uVar15;
          param_2 = param_2 - (iVar4 >> 0x1f);
        }
        if (uVar7 == uVar12) break;
        puVar6 = puVar6 + -0xc;
        uVar10 = puVar16[1];
        uVar11 = puVar16[2];
        uVar13 = puVar16[3];
        uVar14 = puVar16[4];
        uVar15 = puVar16[5];
        puVar8 = puVar6 + param_2 * 0xc;
        *puVar8 = *puVar16;
        puVar8[1] = uVar10;
        puVar8[2] = uVar11;
        puVar8[3] = uVar13;
        puVar8[4] = uVar14;
        puVar8[5] = uVar15;
        uVar10 = puVar16[7];
        uVar11 = puVar16[8];
        uVar13 = puVar16[9];
        uVar14 = puVar16[10];
        uVar15 = puVar16[0xb];
        puVar8[6] = puVar16[6];
        puVar8[7] = uVar10;
        puVar8[8] = uVar11;
        puVar8[9] = uVar13;
        puVar8[10] = uVar14;
        puVar8[0xb] = uVar15;
        puVar16 = puVar16 + 0xc;
        uVar7 = uVar12;
      }
      FUN_01bed4e2(param_1,param_3,param_2 * 0x30);
      iVar4 = uVar12 - param_2;
      if (iVar4 != 0) {
        puVar16 = param_1 + param_2 * 0xc;
        iVar5 = iVar4;
        puVar6 = param_3 + uVar12 * 0xc + -0xc;
        do {
          uVar10 = puVar6[1];
          uVar11 = puVar6[2];
          uVar13 = puVar6[3];
          uVar14 = puVar6[4];
          uVar15 = puVar6[5];
          iVar5 = iVar5 + -1;
          *puVar16 = *puVar6;
          puVar16[1] = uVar10;
          puVar16[2] = uVar11;
          puVar16[3] = uVar13;
          puVar16[4] = uVar14;
          puVar16[5] = uVar15;
          uVar10 = puVar6[7];
          uVar11 = puVar6[8];
          uVar13 = puVar6[9];
          uVar14 = puVar6[10];
          uVar15 = puVar6[0xb];
          puVar16[6] = puVar6[6];
          puVar16[7] = uVar10;
          puVar16[8] = uVar11;
          puVar16[9] = uVar13;
          puVar16[10] = uVar14;
          puVar16[0xb] = uVar15;
          puVar16 = puVar16 + 0xc;
          puVar6 = puVar6 + -0xc;
        } while (iVar5 != 0);
      }
      if (param_2 == 0) goto LAB_0117c2ac;
      if (uVar12 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_0117bf10(param_1 + param_2 * 0xc,iVar4,param_3,param_4,param_5,&local_58);
      uVar12 = param_2;
    } while (0x20 < param_2);
  }
LAB_0117bf34:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar12 = param_2 >> 1;
    puVar16 = param_3 + uVar12 * 0xc;
    puVar6 = param_1 + uVar12 * 0xc;
    if (param_2 < 8) {
      uVar10 = param_1[1];
      uVar11 = param_1[2];
      uVar13 = param_1[3];
      uVar14 = param_1[4];
      uVar15 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar10;
      param_3[2] = uVar11;
      param_3[3] = uVar13;
      param_3[4] = uVar14;
      param_3[5] = uVar15;
      uVar10 = param_1[7];
      uVar11 = param_1[8];
      uVar13 = param_1[9];
      uVar14 = param_1[10];
      uVar15 = param_1[0xb];
      param_3[6] = param_1[6];
      param_3[7] = uVar10;
      param_3[8] = uVar11;
      param_3[9] = uVar13;
      param_3[10] = uVar14;
      param_3[0xb] = uVar15;
      uVar10 = puVar6[1];
      uVar11 = puVar6[2];
      uVar13 = puVar6[3];
      uVar14 = puVar6[4];
      uVar15 = puVar6[5];
      *puVar16 = *puVar6;
      puVar16[1] = uVar10;
      puVar16[2] = uVar11;
      puVar16[3] = uVar13;
      puVar16[4] = uVar14;
      puVar16[5] = uVar15;
      uVar10 = puVar6[7];
      uVar11 = puVar6[8];
      uVar13 = puVar6[9];
      uVar14 = puVar6[10];
      uVar15 = puVar6[0xb];
      puVar16[6] = puVar6[6];
      puVar16[7] = uVar10;
      puVar16[8] = uVar11;
      puVar16[9] = uVar13;
      puVar16[10] = uVar14;
      puVar16[0xb] = uVar15;
      uVar9 = 1;
    }
    else {
      FUN_010148b8(param_1,param_3);
      FUN_010148b8(puVar6,puVar16);
      uVar9 = 4;
    }
    local_50[0] = 0;
    iVar4 = 0;
    local_50[1] = uVar12;
    do {
      iVar5 = local_50[iVar4];
      uVar7 = uVar12;
      if (iVar5 != 0) {
        uVar7 = param_2 - uVar12;
      }
      if (uVar9 < uVar7) {
        iVar17 = uVar7 - uVar9;
        puVar6 = param_1 + uVar9 * 0xc + iVar5 * 0xc;
        puVar3 = param_3 + uVar9 * 0xc + iVar5 * 0xc;
        do {
          uVar10 = puVar6[1];
          uVar11 = puVar6[2];
          uVar13 = puVar6[3];
          uVar14 = puVar6[4];
          uVar15 = puVar6[5];
          *puVar3 = *puVar6;
          puVar3[1] = uVar10;
          puVar3[2] = uVar11;
          puVar3[3] = uVar13;
          puVar3[4] = uVar14;
          puVar3[5] = uVar15;
          uVar10 = puVar6[7];
          uVar11 = puVar6[8];
          uVar13 = puVar6[9];
          uVar14 = puVar6[10];
          uVar15 = puVar6[0xb];
          puVar3[6] = puVar6[6];
          puVar3[7] = uVar10;
          puVar3[8] = uVar11;
          puVar3[9] = uVar13;
          puVar3[10] = uVar14;
          puVar3[0xb] = uVar15;
          FUN_01013640(param_3 + iVar5 * 0xc,puVar3);
          puVar6 = puVar6 + 0xc;
          puVar3 = puVar3 + 0xc;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      bVar20 = iVar4 == 0;
      iVar4 = 1;
    } while (bVar20);
    local_74 = param_3 + param_2 * 0xc + -0xc;
    local_70 = puVar16 + -0xc;
    puVar6 = (undefined4 *)0x0;
    do {
      uVar18 = param_3[10];
      uVar7 = puVar16[10];
      uVar9 = uVar18;
      if (uVar7 < uVar18) {
        uVar9 = uVar7;
      }
      uVar9 = FUN_01bed842(puVar16[9],param_3[9],uVar9);
      if (uVar9 == 0) {
        uVar9 = uVar7 - uVar18;
      }
      puVar3 = puVar16;
      if (uVar9 < 0x80000000) {
        puVar3 = param_3;
      }
      puVar8 = (undefined4 *)((int)param_1 + (int)puVar6);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar13 = puVar3[3];
      uVar14 = puVar3[4];
      uVar15 = puVar3[5];
      *puVar8 = *puVar3;
      puVar8[1] = uVar10;
      puVar8[2] = uVar11;
      puVar8[3] = uVar13;
      puVar8[4] = uVar14;
      puVar8[5] = uVar15;
      uVar10 = puVar3[7];
      uVar11 = puVar3[8];
      uVar13 = puVar3[9];
      uVar14 = puVar3[10];
      uVar15 = puVar3[0xb];
      puVar8[6] = puVar3[6];
      puVar8[7] = uVar10;
      puVar8[8] = uVar11;
      puVar8[9] = uVar13;
      puVar8[10] = uVar14;
      puVar8[0xb] = uVar15;
      uVar19 = local_74[10];
      uVar18 = local_70[10];
      uVar7 = uVar18;
      if (uVar19 < uVar18) {
        uVar7 = uVar19;
      }
      uVar7 = FUN_01bed842(local_74[9],local_70[9],uVar7);
      if (uVar7 == 0) {
        uVar7 = uVar19 - uVar18;
      }
      puVar8 = (undefined4 *)((int)param_1 + ((param_2 * 0x30 + -0x30) - (int)puVar6));
      puVar3 = local_70;
      if (uVar7 < 0x80000000) {
        puVar3 = local_74;
      }
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar13 = puVar3[3];
      uVar14 = puVar3[4];
      uVar15 = puVar3[5];
      *puVar8 = *puVar3;
      puVar8[1] = uVar10;
      puVar8[2] = uVar11;
      puVar8[3] = uVar13;
      puVar8[4] = uVar14;
      puVar8[5] = uVar15;
      uVar10 = puVar3[7];
      uVar11 = puVar3[8];
      uVar13 = puVar3[9];
      uVar14 = puVar3[10];
      uVar15 = puVar3[0xb];
      puVar8[6] = puVar3[6];
      puVar8[7] = uVar10;
      puVar8[8] = uVar11;
      puVar8[9] = uVar13;
      puVar8[10] = uVar14;
      puVar8[0xb] = uVar15;
      puVar16 = puVar16 + (uVar9 >> 0x1f | (uVar9 >> 0x1f) << 1) * 4;
      uVar9 = uVar9 >> 0x1f ^ 1;
      uVar12 = uVar12 - 1;
      param_3 = param_3 + (uVar9 | uVar9 << 1) * 4;
      local_70 = local_70 + ((int)uVar7 >> 0x1f) * 0xc;
      local_74 = local_74 + ~((int)uVar7 >> 0x1f) * 0xc;
      puVar6 = puVar6 + 0xc;
    } while (uVar12 != 0);
    local_70 = local_70 + 0xc;
    if ((param_2 & 1) != 0) {
      bVar20 = local_70 <= param_3;
      puVar3 = puVar16;
      if (!bVar20) {
        puVar3 = param_3;
      }
      param_1 = (undefined4 *)((int)param_1 + (int)puVar6);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar13 = puVar3[3];
      uVar14 = puVar3[4];
      uVar15 = puVar3[5];
      *param_1 = *puVar3;
      param_1[1] = uVar10;
      param_1[2] = uVar11;
      param_1[3] = uVar13;
      param_1[4] = uVar14;
      param_1[5] = uVar15;
      uVar10 = puVar3[7];
      uVar11 = puVar3[8];
      uVar13 = puVar3[9];
      uVar14 = puVar3[10];
      uVar15 = puVar3[0xb];
      param_1[6] = puVar3[6];
      param_1[7] = uVar10;
      param_1[8] = uVar11;
      param_1[9] = uVar13;
      param_1[10] = uVar14;
      param_1[0xb] = uVar15;
      puVar6 = (undefined4 *)((uint)!bVar20 | (uint)!bVar20 << 1);
      puVar16 = puVar16 + ((uint)bVar20 | (uint)bVar20 << 1) * 4;
      param_3 = param_3 + (int)puVar6 * 4;
    }
    if (param_3 == local_70) {
      puVar6 = local_74 + 0xc;
    }
    if (param_3 == local_70 && puVar16 == puVar6) {
      return;
    }
    FUN_01307140();
  }
LAB_0117c748:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x117c748);
  (*pcVar1)();
}

