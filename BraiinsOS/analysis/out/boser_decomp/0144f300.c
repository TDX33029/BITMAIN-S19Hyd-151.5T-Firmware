// FUN_0144f300 @ 0144f300 size=1700 calls_out=9 calls_in=2
// strings: 

void FUN_0144f300(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  uint *puVar1;
  code *pcVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  bool bVar22;
  uint *local_4c;
  uint local_34;
  uint local_30;
  int local_2c [2];
  
  if (0x20 < param_2) {
    local_4c = param_6;
    uVar14 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_014516c0(param_1,uVar14,param_3,param_4,1);
          return;
        }
        puVar3 = param_1 + (uVar14 >> 3) * 8;
        if (uVar14 < 0x40) {
          uVar11 = param_1[((uVar14 >> 3) * 8 - (uVar14 >> 3)) * 2];
          uVar19 = *puVar3;
          uVar12 = *param_1;
          if (uVar12 < uVar19 != uVar19 < uVar11) {
            puVar3 = param_1 + ((uVar14 >> 3) * 8 - (uVar14 >> 3)) * 2;
          }
          if (uVar12 < uVar19 != uVar12 < uVar11) {
            puVar3 = param_1;
          }
        }
        else {
          puVar3 = (uint *)FUN_0144f254(param_1,puVar3);
        }
        local_34 = *puVar3;
        local_30 = puVar3[1];
        param_5 = param_5 + -1;
        uVar11 = (uint)((int)puVar3 - (int)param_1) >> 3;
        if ((local_4c == (uint *)0x0) || (*local_4c < local_34)) break;
LAB_0144f604:
        if (param_4 < uVar14) goto LAB_0144f970;
        puVar10 = param_3 + uVar14 * 2;
        uVar19 = 0;
        puVar5 = param_1;
        while( true ) {
          iVar4 = uVar11 - 3;
          if (uVar11 < 3) {
            iVar4 = 0;
          }
          if (puVar5 < param_1 + iVar4 * 2) {
            uVar12 = *puVar3;
            do {
              uVar8 = *puVar5;
              uVar16 = puVar5[1];
              uVar9 = puVar5[2];
              puVar6 = param_3;
              if (uVar12 < uVar8) {
                puVar6 = puVar10 + -2;
              }
              uVar15 = puVar5[3];
              iVar7 = uVar19 * 2;
              puVar6[iVar7] = uVar8;
              if (uVar12 >= uVar8) {
                uVar19 = uVar19 + 1;
              }
              (puVar6 + iVar7)[1] = uVar16;
              puVar6 = param_3;
              if (uVar12 < uVar9) {
                puVar6 = puVar10 + -4;
              }
              iVar7 = uVar19 * 2;
              puVar6[iVar7] = uVar9;
              if (uVar12 >= uVar9) {
                uVar19 = uVar19 + 1;
              }
              uVar9 = puVar5[4];
              (puVar6 + iVar7)[1] = uVar15;
              uVar8 = puVar5[6];
              puVar6 = param_3;
              if (uVar12 < uVar9) {
                puVar6 = puVar10 + -6;
              }
              puVar10 = puVar10 + -8;
              iVar7 = uVar19 * 2;
              puVar6[iVar7] = uVar9;
              if (uVar12 >= uVar9) {
                uVar19 = uVar19 + 1;
              }
              (puVar6 + iVar7)[1] = puVar5[5];
              puVar6 = puVar10;
              if (uVar8 <= uVar12) {
                puVar6 = param_3;
              }
              uVar9 = puVar5[7];
              iVar7 = uVar19 * 2;
              puVar6[iVar7] = uVar8;
              if (uVar8 <= uVar12) {
                uVar19 = uVar19 + 1;
              }
              puVar5 = puVar5 + 8;
              (puVar6 + iVar7)[1] = uVar9;
            } while (puVar5 < param_1 + iVar4 * 2);
          }
          if (puVar5 < param_1 + uVar11 * 2) {
            uVar12 = *puVar3;
            do {
              uVar8 = *puVar5;
              uVar9 = puVar5[1];
              puVar10 = puVar10 + -2;
              puVar5 = puVar5 + 2;
              puVar6 = puVar10;
              if (uVar8 <= uVar12) {
                puVar6 = param_3;
              }
              iVar4 = uVar19 * 2;
              puVar6[iVar4] = uVar8;
              if (uVar8 <= uVar12) {
                uVar19 = uVar19 + 1;
              }
              (puVar6 + iVar4)[1] = uVar9;
            } while (puVar5 < param_1 + uVar11 * 2);
          }
          if (uVar11 == uVar14) break;
          uVar11 = *puVar5;
          uVar12 = puVar5[1];
          puVar5 = puVar5 + 2;
          iVar4 = uVar19 * 2;
          param_3[iVar4] = uVar11;
          uVar19 = uVar19 + 1;
          puVar10 = puVar10 + -2;
          (param_3 + iVar4)[1] = uVar12;
          uVar11 = uVar14;
        }
        FUN_01bed4e2(param_1,param_3,uVar19 << 3);
        param_2 = uVar14 - uVar19;
        if (param_2 == 0) {
          return;
        }
        puVar5 = param_1 + uVar19 * 2;
        puVar3 = param_3 + uVar14 * 2 + -2;
        uVar11 = param_2;
        do {
          uVar8 = *puVar3;
          uVar11 = uVar11 - 1;
          uVar12 = puVar3[1];
          puVar3 = puVar3 + -2;
          *puVar5 = uVar8;
          puVar5[1] = uVar12;
          puVar5 = puVar5 + 2;
        } while (uVar11 != 0);
        if (uVar14 < uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar19,uVar14,uVar14,&DAT_01d30598);
        }
        param_1 = param_1 + uVar19 * 2;
        local_4c = (uint *)0x0;
        uVar14 = param_2;
        if (param_2 < 0x21) goto LAB_0144f324;
      }
      if (param_4 < uVar14) goto LAB_0144f970;
      puVar10 = param_3 + uVar14 * 2;
      param_2 = 0;
      uVar19 = uVar11;
      puVar5 = param_1;
      uVar12 = local_34;
      while( true ) {
        iVar4 = uVar19 - 3;
        if (uVar19 < 3) {
          iVar4 = 0;
        }
        uVar8 = uVar12;
        if (puVar5 < param_1 + iVar4 * 2) {
          uVar8 = *puVar3;
          do {
            uVar15 = *puVar5;
            uVar9 = puVar5[1];
            uVar16 = puVar5[2];
            uVar17 = puVar5[3];
            puVar6 = param_3;
            if (uVar12 <= uVar15) {
              puVar6 = puVar10 + -2;
            }
            iVar7 = param_2 * 2;
            puVar6[iVar7] = uVar15;
            if (uVar12 > uVar15) {
              param_2 = param_2 + 1;
            }
            (puVar6 + iVar7)[1] = uVar9;
            puVar6 = param_3;
            if (uVar8 <= uVar16) {
              puVar6 = puVar10 + -4;
            }
            iVar7 = param_2 * 2;
            puVar6[iVar7] = uVar16;
            if (uVar8 > uVar16) {
              param_2 = param_2 + 1;
            }
            uVar9 = puVar5[4];
            (puVar6 + iVar7)[1] = uVar17;
            uVar16 = puVar5[6];
            puVar6 = param_3;
            if (uVar8 <= uVar9) {
              puVar6 = puVar10 + -6;
            }
            puVar10 = puVar10 + -8;
            iVar7 = param_2 * 2;
            puVar6[iVar7] = uVar9;
            if (uVar8 > uVar9) {
              param_2 = param_2 + 1;
            }
            (puVar6 + iVar7)[1] = puVar5[5];
            puVar6 = puVar10;
            if (uVar16 < uVar8) {
              puVar6 = param_3;
            }
            uVar9 = puVar5[7];
            iVar7 = param_2 * 2;
            puVar6[iVar7] = uVar16;
            if (uVar16 < uVar8) {
              param_2 = param_2 + 1;
            }
            puVar5 = puVar5 + 8;
            (puVar6 + iVar7)[1] = uVar9;
          } while (puVar5 < param_1 + iVar4 * 2);
        }
        if (puVar5 < param_1 + uVar19 * 2) {
          uVar8 = *puVar3;
          do {
            uVar12 = *puVar5;
            uVar9 = puVar5[1];
            puVar10 = puVar10 + -2;
            puVar5 = puVar5 + 2;
            puVar6 = puVar10;
            if (uVar12 < uVar8) {
              puVar6 = param_3;
            }
            iVar4 = param_2 * 2;
            puVar6[iVar4] = uVar12;
            if (uVar12 < uVar8) {
              param_2 = param_2 + 1;
            }
            (puVar6 + iVar4)[1] = uVar9;
          } while (puVar5 < param_1 + uVar19 * 2);
        }
        if (uVar19 == uVar14) break;
        puVar10 = puVar10 + -2;
        uVar19 = *puVar5;
        uVar12 = puVar5[1];
        puVar5 = puVar5 + 2;
        puVar10[param_2 * 2] = uVar19;
        (puVar10 + param_2 * 2)[1] = uVar12;
        uVar19 = uVar14;
        uVar12 = uVar8;
      }
      FUN_01bed4e2(param_1,param_3,param_2 << 3);
      iVar4 = uVar14 - param_2;
      if (iVar4 != 0) {
        puVar10 = param_1 + param_2 * 2;
        puVar5 = param_3 + uVar14 * 2 + -2;
        iVar7 = iVar4;
        do {
          uVar19 = *puVar5;
          uVar12 = puVar5[1];
          puVar5 = puVar5 + -2;
          *puVar10 = uVar19;
          puVar10[1] = uVar12;
          puVar10 = puVar10 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (param_2 == 0) goto LAB_0144f604;
      if (uVar14 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_0144f300(param_1 + param_2 * 2,iVar4,param_3,param_4,param_5,&local_34);
      uVar14 = param_2;
    } while (0x20 < param_2);
  }
LAB_0144f324:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_0144f970:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x144f970);
      (*pcVar2)();
    }
    uVar14 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar11 = param_1[1];
        *param_3 = *param_1;
        param_3[1] = uVar11;
        param_3[uVar14 * 2] = param_1[uVar14 * 2];
        uVar11 = 1;
        (param_3 + uVar14 * 2)[1] = (param_1 + uVar14 * 2)[1];
      }
      else {
        FUN_01451454(param_1,param_3);
        FUN_01451454(param_1 + uVar14 * 2,param_3 + uVar14 * 2);
        uVar11 = 4;
      }
    }
    else {
      FUN_00734214(param_1,param_3,param_3 + param_2 * 2);
      FUN_00734214(param_1 + uVar14 * 2,param_3 + uVar14 * 2,param_3 + param_2 * 2 + 0x10);
      uVar11 = 8;
    }
    local_2c[0] = 0;
    iVar4 = 0;
    do {
      iVar7 = local_2c[iVar4];
      uVar19 = uVar14;
      if (iVar7 != 0) {
        uVar19 = param_2 - uVar14;
      }
      if (uVar11 < uVar19) {
        puVar10 = param_3 + iVar7 * 2;
        iVar18 = 8;
        puVar5 = param_3 + iVar7 * 2 + -2;
        puVar3 = puVar10;
        uVar12 = uVar11;
        do {
          uVar8 = param_1[iVar7 * 2 + uVar12 * 2];
          puVar6 = puVar10 + uVar12 * 2;
          *puVar6 = uVar8;
          uVar9 = (param_1 + iVar7 * 2 + uVar12 * 2)[1];
          puVar6[1] = uVar9;
          if (uVar8 < puVar6[-2]) {
            iVar13 = iVar18;
            puVar6 = puVar3;
            puVar21 = puVar5;
            do {
              uVar16 = (puVar21 + uVar11 * 2)[1];
              puVar6[uVar11 * 2] = puVar21[uVar11 * 2];
              (puVar6 + uVar11 * 2)[1] = uVar16;
              if (uVar11 * 8 == iVar13) {
                puVar6 = puVar10;
                goto LAB_0144f914;
              }
              puVar21 = puVar21 + -2;
              iVar13 = iVar13 + 8;
              puVar20 = puVar6 + -2;
              puVar1 = puVar6 + uVar11 * 2 + -4;
              puVar6 = puVar20;
            } while (uVar8 < *puVar1);
            puVar6 = puVar20 + uVar11 * 2;
LAB_0144f914:
            *puVar6 = uVar8;
            puVar6[1] = uVar9;
          }
          uVar12 = uVar12 + 1;
          puVar5 = puVar5 + 2;
          iVar18 = iVar18 + -8;
          puVar3 = puVar3 + 2;
        } while (uVar12 != uVar19);
      }
      bVar22 = iVar4 == 0;
      iVar4 = 1;
    } while (bVar22);
    local_2c[1] = uVar14;
    FUN_01451558(param_3,param_2,param_1);
  }
  return;
}

