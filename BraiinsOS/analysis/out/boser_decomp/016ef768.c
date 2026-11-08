// FUN_016ef768 @ 016ef768 size=2348 calls_out=10 calls_in=2
// strings: 

void FUN_016ef768(byte *param_1,uint param_2,undefined2 *param_3,uint param_4,int param_5,
                 byte *param_6)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined2 *puVar20;
  bool bVar21;
  bool bVar22;
  byte *local_78;
  byte local_34;
  byte local_33;
  int local_2c [2];
  
  if (0x20 < param_2) {
    local_78 = param_6;
    uVar19 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_016ecdc0(param_1,uVar19,param_3,param_4,1);
          return;
        }
        pbVar7 = param_1 + (uVar19 & 0x3ffffff8);
        pbVar9 = param_1 + ((uVar19 & 0xfffffff8) - (uVar19 >> 3)) * 2;
        if (uVar19 < 0x40) {
          bVar2 = *pbVar7;
          bVar15 = *param_1;
          bVar21 = bVar15 < bVar2;
          if ((bVar15 == bVar2) && (bVar21 = false, param_1[1] < pbVar7[1])) {
            bVar21 = true;
          }
          bVar3 = *pbVar9;
          bVar22 = bVar15 < bVar3;
          if ((bVar15 == bVar3) && (bVar22 = false, param_1[1] < pbVar9[1])) {
            bVar22 = true;
          }
          pbVar5 = param_1;
          if (bVar21 == bVar22) {
            bVar22 = bVar2 < bVar3;
            if ((bVar2 == bVar3) && (bVar22 = false, pbVar7[1] < pbVar9[1])) {
              bVar22 = true;
            }
            pbVar5 = pbVar7;
            if (bVar21 != bVar22) {
              pbVar5 = pbVar9;
            }
          }
        }
        else {
          pbVar5 = (byte *)FUN_016ee4e4(param_1);
        }
        local_34 = *pbVar5;
        param_5 = param_5 + -1;
        local_33 = pbVar5[1];
        uVar11 = (uint)((int)pbVar5 - (int)param_1) >> 1;
        if (local_78 == (byte *)0x0) break;
        bVar21 = local_34 <= *local_78;
        if (*local_78 == local_34) {
          bVar21 = local_33 <= local_78[1];
        }
        if (!bVar21) break;
