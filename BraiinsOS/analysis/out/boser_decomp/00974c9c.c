// FUN_00974c9c @ 00974c9c size=1968 calls_out=10 calls_in=2
// strings: 

void FUN_00974c9c(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  int local_70;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0x20 < param_2) {
    local_70 = param_6;
    uVar15 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_009410b8(param_1,uVar15,param_3,param_4,1);
          return;
        }
        puVar5 = param_1 + (uVar15 >> 3) * 0x20;
        puVar4 = param_1 + ((uVar15 >> 3) * 8 - (uVar15 >> 3)) * 8;
        if (uVar15 < 0x40) {
          uVar17 = puVar5[2];
          uVar13 = param_1[1];
          uVar8 = param_1[2];
          uVar12 = puVar5[1];
          uVar10 = uVar17;
          if (uVar8 < uVar17) {
            uVar10 = uVar8;
          }
          uVar10 = FUN_01bed842(uVar13,uVar12,uVar10);
          uVar14 = puVar4[1];
          uVar18 = puVar4[2];
          if (uVar10 == 0) {
            uVar10 = uVar8 - uVar17;
          }
          uVar2 = uVar18;
          if (uVar8 < uVar18) {
            uVar2 = uVar8;
          }
          uVar2 = FUN_01bed842(uVar13,uVar14,uVar2);
          if (uVar2 == 0) {
            uVar2 = uVar8 - uVar18;
          }
          puVar3 = param_1;
          if (-1 < (int)(uVar2 ^ uVar10)) {
            uVar8 = uVar18;
            if (uVar17 < uVar18) {
              uVar8 = uVar17;
            }
            uVar8 = FUN_01bed842(uVar12,uVar14,uVar8);
            if (uVar8 == 0) {
              uVar8 = uVar17 - uVar18;
            }
            puVar3 = puVar5;
            if ((int)(uVar8 ^ uVar10) < 0) {
              puVar3 = puVar4;
            }
          }
        }
        else {
          puVar3 = (undefined4 *)FUN_00b1c538(param_1,puVar5,puVar4);
        }
        local_48 = *puVar3;
        uStack_44 = puVar3[1];
        local_40[0] = puVar3[2];
        local_40[1] = puVar3[3];
        param_5 = param_5 + -1;
        local_40[2] = puVar3[4];
        local_40[3] = puVar3[5];
        uStack_30 = puVar3[6];
        uStack_2c = puVar3[7];
        uVar10 = (uint)((int)puVar3 - (int)param_1) >> 5;
        if (local_70 == 0) break;
        uVar17 = puVar3[2];
        uVar18 = *(uint *)(local_70 + 8);
        uVar8 = uVar17;
        if (uVar18 < uVar17) {
          uVar8 = uVar18;
        }
        uVar8 = FUN_01bed842(*(undefined4 *)(local_70 + 4),puVar3[1],uVar8);
        if (uVar8 == 0) {
          uVar8 = uVar18 - uVar17;
        }
        if (0x7fffffff < uVar8) break;
