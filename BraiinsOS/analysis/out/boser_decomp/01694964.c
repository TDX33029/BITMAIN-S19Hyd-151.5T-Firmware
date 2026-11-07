// FUN_01694964 @ 01694964 size=1432 calls_out=9 calls_in=2
// strings: 

void FUN_01694964(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  uint *local_48;
  uint *local_38;
  uint local_34 [2];
  int local_2c [2];
  
  local_38 = param_1;
  if (0x20 < param_2) {
    local_48 = param_6;
    uVar15 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_01694f24(local_38,uVar15,param_3,param_4,1);
          return;
        }
        puVar2 = local_38 + (uVar15 >> 3) * 4;
        if (uVar15 < 0x40) {
          uVar13 = local_38[(uVar15 >> 3) * 8 - (uVar15 >> 3)];
          uVar14 = *puVar2;
          uVar9 = *local_38;
          if (uVar9 < uVar14 != uVar14 < uVar13) {
            puVar2 = local_38 + ((uVar15 >> 3) * 8 - (uVar15 >> 3));
          }
          if (uVar9 < uVar14 != uVar9 < uVar13) {
            puVar2 = local_38;
          }
        }
        else {
          puVar2 = (uint *)FUN_00661fa4(local_38,puVar2);
        }
        uVar13 = (int)puVar2 - (int)local_38;
        local_34[0] = *puVar2;
        param_5 = param_5 + -1;
        if ((local_48 == (uint *)0x0) || (*local_48 < local_34[0])) break;
LAB_01694c20:
        if (param_4 < uVar15) goto LAB_01694ec8;
        puVar7 = param_3 + uVar15;
        uVar9 = 0;
        puVar2 = local_38;
        uVar14 = uVar13 >> 2;
        while( true ) {
          iVar3 = uVar14 - 3;
          if (uVar14 < 3) {
            iVar3 = 0;
          }
          puVar8 = puVar2;
          if (puVar2 < local_38 + iVar3) {
            uVar12 = *(uint *)((int)local_38 + uVar13);
            do {
              uVar11 = *puVar8;
              uVar10 = puVar8[1];
              uVar17 = puVar8[2];
              puVar2 = param_3;
              if (uVar12 < uVar11) {
                puVar2 = puVar7 + -1;
              }
              uVar16 = puVar8[3];
              puVar8 = puVar8 + 4;
              puVar2[uVar9] = uVar11;
              if (uVar12 >= uVar11) {
                uVar9 = uVar9 + 1;
              }
              puVar2 = param_3;
              if (uVar12 < uVar10) {
                puVar2 = puVar7 + -2;
              }
              puVar2[uVar9] = uVar10;
              if (uVar12 >= uVar10) {
                uVar9 = uVar9 + 1;
              }
              puVar2 = param_3;
              if (uVar12 < uVar17) {
                puVar2 = puVar7 + -3;
              }
              puVar7 = puVar7 + -4;
              puVar2[uVar9] = uVar17;
              if (uVar12 >= uVar17) {
                uVar9 = uVar9 + 1;
              }
              puVar2 = puVar7;
              if (uVar16 <= uVar12) {
                puVar2 = param_3;
              }
              puVar2[uVar9] = uVar16;
              if (uVar16 <= uVar12) {
                uVar9 = uVar9 + 1;
              }
            } while (puVar8 < local_38 + iVar3);
          }
          if (puVar8 < local_38 + uVar14) {
            uVar12 = *(uint *)((int)local_38 + uVar13);
            puVar2 = puVar8;
            do {
              puVar8 = puVar2 + 1;
              uVar17 = *puVar2;
              puVar7 = puVar7 + -1;
              bVar19 = uVar17 <= uVar12;
              puVar2 = puVar7;
              if (bVar19) {
                puVar2 = param_3;
              }
              puVar2[uVar9] = uVar17;
              if (bVar19) {
                uVar9 = uVar9 + 1;
              }
              puVar2 = puVar8;
            } while (puVar8 < local_38 + uVar14);
          }
          if (uVar14 == uVar15) break;
          puVar2 = puVar8 + 1;
          puVar7 = puVar7 + -1;
          param_3[uVar9] = *puVar8;
          uVar9 = uVar9 + 1;
          uVar14 = uVar15;
        }
        FUN_01bed4e2(local_38,param_3,uVar9 << 2);
        param_2 = uVar15 - uVar9;
        if (param_2 == 0) {
          return;
        }
        puVar2 = param_3 + (uVar15 - 1);
        puVar7 = local_38 + uVar9;
        uVar13 = param_2;
        do {
          uVar13 = uVar13 - 1;
          *puVar7 = *puVar2;
          puVar2 = puVar2 + -1;
          puVar7 = puVar7 + 1;
        } while (uVar13 != 0);
        if (uVar15 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar9,uVar15,uVar15,&DAT_01d30598);
        }
        local_38 = local_38 + uVar9;
        local_48 = (uint *)0x0;
        uVar15 = param_2;
        if (param_2 < 0x21) goto LAB_01694988;
      }
      if (param_4 < uVar15) goto LAB_01694ec8;
      puVar7 = param_3 + uVar15;
      param_2 = 0;
      puVar2 = local_38;
      uVar14 = uVar13 >> 2;
      uVar9 = local_34[0];
      while( true ) {
        iVar3 = uVar14 - 3;
        if (uVar14 < 3) {
          iVar3 = 0;
        }
        puVar8 = puVar2;
        uVar12 = uVar9;
        if (puVar2 < local_38 + iVar3) {
          uVar12 = *(uint *)((int)local_38 + uVar13);
          do {
            uVar17 = *puVar8;
            uVar10 = puVar8[1];
            uVar11 = puVar8[2];
            uVar16 = puVar8[3];
            puVar8 = puVar8 + 4;
            puVar2 = param_3;
            if (uVar9 <= uVar17) {
              puVar2 = puVar7 + -1;
            }
            puVar2[param_2] = uVar17;
            if (uVar9 > uVar17) {
              param_2 = param_2 + 1;
            }
            puVar2 = param_3;
            if (uVar12 <= uVar10) {
              puVar2 = puVar7 + -2;
            }
            puVar2[param_2] = uVar10;
            if (uVar12 > uVar10) {
              param_2 = param_2 + 1;
            }
            puVar2 = param_3;
            if (uVar12 <= uVar11) {
              puVar2 = puVar7 + -3;
            }
            puVar7 = puVar7 + -4;
            puVar2[param_2] = uVar11;
            if (uVar12 > uVar11) {
              param_2 = param_2 + 1;
            }
            puVar2 = puVar7;
            if (uVar16 < uVar12) {
              puVar2 = param_3;
            }
            puVar2[param_2] = uVar16;
            if (uVar16 < uVar12) {
              param_2 = param_2 + 1;
            }
          } while (puVar8 < local_38 + iVar3);
        }
        if (puVar8 < local_38 + uVar14) {
          uVar12 = *(uint *)((int)local_38 + uVar13);
          puVar2 = puVar8;
          do {
            puVar8 = puVar2 + 1;
            uVar9 = *puVar2;
            puVar7 = puVar7 + -1;
            puVar2 = puVar7;
            if (uVar9 < uVar12) {
              puVar2 = param_3;
            }
            puVar2[param_2] = uVar9;
            if (uVar9 < uVar12) {
              param_2 = param_2 + 1;
            }
            puVar2 = puVar8;
          } while (puVar8 < local_38 + uVar14);
        }
        if (uVar14 == uVar15) break;
        puVar7 = puVar7 + -1;
        puVar2 = puVar8 + 1;
        puVar7[param_2] = *puVar8;
        uVar14 = uVar15;
        uVar9 = uVar12;
      }
      FUN_01bed4e2(local_38,param_3,param_2 << 2);
      iVar3 = uVar15 - param_2;
      if (iVar3 != 0) {
        puVar2 = param_3 + (uVar15 - 1);
        puVar7 = local_38 + param_2;
        iVar4 = iVar3;
        do {
          iVar4 = iVar4 + -1;
          *puVar7 = *puVar2;
          puVar2 = puVar2 + -1;
          puVar7 = puVar7 + 1;
        } while (iVar4 != 0);
      }
      if (param_2 == 0) goto LAB_01694c20;
      if (uVar15 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_01694964(local_38 + param_2,iVar3,param_3,param_4,param_5,local_34);
      uVar15 = param_2;
    } while (0x20 < param_2);
  }
