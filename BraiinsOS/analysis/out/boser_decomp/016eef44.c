// FUN_016eef44 @ 016eef44 size=2040 calls_out=9 calls_in=2
// strings: 

void FUN_016eef44(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  uint local_50;
  uint local_40;
  uint uStack_3c;
  uint local_38 [5];
  
  uVar6 = param_2;
  if (0x20 < param_2) {
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_016edc1c(param_1,uVar6,param_3,param_4,1);
          return;
        }
        puVar3 = param_1 + (uVar6 >> 3) * 0x2a;
        puVar9 = param_1 + (uVar6 >> 3) * 0x18;
        if (uVar6 < 0x40) {
          uVar7 = *puVar9;
          uVar8 = *param_1;
          uVar4 = (uint)(uVar8 < uVar7);
          uVar10 = (uint)(uVar8 >= uVar7 && uVar8 != uVar7);
          if (uVar8 == uVar7) {
            uVar15 = puVar9[3];
            uVar12 = param_1[3];
            uVar10 = 0;
            uVar4 = (uint)(uVar12 < uVar15);
            if (uVar12 >= uVar15 && uVar12 != uVar15) {
              uVar10 = 1;
            }
          }
          uVar13 = *puVar3;
          uVar12 = (uint)(uVar8 < uVar13);
          uVar15 = (uint)(uVar8 >= uVar13 && uVar8 != uVar13);
          if (uVar8 == uVar13) {
            uVar11 = puVar3[3];
            uVar8 = param_1[3];
            uVar15 = 0;
            uVar12 = (uint)(uVar8 < uVar11);
            if (uVar8 >= uVar11 && uVar8 != uVar11) {
              uVar15 = 1;
            }
          }
          puVar2 = param_1;
          if (-1 < (int)(uVar15 - uVar12 ^ uVar10 - uVar4)) {
            uVar8 = (uint)(uVar7 < uVar13);
            uVar15 = (uint)(uVar7 >= uVar13 && uVar7 != uVar13);
            if (uVar7 == uVar13) {
              uVar7 = puVar3[3];
              uVar12 = puVar9[3];
              uVar15 = 0;
              uVar8 = (uint)(uVar12 < uVar7);
              if (uVar12 >= uVar7 && uVar12 != uVar7) {
                uVar15 = 1;
              }
            }
            puVar2 = puVar9;
            if ((int)(uVar15 - uVar8 ^ uVar10 - uVar4) < 0) {
              puVar2 = puVar3;
            }
          }
        }
        else {
          puVar2 = (uint *)FUN_016ee2a0(param_1);
        }
        param_5 = param_5 + -1;
        uVar4 = ((uint)((int)puVar2 - (int)param_1) >> 3) * -0x55555555;
        local_40 = *puVar2;
        uStack_3c = puVar2[1];
        local_38[0] = puVar2[2];
        local_38[1] = puVar2[3];
        local_38[2] = puVar2[4];
        local_38[3] = puVar2[5];
        if (param_6 == (uint *)0x0) break;
        bVar19 = *puVar2 <= *param_6;
        if (*param_6 == *puVar2) {
          bVar19 = puVar2[3] <= param_6[3];
        }
        if (!bVar19) break;
LAB_016ef2e4:
        if (param_4 < uVar6) goto LAB_016ef724;
        puVar9 = param_3 + uVar6 * 6;
        uVar7 = 0;
        puVar3 = param_1;
        while( true ) {
          uVar8 = uVar7;
          for (puVar5 = puVar3; puVar5 < param_1 + uVar4 * 6; puVar5 = puVar5 + 6) {
            uVar7 = (uint)(*puVar5 <= *puVar2);
            if ((*puVar2 == *puVar5) && (uVar7 = 0, puVar5[3] <= puVar2[3])) {
              uVar7 = 1;
            }
            puVar9 = puVar9 + -6;
            puVar3 = puVar9;
            if (uVar7 != 0) {
              puVar3 = param_3;
            }
            puVar3 = puVar3 + uVar8 * 6;
            uVar10 = puVar5[1];
            uVar15 = puVar5[2];
            uVar12 = puVar5[3];
            uVar13 = puVar5[4];
            uVar11 = puVar5[5];
            *puVar3 = *puVar5;
            puVar3[1] = uVar10;
            puVar3[2] = uVar15;
            puVar3[3] = uVar12;
            puVar3[4] = uVar13;
            puVar3[5] = uVar11;
            uVar8 = uVar8 + uVar7;
          }
          if (uVar4 == uVar6) break;
          puVar3 = puVar5 + 6;
          uVar7 = uVar8 + 1;
          puVar18 = param_3 + uVar8 * 6;
          uVar4 = puVar5[1];
          uVar8 = puVar5[2];
          uVar10 = puVar5[3];
          uVar15 = puVar5[4];
          uVar12 = puVar5[5];
          puVar9 = puVar9 + -6;
          *puVar18 = *puVar5;
          puVar18[1] = uVar4;
          puVar18[2] = uVar8;
          puVar18[3] = uVar10;
          puVar18[4] = uVar15;
          puVar18[5] = uVar12;
          uVar4 = uVar6;
        }
        FUN_01bed4e2(param_1,param_3,uVar8 * 0x18);
        param_2 = uVar6 - uVar8;
        if (param_2 == 0) {
          return;
        }
        puVar3 = param_3 + uVar6 * 6 + -6;
        puVar9 = param_1 + uVar8 * 6;
        uVar4 = param_2;
        do {
          uVar7 = *puVar3;
          uVar10 = puVar3[1];
          uVar15 = puVar3[2];
          uVar12 = puVar3[3];
          uVar13 = puVar3[4];
          uVar11 = puVar3[5];
          puVar3 = puVar3 + -6;
          uVar4 = uVar4 - 1;
          *puVar9 = uVar7;
          puVar9[1] = uVar10;
          puVar9[2] = uVar15;
          puVar9[3] = uVar12;
          puVar9[4] = uVar13;
          puVar9[5] = uVar11;
          puVar9 = puVar9 + 6;
        } while (uVar4 != 0);
        if (uVar6 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar8,uVar6,uVar6,&DAT_01d30598);
        }
        param_6 = (uint *)0x0;
        param_1 = param_1 + uVar8 * 6;
        uVar6 = param_2;
        if (param_2 < 0x21) goto LAB_016eef68;
      }
      if (param_4 < uVar6) goto LAB_016ef724;
      param_2 = 0;
      puVar3 = param_3 + uVar6 * 6;
      puVar9 = param_1;
      uVar7 = uVar4;
      while( true ) {
        for (; puVar9 < param_1 + uVar7 * 6; puVar9 = puVar9 + 6) {
          uVar8 = *puVar9;
          uVar15 = *puVar2;
          uVar12 = (uint)(uVar8 < uVar15);
          uVar10 = (uint)(uVar8 >= uVar15 && uVar8 != uVar15);
          if (uVar8 == uVar15) {
            uVar15 = puVar2[3];
            uVar8 = puVar9[3];
            uVar10 = 0;
            uVar12 = (uint)(uVar8 < uVar15);
            if (uVar8 >= uVar15 && uVar8 != uVar15) {
              uVar10 = 1;
            }
          }
          puVar3 = puVar3 + -6;
          puVar5 = puVar3;
          if ((int)(uVar10 - uVar12) < 0) {
            puVar5 = param_3;
          }
          puVar5 = puVar5 + param_2 * 6;
          uVar8 = puVar9[1];
          uVar15 = puVar9[2];
          uVar13 = puVar9[3];
          uVar11 = puVar9[4];
          uVar17 = puVar9[5];
          *puVar5 = *puVar9;
          puVar5[1] = uVar8;
          puVar5[2] = uVar15;
          puVar5[3] = uVar13;
          puVar5[4] = uVar11;
          puVar5[5] = uVar17;
          param_2 = param_2 + ((uVar10 - uVar12 & 0xff) >> 7);
        }
        if (uVar7 == uVar6) break;
        puVar3 = puVar3 + -6;
        puVar5 = puVar3 + param_2 * 6;
        uVar7 = *puVar9;
        uVar8 = puVar9[1];
        uVar10 = puVar9[2];
        uVar15 = puVar9[3];
        uVar12 = puVar9[4];
        uVar13 = puVar9[5];
        puVar9 = puVar9 + 6;
        *puVar5 = uVar7;
        puVar5[1] = uVar8;
        puVar5[2] = uVar10;
        puVar5[3] = uVar15;
        puVar5[4] = uVar12;
        puVar5[5] = uVar13;
        uVar7 = uVar6;
      }
      FUN_01bed4e2(param_1,param_3,param_2 * 0x18);
      iVar16 = uVar6 - param_2;
      if (iVar16 != 0) {
        puVar3 = param_3 + uVar6 * 6 + -6;
        puVar9 = param_1 + param_2 * 6;
        iVar14 = iVar16;
        do {
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          uVar10 = puVar3[2];
          uVar15 = puVar3[3];
          uVar12 = puVar3[4];
          uVar13 = puVar3[5];
          puVar3 = puVar3 + -6;
          iVar14 = iVar14 + -1;
          *puVar9 = uVar7;
          puVar9[1] = uVar8;
          puVar9[2] = uVar10;
          puVar9[3] = uVar15;
          puVar9[4] = uVar12;
          puVar9[5] = uVar13;
          puVar9 = puVar9 + 6;
        } while (iVar14 != 0);
      }
      if (param_2 == 0) goto LAB_016ef2e4;
      if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_016eef44(param_1 + param_2 * 6,iVar16,param_3,param_4,param_5,&local_40);
      uVar6 = param_2;
    } while (0x20 < param_2);
  }
