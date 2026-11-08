// FUN_00974590 @ 00974590 size=1764 calls_out=9 calls_in=2
// strings: 

void FUN_00974590(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined8 uVar19;
  uint *local_50;
  uint *local_40;
  uint local_38 [2];
  longlong local_30;
  
  if (0x20 < param_2) {
    local_50 = param_6;
    uVar13 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_0094253c(param_1,uVar13,param_3,param_4,1);
          return;
        }
        puVar2 = param_1 + (uVar13 >> 3) * 0x10;
        if (uVar13 < 0x40) {
          uVar8 = param_1[((uVar13 >> 3) * 8 - (uVar13 >> 3)) * 4];
          uVar11 = *puVar2;
          uVar6 = *param_1;
          if (uVar6 < uVar11 != uVar11 < uVar8) {
            puVar2 = param_1 + ((uVar13 >> 3) * 8 - (uVar13 >> 3)) * 4;
          }
          if (uVar6 < uVar11 != uVar6 < uVar8) {
            puVar2 = param_1;
          }
        }
        else {
          puVar2 = (uint *)FUN_00b1c63c(param_1,puVar2);
        }
        local_38[0] = *puVar2;
        local_30 = *(longlong *)(puVar2 + 2);
        param_5 = param_5 + -1;
        uVar8 = (uint)((int)puVar2 - (int)param_1) >> 4;
        if ((local_50 == (uint *)0x0) || (*local_50 < local_38[0])) break;
LAB_009748cc:
        if (param_4 < uVar13) goto LAB_00974c44;
        puVar3 = param_3 + uVar13 * 4;
        uVar11 = 0;
        puVar4 = param_1;
        while( true ) {
          iVar10 = uVar8 - 3;
          if (uVar8 < 3) {
            iVar10 = 0;
          }
          for (; puVar4 < param_1 + iVar10 * 4; puVar4 = puVar4 + 0x10) {
            uVar6 = puVar4[1];
            uVar17 = puVar4[2];
            uVar12 = puVar4[3];
            puVar5 = param_3;
            if (*puVar2 < *puVar4) {
              puVar5 = puVar3 + -4;
            }
            puVar5 = puVar5 + uVar11 * 4;
            if (*puVar2 >= *puVar4) {
              uVar11 = uVar11 + 1;
            }
            *puVar5 = *puVar4;
            puVar5[1] = uVar6;
            puVar5[2] = uVar17;
            puVar5[3] = uVar12;
            bVar18 = *puVar2 < puVar4[4];
            uVar6 = puVar4[5];
            uVar17 = puVar4[6];
            uVar12 = puVar4[7];
            puVar5 = param_3;
            if (bVar18) {
              puVar5 = puVar3 + -8;
            }
            puVar5 = puVar5 + uVar11 * 4;
            if (!bVar18) {
              uVar11 = uVar11 + 1;
            }
            *puVar5 = puVar4[4];
            puVar5[1] = uVar6;
            puVar5[2] = uVar17;
            puVar5[3] = uVar12;
            bVar18 = *puVar2 < puVar4[8];
            uVar6 = puVar4[9];
            uVar17 = puVar4[10];
            uVar12 = puVar4[0xb];
            puVar5 = param_3;
            if (bVar18) {
              puVar5 = puVar3 + -0xc;
            }
            puVar5 = puVar5 + uVar11 * 4;
            puVar3 = puVar3 + -0x10;
            if (!bVar18) {
              uVar11 = uVar11 + 1;
            }
            *puVar5 = puVar4[8];
            puVar5[1] = uVar6;
            puVar5[2] = uVar17;
            puVar5[3] = uVar12;
            bVar18 = puVar4[0xc] <= *puVar2;
            puVar5 = puVar3;
            if (bVar18) {
              puVar5 = param_3;
            }
            uVar6 = puVar4[0xd];
            uVar17 = puVar4[0xe];
            uVar12 = puVar4[0xf];
            puVar5 = puVar5 + uVar11 * 4;
            if (bVar18) {
              uVar11 = uVar11 + 1;
            }
            *puVar5 = puVar4[0xc];
            puVar5[1] = uVar6;
            puVar5[2] = uVar17;
            puVar5[3] = uVar12;
          }
          for (puVar5 = puVar4; puVar5 < param_1 + uVar8 * 4; puVar5 = puVar5 + 4) {
            puVar3 = puVar3 + -4;
            puVar4 = puVar3;
            if (*puVar5 <= *puVar2) {
              puVar4 = param_3;
            }
            uVar6 = puVar5[1];
            uVar17 = puVar5[2];
            uVar12 = puVar5[3];
            puVar4 = puVar4 + uVar11 * 4;
            if (*puVar5 <= *puVar2) {
              uVar11 = uVar11 + 1;
            }
            *puVar4 = *puVar5;
            puVar4[1] = uVar6;
            puVar4[2] = uVar17;
            puVar4[3] = uVar12;
          }
          if (uVar8 == uVar13) break;
          puVar9 = param_3 + uVar11 * 4;
          uVar8 = puVar5[1];
          uVar6 = puVar5[2];
          uVar17 = puVar5[3];
          puVar4 = puVar5 + 4;
          uVar11 = uVar11 + 1;
          puVar3 = puVar3 + -4;
          *puVar9 = *puVar5;
          puVar9[1] = uVar8;
          puVar9[2] = uVar6;
          puVar9[3] = uVar17;
          uVar8 = uVar13;
        }
        FUN_01bed4e2(param_1,param_3,uVar11 << 4);
        param_2 = uVar13 - uVar11;
        if (param_2 == 0) {
          return;
        }
        puVar3 = param_3 + uVar13 * 4 + -4;
        puVar2 = param_1 + uVar11 * 4;
        uVar8 = param_2;
        do {
          uVar6 = *puVar3;
          uVar17 = puVar3[1];
          uVar12 = puVar3[2];
          uVar14 = puVar3[3];
          puVar3 = puVar3 + -4;
          uVar8 = uVar8 - 1;
          *puVar2 = uVar6;
          puVar2[1] = uVar17;
          puVar2[2] = uVar12;
          puVar2[3] = uVar14;
          puVar2 = puVar2 + 4;
        } while (uVar8 != 0);
        if (uVar13 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar11,uVar13,uVar13,&DAT_01d30598);
        }
        param_1 = param_1 + uVar11 * 4;
        local_50 = (uint *)0x0;
        uVar13 = param_2;
        if (param_2 < 0x21) goto LAB_009745b8;
      }
      if (param_4 < uVar13) goto LAB_00974c44;
      puVar3 = param_3 + uVar13 * 4;
      param_2 = 0;
      puVar4 = param_1;
      uVar11 = uVar8;
      while( true ) {
        iVar10 = uVar11 - 3;
        if (uVar11 < 3) {
          iVar10 = 0;
        }
        for (; puVar4 < param_1 + iVar10 * 4; puVar4 = puVar4 + 0x10) {
          puVar5 = param_3;
          if (*puVar2 <= *puVar4) {
            puVar5 = puVar3 + -4;
          }
          puVar5 = puVar5 + param_2 * 4;
          uVar6 = puVar4[1];
          uVar17 = puVar4[2];
          uVar12 = puVar4[3];
          if (*puVar2 > *puVar4) {
            param_2 = param_2 + 1;
          }
          *puVar5 = *puVar4;
          puVar5[1] = uVar6;
          puVar5[2] = uVar17;
          puVar5[3] = uVar12;
          bVar18 = *puVar2 <= puVar4[4];
          uVar6 = puVar4[5];
          uVar17 = puVar4[6];
          uVar12 = puVar4[7];
          puVar5 = param_3;
          if (bVar18) {
            puVar5 = puVar3 + -8;
          }
          puVar5 = puVar5 + param_2 * 4;
          if (!bVar18) {
            param_2 = param_2 + 1;
          }
          *puVar5 = puVar4[4];
          puVar5[1] = uVar6;
          puVar5[2] = uVar17;
          puVar5[3] = uVar12;
          bVar18 = *puVar2 <= puVar4[8];
          uVar6 = puVar4[9];
          uVar17 = puVar4[10];
          uVar12 = puVar4[0xb];
          puVar5 = param_3;
          if (bVar18) {
            puVar5 = puVar3 + -0xc;
          }
          puVar5 = puVar5 + param_2 * 4;
          puVar3 = puVar3 + -0x10;
          if (!bVar18) {
            param_2 = param_2 + 1;
          }
          *puVar5 = puVar4[8];
          puVar5[1] = uVar6;
          puVar5[2] = uVar17;
          puVar5[3] = uVar12;
          bVar18 = puVar4[0xc] < *puVar2;
          puVar5 = puVar3;
          if (bVar18) {
            puVar5 = param_3;
          }
          uVar6 = puVar4[0xd];
          uVar17 = puVar4[0xe];
          uVar12 = puVar4[0xf];
          puVar5 = puVar5 + param_2 * 4;
          if (bVar18) {
            param_2 = param_2 + 1;
          }
          *puVar5 = puVar4[0xc];
          puVar5[1] = uVar6;
          puVar5[2] = uVar17;
          puVar5[3] = uVar12;
        }
        for (puVar5 = puVar4; puVar5 < param_1 + uVar11 * 4; puVar5 = puVar5 + 4) {
          puVar3 = puVar3 + -4;
          puVar4 = puVar3;
          if (*puVar5 < *puVar2) {
            puVar4 = param_3;
          }
          uVar6 = puVar5[1];
          uVar17 = puVar5[2];
          uVar12 = puVar5[3];
          puVar4 = puVar4 + param_2 * 4;
          if (*puVar5 < *puVar2) {
            param_2 = param_2 + 1;
          }
          *puVar4 = *puVar5;
          puVar4[1] = uVar6;
          puVar4[2] = uVar17;
          puVar4[3] = uVar12;
        }
        if (uVar11 == uVar13) break;
        puVar3 = puVar3 + -4;
        uVar11 = puVar5[1];
        uVar6 = puVar5[2];
        uVar17 = puVar5[3];
        puVar9 = puVar3 + param_2 * 4;
        puVar4 = puVar5 + 4;
        *puVar9 = *puVar5;
        puVar9[1] = uVar11;
        puVar9[2] = uVar6;
        puVar9[3] = uVar17;
        uVar11 = uVar13;
      }
      FUN_01bed4e2(param_1,param_3,param_2 << 4);
      iVar10 = uVar13 - param_2;
      if (iVar10 != 0) {
        puVar4 = param_3 + uVar13 * 4 + -4;
        puVar3 = param_1 + param_2 * 4;
        iVar15 = iVar10;
        do {
          uVar11 = *puVar4;
          uVar6 = puVar4[1];
          uVar17 = puVar4[2];
          uVar12 = puVar4[3];
          puVar4 = puVar4 + -4;
          iVar15 = iVar15 + -1;
          *puVar3 = uVar11;
          puVar3[1] = uVar6;
          puVar3[2] = uVar17;
          puVar3[3] = uVar12;
          puVar3 = puVar3 + 4;
        } while (iVar15 != 0);
      }
      if (param_2 == 0) goto LAB_009748cc;
      if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_00974590(param_1 + param_2 * 4,iVar10,param_3,param_4,param_5,local_38);
      uVar13 = param_2;
    } while (0x20 < param_2);
  }
