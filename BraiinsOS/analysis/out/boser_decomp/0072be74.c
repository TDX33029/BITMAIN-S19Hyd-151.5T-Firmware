// FUN_0072be74 @ 0072be74 size=2048 calls_out=8 calls_in=2
// strings: 

void FUN_0072be74(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  int iVar24;
  bool bVar25;
  undefined4 *local_54;
  int local_50;
  undefined4 *local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38 [5];
  
  if (0x20 < param_2) {
    local_48 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_0071c87c(param_1,local_48,param_3,param_4,1);
          return;
        }
        puVar8 = param_1 + (local_48 >> 3) * 0x2a;
        puVar20 = param_1 + (local_48 >> 3) * 0x18;
        if (local_48 < 0x40) {
          uVar10 = puVar8[3];
          uVar21 = puVar20[3];
          uVar16 = param_1[3];
          bVar25 = uVar16 <= uVar21 &&
                   (uint)((uint)puVar20[2] <= (uint)param_1[2]) <= uVar16 - uVar21;
          puVar3 = puVar8;
          if (bVar25 == (uVar21 <= uVar10 &&
                        (uint)((uint)puVar8[2] <= (uint)puVar20[2]) <= uVar21 - uVar10)) {
            puVar3 = puVar20;
          }
          if (bVar25 != (uVar16 <= uVar10 &&
                        (uint)((uint)puVar8[2] <= (uint)param_1[2]) <= uVar16 - uVar10)) {
            puVar3 = param_1;
          }
        }
        else {
          puVar3 = (undefined4 *)FUN_007233f4(param_1,puVar20,puVar8);
        }
        uVar16 = (uint)((int)puVar3 - (int)param_1) >> 3;
        param_5 = param_5 + -1;
        local_40 = *puVar3;
        uStack_3c = puVar3[1];
        local_38[0] = puVar3[2];
        local_38[1] = puVar3[3];
        local_38[2] = puVar3[4];
        local_38[3] = puVar3[5];
        if ((param_6 != 0) &&
           ((uint)puVar3[3] < *(uint *)(param_6 + 0xc) ||
            *(uint *)(param_6 + 0xc) - puVar3[3] < (uint)((uint)puVar3[2] <= *(uint *)(param_6 + 8))
           )) break;
        if (param_4 < local_48) goto LAB_0072c65c;
        param_2 = 0;
        puVar20 = param_3 + local_48 * 6;
        puVar8 = param_1;
        uVar10 = uVar16 * -0x55555555;
        while( true ) {
          for (puVar3 = puVar8; puVar3 < param_1 + uVar10 * 6; puVar3 = puVar3 + 6) {
            puVar20 = puVar20 + -6;
            puVar8 = puVar20;
            uVar21 = param_2;
            if ((uint)puVar3[3] <= (uint)param_1[uVar16 * 2 + 3] &&
                (uint)((uint)param_1[uVar16 * 2 + 2] <= (uint)puVar3[2]) <=
                (uint)(puVar3[3] - param_1[uVar16 * 2 + 3])) {
              uVar21 = param_2 + 1;
              puVar8 = param_3;
            }
            puVar8 = puVar8 + param_2 * 6;
            uVar11 = puVar3[1];
            uVar12 = puVar3[2];
            uVar14 = puVar3[3];
            uVar17 = puVar3[4];
            uVar18 = puVar3[5];
            *puVar8 = *puVar3;
            puVar8[1] = uVar11;
            puVar8[2] = uVar12;
            puVar8[3] = uVar14;
            puVar8[4] = uVar17;
            puVar8[5] = uVar18;
            param_2 = uVar21;
          }
          if (uVar10 == local_48) break;
          puVar20 = puVar20 + -6;
          uVar11 = puVar3[1];
          uVar12 = puVar3[2];
          uVar14 = puVar3[3];
          uVar17 = puVar3[4];
          uVar18 = puVar3[5];
          puVar7 = puVar20 + param_2 * 6;
          puVar8 = puVar3 + 6;
          *puVar7 = *puVar3;
          puVar7[1] = uVar11;
          puVar7[2] = uVar12;
          puVar7[3] = uVar14;
          puVar7[4] = uVar17;
          puVar7[5] = uVar18;
          uVar10 = local_48;
        }
        FUN_01bed4e2(param_1,param_3,param_2 * 0x18);
        iVar22 = local_48 - param_2;
        if (iVar22 != 0) {
          puVar8 = param_3 + local_48 * 6 + -6;
          puVar20 = param_1 + param_2 * 6;
          iVar4 = iVar22;
          do {
            uVar11 = *puVar8;
            uVar12 = puVar8[1];
            uVar14 = puVar8[2];
            uVar17 = puVar8[3];
            uVar18 = puVar8[4];
            uVar19 = puVar8[5];
            puVar8 = puVar8 + -6;
            iVar4 = iVar4 + -1;
            *puVar20 = uVar11;
            puVar20[1] = uVar12;
            puVar20[2] = uVar14;
            puVar20[3] = uVar17;
            puVar20[4] = uVar18;
            puVar20[5] = uVar19;
            puVar20 = puVar20 + 6;
          } while (iVar4 != 0);
        }
        if (param_2 == 0) break;
        if (local_48 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
        }
        FUN_0072be74(param_1 + param_2 * 6,iVar22,param_3,param_4,param_5,&local_40);
        local_48 = param_2;
        if (param_2 < 0x21) goto LAB_0072be94;
      }
      if (param_4 < local_48) goto LAB_0072c65c;
      uVar21 = 0;
      puVar8 = param_3 + local_48 * 6;
      uVar10 = uVar16 * -0x55555555;
      puVar20 = param_1;
      while( true ) {
        for (puVar3 = puVar20; puVar3 < param_1 + uVar10 * 6; puVar3 = puVar3 + 6) {
          puVar8 = puVar8 + -6;
          uVar6 = uVar21;
          puVar20 = puVar8;
          if ((uint)puVar3[3] < (uint)param_1[uVar16 * 2 + 3] ||
              (uint)(param_1[uVar16 * 2 + 3] - puVar3[3]) <
              (uint)((uint)puVar3[2] <= (uint)param_1[uVar16 * 2 + 2])) {
            uVar6 = uVar21 + 1;
            puVar20 = param_3;
          }
          puVar20 = puVar20 + uVar21 * 6;
          uVar11 = puVar3[1];
          uVar12 = puVar3[2];
          uVar14 = puVar3[3];
          uVar17 = puVar3[4];
          uVar18 = puVar3[5];
          *puVar20 = *puVar3;
          puVar20[1] = uVar11;
          puVar20[2] = uVar12;
          puVar20[3] = uVar14;
          puVar20[4] = uVar17;
          puVar20[5] = uVar18;
          uVar21 = uVar6;
        }
        if (uVar10 == local_48) break;
        puVar7 = param_3 + uVar21 * 6;
        uVar11 = puVar3[1];
        uVar12 = puVar3[2];
        uVar14 = puVar3[3];
        uVar17 = puVar3[4];
        uVar18 = puVar3[5];
        puVar20 = puVar3 + 6;
        uVar21 = uVar21 + 1;
        puVar8 = puVar8 + -6;
        *puVar7 = *puVar3;
        puVar7[1] = uVar11;
        puVar7[2] = uVar12;
        puVar7[3] = uVar14;
        puVar7[4] = uVar17;
        puVar7[5] = uVar18;
        uVar10 = local_48;
      }
      FUN_01bed4e2(param_1,param_3,uVar21 * 0x18);
      param_2 = local_48 - uVar21;
      if (param_2 == 0) {
        return;
      }
      puVar8 = param_3 + local_48 * 6 + -6;
      puVar20 = param_1 + uVar21 * 6;
      uVar16 = param_2;
      do {
        uVar11 = *puVar8;
        uVar12 = puVar8[1];
        uVar14 = puVar8[2];
        uVar17 = puVar8[3];
        uVar18 = puVar8[4];
        uVar19 = puVar8[5];
        puVar8 = puVar8 + -6;
        uVar16 = uVar16 - 1;
        *puVar20 = uVar11;
        puVar20[1] = uVar12;
        puVar20[2] = uVar14;
        puVar20[3] = uVar17;
        puVar20[4] = uVar18;
        puVar20[5] = uVar19;
        puVar20 = puVar20 + 6;
      } while (uVar16 != 0);
      if (local_48 < uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar21,local_48,local_48,&DAT_01d30598);
      }
      param_1 = param_1 + uVar21 * 6;
      param_6 = 0;
      local_48 = param_2;
    } while (0x20 < param_2);
  }
