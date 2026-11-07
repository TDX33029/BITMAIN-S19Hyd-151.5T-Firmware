// FUN_014483e4 @ 014483e4 size=1468 calls_out=9 calls_in=2
// strings: 

void FUN_014483e4(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,int param_6)

{
  code *pcVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  int local_4c;
  uint local_34 [2];
  int local_2c [2];
  
  if (0x20 < param_2) {
    local_4c = param_6;
    uVar16 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_01449150(param_1,uVar16,param_3,param_4,1);
          return;
        }
        puVar3 = param_1 + (uVar16 >> 3) * 4;
        if (uVar16 < 0x40) {
          uVar10 = param_1[(uVar16 >> 3) * 8 - (uVar16 >> 3)];
          uVar19 = *param_1 >> 0x18;
          bVar23 = uVar19 < *puVar3 >> 0x18;
          if (bVar23 != *puVar3 >> 0x18 < uVar10 >> 0x18) {
            puVar3 = param_1 + ((uVar16 >> 3) * 8 - (uVar16 >> 3));
          }
          if (bVar23 != uVar19 < uVar10 >> 0x18) {
            puVar3 = param_1;
          }
        }
        else {
          puVar3 = (uint *)FUN_0144823c(param_1,puVar3);
        }
        uVar19 = (int)puVar3 - (int)param_1;
        local_34[0] = *puVar3;
        param_5 = param_5 + -1;
        if ((local_4c == 0) || ((uint)*(byte *)(local_4c + 3) < local_34[0] >> 0x18)) break;
LAB_014486b4:
        if (param_4 < uVar16) goto LAB_0144896c;
        puVar8 = param_3 + uVar16;
        uVar15 = 0;
        uVar10 = uVar19 >> 2;
        puVar3 = param_1;
        while( true ) {
          iVar13 = uVar10 - 3;
          if (uVar10 < 3) {
            iVar13 = 0;
          }
          puVar9 = puVar3;
          if (puVar3 < param_1 + iVar13) {
            uVar18 = (uint)*(byte *)((int)param_1 + uVar19 + 3);
            do {
              uVar14 = *puVar9;
              uVar11 = puVar9[1];
              uVar22 = puVar9[2];
              bVar23 = uVar18 < uVar14 >> 0x18;
              uVar12 = puVar9[3];
              puVar3 = param_3;
              if (bVar23) {
                puVar3 = puVar8 + -1;
              }
              puVar9 = puVar9 + 4;
              puVar3[uVar15] = uVar14;
              if (!bVar23) {
                uVar15 = uVar15 + 1;
              }
              bVar23 = uVar18 < uVar11 >> 0x18;
              puVar3 = param_3;
              if (bVar23) {
                puVar3 = puVar8 + -2;
              }
              puVar3[uVar15] = uVar11;
              if (!bVar23) {
                uVar15 = uVar15 + 1;
              }
              bVar23 = uVar18 < uVar22 >> 0x18;
              puVar3 = param_3;
              if (bVar23) {
                puVar3 = puVar8 + -3;
              }
              puVar8 = puVar8 + -4;
              puVar3[uVar15] = uVar22;
              if (!bVar23) {
                uVar15 = uVar15 + 1;
              }
              bVar23 = uVar12 >> 0x18 <= uVar18;
              puVar3 = puVar8;
              if (bVar23) {
                puVar3 = param_3;
              }
              puVar3[uVar15] = uVar12;
              if (bVar23) {
                uVar15 = uVar15 + 1;
              }
            } while (puVar9 < param_1 + iVar13);
          }
          if (puVar9 < param_1 + uVar10) {
            bVar2 = *(byte *)((int)param_1 + uVar19 + 3);
            puVar3 = puVar9;
            do {
              puVar9 = puVar3 + 1;
              puVar8 = puVar8 + -1;
              bVar23 = *puVar3 >> 0x18 <= (uint)bVar2;
              puVar4 = puVar8;
              if (bVar23) {
                puVar4 = param_3;
              }
              puVar4[uVar15] = *puVar3;
              if (bVar23) {
                uVar15 = uVar15 + 1;
              }
              puVar3 = puVar9;
            } while (puVar9 < param_1 + uVar10);
          }
          if (uVar10 == uVar16) break;
          puVar3 = puVar9 + 1;
          puVar8 = puVar8 + -1;
          param_3[uVar15] = *puVar9;
          uVar15 = uVar15 + 1;
          uVar10 = uVar16;
        }
        FUN_01bed4e2(param_1,param_3,uVar15 << 2);
        param_2 = uVar16 - uVar15;
        if (param_2 == 0) {
          return;
        }
        puVar3 = param_3 + (uVar16 - 1);
        puVar8 = param_1 + uVar15;
        uVar19 = param_2;
        do {
          uVar19 = uVar19 - 1;
          *puVar8 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar8 = puVar8 + 1;
        } while (uVar19 != 0);
        if (uVar16 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar15,uVar16,uVar16,&DAT_01d30598);
        }
        param_1 = param_1 + uVar15;
        local_4c = 0;
        uVar16 = param_2;
        if (param_2 < 0x21) goto LAB_01448408;
      }
      if (param_4 < uVar16) goto LAB_0144896c;
      puVar8 = param_3 + uVar16;
      param_2 = 0;
      puVar3 = param_1;
      uVar10 = uVar19 >> 2;
      uVar15 = local_34[0];
      while( true ) {
        iVar13 = uVar10 - 3;
        if (uVar10 < 3) {
          iVar13 = 0;
        }
        puVar9 = puVar3;
        uVar18 = uVar15;
        if (puVar3 < param_1 + iVar13) {
          uVar18 = *(uint *)((int)param_1 + uVar19);
          uVar22 = uVar18 >> 0x18;
          do {
            uVar11 = *puVar9;
            uVar17 = puVar9[1];
            uVar14 = puVar9[2];
            uVar12 = uVar11 >> 0x18;
            uVar20 = puVar9[3];
            puVar3 = param_3;
            if (uVar15 >> 0x18 <= uVar12) {
              puVar3 = puVar8 + -1;
            }
            puVar9 = puVar9 + 4;
            puVar3[param_2] = uVar11;
            if (uVar12 < uVar15 >> 0x18) {
              param_2 = param_2 + 1;
            }
            uVar12 = uVar17 >> 0x18;
            puVar3 = param_3;
            if (uVar22 <= uVar12) {
              puVar3 = puVar8 + -2;
            }
            puVar3[param_2] = uVar17;
            if (uVar12 < uVar22) {
              param_2 = param_2 + 1;
            }
            uVar12 = uVar14 >> 0x18;
            puVar3 = param_3;
            if (uVar22 <= uVar12) {
              puVar3 = puVar8 + -3;
            }
            puVar8 = puVar8 + -4;
            puVar3[param_2] = uVar14;
            if (uVar12 < uVar22) {
              param_2 = param_2 + 1;
            }
            uVar12 = uVar20 >> 0x18;
            puVar3 = puVar8;
            if (uVar12 < uVar22) {
              puVar3 = param_3;
            }
            puVar3[param_2] = uVar20;
            if (uVar12 < uVar22) {
              param_2 = param_2 + 1;
            }
          } while (puVar9 < param_1 + iVar13);
        }
        if (puVar9 < param_1 + uVar10) {
          uVar18 = *(uint *)((int)param_1 + uVar19);
          puVar3 = puVar9;
          do {
            puVar9 = puVar3 + 1;
            puVar8 = puVar8 + -1;
            uVar15 = *puVar3 >> 0x18;
            puVar4 = puVar8;
            if (uVar15 < uVar18 >> 0x18) {
              puVar4 = param_3;
            }
            puVar4[param_2] = *puVar3;
            if (uVar15 < uVar18 >> 0x18) {
              param_2 = param_2 + 1;
            }
            puVar3 = puVar9;
          } while (puVar9 < param_1 + uVar10);
        }
        if (uVar10 == uVar16) break;
        puVar8 = puVar8 + -1;
        puVar3 = puVar9 + 1;
        puVar8[param_2] = *puVar9;
        uVar10 = uVar16;
        uVar15 = uVar18;
      }
      FUN_01bed4e2(param_1,param_3,param_2 << 2);
      iVar13 = uVar16 - param_2;
      if (iVar13 != 0) {
        puVar3 = param_3 + (uVar16 - 1);
        puVar8 = param_1 + param_2;
        iVar5 = iVar13;
        do {
          iVar5 = iVar5 + -1;
          *puVar8 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar8 = puVar8 + 1;
        } while (iVar5 != 0);
      }
      if (param_2 == 0) goto LAB_014486b4;
      if (uVar16 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_014483e4(param_1 + param_2,iVar13,param_3,param_4,param_5,local_34);
      uVar16 = param_2;
    } while (0x20 < param_2);
  }
