// FUN_016ee5e0 @ 016ee5e0 size=2364 calls_out=10 calls_in=2
// strings: 

void FUN_016ee5e0(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  bool bVar20;
  uint *local_80;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c [2];
  
  if (0x20 < param_2) {
    local_80 = param_6;
    uVar14 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_016ed4c0(param_1,uVar14,param_3,param_4,1);
          return;
        }
        puVar18 = param_1 + (uVar14 >> 3) * 8;
        puVar11 = param_1 + ((uVar14 >> 3) * 8 - (uVar14 >> 3)) * 2;
        if (uVar14 < 0x40) {
          uVar6 = *puVar18;
          uVar5 = *param_1;
          bVar19 = uVar5 < uVar6;
          if ((uVar5 == uVar6) && (bVar19 = false, param_1[1] < puVar18[1])) {
            bVar19 = true;
          }
          uVar12 = *puVar11;
          bVar20 = uVar5 < uVar12;
          if ((uVar5 == uVar12) && (bVar20 = false, param_1[1] < puVar11[1])) {
            bVar20 = true;
          }
          puVar2 = param_1;
          if (bVar19 == bVar20) {
            bVar20 = uVar6 < uVar12;
            if ((uVar6 == uVar12) && (bVar20 = false, puVar18[1] < puVar11[1])) {
              bVar20 = true;
            }
            puVar2 = puVar18;
            if (bVar19 != bVar20) {
              puVar2 = puVar11;
            }
          }
        }
        else {
          puVar2 = (uint *)FUN_016ee3e8(param_1);
        }
        local_34 = *puVar2;
        param_5 = param_5 + -1;
        local_30 = puVar2[1];
        uVar6 = (uint)((int)puVar2 - (int)param_1) >> 3;
        if (local_80 == (uint *)0x0) break;
        bVar19 = local_34 <= *local_80;
        if (*local_80 == local_34) {
          bVar19 = local_30 <= local_80[1];
        }
        if (!bVar19) break;
LAB_016eeac4:
        if (param_4 < uVar14) goto LAB_016eeeec;
        puVar11 = param_3 + uVar14 * 2;
        uVar5 = 0;
        puVar18 = param_1;
        while( true ) {
          iVar3 = uVar6 - 3;
          if (uVar6 < 3) {
            iVar3 = 0;
          }
          if (puVar18 < param_1 + iVar3 * 2) {
            uVar12 = *puVar2;
            iVar4 = 0;
            iVar13 = 0x1c;
            do {
              puVar16 = (uint *)((int)puVar18 + iVar13);
              uVar9 = puVar16[-7];
              uVar15 = (uint)(uVar12 < uVar9);
              if ((uVar12 == uVar9) &&
                 (uVar15 = 0, puVar2[1] < *(uint *)((int)puVar18 + (4 - iVar4)))) {
                uVar15 = 1;
              }
              uVar9 = puVar16[-6];
              uVar17 = puVar16[-5];
              puVar7 = param_3;
              if (uVar15 != 0) {
                puVar7 = (uint *)((int)puVar11 + iVar4 + -8);
              }
              puVar7[uVar5 * 2] = puVar16[-7];
              (puVar7 + uVar5 * 2)[1] = uVar9;
              uVar9 = (uint)(uVar12 < uVar17);
              if ((uVar12 == uVar17) &&
                 (uVar9 = 0, puVar2[1] < *(uint *)((int)puVar18 + (0xc - iVar4)))) {
                uVar9 = 1;
              }
              iVar10 = uVar5 + (uVar15 ^ 1);
              puVar7 = param_3;
              if (uVar9 != 0) {
                puVar7 = (uint *)((int)puVar11 + iVar4 + -0x10);
              }
              uVar15 = puVar16[-4];
              uVar17 = puVar16[-3];
              puVar7[iVar10 * 2] = puVar16[-5];
              uVar5 = (uint)(uVar12 < uVar17);
              (puVar7 + iVar10 * 2)[1] = uVar15;
              if ((uVar12 == uVar17) &&
                 (uVar5 = 0, puVar2[1] < *(uint *)((int)puVar18 + (0x14 - iVar4)))) {
                uVar5 = 1;
              }
              iVar10 = iVar10 + (uVar9 ^ 1);
              puVar7 = param_3;
              if (uVar5 != 0) {
                puVar7 = (uint *)((int)puVar11 + iVar4 + -0x18);
              }
              uVar15 = puVar16[-2];
              uVar17 = puVar16[-1];
              puVar7[iVar10 * 2] = puVar16[-3];
              uVar9 = (uint)(uVar12 < uVar17);
              (puVar7 + iVar10 * 2)[1] = uVar15;
              if ((uVar12 == uVar17) && (uVar9 = 0, puVar2[1] < *(uint *)((int)puVar18 + iVar13))) {
                uVar9 = 1;
              }
              puVar7 = param_3;
              if (uVar9 != 0) {
                puVar7 = (uint *)((int)puVar11 + iVar4 + -0x20);
              }
              iVar10 = iVar10 + (uVar5 ^ 1);
              uVar5 = *puVar16;
              iVar13 = iVar13 + 0x20;
              puVar7[iVar10 * 2] = puVar16[-1];
              iVar4 = iVar4 + -0x20;
              (puVar7 + iVar10 * 2)[1] = uVar5;
              uVar5 = iVar10 + (uVar9 ^ 1);
            } while (puVar16 + 1 < param_1 + iVar3 * 2);
            puVar18 = (uint *)((int)puVar18 - iVar4);
            puVar11 = (uint *)((int)puVar11 + iVar4);
          }
          if (puVar18 < param_1 + uVar6 * 2) {
            uVar12 = *puVar2;
            do {
              uVar9 = (uint)(uVar12 < *puVar18);
              if ((uVar12 == *puVar18) && (uVar9 = 0, puVar2[1] < puVar18[1])) {
                uVar9 = 1;
              }
              puVar11 = puVar11 + -2;
              uVar15 = puVar18[1];
              puVar16 = param_3;
              if (uVar9 != 0) {
                puVar16 = puVar11;
              }
              iVar3 = uVar5 * 2;
              puVar16[iVar3] = *puVar18;
              puVar18 = puVar18 + 2;
              uVar5 = uVar5 + (uVar9 ^ 1);
              (puVar16 + iVar3)[1] = uVar15;
            } while (puVar18 < param_1 + uVar6 * 2);
          }
          if (uVar6 == uVar14) break;
          puVar11 = puVar11 + -2;
          uVar6 = *puVar18;
          uVar12 = puVar18[1];
          puVar18 = puVar18 + 2;
          iVar3 = uVar5 * 2;
          param_3[iVar3] = uVar6;
          uVar5 = uVar5 + 1;
          (param_3 + iVar3)[1] = uVar12;
          uVar6 = uVar14;
        }
        FUN_01bed4e2(param_1,param_3,uVar5 << 3);
        param_2 = uVar14 - uVar5;
        if (param_2 == 0) {
          return;
        }
        puVar11 = param_1 + uVar5 * 2;
        puVar18 = param_3 + uVar14 * 2 + -2;
        uVar6 = param_2;
        do {
          uVar12 = *puVar18;
          uVar9 = puVar18[1];
          puVar18 = puVar18 + -2;
          *puVar11 = uVar12;
          puVar11[1] = uVar9;
          puVar11 = puVar11 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if (uVar14 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar5,uVar14,uVar14,&DAT_01d30598);
        }
        local_80 = (uint *)0x0;
        param_1 = param_1 + uVar5 * 2;
        uVar14 = param_2;
        if (param_2 < 0x21) goto LAB_016ee604;
      }
      if (param_4 < uVar14) goto LAB_016eeeec;
      puVar11 = param_3 + uVar14 * 2;
      param_2 = 0;
      local_38 = local_34;
      uVar5 = uVar6;
      puVar18 = param_1;
      local_3c = local_30;
      while( true ) {
        iVar3 = uVar5 - 3;
        if (uVar5 < 3) {
          iVar3 = 0;
        }
        if (puVar18 < param_1 + iVar3 * 2) {
          uVar12 = *puVar2;
          iVar4 = 0;
          iVar13 = 0x1c;
          do {
            puVar16 = (uint *)((int)puVar18 + iVar13);
            uVar9 = puVar16[-7];
            uVar15 = (uint)(uVar9 < local_38);
            if ((uVar9 == local_38) &&
               (uVar15 = 0, *(uint *)((int)puVar18 + (4 - iVar4)) < local_3c)) {
              uVar15 = 1;
            }
            uVar9 = puVar16[-6];
            uVar17 = puVar16[-5];
            puVar7 = param_3;
            if (uVar15 == 0) {
              puVar7 = (uint *)((int)puVar11 + iVar4 + -8);
            }
            puVar7[param_2 * 2] = puVar16[-7];
            (puVar7 + param_2 * 2)[1] = uVar9;
            uVar9 = (uint)(uVar17 < uVar12);
            if (uVar17 == uVar12) {
              local_3c = puVar2[1];
              uVar9 = 0;
              if (*(uint *)((int)puVar18 + (0xc - iVar4)) < local_3c) {
                uVar9 = 1;
              }
            }
            puVar7 = param_3;
            if (uVar9 == 0) {
              puVar7 = (uint *)((int)puVar11 + iVar4 + -0x10);
            }
            uVar8 = puVar16[-4];
            uVar17 = puVar16[-3];
            puVar7[(param_2 + uVar15) * 2] = puVar16[-5];
            (puVar7 + (param_2 + uVar15) * 2)[1] = uVar8;
            uVar8 = (uint)(uVar17 < uVar12);
            if (uVar17 == uVar12) {
              uVar8 = 0;
              local_3c = puVar2[1];
              if (*(uint *)((int)puVar18 + (0x14 - iVar4)) < local_3c) {
                uVar8 = 1;
              }
            }
            iVar10 = param_2 + uVar15 + uVar9;
            puVar7 = param_3;
            if (uVar8 == 0) {
              puVar7 = (uint *)((int)puVar11 + iVar4 + -0x18);
            }
            uVar9 = puVar16[-2];
            uVar15 = puVar16[-1];
            puVar7[iVar10 * 2] = puVar16[-3];
            param_2 = (uint)(uVar15 < uVar12);
            (puVar7 + iVar10 * 2)[1] = uVar9;
            if (uVar15 == uVar12) {
              param_2 = 0;
              local_3c = puVar2[1];
              if (*(uint *)((int)puVar18 + iVar13) < local_3c) {
                param_2 = 1;
              }
            }
            iVar10 = iVar10 + uVar8;
            puVar7 = param_3;
            if (param_2 == 0) {
              puVar7 = (uint *)((int)puVar11 + iVar4 + -0x20);
            }
            uVar9 = *puVar16;
            iVar13 = iVar13 + 0x20;
            puVar7[iVar10 * 2] = puVar16[-1];
            iVar4 = iVar4 + -0x20;
            (puVar7 + iVar10 * 2)[1] = uVar9;
            param_2 = iVar10 + param_2;
          } while (puVar16 + 1 < param_1 + iVar3 * 2);
          puVar18 = (uint *)((int)puVar18 - iVar4);
          puVar11 = (uint *)((int)puVar11 + iVar4);
          local_38 = uVar12;
        }
        if (puVar18 < param_1 + uVar5 * 2) {
          local_38 = *puVar2;
          do {
            uVar12 = (uint)(*puVar18 < local_38);
            if (*puVar18 == local_38) {
              local_3c = puVar2[1];
              uVar12 = 0;
              if (puVar18[1] < local_3c) {
                uVar12 = 1;
              }
            }
            puVar11 = puVar11 + -2;
            uVar9 = *puVar18;
            uVar15 = puVar18[1];
            puVar18 = puVar18 + 2;
            puVar16 = puVar11;
            if (uVar12 != 0) {
              puVar16 = param_3;
            }
            iVar3 = param_2 * 2;
            puVar16[iVar3] = uVar9;
            param_2 = param_2 + uVar12;
            (puVar16 + iVar3)[1] = uVar15;
          } while (puVar18 < param_1 + uVar5 * 2);
        }
        if (uVar5 == uVar14) break;
        puVar11 = puVar11 + -2;
        uVar5 = *puVar18;
        uVar12 = puVar18[1];
        puVar18 = puVar18 + 2;
        puVar11[param_2 * 2] = uVar5;
        (puVar11 + param_2 * 2)[1] = uVar12;
        uVar5 = uVar14;
      }
      FUN_01bed4e2(param_1,param_3,param_2 << 3);
      iVar3 = uVar14 - param_2;
      if (iVar3 != 0) {
        puVar11 = param_1 + param_2 * 2;
        puVar18 = param_3 + uVar14 * 2 + -2;
        iVar4 = iVar3;
        do {
          uVar5 = *puVar18;
          uVar12 = puVar18[1];
          puVar18 = puVar18 + -2;
          *puVar11 = uVar5;
          puVar11[1] = uVar12;
          puVar11 = puVar11 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (param_2 == 0) goto LAB_016eeac4;
      if (uVar14 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_016ee5e0(param_1 + param_2 * 2,iVar3,param_3,param_4,param_5,&local_34);
      uVar14 = param_2;
    } while (0x20 < param_2);
  }
LAB_016ee604:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_016eeeec:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x16eeeec);
      (*pcVar1)();
    }
    uVar14 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar5 = param_1[1];
        uVar6 = param_1[uVar14 * 2];
        *param_3 = *param_1;
        param_3[1] = uVar5;
        param_3[uVar14 * 2] = uVar6;
        uVar6 = 1;
        (param_3 + uVar14 * 2)[1] = (param_1 + uVar14 * 2)[1];
      }
      else {
        FUN_016f397c(param_1);
        FUN_016f397c(param_1 + uVar14 * 2,param_3 + uVar14 * 2);
        uVar6 = 4;
      }
    }
    else {
      FUN_016f3cc8(param_1,param_3,param_3 + param_2 * 2);
      FUN_016f3cc8(param_1 + uVar14 * 2,param_3 + uVar14 * 2,param_3 + param_2 * 2 + 0x10);
      uVar6 = 8;
    }
    local_2c[0] = 0;
    iVar3 = 0;
    local_2c[1] = uVar14;
    do {
      iVar4 = local_2c[iVar3];
      uVar5 = uVar14;
      if (iVar4 != 0) {
        uVar5 = param_2 - uVar14;
      }
      if (uVar6 < uVar5) {
        puVar11 = param_1 + uVar6 * 2 + iVar4 * 2;
        puVar18 = param_3 + uVar6 * 2 + iVar4 * 2;
        iVar13 = uVar5 - uVar6;
        do {
          uVar5 = puVar11[1];
          *puVar18 = *puVar11;
          puVar18[1] = uVar5;
          FUN_016f3704(param_3 + iVar4 * 2,puVar18);
          puVar11 = puVar11 + 2;
          puVar18 = puVar18 + 2;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      bVar19 = iVar3 == 0;
      iVar3 = 1;
    } while (bVar19);
    FUN_016f3d00(param_3,param_2,param_1);
  }
  return;
}