LAB_016eef68:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    local_50 = param_2 >> 1;
    puVar9 = param_3 + local_50 * 6;
    puVar3 = param_1 + local_50 * 6;
    if (param_2 < 8) {
      uVar6 = param_1[1];
      uVar4 = param_1[2];
      uVar7 = param_1[3];
      uVar8 = param_1[4];
      uVar10 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar6;
      param_3[2] = uVar4;
      param_3[3] = uVar7;
      param_3[4] = uVar8;
      param_3[5] = uVar10;
      uVar6 = puVar3[1];
      uVar4 = puVar3[2];
      uVar7 = puVar3[3];
      uVar8 = puVar3[4];
      uVar10 = puVar3[5];
      uVar15 = 1;
      *puVar9 = *puVar3;
      puVar9[1] = uVar6;
      puVar9[2] = uVar4;
      puVar9[3] = uVar7;
      puVar9[4] = uVar8;
      puVar9[5] = uVar10;
    }
    else {
      FUN_016f3b04(param_1);
      FUN_016f3b04(puVar3,puVar9);
      uVar15 = 4;
    }
    local_38[0] = 0;
    iVar16 = 0;
    local_38[1] = local_50;
    do {
      uVar4 = local_38[iVar16];
      uVar6 = local_50;
      if (uVar4 != 0) {
        uVar6 = param_2 - local_50;
      }
      if (uVar15 < uVar6) {
        iVar14 = uVar6 - uVar15;
        puVar2 = param_1 + uVar15 * 6 + uVar4 * 6;
        puVar3 = param_3 + uVar15 * 6 + uVar4 * 6;
        do {
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          uVar10 = puVar2[4];
          uVar12 = puVar2[5];
          *puVar3 = *puVar2;
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          puVar3[4] = uVar10;
          puVar3[5] = uVar12;
          FUN_016f3660(param_3 + uVar4 * 6,puVar3);
          puVar2 = puVar2 + 6;
          puVar3 = puVar3 + 6;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      bVar19 = iVar16 == 0;
      iVar16 = 1;
    } while (bVar19);
    iVar16 = 0;
    puVar3 = puVar9 + -6;
    puVar2 = param_3 + param_2 * 6 + -6;
    do {
      uVar6 = *param_3;
      uVar7 = *puVar9;
      uVar4 = (uint)(uVar7 < uVar6);
      uVar8 = (uint)(uVar7 >= uVar6 && uVar7 != uVar6);
      if (uVar7 == uVar6) {
        uVar6 = param_3[3];
        uVar7 = puVar9[3];
        uVar8 = 0;
        uVar4 = (uint)(uVar7 < uVar6);
        if (uVar7 >= uVar6 && uVar7 != uVar6) {
          uVar8 = 1;
        }
      }
      puVar5 = puVar9;
      if (uVar8 - uVar4 < 0x80000000) {
        puVar5 = param_3;
      }
      puVar18 = (uint *)((int)param_1 + iVar16);
      uVar6 = puVar5[1];
      uVar7 = puVar5[2];
      uVar10 = puVar5[3];
      uVar15 = puVar5[4];
      uVar12 = puVar5[5];
      *puVar18 = *puVar5;
      puVar18[1] = uVar6;
      puVar18[2] = uVar7;
      puVar18[3] = uVar10;
      puVar18[4] = uVar15;
      puVar18[5] = uVar12;
      uVar7 = *puVar3;
      uVar10 = *puVar2;
      uVar4 = uVar8 - uVar4 & 0xff;
      uVar6 = uVar4 >> 7;
      uVar4 = uVar4 >> 7 ^ 1;
      if (uVar10 != uVar7) {
        uVar7 = (uint)(uVar10 >= uVar7 && uVar10 != uVar7) - (uint)(uVar10 < uVar7);
      }
      else {
        uVar7 = puVar3[3];
        uVar8 = puVar2[3];
        uVar7 = (uint)(uVar8 >= uVar7 && uVar8 != uVar7) - (uint)(uVar8 < uVar7);
      }
      puVar9 = puVar9 + (uVar6 | uVar6 << 1) * 2;
      param_3 = param_3 + (uVar4 | uVar4 << 1) * 2;
      puVar5 = puVar3;
      if (uVar7 < 0x80000000) {
        puVar5 = puVar2;
      }
      puVar18 = (uint *)((int)param_1 + ((param_2 * 0x18 + -0x18) - iVar16));
      uVar6 = puVar5[1];
      uVar4 = puVar5[2];
      uVar8 = puVar5[3];
      uVar10 = puVar5[4];
      uVar15 = puVar5[5];
      iVar16 = iVar16 + 0x18;
      *puVar18 = *puVar5;
      puVar18[1] = uVar6;
      puVar18[2] = uVar4;
      puVar18[3] = uVar8;
      puVar18[4] = uVar10;
      puVar18[5] = uVar15;
      puVar3 = puVar3 + ((int)uVar7 >> 7) * 6;
      puVar2 = puVar2 + ~((int)uVar7 >> 7) * 6;
      local_50 = local_50 - 1;
    } while (local_50 != 0);
    puVar3 = puVar3 + 6;
    if ((param_2 & 1) == 0) {
      puVar5 = (uint *)0x0;
    }
    else {
      bVar19 = puVar3 <= param_3;
      param_1 = (uint *)((int)param_1 + iVar16);
      puVar5 = puVar9;
      if (!bVar19) {
        puVar5 = param_3;
      }
      uVar6 = puVar5[1];
      uVar4 = puVar5[2];
      uVar7 = puVar5[3];
      uVar8 = puVar5[4];
      uVar10 = puVar5[5];
      *param_1 = *puVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar4;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
      param_1[5] = uVar10;
      puVar5 = (uint *)((uint)!bVar19 | (uint)!bVar19 << 1);
      puVar9 = puVar9 + ((uint)bVar19 | (uint)bVar19 << 1) * 2;
      param_3 = param_3 + (int)puVar5 * 2;
    }
    if (param_3 == puVar3) {
      puVar5 = puVar2 + 6;
    }
    if (param_3 == puVar3 && puVar9 == puVar5) {
      return;
    }
    FUN_01307140();
  }
LAB_016ef724:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x16ef724);
  (*pcVar1)();
}

