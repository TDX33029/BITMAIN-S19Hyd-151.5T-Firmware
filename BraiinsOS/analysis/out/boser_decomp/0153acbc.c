// FUN_0153acbc @ 0153acbc size=2024 calls_out=11 calls_in=2
// strings: 

void FUN_0153acbc(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 undefined4 *param_6)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  bool bVar22;
  undefined4 *local_5c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30 [3];
  
  if (0x20 < param_2) {
    local_5c = param_6;
    uVar13 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_01549b1c(param_1,uVar13,param_3,param_4,1);
          return;
        }
        puVar14 = param_1 + (uVar13 >> 3) * 0x10;
        puVar8 = param_1 + ((uVar13 >> 3) * 8 - (uVar13 >> 3)) * 4;
        if (uVar13 < 0x40) {
          uVar2 = *(undefined1 *)(param_1 + 1);
          uVar20 = *param_1;
          uVar3 = *(undefined1 *)(puVar14 + 1);
          uVar18 = *puVar14;
          iVar5 = FUN_0153ac68(uVar20,uVar2);
          uVar17 = *puVar8;
          uVar4 = *(undefined1 *)(puVar8 + 1);
          iVar12 = FUN_0153ac68(uVar20,uVar2,uVar17,uVar4);
          puVar6 = param_1;
          if (iVar5 == iVar12) {
            iVar12 = FUN_0153ac68(uVar18,uVar3,uVar17,uVar4);
            puVar6 = puVar14;
            if (iVar5 != iVar12) {
              puVar6 = puVar8;
            }
          }
        }
        else {
          puVar6 = (undefined4 *)FUN_015a5cbc(param_1,puVar14,puVar8);
        }
        param_5 = param_5 + -1;
        local_38 = *puVar6;
        uStack_34 = puVar6[1];
        local_30[0] = puVar6[2];
        local_30[1] = puVar6[3];
        uVar16 = (uint)((int)puVar6 - (int)param_1) >> 4;
        if ((local_5c == (undefined4 *)0x0) ||
           (iVar5 = FUN_0153ac68(*local_5c,*(undefined1 *)(local_5c + 1),*puVar6,
                                 *(undefined1 *)(puVar6 + 1)), iVar5 != 0)) break;
