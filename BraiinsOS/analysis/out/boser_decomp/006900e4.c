// FUN_006900e4 @ 006900e4 size=2012 calls_out=10 calls_in=2
// strings: 

void FUN_006900e4(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  int local_68;
  undefined4 *local_5c;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38 [5];
  
  if (0x20 < param_2) {
    local_68 = param_6;
    uVar20 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_006908ec(param_1,uVar20,param_3,param_4,1);
          return;
        }
        puVar9 = param_1 + (uVar20 >> 3) * 0x2a;
        puVar15 = param_1 + (uVar20 >> 3) * 0x18;
        if (uVar20 < 0x40) {
          uVar18 = puVar15[2];
          uVar8 = puVar15[1];
          uVar5 = param_1[2];
          uVar10 = param_1[1];
          uVar7 = uVar18;
          if (uVar5 < uVar18) {
            uVar7 = uVar5;
          }
          uVar7 = FUN_01bed842(uVar10,uVar8,uVar7);
          uVar19 = puVar9[2];
          uVar11 = puVar9[1];
          if (uVar7 == 0) {
            uVar7 = uVar5 - uVar18;
          }
          uVar2 = uVar19;
          if (uVar5 < uVar19) {
            uVar2 = uVar5;
          }
          uVar2 = FUN_01bed842(uVar10,uVar11,uVar2);
          if (uVar2 == 0) {
            uVar2 = uVar5 - uVar19;
          }
          puVar6 = param_1;
          if (-1 < (int)(uVar2 ^ uVar7)) {
            uVar5 = uVar19;
            if (uVar18 < uVar19) {
              uVar5 = uVar18;
            }
            uVar5 = FUN_01bed842(uVar8,uVar11,uVar5);
            if (uVar5 == 0) {
              uVar5 = uVar18 - uVar19;
            }
            puVar6 = puVar15;
            if ((int)(uVar5 ^ uVar7) < 0) {
              puVar6 = puVar9;
            }
          }
        }
        else {
          puVar6 = (undefined4 *)FUN_006953c4(param_1,puVar15,puVar9);
        }
        param_5 = param_5 + -1;
        uVar7 = ((uint)((int)puVar6 - (int)param_1) >> 3) * -0x55555555;
        local_40 = *puVar6;
        uStack_3c = puVar6[1];
        local_38[0] = puVar6[2];
        local_38[1] = puVar6[3];
        local_38[2] = puVar6[4];
        local_38[3] = puVar6[5];
        if (local_68 == 0) break;
        uVar18 = puVar6[2];
        uVar19 = *(uint *)(local_68 + 8);
        uVar5 = uVar18;
        if (uVar19 < uVar18) {
          uVar5 = uVar19;
        }
        uVar5 = FUN_01bed842(*(undefined4 *)(local_68 + 4),puVar6[1],uVar5);
        if (uVar5 == 0) {
          uVar5 = uVar19 - uVar18;
        }
        if (0x7fffffff < uVar5) break;
LAB_00690454:
        if (param_4 < uVar20) goto LAB_006908a8;
        uVar5 = 0;
        puVar9 = param_3 + uVar20 * 6;
        puVar15 = param_1;
        while( true ) {
          uVar18 = uVar5;
          for (; puVar15 < param_1 + uVar7 * 6; puVar15 = puVar15 + 6) {
            uVar2 = puVar15[2];
            uVar19 = puVar6[2];
            uVar5 = uVar2;
            if (uVar19 < uVar2) {
              uVar5 = uVar19;
            }
            uVar5 = FUN_01bed842(puVar6[1],puVar15[1],uVar5);
            puVar9 = puVar9 + -6;
            if (uVar5 == 0) {
              uVar5 = uVar19 - uVar2;
            }
            uVar19 = uVar18;
            puVar4 = puVar9;
            if (uVar5 < 0x80000000) {
              uVar19 = uVar18 + 1;
              puVar4 = param_3;
            }
            puVar4 = puVar4 + uVar18 * 6;
            uVar8 = puVar15[1];
            uVar10 = puVar15[2];
            uVar11 = puVar15[3];
            uVar13 = puVar15[4];
            uVar16 = puVar15[5];
            *puVar4 = *puVar15;
            puVar4[1] = uVar8;
            puVar4[2] = uVar10;
            puVar4[3] = uVar11;
            puVar4[4] = uVar13;
            puVar4[5] = uVar16;
            uVar18 = uVar19;
          }
          if (uVar7 == uVar20) break;
          uVar5 = uVar18 + 1;
          puVar9 = puVar9 + -6;
          puVar4 = param_3 + uVar18 * 6;
          uVar8 = *puVar15;
          uVar10 = puVar15[1];
          uVar11 = puVar15[2];
          uVar13 = puVar15[3];
          uVar16 = puVar15[4];
          uVar14 = puVar15[5];
          puVar15 = puVar15 + 6;
          *puVar4 = uVar8;
          puVar4[1] = uVar10;
          puVar4[2] = uVar11;
          puVar4[3] = uVar13;
          puVar4[4] = uVar16;
          puVar4[5] = uVar14;
          uVar7 = uVar20;
        }
        FUN_01bed4e2(param_1,param_3,uVar18 * 0x18);
        param_2 = uVar20 - uVar18;
        if (param_2 == 0) {
          return;
        }
        puVar9 = param_3 + uVar20 * 6 + -6;
        puVar15 = param_1 + uVar18 * 6;
        uVar7 = param_2;
        do {
          uVar8 = *puVar9;
          uVar10 = puVar9[1];
          uVar11 = puVar9[2];
          uVar13 = puVar9[3];
          uVar16 = puVar9[4];
          uVar14 = puVar9[5];
          puVar9 = puVar9 + -6;
          uVar7 = uVar7 - 1;
          *puVar15 = uVar8;
          puVar15[1] = uVar10;
          puVar15[2] = uVar11;
          puVar15[3] = uVar13;
          puVar15[4] = uVar16;
          puVar15[5] = uVar14;
          puVar15 = puVar15 + 6;
        } while (uVar7 != 0);
        if (uVar20 < uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar18,uVar20,uVar20,&DAT_01d30598);
        }
        param_1 = param_1 + uVar18 * 6;
        local_68 = 0;
        uVar20 = param_2;
        if (param_2 < 0x21) goto LAB_00690104;
      }
      if (param_4 < uVar20) goto LAB_006908a8;
      param_2 = 0;
      puVar15 = param_3 + uVar20 * 6;
      puVar9 = param_1;
      uVar5 = uVar7;
      while( true ) {
        for (; puVar9 < param_1 + uVar5 * 6; puVar9 = puVar9 + 6) {
          uVar2 = puVar6[2];
          uVar19 = puVar9[2];
          uVar18 = uVar2;
          if (uVar19 < uVar2) {
            uVar18 = uVar19;
          }
          iVar12 = FUN_01bed842(puVar9[1],puVar6[1],uVar18);
          puVar15 = puVar15 + -6;
          if (iVar12 == 0) {
            iVar12 = uVar19 - uVar2;
          }
          puVar4 = puVar15;
          if (iVar12 < 0) {
            puVar4 = param_3;
          }
          puVar4 = puVar4 + param_2 * 6;
          uVar8 = puVar9[1];
          uVar10 = puVar9[2];
          uVar11 = puVar9[3];
          uVar13 = puVar9[4];
          uVar16 = puVar9[5];
          *puVar4 = *puVar9;
          puVar4[1] = uVar8;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          puVar4[4] = uVar13;
          puVar4[5] = uVar16;
          param_2 = param_2 - (iVar12 >> 0x1f);
        }
        if (uVar5 == uVar20) break;
        puVar15 = puVar15 + -6;
        uVar8 = *puVar9;
        uVar10 = puVar9[1];
        uVar11 = puVar9[2];
        uVar13 = puVar9[3];
        uVar16 = puVar9[4];
        uVar14 = puVar9[5];
        puVar4 = puVar15 + param_2 * 6;
        puVar9 = puVar9 + 6;
        *puVar4 = uVar8;
        puVar4[1] = uVar10;
        puVar4[2] = uVar11;
        puVar4[3] = uVar13;
        puVar4[4] = uVar16;
        puVar4[5] = uVar14;
        uVar5 = uVar20;
      }
      FUN_01bed4e2(param_1,param_3,param_2 * 0x18);
      iVar12 = uVar20 - param_2;
      if (iVar12 != 0) {
        puVar9 = param_3 + uVar20 * 6 + -6;
        puVar15 = param_1 + param_2 * 6;
        iVar3 = iVar12;
        do {
          uVar8 = *puVar9;
          uVar10 = puVar9[1];
          uVar11 = puVar9[2];
          uVar13 = puVar9[3];
          uVar16 = puVar9[4];
          uVar14 = puVar9[5];
          puVar9 = puVar9 + -6;
          iVar3 = iVar3 + -1;
          *puVar15 = uVar8;
          puVar15[1] = uVar10;
          puVar15[2] = uVar11;
          puVar15[3] = uVar13;
          puVar15[4] = uVar16;
          puVar15[5] = uVar14;
          puVar15 = puVar15 + 6;
        } while (iVar3 != 0);
      }
      if (param_2 == 0) goto LAB_00690454;
      if (uVar20 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_006900e4(param_1 + param_2 * 6,iVar12,param_3,param_4,param_5,&local_40);
      uVar20 = param_2;
    } while (0x20 < param_2);
  }