LAB_01448408:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_0144896c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x144896c);
      (*pcVar1)();
    }
    uVar16 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar19 = param_1[uVar16];
        uVar10 = 1;
        *param_3 = *param_1;
        param_3[uVar16] = uVar19;
      }
      else {
        FUN_01449648(param_1,param_3);
        FUN_01449648(param_1 + uVar16,param_3 + uVar16);
        uVar10 = 4;
      }
    }
    else {
      FUN_01449708(param_1,param_3,param_3 + param_2);
      FUN_01449708(param_1 + uVar16,param_3 + uVar16,param_3 + param_2 + 8);
      uVar10 = 8;
    }
    local_2c[0] = 0;
    iVar13 = 0;
    do {
      iVar5 = local_2c[iVar13];
      uVar19 = uVar16;
      if (iVar5 != 0) {
        uVar19 = param_2 - uVar16;
      }
      if (uVar10 < uVar19) {
        puVar3 = param_3 + iVar5;
        uVar15 = uVar10;
        iVar21 = uVar10 << 2;
        do {
          uVar18 = param_1[iVar5 + uVar15];
          puVar3[uVar15] = uVar18;
          uVar22 = (puVar3 + uVar15)[-1];
          if (uVar18 >> 0x18 < uVar22 >> 0x18) {
            iVar6 = iVar21;
            do {
              *(uint *)((int)puVar3 + iVar6) = uVar22;
              if (iVar6 == 4) {
                puVar8 = puVar3;
                goto LAB_01448928;
              }
              iVar7 = iVar6 + -4;
              uVar22 = *(uint *)((int)puVar3 + iVar6 + -8);
              iVar6 = iVar7;
            } while (uVar18 >> 0x18 < uVar22 >> 0x18);
            puVar8 = (uint *)((int)puVar3 + iVar7);
LAB_01448928:
            *puVar8 = uVar18;
          }
          uVar15 = uVar15 + 1;
          iVar21 = iVar21 + 4;
        } while (uVar15 != uVar19);
      }
      bVar23 = iVar13 == 0;
      iVar13 = 1;
    } while (bVar23);
    local_2c[1] = uVar16;
    FUN_01449740(param_3,param_2,param_1);
  }
  return;
}