LAB_0072be94:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar16 = param_2 >> 1;
    puVar8 = param_3 + uVar16 * 6;
    puVar20 = param_1 + uVar16 * 6;
    if (param_2 < 8) {
      uVar11 = param_1[1];
      uVar12 = param_1[2];
      uVar14 = param_1[3];
      uVar17 = param_1[4];
      uVar18 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar11;
      param_3[2] = uVar12;
      param_3[3] = uVar14;
      param_3[4] = uVar17;
      param_3[5] = uVar18;
      uVar11 = puVar20[1];
      uVar12 = puVar20[2];
      uVar14 = puVar20[3];
      uVar17 = puVar20[4];
      uVar18 = puVar20[5];
      *puVar8 = *puVar20;
      puVar8[1] = uVar11;
      puVar8[2] = uVar12;
      puVar8[3] = uVar14;
      puVar8[4] = uVar17;
      puVar8[5] = uVar18;
      uVar10 = 1;
    }
    else {
      FUN_00733b9c(param_1,param_3);
      FUN_00733b9c(puVar20,puVar8);
      uVar10 = 4;
    }
    local_38[0] = 0;
    iVar22 = 0;
    do {
      iVar4 = local_38[iVar22];
      uVar21 = uVar16;
      if (iVar4 != 0) {
        uVar21 = param_2 - uVar16;
      }
      if (uVar10 < uVar21) {
        puVar20 = param_3 + iVar4 * 6;
        local_4c = param_3 + iVar4 * 6 + -10;
        local_50 = 0x18;
        uVar6 = uVar10;
        local_54 = puVar20;
        do {
          puVar3 = param_1 + iVar4 * 6 + uVar6 * 6;
          puVar7 = puVar20 + uVar6 * 6;
          uVar11 = puVar3[1];
          uVar12 = puVar3[2];
          uVar14 = puVar3[3];
          uVar17 = puVar3[4];
          uVar18 = puVar3[5];
          *puVar7 = *puVar3;
          puVar7[1] = uVar11;
          puVar7[2] = uVar12;
          puVar7[3] = uVar14;
          puVar7[4] = uVar17;
          puVar7[5] = uVar18;
          uVar9 = puVar7[2];
          uVar5 = puVar7[3];
          if (uVar5 <= (uint)puVar7[-3] && (uint)((uint)puVar7[-4] <= uVar9) <= uVar5 - puVar7[-3])
          {
            uVar11 = *puVar7;
            uVar14 = puVar7[1];
            uVar17 = puVar7[4];
            uVar12 = puVar7[5];
            puVar3 = local_54;
            puVar7 = local_4c;
            iVar24 = local_50;
            do {
              puVar15 = puVar3 + uVar10 * 6;
              *puVar15 = puVar15[-6];
              puVar15[1] = puVar15[-5];
              puVar15[2] = puVar15[-4];
              puVar15[3] = puVar15[-3];
              puVar15[4] = puVar15[-2];
              puVar15[5] = puVar15[-1];
              if (uVar10 * 0x18 == iVar24) {
                puVar3 = puVar20;
                goto LAB_0072c448;
              }
              puVar23 = puVar7 + uVar10 * 6;
              iVar24 = iVar24 + 0x18;
              uVar13 = puVar23[1];
              puVar3 = puVar3 + -6;
              puVar7 = puVar7 + -6;
            } while (uVar5 <= uVar13 && (uint)(*puVar23 <= uVar9) <= uVar5 - uVar13);
            puVar3 = puVar3 + uVar10 * 6;
LAB_0072c448:
            *puVar3 = uVar11;
            puVar3[1] = uVar14;
            puVar15[-4] = uVar9;
            puVar15[-3] = uVar5;
            puVar15[-2] = uVar17;
            puVar15[-1] = uVar12;
          }
          local_50 = local_50 + -0x18;
          local_4c = local_4c + 6;
          local_54 = local_54 + 6;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar21);
      }
      bVar25 = iVar22 == 0;
      iVar22 = 1;
    } while (bVar25);
    iVar22 = 0;
    puVar20 = puVar8 + -6;
    puVar3 = param_3 + param_2 * 6 + -6;
    uVar10 = uVar16;
    do {
      uVar5 = param_3[3];
      uVar6 = puVar8[3];
      puVar15 = (undefined4 *)((int)param_1 + iVar22);
      bVar25 = uVar6 - uVar5 < (uint)((uint)param_3[2] <= (uint)puVar8[2]);
      uVar21 = (uint)(uVar5 < uVar6 || bVar25);
      uVar6 = (uint)(uVar5 >= uVar6 && !bVar25);
      puVar7 = param_3;
      if (uVar6 != 0) {
        puVar7 = puVar8;
      }
      uVar11 = puVar7[1];
      uVar12 = puVar7[2];
      uVar14 = puVar7[3];
      uVar17 = puVar7[4];
      uVar18 = puVar7[5];
      *puVar15 = *puVar7;
      puVar15[1] = uVar11;
      puVar15[2] = uVar12;
      puVar15[3] = uVar14;
      puVar15[4] = uVar17;
      puVar15[5] = uVar18;
      bVar25 = (uint)puVar3[3] <= (uint)puVar20[3];
      bVar2 = (uint)((uint)puVar20[2] <= (uint)puVar3[2]) <= (uint)(puVar3[3] - puVar20[3]);
      puVar7 = puVar3;
      if (bVar25 && bVar2) {
        puVar7 = puVar20;
      }
      puVar15 = (undefined4 *)((int)param_1 + ((param_2 * 0x18 + -0x18) - iVar22));
      uVar11 = puVar7[1];
      uVar12 = puVar7[2];
      uVar14 = puVar7[3];
      uVar17 = puVar7[4];
      uVar18 = puVar7[5];
      iVar22 = iVar22 + 0x18;
      *puVar15 = *puVar7;
      puVar15[1] = uVar11;
      puVar15[2] = uVar12;
      puVar15[3] = uVar14;
      puVar15[4] = uVar17;
      puVar15[5] = uVar18;
      iVar4 = 0;
      if (!bVar25 || !bVar2) {
        iVar4 = -1;
      }
      iVar24 = 0;
      if (bVar25 && bVar2) {
        iVar24 = -1;
      }
      puVar3 = puVar3 + iVar4 * 6;
      puVar20 = puVar20 + iVar24 * 6;
      uVar10 = uVar10 - 1;
      param_3 = param_3 + (uVar21 | uVar21 << 1) * 2;
      puVar7 = (undefined4 *)(uVar6 | uVar6 << 1);
      puVar8 = puVar8 + (int)puVar7 * 2;
    } while (uVar10 != 0);
    puVar20 = puVar20 + 6;
    if ((param_2 & 1) != 0) {
      bVar25 = puVar20 <= param_3;
      param_1 = (undefined4 *)((int)param_1 + iVar22);
      puVar7 = puVar8;
      if (!bVar25) {
        puVar7 = param_3;
      }
      uVar11 = puVar7[1];
      uVar12 = puVar7[2];
      uVar14 = puVar7[3];
      uVar17 = puVar7[4];
      uVar18 = puVar7[5];
      *param_1 = *puVar7;
      param_1[1] = uVar11;
      param_1[2] = uVar12;
      param_1[3] = uVar14;
      param_1[4] = uVar17;
      param_1[5] = uVar18;
      puVar7 = (undefined4 *)((uint)!bVar25 | (uint)!bVar25 << 1);
      puVar8 = puVar8 + ((uint)bVar25 | (uint)bVar25 << 1) * 2;
      param_3 = param_3 + (int)puVar7 * 2;
    }
    if (param_3 == puVar20) {
      puVar7 = puVar3 + 6;
    }
    if (param_3 == puVar20 && puVar8 == puVar7) {
      return;
    }
    local_38[1] = uVar16;
    FUN_01307140();
  }
LAB_0072c65c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x72c65c);
  (*pcVar1)();
}

