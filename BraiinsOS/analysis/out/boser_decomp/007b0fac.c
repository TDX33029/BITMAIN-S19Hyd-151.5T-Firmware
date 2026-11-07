// FUN_007b0fac @ 007b0fac size=2220 calls_out=11 calls_in=2
// strings: 

void FUN_007b0fac(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 undefined4 *param_6)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined4 *local_68;
  undefined4 local_34;
  uint local_30;
  int local_2c [2];
  
  if (0x20 < param_2) {
    local_68 = param_6;
    uVar9 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_007b1a74(param_1,uVar9,param_3,param_4,1);
          return;
        }
        puVar11 = param_1 + (uVar9 >> 3) * 8;
        puVar7 = param_1 + ((uVar9 >> 3) * 8 - (uVar9 >> 3)) * 2;
        if (uVar9 < 0x40) {
          uVar13 = *puVar11;
          uVar12 = puVar11[1];
          uVar16 = *param_1;
          uVar17 = param_1[1];
          uVar14 = uVar12;
          if (uVar17 < uVar12) {
            uVar14 = uVar17;
          }
          uVar14 = FUN_01bed842(uVar16,uVar13,uVar14);
          uVar10 = *puVar7;
          uVar19 = puVar7[1];
          if (uVar14 == 0) {
            uVar14 = uVar17 - uVar12;
          }
          uVar2 = uVar19;
          if (uVar17 < uVar19) {
            uVar2 = uVar17;
          }
          uVar2 = FUN_01bed842(uVar16,uVar10,uVar2);
          if (uVar2 == 0) {
            uVar2 = uVar17 - uVar19;
          }
          puVar3 = param_1;
          if (-1 < (int)(uVar2 ^ uVar14)) {
            uVar17 = uVar19;
            if (uVar12 < uVar19) {
              uVar17 = uVar12;
            }
            uVar17 = FUN_01bed842(uVar13,uVar10,uVar17);
            if (uVar17 == 0) {
              uVar17 = uVar12 - uVar19;
            }
            puVar3 = puVar11;
            if ((int)(uVar17 ^ uVar14) < 0) {
              puVar3 = puVar7;
            }
          }
        }
        else {
          puVar3 = (undefined4 *)FUN_007b1880(param_1,puVar11,puVar7);
        }
        uVar13 = *puVar3;
        uVar12 = puVar3[1];
        uVar14 = (uint)((int)puVar3 - (int)param_1) >> 3;
        param_5 = param_5 + -1;
        local_34 = uVar13;
        local_30 = uVar12;
        if (local_68 == (undefined4 *)0x0) break;
        uVar19 = local_68[1];
        uVar17 = uVar12;
        if (uVar19 < uVar12) {
          uVar17 = uVar19;
        }
        uVar17 = FUN_01bed842(*local_68,uVar13,uVar17);
        if (uVar17 == 0) {
          uVar17 = uVar19 - uVar12;
        }
        if (0x7fffffff < uVar17) break;
