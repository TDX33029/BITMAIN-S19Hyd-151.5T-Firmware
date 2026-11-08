// FUN_00b5fb30 @ 00b5fb30 size=2216 calls_out=10 calls_in=2
// strings: 

void FUN_00b5fb30(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  bool bVar20;
  int local_88;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58 [4];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0x20 < param_2) {
    local_88 = param_6;
    uVar15 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_00b60404(param_1,uVar15,param_3,param_4,1);
          return;
        }
        puVar6 = param_1 + (uVar15 >> 3) * 0x62;
        puVar14 = param_1 + ((uVar15 >> 3) * 8 - (uVar15 >> 3)) * 8;
        if (uVar15 < 0x40) {
          uVar16 = puVar14[2];
          uVar10 = puVar14[1];
          uVar7 = param_1[2];
          uVar11 = param_1[1];
          uVar9 = uVar16;
          if (uVar7 < uVar16) {
            uVar9 = uVar7;
          }
          uVar9 = FUN_01bed842(uVar11,uVar10,uVar9);
          uVar12 = puVar6[1];
          uVar17 = puVar6[2];
          if (uVar9 == 0) {
            uVar9 = uVar7 - uVar16;
          }
          uVar3 = uVar17;
          if (uVar7 < uVar17) {
            uVar3 = uVar7;
          }
          uVar3 = FUN_01bed842(uVar11,uVar12,uVar3);
          if (uVar3 == 0) {
            uVar3 = uVar7 - uVar17;
          }
          puVar8 = param_1;
          if (-1 < (int)(uVar3 ^ uVar9)) {
            uVar7 = uVar17;
            if (uVar16 < uVar17) {
              uVar7 = uVar16;
            }
            uVar7 = FUN_01bed842(uVar10,uVar12,uVar7);
            if (uVar7 == 0) {
              uVar7 = uVar16 - uVar17;
            }
            puVar8 = puVar14;
            if ((int)(uVar7 ^ uVar9) < 0) {
              puVar8 = puVar6;
            }
          }
        }
        else {
          puVar8 = (undefined4 *)FUN_00b5fa28(param_1,puVar14,puVar6);
        }
        param_5 = param_5 + -1;
        uVar9 = ((uint)((int)puVar8 - (int)param_1) >> 3) * -0x49249249;
        local_60 = *puVar8;
        uStack_5c = puVar8[1];
        local_58[0] = puVar8[2];
        local_58[1] = puVar8[3];
        local_58[2] = puVar8[4];
        local_58[3] = puVar8[5];
        uStack_48 = puVar8[6];
        uStack_44 = puVar8[7];
        uStack_40 = puVar8[8];
        local_3c = puVar8[9];
        uStack_38 = puVar8[10];
        uStack_34 = puVar8[0xb];
        uStack_30 = puVar8[0xc];
        uStack_2c = puVar8[0xd];
        if (local_88 == 0) break;
        uVar16 = puVar8[2];
        uVar17 = *(uint *)(local_88 + 8);
        uVar7 = uVar16;
        if (uVar17 < uVar16) {
          uVar7 = uVar17;
        }
        uVar7 = FUN_01bed842(*(undefined4 *)(local_88 + 4),puVar8[1],uVar7);
        if (uVar7 == 0) {
          uVar7 = uVar17 - uVar16;
        }
        if (0x7fffffff < uVar7) break;
