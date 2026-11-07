// FUN_01a50c24 @ 01a50c24 size=1860 calls_out=8 calls_in=2
// strings: 

void FUN_01a50c24(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5,int param_6)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  bool bVar24;
  bool bVar25;
  int local_5c;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38 [5];
  
  if (&DAT_00000020 < param_2) {
    local_5c = param_6;
    puVar11 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_01a51394(param_1,puVar11,param_3,param_4,1);
          return;
        }
        puVar23 = param_1 + ((uint)puVar11 >> 3) * 0x2a;
        puVar17 = param_1 + ((uint)puVar11 >> 3) * 0x18;
        if (&DAT_0000003f < puVar11) {
          puVar3 = (undefined4 *)FUN_01a54a98(param_1,puVar17,puVar23);
        }
        else {
          uVar8 = puVar17[4];
          uVar6 = param_1[4];
          puVar3 = puVar23;
          if (uVar6 < uVar8 == uVar8 < (uint)puVar23[4]) {
            puVar3 = puVar17;
          }
          if (uVar6 < uVar8 != uVar6 < (uint)puVar23[4]) {
            puVar3 = param_1;
          }
        }
        param_5 = param_5 + -1;
        uVar8 = (uint)((int)puVar3 - (int)param_1) >> 3;
        local_40 = *puVar3;
        uStack_3c = puVar3[1];
        local_38[0] = puVar3[2];
        local_38[1] = puVar3[3];
        local_38[2] = puVar3[4];
        local_38[3] = puVar3[5];
        if ((local_5c == 0) || (*(uint *)(local_5c + 0x10) < (uint)puVar3[4])) break;