LAB_016efc48:
        if (param_4 < uVar19) goto LAB_016f0060;
        puVar13 = param_3 + uVar19;
        uVar10 = 0;
        pbVar7 = param_1;
        while( true ) {
          iVar8 = uVar11 - 3;
          if (uVar11 < 3) {
            iVar8 = 0;
          }
          if (pbVar7 < param_1 + iVar8 * 2) {
            iVar18 = 0;
            bVar2 = *pbVar5;
            iVar6 = 7;
            do {
              bVar15 = pbVar7[iVar6 + -7];
              uVar17 = (uint)(bVar2 < bVar15);
              if ((bVar2 == bVar15) && (uVar17 = 0, pbVar5[1] < pbVar7[1 - iVar18])) {
                uVar17 = 1;
              }
              puVar20 = param_3;
              if (uVar17 != 0) {
                puVar20 = (undefined2 *)((int)puVar13 + iVar18 + -2);
              }
              bVar15 = pbVar7[iVar6 + -5];
              puVar20[uVar10] = *(undefined2 *)(pbVar7 + iVar6 + -7);
              uVar12 = (uint)(bVar2 < bVar15);
              if ((bVar2 == bVar15) && (uVar12 = 0, pbVar5[1] < pbVar7[3 - iVar18])) {
                uVar12 = 1;
              }
              iVar14 = uVar10 + (uVar17 ^ 1);
              bVar15 = pbVar7[iVar6 + -3];
              puVar20 = param_3;
              if (uVar12 != 0) {
                puVar20 = (undefined2 *)((int)puVar13 + iVar18 + -4);
              }
              puVar20[iVar14] = *(undefined2 *)(pbVar7 + iVar6 + -5);
              uVar10 = (uint)(bVar2 < bVar15);
              if ((bVar2 == bVar15) && (uVar10 = 0, pbVar5[1] < pbVar7[5 - iVar18])) {
                uVar10 = 1;
              }
              iVar14 = iVar14 + (uVar12 ^ 1);
              bVar15 = pbVar7[iVar6 + -1];
              puVar20 = param_3;
              if (uVar10 != 0) {
                puVar20 = (undefined2 *)((int)puVar13 + iVar18 + -6);
              }
              puVar20[iVar14] = *(undefined2 *)(pbVar7 + iVar6 + -3);
              uVar17 = (uint)(bVar2 < bVar15);
              if ((bVar2 == bVar15) && (uVar17 = 0, pbVar5[1] < pbVar7[iVar6])) {
                uVar17 = 1;
              }
              iVar14 = iVar14 + (uVar10 ^ 1);
              puVar20 = param_3;
              if (uVar17 != 0) {
                puVar20 = (undefined2 *)((int)puVar13 + iVar18 + -8);
              }
              iVar18 = iVar18 + -8;
              puVar20[iVar14] = *(undefined2 *)(pbVar7 + iVar6 + -1);
              uVar10 = iVar14 + (uVar17 ^ 1);
              iVar14 = iVar6 + 1;
              iVar6 = iVar6 + 8;
            } while (pbVar7 + iVar14 < param_1 + iVar8 * 2);
            pbVar7 = pbVar7 + -iVar18;
            puVar13 = (undefined2 *)((int)puVar13 + iVar18);
          }
          if (pbVar7 < param_1 + uVar11 * 2) {
            bVar2 = *pbVar5;
            pbVar9 = pbVar7;
            do {
              uVar17 = (uint)(bVar2 < *pbVar9);
              if ((bVar2 == *pbVar9) && (uVar17 = 0, pbVar5[1] < pbVar9[1])) {
                uVar17 = 1;
              }
              puVar13 = puVar13 + -1;
              puVar20 = param_3;
              if (uVar17 != 0) {
                puVar20 = puVar13;
              }
              pbVar7 = pbVar9 + 2;
              puVar20 = puVar20 + uVar10;
              uVar10 = uVar10 + (uVar17 ^ 1);
              *puVar20 = *(undefined2 *)pbVar9;
              pbVar9 = pbVar7;
            } while (pbVar7 < param_1 + uVar11 * 2);
          }
          if (uVar11 == uVar19) break;
          puVar20 = param_3 + uVar10;
          uVar10 = uVar10 + 1;
          puVar13 = puVar13 + -1;
          *puVar20 = *(undefined2 *)pbVar7;
          uVar11 = uVar19;
          pbVar7 = pbVar7 + 2;
        }
        FUN_01bed4e2(param_1,param_3,uVar10 << 1);
        param_2 = uVar19 - uVar10;
        if (param_2 == 0) {
          return;
        }
        puVar13 = param_3 + (uVar19 - 1);
        pbVar7 = param_1 + uVar10 * 2;
        uVar11 = param_2;
        do {
          uVar11 = uVar11 - 1;
          *(undefined2 *)pbVar7 = *puVar13;
          puVar13 = puVar13 + -1;
          pbVar7 = pbVar7 + 2;
        } while (uVar11 != 0);
        if (uVar19 < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar10,uVar19,uVar19,&DAT_01d30598);
        }
        param_1 = param_1 + uVar10 * 2;
        local_78 = (byte *)0x0;
        uVar19 = param_2;
        if (param_2 < 0x21) goto LAB_016ef78c;
      }
      if (param_4 < uVar19) goto LAB_016f0060;
      puVar13 = param_3 + uVar19;
      param_2 = 0;
      pbVar7 = param_1;
      uVar10 = uVar11;
      bVar15 = local_34;
      bVar2 = local_33;
      while( true ) {
        iVar8 = uVar10 - 3;
        if (uVar10 < 3) {
          iVar8 = 0;
        }
        if (pbVar7 < param_1 + iVar8 * 2) {
          iVar18 = 0;
          bVar3 = *pbVar5;
          iVar6 = 7;
          do {
            bVar4 = pbVar7[iVar6 + -7];
            uVar17 = (uint)(bVar4 < bVar15);
            if ((bVar4 == bVar15) && (uVar17 = 0, pbVar7[1 - iVar18] < bVar2)) {
              uVar17 = 1;
            }
            bVar4 = pbVar7[iVar6 + -5];
            puVar20 = param_3;
            if (uVar17 == 0) {
              puVar20 = (undefined2 *)((int)puVar13 + iVar18 + -2);
            }
            uVar12 = (uint)(bVar4 < bVar3);
            puVar20[param_2] = *(undefined2 *)(pbVar7 + iVar6 + -7);
            if (bVar4 == bVar3) {
              uVar12 = 0;
              bVar2 = pbVar5[1];
              if (pbVar7[3 - iVar18] < bVar2) {
                uVar12 = 1;
              }
            }
            bVar4 = pbVar7[iVar6 + -3];
            puVar20 = param_3;
            if (uVar12 == 0) {
              puVar20 = (undefined2 *)((int)puVar13 + iVar18 + -4);
            }
            uVar16 = (uint)(bVar4 < bVar3);
            puVar20[param_2 + uVar17] = *(undefined2 *)(pbVar7 + iVar6 + -5);
            if (bVar4 == bVar3) {
              uVar16 = 0;
              bVar2 = pbVar5[1];
              if (pbVar7[5 - iVar18] < bVar2) {
                uVar16 = 1;
              }
            }
            iVar14 = param_2 + uVar17 + uVar12;
            puVar20 = param_3;
            if (uVar16 == 0) {
              puVar20 = (undefined2 *)((int)puVar13 + iVar18 + -6);
            }
            bVar4 = pbVar7[iVar6 + -1];
            puVar20[iVar14] = *(undefined2 *)(pbVar7 + iVar6 + -3);
            param_2 = (uint)(bVar4 < bVar3);
            if (bVar4 == bVar3) {
              param_2 = 0;
              bVar2 = pbVar5[1];
              if (pbVar7[iVar6] < bVar2) {
                param_2 = 1;
              }
            }
            iVar14 = iVar14 + uVar16;
            puVar20 = param_3;
            if (param_2 == 0) {
              puVar20 = (undefined2 *)((int)puVar13 + iVar18 + -8);
            }
            iVar18 = iVar18 + -8;
            puVar20[iVar14] = *(undefined2 *)(pbVar7 + iVar6 + -1);
            param_2 = iVar14 + param_2;
            iVar14 = iVar6 + 1;
            iVar6 = iVar6 + 8;
          } while (pbVar7 + iVar14 < param_1 + iVar8 * 2);
          pbVar7 = pbVar7 + -iVar18;
          puVar13 = (undefined2 *)((int)puVar13 + iVar18);
          bVar15 = bVar3;
        }
        if (pbVar7 < param_1 + uVar10 * 2) {
          bVar15 = *pbVar5;
          pbVar9 = pbVar7;
          do {
            uVar17 = (uint)(*pbVar9 < bVar15);
            if (*pbVar9 == bVar15) {
              bVar2 = pbVar5[1];
              uVar17 = 0;
              if (pbVar9[1] < bVar2) {
                uVar17 = 1;
              }
            }
            puVar13 = puVar13 + -1;
            pbVar7 = pbVar9 + 2;
            puVar20 = puVar13;
            if (uVar17 != 0) {
              puVar20 = param_3;
            }
            puVar20 = puVar20 + param_2;
            param_2 = param_2 + uVar17;
            *puVar20 = *(undefined2 *)pbVar9;
            pbVar9 = pbVar7;
          } while (pbVar7 < param_1 + uVar10 * 2);
        }
        if (uVar10 == uVar19) break;
        puVar13 = puVar13 + -1;
        puVar13[param_2] = *(undefined2 *)pbVar7;
        pbVar7 = pbVar7 + 2;
        uVar10 = uVar19;
      }
      FUN_01bed4e2(param_1,param_3,param_2 << 1);
      iVar8 = uVar19 - param_2;
      if (iVar8 != 0) {
        puVar13 = param_3 + (uVar19 - 1);
        pbVar7 = param_1 + param_2 * 2;
        iVar6 = iVar8;
        do {
          iVar6 = iVar6 + -1;
          *(undefined2 *)pbVar7 = *puVar13;
          puVar13 = puVar13 + -1;
          pbVar7 = pbVar7 + 2;
        } while (iVar6 != 0);
      }
      if (param_2 == 0) goto LAB_016efc48;
      if (uVar19 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_016ef768(param_1 + param_2 * 2,iVar8,param_3,param_4,param_5,&local_34);
      uVar19 = param_2;
    } while (0x20 < param_2);
  }
