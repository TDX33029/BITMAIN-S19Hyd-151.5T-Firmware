// FUN_0072cf88 @ 0072cf88 size=1984 calls_out=8 calls_in=2
// strings: 

void FUN_0072cf88(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  bool bVar23;
  undefined4 *local_68;
  int local_64;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_2c [2];
  
  if (0x20 < param_2) {
    do {
      uVar19 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_0071b0c8(param_1,uVar19,param_3,param_4,1);
          return;
        }
        puVar3 = param_1 + (uVar19 >> 3) * 0x20;
        puVar4 = param_1 + ((uVar19 >> 3) * 8 - (uVar19 >> 3)) * 8;
        if (uVar19 < 0x40) {
          uVar10 = puVar4[3];
          uVar18 = puVar3[3];
          uVar12 = param_1[3];
          bVar23 = uVar12 <= uVar18 &&
                   (uint)((uint)puVar3[2] <= (uint)param_1[2]) <= uVar12 - uVar18;
          if (bVar23 != (uVar18 <= uVar10 &&
                        (uint)((uint)puVar4[2] <= (uint)puVar3[2]) <= uVar18 - uVar10)) {
            puVar3 = puVar4;
          }
          if (bVar23 != (uVar12 <= uVar10 &&
                        (uint)((uint)puVar4[2] <= (uint)param_1[2]) <= uVar12 - uVar10)) {
            puVar3 = param_1;
          }
        }
        else {
          puVar3 = (undefined4 *)FUN_00723188(param_1);
        }
        param_5 = param_5 + -1;
        local_58 = *puVar3;
        uStack_54 = puVar3[1];
        uStack_50 = puVar3[2];
        uStack_4c = puVar3[3];
        local_48 = puVar3[4];
        uStack_44 = puVar3[5];
        uStack_40 = puVar3[6];
        uStack_3c = puVar3[7];
        uVar10 = (uint)((int)puVar3 - (int)param_1) >> 5;
        if ((param_6 != 0) &&
           ((uint)puVar3[3] < *(uint *)(param_6 + 0xc) ||
            *(uint *)(param_6 + 0xc) - puVar3[3] < (uint)((uint)puVar3[2] <= *(uint *)(param_6 + 8))
           )) break;
        if (param_4 < uVar19) goto LAB_0072d72c;
        puVar4 = param_3 + uVar19 * 8;
        param_2 = 0;
        puVar3 = param_1;
        uVar18 = uVar10;
        while( true ) {
          for (puVar9 = puVar3; puVar9 < param_1 + uVar18 * 8; puVar9 = puVar9 + 8) {
            uVar6 = param_1[uVar10 * 8 + 3];
            puVar4 = puVar4 + -8;
            uVar12 = puVar9[3];
            bVar23 = (uint)((uint)param_1[uVar10 * 8 + 2] <= (uint)puVar9[2]) <= uVar12 - uVar6;
            uVar13 = puVar9[1];
            uVar14 = puVar9[2];
            uVar15 = puVar9[3];
            puVar3 = puVar4;
            if (uVar12 <= uVar6 && bVar23) {
              puVar3 = param_3;
            }
            puVar3 = puVar3 + param_2 * 8;
            if (uVar12 <= uVar6 && bVar23) {
              param_2 = param_2 + 1;
            }
            *puVar3 = *puVar9;
            puVar3[1] = uVar13;
            puVar3[2] = uVar14;
            puVar3[3] = uVar15;
            uVar13 = puVar9[5];
            uVar14 = puVar9[6];
            uVar15 = puVar9[7];
            puVar3[4] = puVar9[4];
            puVar3[5] = uVar13;
            puVar3[6] = uVar14;
            puVar3[7] = uVar15;
          }
          if (uVar18 == uVar19) break;
          puVar4 = puVar4 + -8;
          uVar13 = puVar9[1];
          uVar14 = puVar9[2];
          uVar15 = puVar9[3];
          puVar8 = puVar4 + param_2 * 8;
          puVar3 = puVar9 + 8;
          *puVar8 = *puVar9;
          puVar8[1] = uVar13;
          puVar8[2] = uVar14;
          puVar8[3] = uVar15;
          uVar13 = puVar9[5];
          uVar14 = puVar9[6];
          uVar15 = puVar9[7];
          puVar8[4] = puVar9[4];
          puVar8[5] = uVar13;
          puVar8[6] = uVar14;
          puVar8[7] = uVar15;
          uVar18 = uVar19;
        }
        FUN_01bed4e2(param_1,param_3,param_2 << 5);
        iVar20 = uVar19 - param_2;
        if (iVar20 != 0) {
          puVar3 = param_1 + param_2 * 8;
          iVar5 = iVar20;
          puVar4 = param_3 + uVar19 * 8 + -8;
          do {
            uVar13 = puVar4[1];
            uVar14 = puVar4[2];
            uVar15 = puVar4[3];
            iVar5 = iVar5 + -1;
            *puVar3 = *puVar4;
            puVar3[1] = uVar13;
            puVar3[2] = uVar14;
            puVar3[3] = uVar15;
            uVar13 = puVar4[5];
            uVar14 = puVar4[6];
            uVar15 = puVar4[7];
            puVar3[4] = puVar4[4];
            puVar3[5] = uVar13;
            puVar3[6] = uVar14;
            puVar3[7] = uVar15;
            puVar3 = puVar3 + 8;
            puVar4 = puVar4 + -8;
          } while (iVar5 != 0);
        }
        if (param_2 == 0) break;
        if (uVar19 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
        }
        FUN_0072cf88(param_1 + param_2 * 8,iVar20,param_3,param_4,param_5,&local_58);
        uVar19 = param_2;
        if (param_2 < 0x21) goto LAB_0072cfb0;
      }
      if (param_4 < uVar19) goto LAB_0072d72c;
      puVar3 = param_3 + uVar19 * 8;
      uVar18 = 0;
      puVar4 = param_1;
      uVar12 = uVar10;
      while( true ) {
        for (puVar9 = puVar4; puVar9 < param_1 + uVar12 * 8; puVar9 = puVar9 + 8) {
          uVar6 = puVar9[3];
          puVar3 = puVar3 + -8;
          uVar17 = param_1[uVar10 * 8 + 3];
          bVar23 = uVar17 - uVar6 < (uint)((uint)puVar9[2] <= (uint)param_1[uVar10 * 8 + 2]);
          uVar13 = puVar9[1];
          uVar14 = puVar9[2];
          uVar15 = puVar9[3];
          puVar4 = puVar3;
          if (uVar6 < uVar17 || bVar23) {
            puVar4 = param_3;
          }
          puVar4 = puVar4 + uVar18 * 8;
          if (uVar6 < uVar17 || bVar23) {
            uVar18 = uVar18 + 1;
          }
          *puVar4 = *puVar9;
          puVar4[1] = uVar13;
          puVar4[2] = uVar14;
          puVar4[3] = uVar15;
          uVar13 = puVar9[5];
          uVar14 = puVar9[6];
          uVar15 = puVar9[7];
          puVar4[4] = puVar9[4];
          puVar4[5] = uVar13;
          puVar4[6] = uVar14;
          puVar4[7] = uVar15;
        }
        if (uVar12 == uVar19) break;
        uVar13 = puVar9[1];
        uVar14 = puVar9[2];
        uVar15 = puVar9[3];
        puVar4 = puVar9 + 8;
        puVar8 = param_3 + uVar18 * 8;
        uVar18 = uVar18 + 1;
        *puVar8 = *puVar9;
        puVar8[1] = uVar13;
        puVar8[2] = uVar14;
        puVar8[3] = uVar15;
        puVar3 = puVar3 + -8;
        uVar13 = puVar9[5];
        uVar14 = puVar9[6];
        uVar15 = puVar9[7];
        puVar8[4] = puVar9[4];
        puVar8[5] = uVar13;
        puVar8[6] = uVar14;
        puVar8[7] = uVar15;
        uVar12 = uVar19;
      }
      FUN_01bed4e2(param_1,param_3,uVar18 << 5);
      param_2 = uVar19 - uVar18;
      if (param_2 == 0) {
        return;
      }
      puVar3 = param_3 + uVar19 * 8 + -8;
      puVar4 = param_1 + uVar18 * 8;
      uVar10 = param_2;
      do {
        uVar13 = puVar3[1];
        uVar14 = puVar3[2];
        uVar15 = puVar3[3];
        uVar10 = uVar10 - 1;
        *puVar4 = *puVar3;
        puVar4[1] = uVar13;
        puVar4[2] = uVar14;
        puVar4[3] = uVar15;
        uVar13 = puVar3[5];
        uVar14 = puVar3[6];
        uVar15 = puVar3[7];
        puVar4[4] = puVar3[4];
        puVar4[5] = uVar13;
        puVar4[6] = uVar14;
        puVar4[7] = uVar15;
        puVar3 = puVar3 + -8;
        puVar4 = puVar4 + 8;
      } while (uVar10 != 0);
      if (uVar19 < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar18,uVar19,uVar19,&DAT_01d30598);
      }
      param_6 = 0;
      param_1 = param_1 + uVar18 * 8;
    } while (0x20 < param_2);
  }