LAB_01a50ef0:
        if (param_4 < puVar11) goto LAB_01a51350;
        puVar13 = (undefined4 *)0x0;
        puVar17 = param_3 + (int)puVar11 * 6;
        puVar23 = param_1;
        puVar3 = (undefined4 *)(uVar8 * -0x55555555);
        while( true ) {
          puVar2 = puVar13;
          for (puVar15 = puVar23; puVar15 < param_1 + (int)puVar3 * 6; puVar15 = puVar15 + 6) {
            puVar17 = puVar17 + -6;
            puVar13 = puVar2;
            puVar23 = puVar17;
            if ((uint)puVar15[4] <= (uint)param_1[uVar8 * 2 + 4]) {
              puVar13 = (undefined4 *)((int)puVar2 + 1);
              puVar23 = param_3;
            }
            puVar23 = puVar23 + (int)puVar2 * 6;
            uVar10 = puVar15[1];
            uVar12 = puVar15[2];
            uVar14 = puVar15[3];
            uVar19 = puVar15[4];
            uVar22 = puVar15[5];
            *puVar23 = *puVar15;
            puVar23[1] = uVar10;
            puVar23[2] = uVar12;
            puVar23[3] = uVar14;
            puVar23[4] = uVar19;
            puVar23[5] = uVar22;
            puVar2 = puVar13;
          }
          if (puVar3 == puVar11) break;
          puVar23 = puVar15 + 6;
          puVar13 = (undefined4 *)((int)puVar2 + 1);
          puVar3 = param_3 + (int)puVar2 * 6;
          uVar10 = puVar15[1];
          uVar12 = puVar15[2];
          uVar14 = puVar15[3];
          uVar19 = puVar15[4];
          uVar22 = puVar15[5];
          puVar17 = puVar17 + -6;
          *puVar3 = *puVar15;
          puVar3[1] = uVar10;
          puVar3[2] = uVar12;
          puVar3[3] = uVar14;
          puVar3[4] = uVar19;
          puVar3[5] = uVar22;
          puVar3 = puVar11;
        }
        FUN_01bed4e2(param_1,param_3,(int)puVar2 * 0x18);
        param_2 = (undefined4 *)((int)puVar11 - (int)puVar2);
        if (param_2 == (undefined4 *)0x0) {
          return;
        }
        puVar3 = param_3 + (int)puVar11 * 6 + -6;
        puVar17 = param_1 + (int)puVar2 * 6;
        puVar23 = param_2;
        do {
          uVar10 = *puVar3;
          uVar12 = puVar3[1];
          uVar14 = puVar3[2];
          uVar19 = puVar3[3];
          uVar22 = puVar3[4];
          uVar16 = puVar3[5];
          puVar3 = puVar3 + -6;
          puVar23 = (undefined4 *)((int)puVar23 + -1);
          *puVar17 = uVar10;
          puVar17[1] = uVar12;
          puVar17[2] = uVar14;
          puVar17[3] = uVar19;
          puVar17[4] = uVar22;
          puVar17[5] = uVar16;
          puVar17 = puVar17 + 6;
        } while (puVar23 != (undefined4 *)0x0);
        if (puVar11 < puVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(puVar2,puVar11,puVar11,&DAT_01d30598);
        }
        param_1 = param_1 + (int)puVar2 * 6;
        local_5c = 0;
        puVar11 = param_2;
        if (param_2 < &DAT_00000021) goto LAB_01a50c4c;
      }
      if (param_4 < puVar11) goto LAB_01a51350;
      param_2 = (undefined4 *)0x0;
      puVar3 = param_3 + (int)puVar11 * 6;
      puVar17 = (undefined4 *)(uVar8 * -0x55555555);
      puVar23 = param_1;
      while( true ) {
        for (; puVar23 < param_1 + (int)puVar17 * 6; puVar23 = puVar23 + 6) {
          puVar3 = puVar3 + -6;
          puVar15 = param_2;
          puVar13 = puVar3;
          if ((uint)puVar23[4] < (uint)param_1[uVar8 * 2 + 4]) {
            puVar15 = (undefined4 *)((int)param_2 + 1);
            puVar13 = param_3;
          }
          puVar13 = puVar13 + (int)param_2 * 6;
          uVar10 = puVar23[1];
          uVar12 = puVar23[2];
          uVar14 = puVar23[3];
          uVar19 = puVar23[4];
          uVar22 = puVar23[5];
          *puVar13 = *puVar23;
          puVar13[1] = uVar10;
          puVar13[2] = uVar12;
          puVar13[3] = uVar14;
          puVar13[4] = uVar19;
          puVar13[5] = uVar22;
          param_2 = puVar15;
        }
        if (puVar17 == puVar11) break;
        uVar10 = *puVar23;
        uVar12 = puVar23[1];
        uVar14 = puVar23[2];
        uVar19 = puVar23[3];
        uVar22 = puVar23[4];
        uVar16 = puVar23[5];
        puVar3 = puVar3 + -6;
        puVar17 = puVar3 + (int)param_2 * 6;
        puVar23 = puVar23 + 6;
        *puVar17 = uVar10;
        puVar17[1] = uVar12;
        puVar17[2] = uVar14;
        puVar17[3] = uVar19;
        puVar17[4] = uVar22;
        puVar17[5] = uVar16;
        puVar17 = puVar11;
      }
      FUN_01bed4e2(param_1,param_3,(int)param_2 * 0x18);
      iVar21 = (int)puVar11 - (int)param_2;
      if (iVar21 != 0) {
        puVar23 = param_3 + (int)puVar11 * 6 + -6;
        puVar17 = param_1 + (int)param_2 * 6;
        iVar4 = iVar21;
        do {
          uVar10 = *puVar23;
          uVar12 = puVar23[1];
          uVar14 = puVar23[2];
          uVar19 = puVar23[3];
          uVar22 = puVar23[4];
          uVar16 = puVar23[5];
          puVar23 = puVar23 + -6;
          iVar4 = iVar4 + -1;
          *puVar17 = uVar10;
          puVar17[1] = uVar12;
          puVar17[2] = uVar14;
          puVar17[3] = uVar19;
          puVar17[4] = uVar22;
          puVar17[5] = uVar16;
          puVar17 = puVar17 + 6;
        } while (iVar4 != 0);
      }
      if (param_2 == (undefined4 *)0x0) goto LAB_01a50ef0;
      if (puVar11 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_01a50c24(param_1 + (int)param_2 * 6,iVar21,param_3,param_4,param_5,&local_40);
      puVar11 = param_2;
    } while (&DAT_00000021 <= param_2);
  }