LAB_00975010:
        if (param_4 < uVar15) goto LAB_00975434;
        puVar5 = param_3 + uVar15 * 8;
        uVar8 = 0;
        puVar4 = param_1;
        while( true ) {
          for (puVar7 = puVar4; puVar7 < param_1 + uVar10 * 8; puVar7 = puVar7 + 8) {
            uVar18 = puVar7[2];
            uVar2 = puVar3[2];
            uVar17 = uVar18;
            if (uVar2 < uVar18) {
              uVar17 = uVar2;
            }
            uVar17 = FUN_01bed842(puVar3[1],puVar7[1],uVar17);
            puVar5 = puVar5 + -8;
            if (uVar17 == 0) {
              uVar17 = uVar2 - uVar18;
            }
            uVar12 = puVar7[1];
            uVar13 = puVar7[2];
            uVar14 = puVar7[3];
            puVar4 = puVar5;
            if (uVar17 < 0x80000000) {
              puVar4 = param_3;
            }
            puVar4 = puVar4 + uVar8 * 8;
            if (uVar17 < 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            *puVar4 = *puVar7;
            puVar4[1] = uVar12;
            puVar4[2] = uVar13;
            puVar4[3] = uVar14;
            uVar12 = puVar7[5];
            uVar13 = puVar7[6];
            uVar14 = puVar7[7];
            puVar4[4] = puVar7[4];
            puVar4[5] = uVar12;
            puVar4[6] = uVar13;
            puVar4[7] = uVar14;
          }
          if (uVar10 == uVar15) break;
          puVar9 = param_3 + uVar8 * 8;
          uVar12 = puVar7[1];
          uVar13 = puVar7[2];
          uVar14 = puVar7[3];
          puVar4 = puVar7 + 8;
          uVar8 = uVar8 + 1;
          puVar5 = puVar5 + -8;
          *puVar9 = *puVar7;
          puVar9[1] = uVar12;
          puVar9[2] = uVar13;
          puVar9[3] = uVar14;
          uVar12 = puVar7[5];
          uVar13 = puVar7[6];
          uVar14 = puVar7[7];
          puVar9[4] = puVar7[4];
          puVar9[5] = uVar12;
          puVar9[6] = uVar13;
          puVar9[7] = uVar14;
          uVar10 = uVar15;
        }
        FUN_01bed4e2(param_1,param_3,uVar8 << 5);
        param_2 = uVar15 - uVar8;
        if (param_2 == 0) {
          return;
        }
        puVar5 = param_1 + uVar8 * 8;
        uVar10 = param_2;
        puVar4 = param_3 + uVar15 * 8 + -8;
        do {
          uVar12 = puVar4[1];
          uVar13 = puVar4[2];
          uVar14 = puVar4[3];
          uVar10 = uVar10 - 1;
          *puVar5 = *puVar4;
          puVar5[1] = uVar12;
          puVar5[2] = uVar13;
          puVar5[3] = uVar14;
          uVar12 = puVar4[5];
          uVar13 = puVar4[6];
          uVar14 = puVar4[7];
          puVar5[4] = puVar4[4];
          puVar5[5] = uVar12;
          puVar5[6] = uVar13;
          puVar5[7] = uVar14;
          puVar5 = puVar5 + 8;
          puVar4 = puVar4 + -8;
        } while (uVar10 != 0);
        if (uVar15 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar8,uVar15,uVar15,&DAT_01d30598);
        }
        param_1 = param_1 + uVar8 * 8;
        local_70 = 0;
        uVar15 = param_2;
        if (param_2 < 0x21) goto LAB_00974cc0;
      }
      if (param_4 < uVar15) goto LAB_00975434;
      puVar5 = param_3 + uVar15 * 8;
      param_2 = 0;
      puVar4 = param_1;
      uVar8 = uVar10;
      while( true ) {
        for (puVar7 = puVar4; puVar7 < param_1 + uVar8 * 8; puVar7 = puVar7 + 8) {
          uVar2 = puVar3[2];
          uVar18 = puVar7[2];
          uVar17 = uVar2;
          if (uVar18 < uVar2) {
            uVar17 = uVar18;
          }
          iVar11 = FUN_01bed842(puVar7[1],puVar3[1],uVar17);
          puVar5 = puVar5 + -8;
          if (iVar11 == 0) {
            iVar11 = uVar18 - uVar2;
          }
          uVar12 = puVar7[1];
          uVar13 = puVar7[2];
          uVar14 = puVar7[3];
          puVar4 = puVar5;
          if (iVar11 < 0) {
            puVar4 = param_3;
          }
          puVar4 = puVar4 + param_2 * 8;
          param_2 = param_2 - (iVar11 >> 0x1f);
          *puVar4 = *puVar7;
          puVar4[1] = uVar12;
          puVar4[2] = uVar13;
          puVar4[3] = uVar14;
          uVar12 = puVar7[5];
          uVar13 = puVar7[6];
          uVar14 = puVar7[7];
          puVar4[4] = puVar7[4];
          puVar4[5] = uVar12;
          puVar4[6] = uVar13;
          puVar4[7] = uVar14;
        }
        if (uVar8 == uVar15) break;
        puVar5 = puVar5 + -8;
        uVar12 = puVar7[1];
        uVar13 = puVar7[2];
        uVar14 = puVar7[3];
        puVar9 = puVar5 + param_2 * 8;
        puVar4 = puVar7 + 8;
        *puVar9 = *puVar7;
        puVar9[1] = uVar12;
        puVar9[2] = uVar13;
        puVar9[3] = uVar14;
        uVar12 = puVar7[5];
        uVar13 = puVar7[6];
        uVar14 = puVar7[7];
        puVar9[4] = puVar7[4];
        puVar9[5] = uVar12;
        puVar9[6] = uVar13;
        puVar9[7] = uVar14;
        uVar8 = uVar15;
      }
      FUN_01bed4e2(param_1,param_3,param_2 << 5);
      iVar11 = uVar15 - param_2;
      if (iVar11 != 0) {
        puVar5 = param_1 + param_2 * 8;
        iVar6 = iVar11;
        puVar4 = param_3 + uVar15 * 8 + -8;
        do {
          uVar12 = puVar4[1];
          uVar13 = puVar4[2];
          uVar14 = puVar4[3];
          iVar6 = iVar6 + -1;
          *puVar5 = *puVar4;
          puVar5[1] = uVar12;
          puVar5[2] = uVar13;
          puVar5[3] = uVar14;
          uVar12 = puVar4[5];
          uVar13 = puVar4[6];
          uVar14 = puVar4[7];
          puVar5[4] = puVar4[4];
          puVar5[5] = uVar12;
          puVar5[6] = uVar13;
          puVar5[7] = uVar14;
          puVar5 = puVar5 + 8;
          puVar4 = puVar4 + -8;
        } while (iVar6 != 0);
      }
      if (param_2 == 0) goto LAB_00975010;
      if (uVar15 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_00974c9c(param_1 + param_2 * 8,iVar11,param_3,param_4,param_5,&local_48);
      uVar15 = param_2;
    } while (0x20 < param_2);
  }