LAB_00b5fef0:
        if (param_4 < uVar15) goto LAB_00b603c0;
        uVar7 = 0;
        puVar6 = param_3 + uVar15 * 0xe;
        puVar14 = param_1;
        while( true ) {
          uVar16 = uVar7;
          for (; puVar14 < param_1 + uVar9 * 0xe; puVar14 = puVar14 + 0xe) {
            uVar3 = puVar14[2];
            uVar17 = puVar8[2];
            uVar7 = uVar3;
            if (uVar17 < uVar3) {
              uVar7 = uVar17;
            }
            uVar7 = FUN_01bed842(puVar8[1],puVar14[1],uVar7);
            puVar6 = puVar6 + -0xe;
            if (uVar7 == 0) {
              uVar7 = uVar17 - uVar3;
            }
            uVar17 = uVar16;
            puVar18 = puVar6;
            if (uVar7 < 0x80000000) {
              uVar17 = uVar16 + 1;
              puVar18 = param_3;
            }
            puVar18 = puVar18 + uVar16 * 0xe;
            uVar10 = puVar14[1];
            uVar11 = puVar14[2];
            uVar12 = puVar14[3];
            *puVar18 = *puVar14;
            puVar18[1] = uVar10;
            puVar18[2] = uVar11;
            puVar18[3] = uVar12;
            uVar10 = puVar14[5];
            uVar11 = puVar14[6];
            uVar12 = puVar14[7];
            uVar13 = puVar14[8];
            puVar18[4] = puVar14[4];
            puVar18[5] = uVar10;
            puVar18[6] = uVar11;
            puVar18[7] = uVar12;
            puVar18[8] = uVar13;
            uVar10 = puVar14[10];
            uVar11 = puVar14[0xb];
            uVar12 = puVar14[0xc];
            uVar13 = puVar14[0xd];
            puVar18[9] = puVar14[9];
            puVar18[10] = uVar10;
            puVar18[0xb] = uVar11;
            puVar18[0xc] = uVar12;
            puVar18[0xd] = uVar13;
            uVar16 = uVar17;
          }
          if (uVar9 == uVar15) break;
          uVar7 = uVar16 + 1;
          puVar6 = puVar6 + -0xe;
          puVar18 = param_3 + uVar16 * 0xe;
          uVar10 = puVar14[1];
          uVar11 = puVar14[2];
          uVar12 = puVar14[3];
          *puVar18 = *puVar14;
          puVar18[1] = uVar10;
          puVar18[2] = uVar11;
          puVar18[3] = uVar12;
          uVar10 = puVar14[5];
          uVar11 = puVar14[6];
          uVar12 = puVar14[7];
          uVar13 = puVar14[8];
          puVar18[4] = puVar14[4];
          puVar18[5] = uVar10;
          puVar18[6] = uVar11;
          puVar18[7] = uVar12;
          puVar18[8] = uVar13;
          uVar10 = puVar14[10];
          uVar11 = puVar14[0xb];
          uVar12 = puVar14[0xc];
          uVar13 = puVar14[0xd];
          puVar18[9] = puVar14[9];
          puVar18[10] = uVar10;
          puVar18[0xb] = uVar11;
          puVar18[0xc] = uVar12;
          puVar18[0xd] = uVar13;
          puVar14 = puVar14 + 0xe;
          uVar9 = uVar15;
        }
        FUN_01bed4e2(param_1,param_3,uVar16 * 0x38);
        param_2 = uVar15 - uVar16;
        if (param_2 == 0) {
          return;
        }
        puVar14 = param_1 + uVar16 * 0xe;
        uVar9 = param_2;
        puVar6 = param_3 + uVar15 * 0xe + -0xe;
        do {
          uVar10 = puVar6[1];
          uVar11 = puVar6[2];
          uVar12 = puVar6[3];
          uVar9 = uVar9 - 1;
          *puVar14 = *puVar6;
          puVar14[1] = uVar10;
          puVar14[2] = uVar11;
          puVar14[3] = uVar12;
          uVar10 = puVar6[5];
          uVar11 = puVar6[6];
          uVar12 = puVar6[7];
          uVar13 = puVar6[8];
          puVar14[4] = puVar6[4];
          puVar14[5] = uVar10;
          puVar14[6] = uVar11;
          puVar14[7] = uVar12;
          puVar14[8] = uVar13;
          uVar10 = puVar6[10];
          uVar11 = puVar6[0xb];
          uVar12 = puVar6[0xc];
          uVar13 = puVar6[0xd];
          puVar14[9] = puVar6[9];
          puVar14[10] = uVar10;
          puVar14[0xb] = uVar11;
          puVar14[0xc] = uVar12;
          puVar14[0xd] = uVar13;
          puVar14 = puVar14 + 0xe;
          puVar6 = puVar6 + -0xe;
        } while (uVar9 != 0);
        if (uVar15 < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar16,uVar15,uVar15,&DAT_01d30598);
        }
        param_1 = param_1 + uVar16 * 0xe;
        local_88 = 0;
        uVar15 = param_2;
        if (param_2 < 0x21) goto LAB_00b5fb54;
      }
      if (param_4 < uVar15) goto LAB_00b603c0;
      param_2 = 0;
      puVar14 = param_3 + uVar15 * 0xe;
      uVar7 = uVar9;
      puVar6 = param_1;
      while( true ) {
        for (puVar18 = puVar6; puVar18 < param_1 + uVar7 * 0xe; puVar18 = puVar18 + 0xe) {
          uVar3 = puVar8[2];
          uVar17 = puVar18[2];
          uVar16 = uVar3;
          if (uVar17 < uVar3) {
            uVar16 = uVar17;
          }
          iVar2 = FUN_01bed842(puVar18[1],puVar8[1],uVar16);
          puVar14 = puVar14 + -0xe;
          if (iVar2 == 0) {
            iVar2 = uVar17 - uVar3;
          }
          puVar6 = puVar14;
          if (iVar2 < 0) {
            puVar6 = param_3;
          }
          puVar6 = puVar6 + param_2 * 0xe;
          uVar10 = puVar18[1];
          uVar11 = puVar18[2];
          uVar12 = puVar18[3];
          *puVar6 = *puVar18;
          puVar6[1] = uVar10;
          puVar6[2] = uVar11;
          puVar6[3] = uVar12;
          uVar10 = puVar18[5];
          uVar11 = puVar18[6];
          uVar12 = puVar18[7];
          uVar13 = puVar18[8];
          puVar6[4] = puVar18[4];
          puVar6[5] = uVar10;
          puVar6[6] = uVar11;
          puVar6[7] = uVar12;
          puVar6[8] = uVar13;
          uVar10 = puVar18[10];
          uVar11 = puVar18[0xb];
          uVar12 = puVar18[0xc];
          uVar13 = puVar18[0xd];
          puVar6[9] = puVar18[9];
          puVar6[10] = uVar10;
          puVar6[0xb] = uVar11;
          puVar6[0xc] = uVar12;
          puVar6[0xd] = uVar13;
          param_2 = param_2 - (iVar2 >> 0x1f);
        }
        if (uVar7 == uVar15) break;
        puVar14 = puVar14 + -0xe;
        uVar10 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        puVar4 = puVar14 + param_2 * 0xe;
        puVar6 = puVar18 + 0xe;
        *puVar4 = *puVar18;
        puVar4[1] = uVar10;
        puVar4[2] = uVar11;
        puVar4[3] = uVar12;
        uVar10 = puVar18[5];
        uVar11 = puVar18[6];
        uVar12 = puVar18[7];
        uVar13 = puVar18[8];
        puVar4[4] = puVar18[4];
        puVar4[5] = uVar10;
        puVar4[6] = uVar11;
        puVar4[7] = uVar12;
        puVar4[8] = uVar13;
        uVar10 = puVar18[10];
        uVar11 = puVar18[0xb];
        uVar12 = puVar18[0xc];
        uVar13 = puVar18[0xd];
        puVar4[9] = puVar18[9];
        puVar4[10] = uVar10;
        puVar4[0xb] = uVar11;
        puVar4[0xc] = uVar12;
        puVar4[0xd] = uVar13;
        uVar7 = uVar15;
      }
      FUN_01bed4e2(param_1,param_3,param_2 * 0x38);
      iVar2 = uVar15 - param_2;
      if (iVar2 != 0) {
        puVar14 = param_1 + param_2 * 0xe;
        iVar5 = iVar2;
        puVar6 = param_3 + uVar15 * 0xe + -0xe;
        do {
          uVar10 = puVar6[1];
          uVar11 = puVar6[2];
          uVar12 = puVar6[3];
          iVar5 = iVar5 + -1;
          *puVar14 = *puVar6;
          puVar14[1] = uVar10;
          puVar14[2] = uVar11;
          puVar14[3] = uVar12;
          uVar10 = puVar6[5];
          uVar11 = puVar6[6];
          uVar12 = puVar6[7];
          uVar13 = puVar6[8];
          puVar14[4] = puVar6[4];
          puVar14[5] = uVar10;
          puVar14[6] = uVar11;
          puVar14[7] = uVar12;
          puVar14[8] = uVar13;
          uVar10 = puVar6[10];
          uVar11 = puVar6[0xb];
          uVar12 = puVar6[0xc];
          uVar13 = puVar6[0xd];
          puVar14[9] = puVar6[9];
          puVar14[10] = uVar10;
          puVar14[0xb] = uVar11;
          puVar14[0xc] = uVar12;
          puVar14[0xd] = uVar13;
          puVar14 = puVar14 + 0xe;
          puVar6 = puVar6 + -0xe;
        } while (iVar5 != 0);
      }
      if (param_2 == 0) goto LAB_00b5fef0;
      if (uVar15 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_00b5fb30(param_1 + param_2 * 0xe,iVar2,param_3,param_4,param_5,&local_60);
      uVar15 = param_2;
    } while (0x20 < param_2);
  }