LAB_0072cfb0:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar19 = param_2 >> 1;
    puVar4 = param_3 + uVar19 * 8;
    puVar3 = param_1 + uVar19 * 8;
    if (param_2 < 8) {
      uVar13 = param_1[1];
      uVar14 = param_1[2];
      uVar15 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = uVar13;
      param_3[2] = uVar14;
      param_3[3] = uVar15;
      uVar13 = param_1[5];
      uVar14 = param_1[6];
      uVar15 = param_1[7];
      param_3[4] = param_1[4];
      param_3[5] = uVar13;
      param_3[6] = uVar14;
      param_3[7] = uVar15;
      uVar13 = puVar3[1];
      uVar14 = puVar3[2];
      uVar15 = puVar3[3];
      *puVar4 = *puVar3;
      puVar4[1] = uVar13;
      puVar4[2] = uVar14;
      puVar4[3] = uVar15;
      uVar13 = puVar3[5];
      uVar14 = puVar3[6];
      uVar15 = puVar3[7];
      puVar4[4] = puVar3[4];
      puVar4[5] = uVar13;
      puVar4[6] = uVar14;
      puVar4[7] = uVar15;
      uVar10 = 1;
    }
    else {
      FUN_00733fd4(param_1,param_3);
      FUN_00733fd4(puVar3,puVar4);
      uVar10 = 4;
    }
    local_2c[0] = 0;
    iVar20 = 0;
    do {
      iVar5 = local_2c[iVar20];
      uVar18 = uVar19;
      if (iVar5 != 0) {
        uVar18 = param_2 - uVar19;
      }
      if (uVar10 < uVar18) {
        puVar3 = param_3 + iVar5 * 8;
        local_60 = param_3 + iVar5 * 8 + -0xe;
        local_64 = 0x20;
        uVar12 = uVar10;
        local_68 = puVar3;
        do {
          puVar9 = param_1 + iVar5 * 8 + uVar12 * 8;
          puVar8 = puVar3 + uVar12 * 8;
          uVar13 = puVar9[1];
          uVar14 = puVar9[2];
          uVar15 = puVar9[3];
          *puVar8 = *puVar9;
          puVar8[1] = uVar13;
          puVar8[2] = uVar14;
          puVar8[3] = uVar15;
          uVar13 = puVar9[5];
          uVar14 = puVar9[6];
          uVar15 = puVar9[7];
          puVar8[4] = puVar9[4];
          puVar8[5] = uVar13;
          puVar8[6] = uVar14;
          puVar8[7] = uVar15;
          uVar17 = puVar8[2];
          uVar6 = puVar8[3];
          if (uVar6 <= (uint)puVar8[-5] && (uint)((uint)puVar8[-6] <= uVar17) <= uVar6 - puVar8[-5])
          {
            uVar13 = *puVar8;
            uVar14 = puVar8[1];
            local_58 = puVar8[4];
            uStack_54 = puVar8[5];
            uStack_50 = puVar8[6];
            uStack_4c = puVar8[7];
            puVar9 = local_68;
            puVar8 = local_60;
            iVar22 = local_64;
            do {
              puVar7 = puVar9 + uVar10 * 8;
              *puVar7 = puVar7[-8];
              puVar7[1] = puVar7[-7];
              puVar7[2] = puVar7[-6];
              puVar7[3] = puVar7[-5];
              puVar7[4] = puVar7[-4];
              puVar7[5] = puVar7[-3];
              puVar7[6] = puVar7[-2];
              puVar7[7] = puVar7[-1];
              if (uVar10 * 0x20 == iVar22) {
                puVar9 = puVar3;
                goto LAB_0072d534;
              }
              puVar21 = puVar8 + uVar10 * 8;
              iVar22 = iVar22 + 0x20;
              puVar9 = puVar9 + -8;
              uVar11 = puVar21[1];
              puVar8 = puVar8 + -8;
            } while (uVar6 <= uVar11 && (uint)(*puVar21 <= uVar17) <= uVar6 - uVar11);
            puVar9 = puVar9 + uVar10 * 8;
LAB_0072d534:
            *puVar9 = uVar13;
            puVar9[1] = uVar14;
            puVar7[-6] = uVar17;
            puVar7[-5] = uVar6;
            puVar7[-4] = local_58;
            puVar7[-3] = uStack_54;
            puVar7[-2] = uStack_50;
            puVar7[-1] = uStack_4c;
          }
          local_64 = local_64 + -0x20;
          uVar12 = uVar12 + 1;
          local_60 = local_60 + 8;
          local_68 = local_68 + 8;
        } while (uVar12 != uVar18);
      }
      bVar23 = iVar20 == 0;
      iVar20 = 1;
    } while (bVar23);
    puVar9 = puVar4 + -8;
    puVar3 = param_3 + param_2 * 8 + -8;
    iVar20 = 0;
    uVar10 = uVar19;
    do {
      uVar12 = param_3[3];
      uVar18 = puVar4[3];
      puVar16 = (undefined4 *)((int)param_1 + iVar20);
      bVar23 = uVar18 - uVar12 < (uint)((uint)param_3[2] <= (uint)puVar4[2]);
      puVar8 = (undefined4 *)(uint)(uVar12 < uVar18 || bVar23);
      uVar18 = (uint)(uVar12 >= uVar18 && !bVar23);
      puVar7 = param_3;
      if (uVar18 != 0) {
        puVar7 = puVar4;
      }
      puVar4 = puVar4 + uVar18 * 8;
      uVar13 = puVar7[1];
      uVar14 = puVar7[2];
      uVar15 = puVar7[3];
      *puVar16 = *puVar7;
      puVar16[1] = uVar13;
      puVar16[2] = uVar14;
      puVar16[3] = uVar15;
      uVar13 = puVar7[5];
      uVar14 = puVar7[6];
      uVar15 = puVar7[7];
      puVar16[4] = puVar7[4];
      puVar16[5] = uVar13;
      puVar16[6] = uVar14;
      puVar16[7] = uVar15;
      bVar23 = (uint)puVar3[3] <= (uint)puVar9[3];
      bVar2 = (uint)((uint)puVar9[2] <= (uint)puVar3[2]) <= (uint)(puVar3[3] - puVar9[3]);
      puVar7 = puVar3;
      if (bVar23 && bVar2) {
        puVar7 = puVar9;
      }
      puVar16 = (undefined4 *)((int)param_1 + ((param_2 * 0x20 + -0x20) - iVar20));
      uVar13 = puVar7[1];
      uVar14 = puVar7[2];
      uVar15 = puVar7[3];
      iVar20 = iVar20 + 0x20;
      *puVar16 = *puVar7;
      puVar16[1] = uVar13;
      puVar16[2] = uVar14;
      puVar16[3] = uVar15;
      uVar13 = puVar7[5];
      uVar14 = puVar7[6];
      uVar15 = puVar7[7];
      puVar16[4] = puVar7[4];
      puVar16[5] = uVar13;
      puVar16[6] = uVar14;
      puVar16[7] = uVar15;
      iVar5 = 0;
      if (!bVar23 || !bVar2) {
        iVar5 = -1;
      }
      iVar22 = 0;
      if (bVar23 && bVar2) {
        iVar22 = -1;
      }
      puVar3 = puVar3 + iVar5 * 8;
      puVar9 = puVar9 + iVar22 * 8;
      uVar10 = uVar10 - 1;
      param_3 = param_3 + (int)puVar8 * 8;
    } while (uVar10 != 0);
    puVar9 = puVar9 + 8;
    if ((param_2 & 1) != 0) {
      bVar23 = puVar9 <= param_3;
      param_1 = (undefined4 *)((int)param_1 + iVar20);
      puVar8 = puVar4;
      if (!bVar23) {
        puVar8 = param_3;
      }
      uVar13 = puVar8[1];
      uVar14 = puVar8[2];
      uVar15 = puVar8[3];
      *param_1 = *puVar8;
      param_1[1] = uVar13;
      param_1[2] = uVar14;
      param_1[3] = uVar15;
      uVar13 = puVar8[5];
      uVar14 = puVar8[6];
      uVar15 = puVar8[7];
      puVar4 = puVar4 + (uint)bVar23 * 8;
      param_1[4] = puVar8[4];
      param_1[5] = uVar13;
      param_1[6] = uVar14;
      param_1[7] = uVar15;
      puVar8 = (undefined4 *)(uint)!bVar23;
      param_3 = param_3 + (int)puVar8 * 8;
    }
    if (param_3 == puVar9) {
      puVar8 = puVar3 + 8;
    }
    if (param_3 == puVar9 && puVar4 == puVar8) {
      return;
    }
    local_2c[1] = uVar19;
    FUN_01307140();
  }
LAB_0072d72c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x72d72c);
  (*pcVar1)();
}