LAB_00974cc0:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar15 = param_2 >> 1;
    puVar4 = param_3 + uVar15 * 8;
    puVar5 = param_1 + uVar15 * 8;
    if (param_2 < 8) {
      uVar12 = param_1[1];
      uVar13 = param_1[2];
      uVar14 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = uVar12;
      param_3[2] = uVar13;
      param_3[3] = uVar14;
      uVar12 = param_1[5];
      uVar13 = param_1[6];
      uVar14 = param_1[7];
      param_3[4] = param_1[4];
      param_3[5] = uVar12;
      param_3[6] = uVar13;
      param_3[7] = uVar14;
      uVar12 = puVar5[1];
      uVar13 = puVar5[2];
      uVar14 = puVar5[3];
      *puVar4 = *puVar5;
      puVar4[1] = uVar12;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      uVar12 = puVar5[5];
      uVar13 = puVar5[6];
      uVar14 = puVar5[7];
      puVar4[4] = puVar5[4];
      puVar4[5] = uVar12;
      puVar4[6] = uVar13;
      puVar4[7] = uVar14;
      uVar10 = 1;
    }
    else {
      FUN_0093fed0();
      FUN_0093fed0(puVar5,puVar4);
      uVar10 = 4;
    }
    local_40[0] = 0;
    iVar11 = 0;
    local_40[1] = uVar15;
    do {
      iVar6 = local_40[iVar11];
      uVar8 = uVar15;
      if (iVar6 != 0) {
        uVar8 = param_2 - uVar15;
      }
      if (uVar10 < uVar8) {
        puVar3 = param_1 + uVar10 * 8 + iVar6 * 8;
        puVar5 = param_3 + uVar10 * 8 + iVar6 * 8;
        iVar16 = uVar8 - uVar10;
        do {
          uVar12 = puVar3[1];
          uVar13 = puVar3[2];
          uVar14 = puVar3[3];
          *puVar5 = *puVar3;
          puVar5[1] = uVar12;
          puVar5[2] = uVar13;
          puVar5[3] = uVar14;
          uVar12 = puVar3[5];
          uVar13 = puVar3[6];
          uVar14 = puVar3[7];
          puVar5[4] = puVar3[4];
          puVar5[5] = uVar12;
          puVar5[6] = uVar13;
          puVar5[7] = uVar14;
          FUN_0093fdf4(param_3 + iVar6 * 8,puVar5);
          puVar3 = puVar3 + 8;
          puVar5 = puVar5 + 8;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      bVar19 = iVar11 == 0;
      iVar11 = 1;
    } while (bVar19);
    iVar11 = 0;
    puVar3 = param_3 + param_2 * 8 + -8;
    puVar5 = puVar4 + -8;
    do {
      uVar17 = param_3[2];
      uVar8 = puVar4[2];
      uVar10 = uVar17;
      if (uVar8 < uVar17) {
        uVar10 = uVar8;
      }
      uVar10 = FUN_01bed842(puVar4[1],param_3[1],uVar10);
      if (uVar10 == 0) {
        uVar10 = uVar8 - uVar17;
      }
      puVar7 = puVar4;
      if (uVar10 < 0x80000000) {
        puVar7 = param_3;
      }
      puVar9 = (undefined4 *)((int)param_1 + iVar11);
      uVar12 = puVar7[1];
      uVar13 = puVar7[2];
      uVar14 = puVar7[3];
      *puVar9 = *puVar7;
      puVar9[1] = uVar12;
      puVar9[2] = uVar13;
      puVar9[3] = uVar14;
      uVar12 = puVar7[5];
      uVar13 = puVar7[6];
      uVar14 = puVar7[7];
      puVar9[4] = puVar7[4];
      puVar9[5] = uVar12;
      puVar9[6] = uVar13;
      puVar9[7] = uVar14;
      uVar17 = puVar5[2];
      uVar18 = puVar3[2];
      uVar8 = uVar17;
      if (uVar18 < uVar17) {
        uVar8 = uVar18;
      }
      uVar8 = FUN_01bed842(puVar3[1],puVar5[1],uVar8);
      if (uVar8 == 0) {
        uVar8 = uVar18 - uVar17;
      }
      puVar9 = (undefined4 *)((int)param_1 + ((param_2 * 0x20 + -0x20) - iVar11));
      puVar7 = puVar5;
      if (uVar8 < 0x80000000) {
        puVar7 = puVar3;
      }
      uVar12 = puVar7[1];
      uVar13 = puVar7[2];
      uVar14 = puVar7[3];
      uVar15 = uVar15 - 1;
      *puVar9 = *puVar7;
      puVar9[1] = uVar12;
      puVar9[2] = uVar13;
      puVar9[3] = uVar14;
      uVar12 = puVar7[5];
      uVar13 = puVar7[6];
      uVar14 = puVar7[7];
      puVar9[4] = puVar7[4];
      puVar9[5] = uVar12;
      puVar9[6] = uVar13;
      puVar9[7] = uVar14;
      puVar4 = puVar4 + ((int)uVar10 >> 0x1f) * -8;
      iVar11 = iVar11 + 0x20;
      param_3 = param_3 + (uVar10 >> 0x1f ^ 1) * 8;
      puVar5 = puVar5 + ((int)uVar8 >> 0x1f) * 8;
      puVar3 = puVar3 + ~((int)uVar8 >> 0x1f) * 8;
    } while (uVar15 != 0);
    puVar5 = puVar5 + 8;
    if ((param_2 & 1) != 0) {
      bVar19 = puVar5 <= param_3;
      param_1 = (undefined4 *)((int)param_1 + iVar11);
      puVar7 = puVar4;
      if (!bVar19) {
        puVar7 = param_3;
      }
      uVar12 = puVar7[1];
      uVar13 = puVar7[2];
      uVar14 = puVar7[3];
      *param_1 = *puVar7;
      param_1[1] = uVar12;
      param_1[2] = uVar13;
      param_1[3] = uVar14;
      uVar12 = puVar7[5];
      uVar13 = puVar7[6];
      uVar14 = puVar7[7];
      puVar4 = puVar4 + (uint)bVar19 * 8;
      param_1[4] = puVar7[4];
      param_1[5] = uVar12;
      param_1[6] = uVar13;
      param_1[7] = uVar14;
      param_3 = param_3 + (uint)!bVar19 * 8;
    }
    bVar19 = param_3 == puVar5;
    if (bVar19) {
      puVar5 = puVar3 + 8;
    }
    if (bVar19 && puVar4 == puVar5) {
      return;
    }
    FUN_01307140();
  }
LAB_00975434:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x975434);
  (*pcVar1)();
}