LAB_01a50c4c:
  if (param_2 <= &DAT_00000001) {
    return;
  }
  if (param_2 + 4 <= param_4) {
    uVar8 = (uint)param_2 >> 1;
    puVar17 = param_3 + uVar8 * 6;
    puVar11 = param_1 + uVar8 * 6;
    if (param_2 < &DAT_00000008) {
      uVar10 = param_1[1];
      uVar12 = param_1[2];
      uVar14 = param_1[3];
      uVar19 = param_1[4];
      uVar22 = param_1[5];
      *param_3 = *param_1;
      param_3[1] = uVar10;
      param_3[2] = uVar12;
      param_3[3] = uVar14;
      param_3[4] = uVar19;
      param_3[5] = uVar22;
      uVar10 = puVar11[1];
      uVar12 = puVar11[2];
      uVar14 = puVar11[3];
      uVar19 = puVar11[4];
      uVar22 = puVar11[5];
      *puVar17 = *puVar11;
      puVar17[1] = uVar10;
      puVar17[2] = uVar12;
      puVar17[3] = uVar14;
      puVar17[4] = uVar19;
      puVar17[5] = uVar22;
      uVar6 = 1;
    }
    else {
      FUN_01a4cdd4(param_1,param_3);
      FUN_01a4cdd4(puVar11,puVar17);
      uVar6 = 4;
    }
    local_38[0] = 0;
    iVar21 = 0;
    do {
      iVar4 = local_38[iVar21];
      uVar18 = uVar8;
      if (iVar4 != 0) {
        uVar18 = (int)param_2 - uVar8;
      }
      if (uVar6 < uVar18) {
        iVar7 = 0x18;
        puVar11 = param_3 + iVar4 * 6;
        uVar5 = uVar6;
        local_44 = puVar11;
        do {
          puVar3 = param_1 + iVar4 * 6 + uVar5 * 6;
          puVar23 = puVar11 + uVar5 * 6;
          uVar10 = puVar3[1];
          uVar12 = puVar3[2];
          uVar14 = puVar3[3];
          uVar19 = puVar3[4];
          uVar22 = puVar3[5];
          *puVar23 = *puVar3;
          puVar23[1] = uVar10;
          puVar23[2] = uVar12;
          puVar23[3] = uVar14;
          puVar23[4] = uVar19;
          puVar23[5] = uVar22;
          uVar20 = puVar23[4];
          if (uVar20 < (uint)puVar23[-2]) {
            uVar10 = puVar23[5];
            puVar23 = local_44;
            iVar9 = iVar7;
            do {
              puVar13 = puVar23 + uVar6 * 6;
              *puVar13 = puVar13[-6];
              puVar13[1] = puVar13[-5];
              puVar13[2] = puVar13[-4];
              puVar13[3] = puVar13[-3];
              puVar13[4] = puVar13[-2];
              puVar13[5] = puVar13[-1];
              if (uVar6 * 0x18 == iVar9) {
                puVar23 = puVar11;
                goto LAB_01a51180;
              }
              iVar9 = iVar9 + 0x18;
              puVar23 = puVar23 + -6;
            } while (uVar20 < (uint)puVar13[-8]);
            puVar23 = puVar23 + uVar6 * 6;
LAB_01a51180:
            uVar12 = puVar3[1];
            uVar14 = puVar3[2];
            uVar19 = puVar3[3];
            *puVar23 = *puVar3;
            puVar23[1] = uVar12;
            puVar23[2] = uVar14;
            puVar23[3] = uVar19;
            puVar13[-2] = uVar20;
            puVar13[-1] = uVar10;
          }
          iVar7 = iVar7 + -0x18;
          local_44 = local_44 + 6;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar18);
      }
      bVar24 = iVar21 == 0;
      iVar21 = 1;
    } while (bVar24);
    iVar21 = 0;
    puVar23 = puVar17 + -6;
    puVar11 = param_3 + (int)param_2 * 6 + -6;
    uVar6 = uVar8;
    do {
      bVar24 = (uint)puVar17[4] < (uint)param_3[4];
      puVar3 = param_3;
      if (bVar24) {
        puVar3 = puVar17;
      }
      puVar13 = (undefined4 *)((int)param_1 + iVar21);
      uVar10 = puVar3[1];
      uVar12 = puVar3[2];
      uVar14 = puVar3[3];
      uVar19 = puVar3[4];
      uVar22 = puVar3[5];
      *puVar13 = *puVar3;
      puVar13[1] = uVar10;
      puVar13[2] = uVar12;
      puVar13[3] = uVar14;
      puVar13[4] = uVar19;
      puVar13[5] = uVar22;
      bVar25 = (uint)puVar11[4] < (uint)puVar23[4];
      puVar3 = puVar11;
      if (bVar25) {
        puVar3 = puVar23;
      }
      puVar13 = (undefined4 *)((int)param_1 + (((int)param_2 * 0x18 + -0x18) - iVar21));
      uVar10 = puVar3[1];
      uVar12 = puVar3[2];
      uVar14 = puVar3[3];
      uVar19 = puVar3[4];
      uVar22 = puVar3[5];
      iVar21 = iVar21 + 0x18;
      *puVar13 = *puVar3;
      puVar13[1] = uVar10;
      puVar13[2] = uVar12;
      puVar13[3] = uVar14;
      puVar13[4] = uVar19;
      puVar13[5] = uVar22;
      param_3 = param_3 + ((uint)!bVar24 | (uint)!bVar24 << 1) * 2;
      puVar17 = puVar17 + ((uint)bVar24 | (uint)bVar24 << 1) * 2;
      iVar4 = 0;
      if (bVar25) {
        iVar4 = -1;
      }
      puVar23 = puVar23 + iVar4 * 6;
      iVar4 = 0;
      if (!bVar25) {
        iVar4 = -1;
      }
      uVar6 = uVar6 - 1;
      puVar11 = puVar11 + iVar4 * 6;
    } while (uVar6 != 0);
    puVar23 = puVar23 + 6;
    if (((uint)param_2 & 1) != 0) {
      bVar24 = puVar23 <= param_3;
      puVar3 = puVar17;
      if (!bVar24) {
        puVar3 = param_3;
      }
      uVar10 = puVar3[1];
      uVar12 = puVar3[2];
      uVar14 = puVar3[3];
      uVar19 = puVar3[4];
      uVar22 = puVar3[5];
      param_1 = (undefined4 *)((int)param_1 + iVar21);
      *param_1 = *puVar3;
      param_1[1] = uVar10;
      param_1[2] = uVar12;
      param_1[3] = uVar14;
      param_1[4] = uVar19;
      param_1[5] = uVar22;
      param_2 = (undefined4 *)((uint)!bVar24 | (uint)!bVar24 << 1);
      puVar17 = puVar17 + ((uint)bVar24 | (uint)bVar24 << 1) * 2;
      param_3 = param_3 + (int)param_2 * 2;
    }
    if (param_3 == puVar23) {
      param_2 = puVar11 + 6;
    }
    if (param_3 == puVar23 && puVar17 == param_2) {
      return;
    }
    local_38[1] = uVar8;
    FUN_01307140();
  }
LAB_01a51350:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a51350);
  (*pcVar1)();
}