LAB_007b1464:
        if (param_4 < uVar9) goto LAB_007b1824;
        puVar11 = param_3 + uVar9 * 2;
        uVar12 = 0;
        puVar7 = param_1;
        while( true ) {
          iVar4 = uVar14 - 3;
          if (uVar14 < 3) {
            iVar4 = 0;
          }
          if (puVar7 < param_1 + iVar4 * 2) {
            uVar13 = *puVar3;
            uVar17 = puVar3[1];
            do {
              uVar2 = puVar7[1];
              uVar19 = uVar2;
              if (uVar17 < uVar2) {
                uVar19 = uVar17;
              }
              uVar19 = FUN_01bed842(uVar13,*puVar7,uVar19);
              uVar18 = puVar7[3];
              if (uVar19 == 0) {
                uVar19 = uVar17 - uVar2;
              }
              uVar10 = puVar7[1];
              uVar16 = puVar7[2];
              puVar6 = param_3;
              if (0x7fffffff < uVar19) {
                puVar6 = puVar11 + -2;
              }
              iVar8 = uVar12 * 2;
              puVar6[iVar8] = *puVar7;
              if (uVar19 < 0x80000000) {
                uVar12 = uVar12 + 1;
              }
              (puVar6 + iVar8)[1] = uVar10;
              uVar19 = uVar18;
              if (uVar17 < uVar18) {
                uVar19 = uVar17;
              }
              uVar19 = FUN_01bed842(uVar13,uVar16,uVar19);
              if (uVar19 == 0) {
                uVar19 = uVar17 - uVar18;
              }
              uVar2 = puVar7[5];
              puVar6 = param_3;
              if (0x7fffffff < uVar19) {
                puVar6 = puVar11 + -4;
              }
              uVar10 = puVar7[3];
              uVar16 = puVar7[4];
              iVar8 = uVar12 * 2;
              puVar6[iVar8] = puVar7[2];
              if (uVar19 < 0x80000000) {
                uVar12 = uVar12 + 1;
              }
              (puVar6 + iVar8)[1] = uVar10;
              uVar19 = uVar2;
              if (uVar17 < uVar2) {
                uVar19 = uVar17;
              }
              uVar19 = FUN_01bed842(uVar13,uVar16,uVar19);
              if (uVar19 == 0) {
                uVar19 = uVar17 - uVar2;
              }
              uVar2 = puVar7[7];
              puVar6 = param_3;
              if (0x7fffffff < uVar19) {
                puVar6 = puVar11 + -6;
              }
              uVar10 = puVar7[5];
              uVar16 = puVar7[6];
              iVar8 = uVar12 * 2;
              puVar6[iVar8] = puVar7[4];
              if (uVar19 < 0x80000000) {
                uVar12 = uVar12 + 1;
              }
              (puVar6 + iVar8)[1] = uVar10;
              uVar19 = uVar2;
              if (uVar17 < uVar2) {
                uVar19 = uVar17;
              }
              uVar19 = FUN_01bed842(uVar13,uVar16,uVar19);
              puVar11 = puVar11 + -8;
              if (uVar19 == 0) {
                uVar19 = uVar17 - uVar2;
              }
              uVar16 = puVar7[7];
              puVar6 = puVar11;
              if (uVar19 < 0x80000000) {
                puVar6 = param_3;
              }
              iVar8 = uVar12 * 2;
              puVar6[iVar8] = puVar7[6];
              if (uVar19 < 0x80000000) {
                uVar12 = uVar12 + 1;
              }
              puVar7 = puVar7 + 8;
              (puVar6 + iVar8)[1] = uVar16;
            } while (puVar7 < param_1 + iVar4 * 2);
          }
          if (puVar7 < param_1 + uVar14 * 2) {
            uVar13 = *puVar3;
            uVar17 = puVar3[1];
            do {
              uVar2 = puVar7[1];
              uVar19 = uVar2;
              if (uVar17 < uVar2) {
                uVar19 = uVar17;
              }
              uVar19 = FUN_01bed842(uVar13,*puVar7,uVar19);
              puVar11 = puVar11 + -2;
              if (uVar19 == 0) {
                uVar19 = uVar17 - uVar2;
              }
              uVar16 = *puVar7;
              uVar10 = puVar7[1];
              puVar6 = puVar11;
              if (uVar19 < 0x80000000) {
                puVar6 = param_3;
              }
              puVar7 = puVar7 + 2;
              iVar4 = uVar12 * 2;
              puVar6[iVar4] = uVar16;
              if (uVar19 < 0x80000000) {
                uVar12 = uVar12 + 1;
              }
              (puVar6 + iVar4)[1] = uVar10;
            } while (puVar7 < param_1 + uVar14 * 2);
          }
          if (uVar14 == uVar9) break;
          puVar11 = puVar11 + -2;
          uVar13 = *puVar7;
          uVar16 = puVar7[1];
          puVar7 = puVar7 + 2;
          iVar4 = uVar12 * 2;
          param_3[iVar4] = uVar13;
          uVar12 = uVar12 + 1;
          (param_3 + iVar4)[1] = uVar16;
          uVar14 = uVar9;
        }
        FUN_01bed4e2(param_1,param_3,uVar12 << 3);
        param_2 = uVar9 - uVar12;
        if (param_2 == 0) {
          return;
        }
        puVar11 = param_1 + uVar12 * 2;
        puVar7 = param_3 + uVar9 * 2 + -2;
        uVar14 = param_2;
        do {
          uVar16 = *puVar7;
          uVar14 = uVar14 - 1;
          uVar13 = puVar7[1];
          puVar7 = puVar7 + -2;
          *puVar11 = uVar16;
          puVar11[1] = uVar13;
          puVar11 = puVar11 + 2;
        } while (uVar14 != 0);
        if (uVar9 < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar12,uVar9,uVar9,&DAT_01d30598);
        }
        param_1 = param_1 + uVar12 * 2;
        local_68 = (undefined4 *)0x0;
        uVar9 = param_2;
        if (param_2 < 0x21) goto LAB_007b0fd0;
      }
      if (param_4 < uVar9) goto LAB_007b1824;
      puVar11 = param_3 + uVar9 * 2;
      param_2 = 0;
      uVar17 = uVar14;
      puVar7 = param_1;
      while( true ) {
        iVar4 = uVar17 - 3;
        if (uVar17 < 3) {
          iVar4 = 0;
        }
        uVar19 = uVar12;
        uVar16 = uVar13;
        if (puVar7 < param_1 + iVar4 * 2) {
          uVar16 = *puVar3;
          uVar19 = puVar3[1];
          do {
            uVar18 = puVar7[1];
            uVar2 = uVar12;
            if (uVar18 < uVar12) {
              uVar2 = uVar18;
            }
            iVar8 = FUN_01bed842(*puVar7,uVar13,uVar2);
            if (iVar8 == 0) {
              iVar8 = uVar18 - uVar12;
            }
            uVar10 = puVar7[1];
            puVar6 = param_3;
            if (-1 < iVar8) {
              puVar6 = puVar11 + -2;
            }
            uVar18 = puVar7[3];
            uVar5 = puVar7[2];
            puVar6[param_2 * 2] = *puVar7;
            (puVar6 + param_2 * 2)[1] = uVar10;
            uVar2 = uVar19;
            if (uVar18 < uVar19) {
              uVar2 = uVar18;
            }
            iVar15 = FUN_01bed842(uVar5,uVar16,uVar2);
            iVar8 = param_2 - (iVar8 >> 0x1f);
            if (iVar15 == 0) {
              iVar15 = uVar18 - uVar19;
            }
            uVar10 = puVar7[4];
            puVar6 = param_3;
            if (-1 < iVar15) {
              puVar6 = puVar11 + -4;
            }
            uVar18 = puVar7[5];
            uVar5 = puVar7[3];
            puVar6[iVar8 * 2] = puVar7[2];
            uVar2 = uVar19;
            if (uVar18 < uVar19) {
              uVar2 = uVar18;
            }
            (puVar6 + iVar8 * 2)[1] = uVar5;
            iVar8 = iVar8 - (iVar15 >> 0x1f);
            iVar15 = FUN_01bed842(uVar10,uVar16,uVar2);
            if (iVar15 == 0) {
              iVar15 = uVar18 - uVar19;
            }
            uVar10 = puVar7[5];
            puVar6 = param_3;
            if (-1 < iVar15) {
              puVar6 = puVar11 + -6;
            }
            uVar18 = puVar7[7];
            uVar5 = puVar7[6];
            puVar6[iVar8 * 2] = puVar7[4];
            iVar15 = iVar8 - (iVar15 >> 0x1f);
            (puVar6 + iVar8 * 2)[1] = uVar10;
            uVar2 = uVar19;
            if (uVar18 < uVar19) {
              uVar2 = uVar18;
            }
            iVar8 = FUN_01bed842(uVar5,uVar16,uVar2);
            puVar11 = puVar11 + -8;
            if (iVar8 == 0) {
              iVar8 = uVar18 - uVar19;
            }
            uVar10 = puVar7[7];
            param_2 = iVar15 - (iVar8 >> 0x1f);
            puVar6 = puVar11;
            if (iVar8 < 0) {
              puVar6 = param_3;
            }
            puVar6[iVar15 * 2] = puVar7[6];
            puVar7 = puVar7 + 8;
            (puVar6 + iVar15 * 2)[1] = uVar10;
          } while (puVar7 < param_1 + iVar4 * 2);
        }
        if (puVar7 < param_1 + uVar17 * 2) {
          uVar16 = *puVar3;
          uVar19 = puVar3[1];
          do {
            uVar2 = puVar7[1];
            uVar12 = uVar19;
            if (uVar2 < uVar19) {
              uVar12 = uVar2;
            }
            iVar4 = FUN_01bed842(*puVar7,uVar16,uVar12);
            puVar11 = puVar11 + -2;
            if (iVar4 == 0) {
              iVar4 = uVar2 - uVar19;
            }
            uVar13 = *puVar7;
            uVar10 = puVar7[1];
            puVar6 = puVar11;
            if (iVar4 < 0) {
              puVar6 = param_3;
            }
            puVar7 = puVar7 + 2;
            iVar8 = param_2 * 2;
            puVar6[iVar8] = uVar13;
            param_2 = param_2 - (iVar4 >> 0x1f);
            (puVar6 + iVar8)[1] = uVar10;
          } while (puVar7 < param_1 + uVar17 * 2);
        }
        if (uVar17 == uVar9) break;
        puVar11 = puVar11 + -2;
        uVar13 = *puVar7;
        uVar10 = puVar7[1];
        puVar7 = puVar7 + 2;
        puVar11[param_2 * 2] = uVar13;
        (puVar11 + param_2 * 2)[1] = uVar10;
        uVar17 = uVar9;
        uVar12 = uVar19;
        uVar13 = uVar16;
      }
      FUN_01bed4e2(param_1,param_3,param_2 << 3);
      iVar4 = uVar9 - param_2;
      if (iVar4 != 0) {
        puVar11 = param_1 + param_2 * 2;
        puVar7 = param_3 + uVar9 * 2 + -2;
        iVar8 = iVar4;
        do {
          uVar13 = *puVar7;
          uVar16 = puVar7[1];
          puVar7 = puVar7 + -2;
          *puVar11 = uVar13;
          puVar11[1] = uVar16;
          puVar11 = puVar11 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (param_2 == 0) goto LAB_007b1464;
      if (uVar9 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_007b0fac(param_1 + param_2 * 2,iVar4,param_3,param_4,param_5,&local_34);
      uVar9 = param_2;
    } while (0x20 < param_2);
  }
LAB_007b0fd0:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_007b1824:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x7b1824);
      (*pcVar1)();
    }
    uVar9 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar13 = param_1[1];
        *param_3 = *param_1;
        param_3[1] = uVar13;
        param_3[uVar9 * 2] = param_1[uVar9 * 2];
        uVar14 = 1;
        (param_3 + uVar9 * 2)[1] = (param_1 + uVar9 * 2)[1];
      }
      else {
        FUN_007b0c60(param_1,param_3);
        FUN_007b0c60(param_1 + uVar9 * 2,param_3 + uVar9 * 2);
        uVar14 = 4;
      }
    }
    else {
      FUN_007b0e38(param_1,param_3,param_3 + param_2 * 2);
      FUN_007b0e38(param_1 + uVar9 * 2,param_3 + uVar9 * 2,param_3 + param_2 * 2 + 0x10);
      uVar14 = 8;
    }
    local_2c[0] = 0;
    iVar4 = 0;
    local_2c[1] = uVar9;
    do {
      iVar8 = local_2c[iVar4];
      uVar12 = uVar9;
      if (iVar8 != 0) {
        uVar12 = param_2 - uVar9;
      }
      if (uVar14 < uVar12) {
        puVar11 = param_1 + uVar14 * 2 + iVar8 * 2;
        puVar7 = param_3 + uVar14 * 2 + iVar8 * 2;
        iVar15 = uVar12 - uVar14;
        do {
          uVar13 = puVar11[1];
          *puVar7 = *puVar11;
          puVar7[1] = uVar13;
          FUN_007b0bd0(param_3 + iVar8 * 2,puVar7);
          puVar11 = puVar11 + 2;
          puVar7 = puVar7 + 2;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      bVar20 = iVar4 == 0;
      iVar4 = 1;
    } while (bVar20);
    FUN_007b0e70(param_3,param_2,param_1);
  }
  return;
}

