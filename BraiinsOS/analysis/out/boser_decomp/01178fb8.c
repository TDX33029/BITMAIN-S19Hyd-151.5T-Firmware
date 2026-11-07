// FUN_01178fb8 @ 01178fb8 size=1940 calls_out=10 calls_in=2
// strings: 

void FUN_01178fb8(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 undefined4 *param_6)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined4 *local_70;
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
          FUN_01178904(param_1,uVar15,param_3,param_4,1);
          return;
        }
        puVar3 = param_1 + (uVar15 >> 3) * 0x20;
        puVar12 = param_1 + ((uVar15 >> 3) * 8 - (uVar15 >> 3)) * 8;
        if (uVar15 < 0x40) {
          uVar11 = *param_1;
          uVar6 = param_1[1];
          uVar10 = *puVar3;
          uVar17 = puVar3[1];
          uVar8 = uVar17;
          if (uVar6 < uVar17) {
            uVar8 = uVar6;
          }
          uVar8 = FUN_01bed842(uVar11,uVar10,uVar8);
          if (uVar8 == 0) {
            uVar8 = uVar6 - uVar17;
          }
          uVar13 = *puVar12;
          uVar14 = puVar12[1];
          uVar18 = uVar14;
          if (uVar6 < uVar14) {
            uVar18 = uVar6;
          }
          uVar18 = FUN_01bed842(uVar11,uVar13,uVar18);
          if (uVar18 == 0) {
            uVar18 = uVar6 - uVar14;
          }
          puVar2 = param_1;
          if (-1 < (int)(uVar18 ^ uVar8)) {
            uVar6 = uVar14;
            if (uVar17 < uVar14) {
              uVar6 = uVar17;
            }
            uVar6 = FUN_01bed842(uVar10,uVar13,uVar6);
            if (uVar6 == 0) {
              uVar6 = uVar17 - uVar14;
            }
            puVar2 = puVar3;
            if ((int)(uVar6 ^ uVar8) < 0) {
              puVar2 = puVar12;
            }
          }
        }
        else {
          puVar2 = (undefined4 *)FUN_005fd694(param_1,puVar3,puVar12);
        }
        local_48 = *puVar2;
        uStack_44 = puVar2[1];
        local_40[0] = puVar2[2];
        local_40[1] = puVar2[3];
        param_5 = param_5 + -1;
        local_40[2] = puVar2[4];
        local_40[3] = puVar2[5];
        uStack_30 = puVar2[6];
        uStack_2c = puVar2[7];
        uVar8 = (uint)((int)puVar2 - (int)param_1) >> 5;
        if (local_70 == (undefined4 *)0x0) break;
        uVar17 = puVar2[1];
        uVar18 = local_70[1];
        uVar6 = uVar17;
        if (uVar18 < uVar17) {
          uVar6 = uVar18;
        }
        uVar6 = FUN_01bed842(*local_70,*puVar2,uVar6);
        if (uVar6 == 0) {
          uVar6 = uVar18 - uVar17;
        }
        if (0x7fffffff < uVar6) break;