LAB_01694988:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_01694ec8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1694ec8);
      (*pcVar1)();
    }
    uVar15 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar13 = local_38[uVar15];
        uVar14 = 1;
        *param_3 = *local_38;
        param_3[uVar15] = uVar13;
      }
      else {
        FUN_00660b5c(local_38,param_3);
        FUN_00660b5c(local_38 + uVar15,param_3 + uVar15);
        uVar14 = 4;
      }
    }
    else {
      FUN_00660e48(local_38,param_3,param_3 + param_2);
      FUN_00660e48(local_38 + uVar15,param_3 + uVar15,param_3 + param_2 + 8);
      uVar14 = 8;
    }
    local_2c[0] = 0;
    iVar3 = 0;
    do {
      iVar4 = local_2c[iVar3];
      uVar13 = uVar15;
      if (iVar4 != 0) {
        uVar13 = param_2 - uVar15;
      }
      if (uVar14 < uVar13) {
        puVar2 = param_3 + iVar4;
        uVar9 = uVar14;
        iVar18 = uVar14 << 2;
        do {
          uVar12 = local_38[iVar4 + uVar9];
          puVar2[uVar9] = uVar12;
          uVar17 = (puVar2 + uVar9)[-1];
          if (uVar12 < uVar17) {
            iVar5 = iVar18;
            do {
              *(uint *)((int)puVar2 + iVar5) = uVar17;
              if (iVar5 == 4) {
                puVar7 = puVar2;
                goto LAB_01694e90;
              }
              iVar6 = iVar5 + -4;
              uVar17 = *(uint *)((int)puVar2 + iVar5 + -8);
              iVar5 = iVar6;
            } while (uVar12 < uVar17);
            puVar7 = (uint *)((int)puVar2 + iVar6);
LAB_01694e90:
            *puVar7 = uVar12;
          }
          uVar9 = uVar9 + 1;
          iVar18 = iVar18 + 4;
        } while (uVar9 != uVar13);
      }
      bVar19 = iVar3 == 0;
      iVar3 = 1;
    } while (bVar19);
    local_2c[1] = uVar15;
    FUN_016946a0(param_3,param_2,local_38);
  }
  return;
}