LAB_00690104:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar20 = param_2 >> 1;
    puVar15 = param_3 + uVar20 * 6;
    puVar9 = param_1 + uVar20 * 6;
    if (param_2 < 8) {
      uVar8 = param_1[1];
      uVar10 = param_1[2];
      uVar11 = param_1[3];
      uVar13 = param_1[4];
      uVar16 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar8;
      param_3[2] = uVar10;
      param_3[3] = uVar11;
      param_3[4] = uVar13;
      param_3[5] = uVar16;
      uVar8 = puVar9[1];
      uVar10 = puVar9[2];
      uVar11 = puVar9[3];
      uVar13 = puVar9[4];
      uVar16 = puVar9[5];
      *puVar15 = *puVar9;
      puVar15[1] = uVar8;
      puVar15[2] = uVar10;
      puVar15[3] = uVar11;
      puVar15[4] = uVar13;
      puVar15[5] = uVar16;
      uVar7 = 1;
    }
    else {
      FUN_0067c014(param_1,param_3);
      FUN_0067c014(puVar9,puVar15);
      uVar7 = 4;
    }
    local_38[0] = 0;
    iVar12 = 0;
    local_38[1] = uVar20;
    do {
      iVar3 = local_38[iVar12];
      uVar5 = uVar20;
      if (iVar3 != 0) {
        uVar5 = param_2 - uVar20;
      }
      if (uVar7 < uVar5) {
        iVar17 = uVar5 - uVar7;
        puVar6 = param_1 + uVar7 * 6 + iVar3 * 6;
        puVar9 = param_3 + uVar7 * 6 + iVar3 * 6;
        do {
          uVar8 = puVar6[1];
          uVar10 = puVar6[2];
          uVar11 = puVar6[3];
          uVar13 = puVar6[4];
          uVar16 = puVar6[5];
          *puVar9 = *puVar6;
          puVar9[1] = uVar8;
          puVar9[2] = uVar10;
          puVar9[3] = uVar11;
          puVar9[4] = uVar13;
          puVar9[5] = uVar16;
          FUN_0067bf3c(param_3 + iVar3 * 6,puVar9);
          puVar6 = puVar6 + 6;
          puVar9 = puVar9 + 6;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      bVar21 = iVar12 == 0;
      iVar12 = 1;
    } while (bVar21);
    iVar12 = 0;
    local_44 = param_3 + param_2 * 6 + -6;
    local_5c = puVar15 + -6;
    do {
      uVar18 = param_3[2];
      uVar5 = puVar15[2];
      uVar7 = uVar18;
      if (uVar5 < uVar18) {
        uVar7 = uVar5;
      }
      uVar7 = FUN_01bed842(puVar15[1],param_3[1],uVar7);
      if (uVar7 == 0) {
        uVar7 = uVar5 - uVar18;
      }
      puVar9 = puVar15;
      if (uVar7 < 0x80000000) {
        puVar9 = param_3;
      }
      puVar6 = (undefined4 *)((int)param_1 + iVar12);
      uVar8 = puVar9[1];
      uVar10 = puVar9[2];
      uVar11 = puVar9[3];
      uVar13 = puVar9[4];
      uVar16 = puVar9[5];
      *puVar6 = *puVar9;
      puVar6[1] = uVar8;
      puVar6[2] = uVar10;
      puVar6[3] = uVar11;
      puVar6[4] = uVar13;
      puVar6[5] = uVar16;
      uVar19 = local_44[2];
      uVar18 = local_5c[2];
      uVar5 = uVar18;
      if (uVar19 < uVar18) {
        uVar5 = uVar19;
      }
      uVar5 = FUN_01bed842(local_44[1],local_5c[1],uVar5);
      if (uVar5 == 0) {
        uVar5 = uVar19 - uVar18;
      }
      puVar6 = (undefined4 *)((int)param_1 + ((param_2 * 0x18 + -0x18) - iVar12));
      puVar9 = local_5c;
      if (uVar5 < 0x80000000) {
        puVar9 = local_44;
      }
      uVar8 = puVar9[1];
      uVar10 = puVar9[2];
      uVar11 = puVar9[3];
      uVar13 = puVar9[4];
      uVar16 = puVar9[5];
      uVar20 = uVar20 - 1;
      *puVar6 = *puVar9;
      puVar6[1] = uVar8;
      puVar6[2] = uVar10;
      puVar6[3] = uVar11;
      puVar6[4] = uVar13;
      puVar6[5] = uVar16;
      puVar15 = puVar15 + (uVar7 >> 0x1f | (uVar7 >> 0x1f) << 1) * 2;
      uVar7 = uVar7 >> 0x1f ^ 1;
      iVar12 = iVar12 + 0x18;
      param_3 = param_3 + (uVar7 | uVar7 << 1) * 2;
      local_5c = local_5c + ((int)uVar5 >> 0x1f) * 6;
      local_44 = local_44 + ~((int)uVar5 >> 0x1f) * 6;
    } while (uVar20 != 0);
    puVar9 = local_5c + 6;
    if ((param_2 & 1) != 0) {
      bVar21 = puVar9 <= param_3;
      puVar6 = puVar15;
      if (!bVar21) {
        puVar6 = param_3;
      }
      param_1 = (undefined4 *)((int)param_1 + iVar12);
      uVar8 = puVar6[1];
      uVar10 = puVar6[2];
      uVar11 = puVar6[3];
      uVar13 = puVar6[4];
      uVar16 = puVar6[5];
      *param_1 = *puVar6;
      param_1[1] = uVar8;
      param_1[2] = uVar10;
      param_1[3] = uVar11;
      param_1[4] = uVar13;
      param_1[5] = uVar16;
      local_5c = (undefined4 *)((uint)!bVar21 | (uint)!bVar21 << 1);
      puVar15 = puVar15 + ((uint)bVar21 | (uint)bVar21 << 1) * 2;
      param_3 = param_3 + (int)local_5c * 2;
    }
    if (param_3 == puVar9) {
      local_5c = local_44 + 6;
    }
    if (param_3 == puVar9 && puVar15 == local_5c) {
      return;
    }
    FUN_01307140();
  }
LAB_006908a8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x6908a8);
  (*pcVar1)();
}