LAB_01179318:
        if (param_4 < uVar15) goto LAB_01179734;
        puVar12 = param_3 + uVar15 * 8;
        uVar6 = 0;
        puVar3 = param_1;
        while( true ) {
          for (puVar5 = puVar3; puVar5 < param_1 + uVar8 * 8; puVar5 = puVar5 + 8) {
            uVar18 = puVar5[1];
            uVar14 = puVar2[1];
            uVar17 = uVar18;
            if (uVar14 < uVar18) {
              uVar17 = uVar14;
            }
            uVar17 = FUN_01bed842(*puVar2,*puVar5,uVar17);
            puVar12 = puVar12 + -8;
            if (uVar17 == 0) {
              uVar17 = uVar14 - uVar18;
            }
            uVar10 = puVar5[1];
            uVar11 = puVar5[2];
            uVar13 = puVar5[3];
            puVar3 = puVar12;
            if (uVar17 < 0x80000000) {
              puVar3 = param_3;
            }
            puVar3 = puVar3 + uVar6 * 8;
            if (uVar17 < 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            *puVar3 = *puVar5;
            puVar3[1] = uVar10;
            puVar3[2] = uVar11;
            puVar3[3] = uVar13;
            uVar10 = puVar5[5];
            uVar11 = puVar5[6];
            uVar13 = puVar5[7];
            puVar3[4] = puVar5[4];
            puVar3[5] = uVar10;
            puVar3[6] = uVar11;
            puVar3[7] = uVar13;
          }
          if (uVar8 == uVar15) break;
          puVar7 = param_3 + uVar6 * 8;
          uVar10 = puVar5[1];
          uVar11 = puVar5[2];
          uVar13 = puVar5[3];
          puVar3 = puVar5 + 8;
          uVar6 = uVar6 + 1;
          puVar12 = puVar12 + -8;
          *puVar7 = *puVar5;
          puVar7[1] = uVar10;
          puVar7[2] = uVar11;
          puVar7[3] = uVar13;
          uVar10 = puVar5[5];
          uVar11 = puVar5[6];
          uVar13 = puVar5[7];
          puVar7[4] = puVar5[4];
          puVar7[5] = uVar10;
          puVar7[6] = uVar11;
          puVar7[7] = uVar13;
          uVar8 = uVar15;
        }
        FUN_01bed4e2(param_1,param_3,uVar6 << 5);
        param_2 = uVar15 - uVar6;
        if (param_2 == 0) {
          return;
        }
        param_1 = param_1 + uVar6 * 8;
        puVar12 = param_1;
        uVar8 = param_2;
        puVar3 = param_3 + uVar15 * 8 + -8;
        do {
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar13 = puVar3[3];
          uVar8 = uVar8 - 1;
          *puVar12 = *puVar3;
          puVar12[1] = uVar10;
          puVar12[2] = uVar11;
          puVar12[3] = uVar13;
          uVar10 = puVar3[5];
          uVar11 = puVar3[6];
          uVar13 = puVar3[7];
          puVar12[4] = puVar3[4];
          puVar12[5] = uVar10;
          puVar12[6] = uVar11;
          puVar12[7] = uVar13;
          puVar12 = puVar12 + 8;
          puVar3 = puVar3 + -8;
        } while (uVar8 != 0);
        if (uVar15 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar6,uVar15,uVar15,&DAT_01d30598);
        }
        local_70 = (undefined4 *)0x0;
        uVar15 = param_2;
        if (param_2 < 0x21) goto LAB_01178fdc;
      }
      if (param_4 < uVar15) goto LAB_01179734;
      puVar12 = param_3 + uVar15 * 8;
      param_2 = 0;
      puVar3 = param_1;
      uVar6 = uVar8;
      while( true ) {
        for (puVar5 = puVar3; puVar5 < param_1 + uVar6 * 8; puVar5 = puVar5 + 8) {
          uVar14 = puVar2[1];
          uVar18 = puVar5[1];
          uVar17 = uVar14;
          if (uVar18 < uVar14) {
            uVar17 = uVar18;
          }
          iVar9 = FUN_01bed842(*puVar5,*puVar2,uVar17);
          puVar12 = puVar12 + -8;
          if (iVar9 == 0) {
            iVar9 = uVar18 - uVar14;
          }
          uVar10 = puVar5[1];
          uVar11 = puVar5[2];
          uVar13 = puVar5[3];
          puVar3 = puVar12;
          if (iVar9 < 0) {
            puVar3 = param_3;
          }
          puVar3 = puVar3 + param_2 * 8;
          param_2 = param_2 - (iVar9 >> 0x1f);
          *puVar3 = *puVar5;
          puVar3[1] = uVar10;
          puVar3[2] = uVar11;
          puVar3[3] = uVar13;
          uVar10 = puVar5[5];
          uVar11 = puVar5[6];
          uVar13 = puVar5[7];
          puVar3[4] = puVar5[4];
          puVar3[5] = uVar10;
          puVar3[6] = uVar11;
          puVar3[7] = uVar13;
        }
        if (uVar6 == uVar15) break;
        puVar12 = puVar12 + -8;
        uVar10 = puVar5[1];
        uVar11 = puVar5[2];
        uVar13 = puVar5[3];
        puVar7 = puVar12 + param_2 * 8;
        puVar3 = puVar5 + 8;
        *puVar7 = *puVar5;
        puVar7[1] = uVar10;
        puVar7[2] = uVar11;
        puVar7[3] = uVar13;
        uVar10 = puVar5[5];
        uVar11 = puVar5[6];
        uVar13 = puVar5[7];
        puVar7[4] = puVar5[4];
        puVar7[5] = uVar10;
        puVar7[6] = uVar11;
        puVar7[7] = uVar13;
        uVar6 = uVar15;
      }
      FUN_01bed4e2(param_1,param_3,param_2 << 5);
      iVar9 = uVar15 - param_2;
      if (iVar9 != 0) {
        puVar12 = param_1 + param_2 * 8;
        iVar4 = iVar9;
        puVar3 = param_3 + uVar15 * 8 + -8;
        do {
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar13 = puVar3[3];
          iVar4 = iVar4 + -1;
          *puVar12 = *puVar3;
          puVar12[1] = uVar10;
          puVar12[2] = uVar11;
          puVar12[3] = uVar13;
          uVar10 = puVar3[5];
          uVar11 = puVar3[6];
          uVar13 = puVar3[7];
          puVar12[4] = puVar3[4];
          puVar12[5] = uVar10;
          puVar12[6] = uVar11;
          puVar12[7] = uVar13;
          puVar12 = puVar12 + 8;
          puVar3 = puVar3 + -8;
        } while (iVar4 != 0);
      }
      if (param_2 == 0) goto LAB_01179318;
      if (uVar15 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_01178fb8(param_1 + param_2 * 8,iVar9,param_3,param_4,param_5,&local_48);
      uVar15 = param_2;
    } while (0x20 < param_2);
  }