LAB_00b5fb54:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar15 = param_2 >> 1;
    iVar2 = uVar15 * 8 - (param_2 >> 1);
    puVar14 = param_3 + iVar2 * 2;
    puVar6 = param_1 + iVar2 * 2;
    if (param_2 < 8) {
      uVar10 = param_1[1];
      uVar11 = param_1[2];
      uVar12 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = uVar10;
      param_3[2] = uVar11;
      param_3[3] = uVar12;
      uVar10 = param_1[5];
      uVar11 = param_1[6];
      uVar12 = param_1[7];
      uVar13 = param_1[8];
      param_3[4] = param_1[4];
      param_3[5] = uVar10;
      param_3[6] = uVar11;
      param_3[7] = uVar12;
      param_3[8] = uVar13;
      uVar10 = param_1[10];
      uVar11 = param_1[0xb];
      uVar12 = param_1[0xc];
      uVar13 = param_1[0xd];
      param_3[9] = param_1[9];
      param_3[10] = uVar10;
      param_3[0xb] = uVar11;
      param_3[0xc] = uVar12;
      param_3[0xd] = uVar13;
      uVar10 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      *puVar14 = *puVar6;
      puVar14[1] = uVar10;
      puVar14[2] = uVar11;
      puVar14[3] = uVar12;
      uVar10 = puVar6[5];
      uVar11 = puVar6[6];
      uVar12 = puVar6[7];
      uVar13 = puVar6[8];
      puVar14[4] = puVar6[4];
      puVar14[5] = uVar10;
      puVar14[6] = uVar11;
      puVar14[7] = uVar12;
      puVar14[8] = uVar13;
      uVar10 = puVar6[10];
      uVar11 = puVar6[0xb];
      uVar12 = puVar6[0xc];
      uVar13 = puVar6[0xd];
      puVar14[9] = puVar6[9];
      puVar14[10] = uVar10;
      puVar14[0xb] = uVar11;
      puVar14[0xc] = uVar12;
      puVar14[0xd] = uVar13;
      uVar9 = 1;
    }
    else {
      FUN_00b56ddc(param_1,param_3);
      FUN_00b56ddc(puVar6,puVar14);
      uVar9 = 4;
    }
    local_58[0] = 0;
    iVar2 = 0;
    local_58[1] = uVar15;
    do {
      iVar5 = local_58[iVar2];
      uVar7 = uVar15;
      if (iVar5 != 0) {
        uVar7 = param_2 - uVar15;
      }
      if (uVar9 < uVar7) {
        iVar19 = uVar7 - uVar9;
        puVar8 = param_1 + uVar9 * 0xe + iVar5 * 0xe;
        puVar6 = param_3 + uVar9 * 0xe + iVar5 * 0xe;
        do {
          uVar10 = puVar8[1];
          uVar11 = puVar8[2];
          uVar12 = puVar8[3];
          *puVar6 = *puVar8;
          puVar6[1] = uVar10;
          puVar6[2] = uVar11;
          puVar6[3] = uVar12;
          uVar10 = puVar8[5];
          uVar11 = puVar8[6];
          uVar12 = puVar8[7];
          uVar13 = puVar8[8];
          puVar6[4] = puVar8[4];
          puVar6[5] = uVar10;
          puVar6[6] = uVar11;
          puVar6[7] = uVar12;
          puVar6[8] = uVar13;
          uVar10 = puVar8[10];
          uVar11 = puVar8[0xb];
          uVar12 = puVar8[0xc];
          uVar13 = puVar8[0xd];
          puVar6[9] = puVar8[9];
          puVar6[10] = uVar10;
          puVar6[0xb] = uVar11;
          puVar6[0xc] = uVar12;
          puVar6[0xd] = uVar13;
          FUN_00b56ce8(param_3 + iVar5 * 0xe,puVar6);
          puVar8 = puVar8 + 0xe;
          puVar6 = puVar6 + 0xe;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
      bVar20 = iVar2 == 0;
      iVar2 = 1;
    } while (bVar20);
    iVar2 = 0;
    local_78 = param_3 + param_2 * 0xe + -0xe;
    local_7c = puVar14 + -0xe;
    do {
      uVar16 = param_3[2];
      uVar7 = puVar14[2];
      uVar9 = uVar16;
      if (uVar7 < uVar16) {
        uVar9 = uVar7;
      }
      uVar9 = FUN_01bed842(puVar14[1],param_3[1],uVar9);
      if (uVar9 == 0) {
        uVar9 = uVar7 - uVar16;
      }
      puVar6 = puVar14;
      if (uVar9 < 0x80000000) {
        puVar6 = param_3;
      }
      puVar8 = (undefined4 *)((int)param_1 + iVar2);
      uVar10 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      *puVar8 = *puVar6;
      puVar8[1] = uVar10;
      puVar8[2] = uVar11;
      puVar8[3] = uVar12;
      uVar10 = puVar6[5];
      uVar11 = puVar6[6];
      uVar12 = puVar6[7];
      uVar13 = puVar6[8];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar10;
      puVar8[6] = uVar11;
      puVar8[7] = uVar12;
      puVar8[8] = uVar13;
      uVar10 = puVar6[10];
      uVar11 = puVar6[0xb];
      uVar12 = puVar6[0xc];
      uVar13 = puVar6[0xd];
      puVar8[9] = puVar6[9];
      puVar8[10] = uVar10;
      puVar8[0xb] = uVar11;
      puVar8[0xc] = uVar12;
      puVar8[0xd] = uVar13;
      uVar17 = local_78[2];
      uVar16 = local_7c[2];
      uVar7 = uVar16;
      if (uVar17 < uVar16) {
        uVar7 = uVar17;
      }
      uVar7 = FUN_01bed842(local_78[1],local_7c[1],uVar7);
      if (uVar7 == 0) {
        uVar7 = uVar17 - uVar16;
      }
      puVar8 = (undefined4 *)((int)param_1 + ((param_2 * 0x38 + -0x38) - iVar2));
      puVar6 = local_7c;
      if (uVar7 < 0x80000000) {
        puVar6 = local_78;
      }
      uVar10 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      *puVar8 = *puVar6;
      puVar8[1] = uVar10;
      puVar8[2] = uVar11;
      puVar8[3] = uVar12;
      uVar10 = puVar6[5];
      uVar11 = puVar6[6];
      uVar12 = puVar6[7];
      uVar13 = puVar6[8];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar10;
      puVar8[6] = uVar11;
      puVar8[7] = uVar12;
      puVar8[8] = uVar13;
      uVar10 = puVar6[10];
      uVar11 = puVar6[0xb];
      uVar12 = puVar6[0xc];
      uVar13 = puVar6[0xd];
      puVar8[9] = puVar6[9];
      puVar8[10] = uVar10;
      puVar8[0xb] = uVar11;
      puVar8[0xc] = uVar12;
      puVar8[0xd] = uVar13;
      puVar14 = puVar14 + ((int)uVar9 >> 0x1f) * -0xe;
      iVar2 = iVar2 + 0x38;
      local_7c = local_7c + ((int)uVar7 >> 0x1f) * 0xe;
      uVar15 = uVar15 - 1;
      local_78 = local_78 + ~((int)uVar7 >> 0x1f) * 0xe;
      param_3 = param_3 + (uVar9 >> 0x1f ^ 1) * 0xe;
    } while (uVar15 != 0);
    local_7c = local_7c + 0xe;
    if ((param_2 & 1) != 0) {
      bVar20 = local_7c <= param_3;
      puVar6 = puVar14;
      if (!bVar20) {
        puVar6 = param_3;
      }
      uVar10 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      param_1 = (undefined4 *)((int)param_1 + iVar2);
      *param_1 = *puVar6;
      param_1[1] = uVar10;
      param_1[2] = uVar11;
      param_1[3] = uVar12;
      uVar10 = puVar6[5];
      uVar11 = puVar6[6];
      uVar12 = puVar6[7];
      uVar13 = puVar6[8];
      param_1[4] = puVar6[4];
      param_1[5] = uVar10;
      param_1[6] = uVar11;
      param_1[7] = uVar12;
      param_1[8] = uVar13;
      uVar10 = puVar6[10];
      uVar11 = puVar6[0xb];
      uVar12 = puVar6[0xc];
      uVar13 = puVar6[0xd];
      param_1[9] = puVar6[9];
      param_1[10] = uVar10;
      param_1[0xb] = uVar11;
      param_1[0xc] = uVar12;
      param_1[0xd] = uVar13;
      puVar14 = puVar14 + (uint)bVar20 * 0xe;
      param_3 = param_3 + (uint)!bVar20 * 0xe;
    }
    bVar20 = param_3 == local_7c;
    if (bVar20) {
      local_7c = local_78 + 0xe;
    }
    if (bVar20 && puVar14 == local_7c) {
      return;
    }
    FUN_01307140();
  }
LAB_00b603c0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xb603c0);
  (*pcVar1)();
}