LAB_016ef78c:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_016f0060:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x16f0060);
      (*pcVar1)();
    }
    uVar19 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        *param_3 = *(undefined2 *)param_1;
        uVar11 = 1;
        param_3[uVar19] = *(undefined2 *)(param_1 + uVar19 * 2);
      }
      else {
        FUN_016f3808(param_1);
        FUN_016f3808(param_1 + uVar19 * 2,param_3 + uVar19);
        uVar11 = 4;
      }
    }
    else {
      FUN_016f3e18(param_1,param_3,param_3 + param_2);
      FUN_016f3e18(param_1 + uVar19 * 2,param_3 + uVar19,param_3 + param_2 + 8);
      uVar11 = 8;
    }
    local_2c[0] = 0;
    iVar8 = 0;
    local_2c[1] = uVar19;
    do {
      iVar6 = local_2c[iVar8];
      uVar10 = uVar19;
      if (iVar6 != 0) {
        uVar10 = param_2 - uVar19;
      }
      if (uVar11 < uVar10) {
        iVar18 = uVar10 - uVar11;
        pbVar7 = param_1 + iVar6 * 2 + uVar11 * 2;
        puVar13 = param_3 + uVar11 + iVar6;
        do {
          *puVar13 = *(undefined2 *)pbVar7;
          FUN_016f3784(param_3 + iVar6,puVar13);
          iVar18 = iVar18 + -1;
          pbVar7 = pbVar7 + 2;
          puVar13 = puVar13 + 1;
        } while (iVar18 != 0);
      }
      bVar21 = iVar8 == 0;
      iVar8 = 1;
    } while (bVar21);
    FUN_016f3e50(param_3,param_2,param_1);
  }
  return;
}