LAB_01178fdc:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar15 = param_2 >> 1;
    puVar3 = param_3 + uVar15 * 8;
    puVar12 = param_1 + uVar15 * 8;
    if (param_2 < 8) {
      uVar10 = param_1[1];
      uVar11 = param_1[2];
      uVar13 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = uVar10;
      param_3[2] = uVar11;
      param_3[3] = uVar13;
      uVar10 = param_1[5];
      uVar11 = param_1[6];
      uVar13 = param_1[7];
      param_3[4] = param_1[4];
      param_3[5] = uVar10;
      param_3[6] = uVar11;
      param_3[7] = uVar13;
      uVar10 = puVar12[1];
      uVar11 = puVar12[2];
      uVar13 = puVar12[3];
      *puVar3 = *puVar12;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar13;
      uVar10 = puVar12[5];
      uVar11 = puVar12[6];
      uVar13 = puVar12[7];
      puVar3[4] = puVar12[4];
      puVar3[5] = uVar10;
      puVar3[6] = uVar11;
      puVar3[7] = uVar13;
      uVar8 = 1;
    }
    else {
      FUN_01014c9c(param_1,param_3);
      FUN_01014c9c(puVar12,puVar3);
      uVar8 = 4;
    }
    local_40[0] = 0;
    iVar9 = 0;
    local_40[1] = uVar15;
    do {
      iVar4 = local_40[iVar9];
      uVar6 = uVar15;
      if (iVar4 != 0) {
        uVar6 = param_2 - uVar15;
      }
      if (uVar8 < uVar6) {
        puVar2 = param_1 + uVar8 * 8 + iVar4 * 8;
        puVar12 = param_3 + uVar8 * 8 + iVar4 * 8;
        iVar16 = uVar6 - uVar8;
        do {
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar13 = puVar2[3];
          *puVar12 = *puVar2;
          puVar12[1] = uVar10;
          puVar12[2] = uVar11;
          puVar12[3] = uVar13;
          uVar10 = puVar2[5];
          uVar11 = puVar2[6];
          uVar13 = puVar2[7];
          puVar12[4] = puVar2[4];
          puVar12[5] = uVar10;
          puVar12[6] = uVar11;
          puVar12[7] = uVar13;
          FUN_010137fc(param_3 + iVar4 * 8,puVar12);
          puVar2 = puVar2 + 8;
          puVar12 = puVar12 + 8;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      bVar19 = iVar9 == 0;
      iVar9 = 1;
    } while (bVar19);
    iVar9 = 0;
    puVar2 = param_3 + param_2 * 8 + -8;
    puVar12 = puVar3 + -8;
    do {
      uVar17 = param_3[1];
      uVar6 = puVar3[1];
      uVar8 = uVar17;
      if (uVar6 < uVar17) {
        uVar8 = uVar6;
      }
      uVar8 = FUN_01bed842(*puVar3,*param_3,uVar8);
      if (uVar8 == 0) {
        uVar8 = uVar6 - uVar17;
      }
      puVar5 = puVar3;
      if (uVar8 < 0x80000000) {
        puVar5 = param_3;
      }
      puVar7 = (undefined4 *)((int)param_1 + iVar9);
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar13 = puVar5[3];
      *puVar7 = *puVar5;
      puVar7[1] = uVar10;
      puVar7[2] = uVar11;
      puVar7[3] = uVar13;
      uVar10 = puVar5[5];
      uVar11 = puVar5[6];
      uVar13 = puVar5[7];
      puVar7[4] = puVar5[4];
      puVar7[5] = uVar10;
      puVar7[6] = uVar11;
      puVar7[7] = uVar13;
      uVar17 = puVar12[1];
      uVar18 = puVar2[1];
      uVar6 = uVar17;
      if (uVar18 < uVar17) {
        uVar6 = uVar18;
      }
      uVar6 = FUN_01bed842(*puVar2,*puVar12,uVar6);
      if (uVar6 == 0) {
        uVar6 = uVar18 - uVar17;
      }
      puVar7 = (undefined4 *)((int)param_1 + ((param_2 * 0x20 + -0x20) - iVar9));
      puVar5 = puVar12;
      if (uVar6 < 0x80000000) {
        puVar5 = puVar2;
      }
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar13 = puVar5[3];
      uVar15 = uVar15 - 1;
      *puVar7 = *puVar5;
      puVar7[1] = uVar10;
      puVar7[2] = uVar11;
      puVar7[3] = uVar13;
      uVar10 = puVar5[5];
      uVar11 = puVar5[6];
      uVar13 = puVar5[7];
      puVar7[4] = puVar5[4];
      puVar7[5] = uVar10;
      puVar7[6] = uVar11;
      puVar7[7] = uVar13;
      puVar3 = puVar3 + ((int)uVar8 >> 0x1f) * -8;
      iVar9 = iVar9 + 0x20;
      param_3 = param_3 + (uVar8 >> 0x1f ^ 1) * 8;
      puVar12 = puVar12 + ((int)uVar6 >> 0x1f) * 8;
      puVar2 = puVar2 + ~((int)uVar6 >> 0x1f) * 8;
    } while (uVar15 != 0);
    puVar12 = puVar12 + 8;
    if ((param_2 & 1) != 0) {
      bVar19 = puVar12 <= param_3;
      param_1 = (undefined4 *)((int)param_1 + iVar9);
      puVar5 = puVar3;
      if (!bVar19) {
        puVar5 = param_3;
      }
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar13 = puVar5[3];
      *param_1 = *puVar5;
      param_1[1] = uVar10;
      param_1[2] = uVar11;
      param_1[3] = uVar13;
      uVar10 = puVar5[5];
      uVar11 = puVar5[6];
      uVar13 = puVar5[7];
      puVar3 = puVar3 + (uint)bVar19 * 8;
      param_1[4] = puVar5[4];
      param_1[5] = uVar10;
      param_1[6] = uVar11;
      param_1[7] = uVar13;
      param_3 = param_3 + (uint)!bVar19 * 8;
    }
    bVar19 = param_3 == puVar12;
    if (bVar19) {
      puVar12 = puVar2 + 8;
    }
    if (bVar19 && puVar3 == puVar12) {
      return;
    }
    FUN_01307140();
  }
LAB_01179734:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1179734);
  (*pcVar1)();
}