LAB_0153b0c8:
        if (param_4 < uVar13) goto LAB_0153b474;
        puVar14 = param_3 + uVar13 * 4;
        uVar15 = 0;
        puVar8 = param_1;
        while( true ) {
          iVar5 = uVar16 - 3;
          if (uVar16 < 3) {
            iVar5 = 0;
          }
          for (; puVar8 < param_1 + iVar5 * 4; puVar8 = puVar8 + 0x10) {
            uVar9 = FUN_0153ac68(*puVar6,*(undefined1 *)(puVar6 + 1),*puVar8,
                                 *(undefined1 *)(puVar8 + 1));
            uVar17 = puVar8[1];
            uVar18 = puVar8[2];
            uVar20 = puVar8[3];
            puVar10 = param_3;
            if (uVar9 != 0) {
              puVar10 = puVar14 + -4;
            }
            puVar10 = puVar10 + uVar15 * 4;
            *puVar10 = *puVar8;
            puVar10[1] = uVar17;
            puVar10[2] = uVar18;
            puVar10[3] = uVar20;
            uVar11 = FUN_0153ac68(*puVar6,*(undefined1 *)(puVar6 + 1),puVar8[4],
                                  *(undefined1 *)(puVar8 + 5));
            iVar12 = uVar15 + (uVar9 ^ 1);
            uVar17 = puVar8[5];
            uVar18 = puVar8[6];
            uVar20 = puVar8[7];
            puVar10 = param_3;
            if (uVar11 != 0) {
              puVar10 = puVar14 + -8;
            }
            puVar10 = puVar10 + iVar12 * 4;
            *puVar10 = puVar8[4];
            puVar10[1] = uVar17;
            puVar10[2] = uVar18;
            puVar10[3] = uVar20;
            iVar12 = iVar12 + (uVar11 ^ 1);
            uVar15 = FUN_0153ac68(*puVar6,*(undefined1 *)(puVar6 + 1),puVar8[8],
                                  *(undefined1 *)(puVar8 + 9));
            uVar17 = puVar8[9];
            uVar18 = puVar8[10];
            uVar20 = puVar8[0xb];
            puVar10 = param_3;
            if (uVar15 != 0) {
              puVar10 = puVar14 + -0xc;
            }
            puVar10 = puVar10 + iVar12 * 4;
            *puVar10 = puVar8[8];
            puVar10[1] = uVar17;
            puVar10[2] = uVar18;
            puVar10[3] = uVar20;
            iVar12 = iVar12 + (uVar15 ^ 1);
            uVar15 = FUN_0153ac68(*puVar6,*(undefined1 *)(puVar6 + 1),puVar8[0xc],
                                  *(undefined1 *)(puVar8 + 0xd));
            puVar14 = puVar14 + -0x10;
            uVar17 = puVar8[0xd];
            uVar18 = puVar8[0xe];
            uVar20 = puVar8[0xf];
            puVar10 = param_3;
            if (uVar15 != 0) {
              puVar10 = puVar14;
            }
            puVar10 = puVar10 + iVar12 * 4;
            uVar15 = iVar12 + (uVar15 ^ 1);
            *puVar10 = puVar8[0xc];
            puVar10[1] = uVar17;
            puVar10[2] = uVar18;
            puVar10[3] = uVar20;
          }
          for (; puVar8 < param_1 + uVar16 * 4; puVar8 = puVar8 + 4) {
            uVar9 = FUN_0153ac68(*puVar6,*(undefined1 *)(puVar6 + 1),*puVar8,
                                 *(undefined1 *)(puVar8 + 1));
            puVar14 = puVar14 + -4;
            uVar17 = puVar8[1];
            uVar18 = puVar8[2];
            uVar20 = puVar8[3];
            puVar10 = param_3;
            if (uVar9 != 0) {
              puVar10 = puVar14;
            }
            puVar10 = puVar10 + uVar15 * 4;
            *puVar10 = *puVar8;
            puVar10[1] = uVar17;
            puVar10[2] = uVar18;
            puVar10[3] = uVar20;
            uVar15 = uVar15 + (uVar9 ^ 1);
          }
          if (uVar16 == uVar13) break;
          uVar17 = *puVar8;
          uVar18 = puVar8[1];
          uVar20 = puVar8[2];
          uVar21 = puVar8[3];
          puVar8 = puVar8 + 4;
          puVar10 = param_3 + uVar15 * 4;
          uVar15 = uVar15 + 1;
          puVar14 = puVar14 + -4;
          *puVar10 = uVar17;
          puVar10[1] = uVar18;
          puVar10[2] = uVar20;
          puVar10[3] = uVar21;
          uVar16 = uVar13;
        }
        FUN_01bed4e2(param_1,param_3,uVar15 << 4);
        param_2 = uVar13 - uVar15;
        if (param_2 == 0) {
          return;
        }
        puVar8 = param_3 + uVar13 * 4 + -4;
        puVar14 = param_1 + uVar15 * 4;
        uVar16 = param_2;
        do {
          uVar17 = *puVar8;
          uVar18 = puVar8[1];
          uVar20 = puVar8[2];
          uVar21 = puVar8[3];
          puVar8 = puVar8 + -4;
          uVar16 = uVar16 - 1;
          *puVar14 = uVar17;
          puVar14[1] = uVar18;
          puVar14[2] = uVar20;
          puVar14[3] = uVar21;
          puVar14 = puVar14 + 4;
        } while (uVar16 != 0);
        if (uVar13 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar15,uVar13,uVar13,&DAT_01d30598);
        }
        param_1 = param_1 + uVar15 * 4;
        local_5c = (undefined4 *)0x0;
        uVar13 = param_2;
        if (param_2 < 0x21) goto LAB_0153ace0;
      }
      if (param_4 < uVar13) goto LAB_0153b474;
      puVar8 = param_3 + uVar13 * 4;
      param_2 = 0;
      uVar15 = uVar16;
      puVar14 = param_1;
      while( true ) {
        iVar5 = uVar15 - 3;
        if (uVar15 < 3) {
          iVar5 = 0;
        }
        for (; puVar14 < param_1 + iVar5 * 4; puVar14 = puVar14 + 0x10) {
          iVar12 = FUN_0153ac68(*puVar14,*(undefined1 *)(puVar14 + 1),*puVar6,
                                *(undefined1 *)(puVar6 + 1));
          uVar17 = puVar14[1];
          uVar18 = puVar14[2];
          uVar20 = puVar14[3];
          puVar10 = param_3;
          if (iVar12 == 0) {
            puVar10 = puVar8 + -4;
          }
          puVar10 = puVar10 + param_2 * 4;
          *puVar10 = *puVar14;
          puVar10[1] = uVar17;
          puVar10[2] = uVar18;
          puVar10[3] = uVar20;
          iVar19 = FUN_0153ac68(puVar14[4],*(undefined1 *)(puVar14 + 5),*puVar6,
                                *(undefined1 *)(puVar6 + 1));
          uVar17 = puVar14[5];
          uVar18 = puVar14[6];
          uVar20 = puVar14[7];
          puVar10 = param_3;
          if (iVar19 == 0) {
            puVar10 = puVar8 + -8;
          }
          puVar10 = puVar10 + (param_2 + iVar12) * 4;
          *puVar10 = puVar14[4];
          puVar10[1] = uVar17;
          puVar10[2] = uVar18;
          puVar10[3] = uVar20;
          iVar19 = param_2 + iVar12 + iVar19;
          iVar12 = FUN_0153ac68(puVar14[8],*(undefined1 *)(puVar14 + 9),*puVar6,
                                *(undefined1 *)(puVar6 + 1));
          uVar17 = puVar14[9];
          uVar18 = puVar14[10];
          uVar20 = puVar14[0xb];
          puVar10 = param_3;
          if (iVar12 == 0) {
            puVar10 = puVar8 + -0xc;
          }
          puVar10 = puVar10 + iVar19 * 4;
          iVar19 = iVar19 + iVar12;
          *puVar10 = puVar14[8];
          puVar10[1] = uVar17;
          puVar10[2] = uVar18;
          puVar10[3] = uVar20;
          iVar12 = FUN_0153ac68(puVar14[0xc],*(undefined1 *)(puVar14 + 0xd),*puVar6,
                                *(undefined1 *)(puVar6 + 1));
          puVar8 = puVar8 + -0x10;
          uVar17 = puVar14[0xd];
          uVar18 = puVar14[0xe];
          uVar20 = puVar14[0xf];
          puVar10 = puVar8;
          if (iVar12 != 0) {
            puVar10 = param_3;
          }
          puVar10 = puVar10 + iVar19 * 4;
          param_2 = iVar19 + iVar12;
          *puVar10 = puVar14[0xc];
          puVar10[1] = uVar17;
          puVar10[2] = uVar18;
          puVar10[3] = uVar20;
        }
        for (puVar10 = puVar14; puVar10 < param_1 + uVar15 * 4; puVar10 = puVar10 + 4) {
          iVar5 = FUN_0153ac68(*puVar10,*(undefined1 *)(puVar10 + 1),*puVar6,
                               *(undefined1 *)(puVar6 + 1));
          puVar8 = puVar8 + -4;
          puVar14 = puVar8;
          if (iVar5 != 0) {
            puVar14 = param_3;
          }
          uVar17 = puVar10[1];
          uVar18 = puVar10[2];
          uVar20 = puVar10[3];
          puVar14 = puVar14 + param_2 * 4;
          param_2 = param_2 + iVar5;
          *puVar14 = *puVar10;
          puVar14[1] = uVar17;
          puVar14[2] = uVar18;
          puVar14[3] = uVar20;
        }
        if (uVar15 == uVar13) break;
        puVar8 = puVar8 + -4;
        uVar17 = puVar10[1];
        uVar18 = puVar10[2];
        uVar20 = puVar10[3];
        puVar7 = puVar8 + param_2 * 4;
        puVar14 = puVar10 + 4;
        *puVar7 = *puVar10;
        puVar7[1] = uVar17;
        puVar7[2] = uVar18;
        puVar7[3] = uVar20;
        uVar15 = uVar13;
      }
      FUN_01bed4e2(param_1,param_3,param_2 << 4);
      iVar5 = uVar13 - param_2;
      if (iVar5 != 0) {
        puVar8 = param_3 + uVar13 * 4 + -4;
        puVar14 = param_1 + param_2 * 4;
        iVar12 = iVar5;
        do {
          uVar17 = *puVar8;
          uVar18 = puVar8[1];
          uVar20 = puVar8[2];
          uVar21 = puVar8[3];
          puVar8 = puVar8 + -4;
          iVar12 = iVar12 + -1;
          *puVar14 = uVar17;
          puVar14[1] = uVar18;
          puVar14[2] = uVar20;
          puVar14[3] = uVar21;
          puVar14 = puVar14 + 4;
        } while (iVar12 != 0);
      }
      if (param_2 == 0) goto LAB_0153b0c8;
      if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_0153acbc(param_1 + param_2 * 4,iVar5,param_3,param_4,param_5,&local_38);
      uVar13 = param_2;
    } while (0x20 < param_2);
  }