LAB_009745b8:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_00974c44:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x974c44);
      (*pcVar1)();
    }
    uVar13 = param_2 >> 1;
    if (param_2 < 0x10) {
      puVar3 = param_3 + uVar13 * 4;
      puVar2 = param_1 + uVar13 * 4;
      if (param_2 < 8) {
        uVar8 = param_1[1];
        uVar11 = param_1[2];
        uVar6 = param_1[3];
        *param_3 = *param_1;
        param_3[1] = uVar8;
        param_3[2] = uVar11;
        param_3[3] = uVar6;
        uVar8 = puVar2[1];
        uVar11 = puVar2[2];
        uVar6 = puVar2[3];
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar11;
        puVar3[3] = uVar6;
        uVar8 = 1;
      }
      else {
        FUN_009400a8(param_1,param_3);
        FUN_009400a8(puVar2,puVar3);
        uVar8 = 4;
      }
    }
    else {
      FUN_009401a4(param_1,param_3,param_3 + param_2 * 4);
      FUN_009401a4(param_1 + uVar13 * 4,param_3 + uVar13 * 4,param_3 + param_2 * 4 + 0x20);
      uVar8 = 8;
    }
    local_30 = (ulonglong)uVar13 << 0x20;
    iVar10 = 0;
    do {
      uVar6 = local_38[iVar10 + 2];
      uVar11 = uVar13;
      if (uVar6 != 0) {
        uVar11 = param_2 - uVar13;
      }
      if (uVar8 < uVar11) {
        iVar15 = 0x10;
        puVar2 = param_3 + uVar6 * 4;
        uVar17 = uVar8;
        local_40 = puVar2;
        do {
          puVar4 = param_1 + uVar6 * 4 + uVar17 * 4;
          puVar3 = puVar2 + uVar17 * 4;
          uVar12 = puVar4[1];
          uVar14 = puVar4[2];
          uVar16 = puVar4[3];
          *puVar3 = *puVar4;
          puVar3[1] = uVar12;
          puVar3[2] = uVar14;
          puVar3[3] = uVar16;
          uVar12 = puVar2[uVar17 * 4];
          if (uVar12 < puVar3[-4]) {
            uVar19 = *(undefined8 *)(puVar3 + 2);
            iVar7 = iVar15;
            puVar3 = local_40;
            do {
              puVar4 = puVar3 + uVar8 * 4;
              *puVar4 = puVar4[-4];
              puVar4[1] = puVar4[-3];
              puVar4[2] = puVar4[-2];
              puVar4[3] = puVar4[-1];
              if (uVar8 * 0x10 == iVar7) {
                puVar3 = puVar2;
                goto LAB_00974be0;
              }
              iVar7 = iVar7 + 0x10;
              puVar3 = puVar3 + -4;
            } while (uVar12 < puVar4[-8]);
            puVar3 = puVar3 + uVar8 * 4;
LAB_00974be0:
            *(undefined8 *)(puVar3 + 2) = uVar19;
            *puVar3 = uVar12;
          }
          uVar17 = uVar17 + 1;
          iVar15 = iVar15 + -0x10;
          local_40 = local_40 + 4;
        } while (uVar17 != uVar11);
      }
      bVar18 = iVar10 == 0;
      iVar10 = 1;
    } while (bVar18);
    FUN_009401dc(param_3,param_2,param_1);
  }
  return;
}