LAB_0153ace0:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_0153b474:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x153b474);
      (*pcVar1)();
    }
    uVar13 = param_2 >> 1;
    if (param_2 < 0x10) {
      puVar14 = param_3 + uVar13 * 4;
      puVar8 = param_1 + uVar13 * 4;
      if (param_2 < 8) {
        uVar17 = param_1[1];
        uVar18 = param_1[2];
        uVar20 = param_1[3];
        *param_3 = *param_1;
        param_3[1] = uVar17;
        param_3[2] = uVar18;
        param_3[3] = uVar20;
        uVar17 = puVar8[1];
        uVar18 = puVar8[2];
        uVar20 = puVar8[3];
        *puVar14 = *puVar8;
        puVar14[1] = uVar17;
        puVar14[2] = uVar18;
        puVar14[3] = uVar20;
        uVar16 = 1;
      }
      else {
        FUN_01538a88(param_1,param_3);
        FUN_01538a88(puVar8,puVar14);
        uVar16 = 4;
      }
    }
    else {
      FUN_01538c04(param_1,param_3,param_3 + param_2 * 4);
      FUN_01538c04(param_1 + uVar13 * 4,param_3 + uVar13 * 4,param_3 + param_2 * 4 + 0x20);
      uVar16 = 8;
    }
    local_30[0] = 0;
    iVar5 = 0;
    local_30[1] = uVar13;
    do {
      iVar12 = local_30[iVar5];
      uVar15 = uVar13;
      if (iVar12 != 0) {
        uVar15 = param_2 - uVar13;
      }
      if (uVar16 < uVar15) {
        puVar8 = param_1 + uVar16 * 4 + iVar12 * 4;
        puVar14 = param_3 + uVar16 * 4 + iVar12 * 4;
        iVar19 = uVar15 - uVar16;
        do {
          uVar17 = puVar8[1];
          uVar18 = puVar8[2];
          uVar20 = puVar8[3];
          *puVar14 = *puVar8;
          puVar14[1] = uVar17;
          puVar14[2] = uVar18;
          puVar14[3] = uVar20;
          FUN_01538990(param_3 + iVar12 * 4,puVar14);
          puVar8 = puVar8 + 4;
          puVar14 = puVar14 + 4;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
      bVar22 = iVar5 == 0;
      iVar5 = 1;
    } while (bVar22);
    FUN_01538c3c(param_3,param_2,param_1);
  }
  return;
}

