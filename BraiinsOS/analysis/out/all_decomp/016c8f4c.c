// FUN_016c8f4c @ 016c8f4c size=2776 calls_out=9 calls_in=2
// strings: 

void FUN_016c8f4c(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  int local_84;
  undefined4 *local_70;
  int local_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_2 < 0x21) {
LAB_016c8f6c:
    if (param_2 < 2) {
      return;
    }
    if (param_2 + 0x10 <= param_4) {
      uVar8 = param_2 >> 1;
      iVar2 = uVar8 * 8 - (param_2 >> 1);
      puVar11 = param_3 + iVar2 * 2;
      puVar9 = param_1 + iVar2 * 2;
      if (param_2 < 8) {
        uVar12 = param_1[1];
        uVar13 = param_1[2];
        uVar16 = param_1[3];
        *param_3 = *param_1;
        param_3[1] = uVar12;
        param_3[2] = uVar13;
        param_3[3] = uVar16;
        uVar12 = param_1[5];
        uVar13 = param_1[6];
        uVar16 = param_1[7];
        uVar17 = param_1[8];
        param_3[4] = param_1[4];
        param_3[5] = uVar12;
        param_3[6] = uVar13;
        param_3[7] = uVar16;
        param_3[8] = uVar17;
        uVar12 = param_1[10];
        uVar13 = param_1[0xb];
        uVar16 = param_1[0xc];
        uVar17 = param_1[0xd];
        param_3[9] = param_1[9];
        param_3[10] = uVar12;
        param_3[0xb] = uVar13;
        param_3[0xc] = uVar16;
        param_3[0xd] = uVar17;
        uVar12 = puVar9[1];
        uVar13 = puVar9[2];
        uVar16 = puVar9[3];
        *puVar11 = *puVar9;
        puVar11[1] = uVar12;
        puVar11[2] = uVar13;
        puVar11[3] = uVar16;
        uVar12 = puVar9[5];
        uVar13 = puVar9[6];
        uVar16 = puVar9[7];
        uVar17 = puVar9[8];
        puVar11[4] = puVar9[4];
        puVar11[5] = uVar12;
        puVar11[6] = uVar13;
        puVar11[7] = uVar16;
        puVar11[8] = uVar17;
        uVar12 = puVar9[10];
        uVar13 = puVar9[0xb];
        uVar16 = puVar9[0xc];
        uVar17 = puVar9[0xd];
        puVar11[9] = puVar9[9];
        puVar11[10] = uVar12;
        puVar11[0xb] = uVar13;
        puVar11[0xc] = uVar16;
        puVar11[0xd] = uVar17;
        uVar3 = 1;
      }
      else {
        FUN_016c8b64(param_1,param_3);
        FUN_016c8b64(puVar9,puVar11);
        uVar3 = 4;
      }
      if (uVar3 < uVar8) {
        local_6c = uVar3 * 0x38;
        uVar18 = uVar3;
        do {
          puVar4 = param_1 + uVar18 * 0xe;
          puVar20 = param_3 + uVar18 * 0xe;
          uVar12 = puVar4[1];
          uVar13 = puVar4[2];
          uVar16 = puVar4[3];
          *puVar20 = *puVar4;
          puVar20[1] = uVar12;
          puVar20[2] = uVar13;
          puVar20[3] = uVar16;
          uVar12 = puVar4[5];
          uVar13 = puVar4[6];
          uVar16 = puVar4[7];
          uVar17 = puVar4[8];
          puVar20[4] = puVar4[4];
          puVar20[5] = uVar12;
          puVar20[6] = uVar13;
          puVar20[7] = uVar16;
          puVar20[8] = uVar17;
          uVar12 = puVar4[10];
          uVar13 = puVar4[0xb];
          uVar16 = puVar4[0xc];
          uVar17 = puVar4[0xd];
          puVar20[9] = puVar4[9];
          puVar20[10] = uVar12;
          puVar20[0xb] = uVar13;
          puVar20[0xc] = uVar16;
          puVar20[0xd] = uVar17;
          uVar14 = puVar20[-0xc];
          uVar12 = puVar20[1];
          uVar19 = puVar20[2];
          uVar5 = uVar14;
          if (uVar19 < uVar14) {
            uVar5 = uVar19;
          }
          uVar5 = FUN_016dd50a(uVar12,puVar20[-0xd],uVar5);
          if (uVar5 == 0) {
            uVar5 = uVar19 - uVar14;
          }
          if (0x7fffffff < uVar5) {
            uVar13 = *puVar20;
            iVar2 = local_6c;
            do {
              puVar20 = (undefined4 *)((int)param_3 + iVar2);
              *puVar20 = puVar20[-0xe];
              puVar20[1] = puVar20[-0xd];
              puVar20[2] = puVar20[-0xc];
              puVar20[3] = puVar20[-0xb];
              puVar20[4] = puVar20[-10];
              puVar20[5] = puVar20[-9];
              puVar20[6] = puVar20[-8];
              puVar20[7] = puVar20[-7];
              puVar20[8] = puVar20[-6];
              puVar20[9] = puVar20[-5];
              puVar20[10] = puVar20[-4];
              puVar20[0xb] = puVar20[-3];
              puVar20[0xc] = puVar20[-2];
              puVar20[0xd] = puVar20[-1];
              if (iVar2 == 0x38) {
                puVar10 = param_3;
                goto LAB_016c9548;
              }
              uVar14 = puVar20[-0x1a];
              uVar5 = uVar14;
              if (uVar19 < uVar14) {
                uVar5 = uVar19;
              }
              iVar6 = FUN_016dd50a(uVar12,puVar20[-0x1b],uVar5);
              iVar2 = iVar2 + -0x38;
              if (iVar6 == 0) {
                iVar6 = uVar19 - uVar14;
              }
            } while (iVar6 < 0);
            puVar10 = (undefined4 *)((int)param_3 + iVar2);
LAB_016c9548:
            *puVar10 = uVar13;
            puVar20[-0xd] = uVar12;
            puVar20[-0xc] = uVar19;
            uVar12 = puVar4[4];
            uVar13 = puVar4[5];
            uVar16 = puVar4[6];
            uVar17 = puVar4[7];
            puVar20[-0xb] = puVar4[3];
            puVar20[-10] = uVar12;
            puVar20[-9] = uVar13;
            puVar20[-8] = uVar16;
            puVar20[-7] = uVar17;
            uVar12 = puVar4[9];
            uVar13 = puVar4[10];
            uVar16 = puVar4[0xb];
            uVar17 = puVar4[0xc];
            uVar15 = puVar4[0xd];
            puVar20[-6] = puVar4[8];
            puVar20[-5] = uVar12;
            puVar20[-4] = uVar13;
            puVar20[-3] = uVar16;
            puVar20[-2] = uVar17;
            puVar20[-1] = uVar15;
          }
          uVar18 = uVar18 + 1;
          local_6c = local_6c + 0x38;
        } while (uVar18 != uVar8);
      }
      if (uVar3 < param_2 - uVar8) {
        iVar2 = 0x38;
        uVar18 = uVar3;
        local_70 = puVar11;
        do {
          puVar4 = puVar9 + uVar18 * 0xe;
          puVar20 = puVar11 + uVar18 * 0xe;
          uVar12 = puVar4[1];
          uVar13 = puVar4[2];
          uVar16 = puVar4[3];
          *puVar20 = *puVar4;
          puVar20[1] = uVar12;
          puVar20[2] = uVar13;
          puVar20[3] = uVar16;
          uVar12 = puVar4[5];
          uVar13 = puVar4[6];
          uVar16 = puVar4[7];
          uVar17 = puVar4[8];
          puVar20[4] = puVar4[4];
          puVar20[5] = uVar12;
          puVar20[6] = uVar13;
          puVar20[7] = uVar16;
          puVar20[8] = uVar17;
          uVar12 = puVar4[10];
          uVar13 = puVar4[0xb];
          uVar16 = puVar4[0xc];
          uVar17 = puVar4[0xd];
          puVar20[9] = puVar4[9];
          puVar20[10] = uVar12;
          puVar20[0xb] = uVar13;
          puVar20[0xc] = uVar16;
          puVar20[0xd] = uVar17;
          uVar14 = puVar20[-0xc];
          uVar12 = puVar20[1];
          uVar19 = puVar20[2];
          uVar5 = uVar14;
          if (uVar19 < uVar14) {
            uVar5 = uVar19;
          }
          uVar5 = FUN_016dd50a(uVar12,puVar20[-0xd],uVar5);
          if (uVar5 == 0) {
            uVar5 = uVar19 - uVar14;
          }
          if (0x7fffffff < uVar5) {
            uVar13 = *puVar20;
            iVar6 = iVar2;
            puVar20 = local_70;
            do {
              puVar10 = puVar20 + uVar3 * 0xe;
              *puVar10 = puVar10[-0xe];
              puVar10[1] = puVar10[-0xd];
              puVar10[2] = puVar10[-0xc];
              puVar10[3] = puVar10[-0xb];
              puVar10[4] = puVar10[-10];
              puVar10[5] = puVar10[-9];
              puVar10[6] = puVar10[-8];
              puVar10[7] = puVar10[-7];
              puVar10[8] = puVar10[-6];
              puVar10[9] = puVar10[-5];
              puVar10[10] = puVar10[-4];
              puVar10[0xb] = puVar10[-3];
              puVar10[0xc] = puVar10[-2];
              puVar10[0xd] = puVar10[-1];
              if (uVar3 * 0x38 == iVar6) {
                puVar20 = puVar11;
                goto LAB_016c96b8;
              }
              uVar14 = puVar10[-0x1a];
              uVar5 = uVar14;
              if (uVar19 < uVar14) {
                uVar5 = uVar19;
              }
              iVar7 = FUN_016dd50a(uVar12,puVar10[-0x1b],uVar5);
              iVar6 = iVar6 + 0x38;
              puVar20 = puVar20 + -0xe;
              if (iVar7 == 0) {
                iVar7 = uVar19 - uVar14;
              }
            } while (iVar7 < 0);
            puVar20 = puVar20 + uVar3 * 0xe;
LAB_016c96b8:
            *puVar20 = uVar13;
            puVar10[-0xd] = uVar12;
            puVar10[-0xc] = uVar19;
            uVar12 = puVar4[4];
            uVar13 = puVar4[5];
            uVar16 = puVar4[6];
            uVar17 = puVar4[7];
            puVar10[-0xb] = puVar4[3];
            puVar10[-10] = uVar12;
            puVar10[-9] = uVar13;
            puVar10[-8] = uVar16;
            puVar10[-7] = uVar17;
            uVar12 = puVar4[9];
            uVar13 = puVar4[10];
            uVar16 = puVar4[0xb];
            uVar17 = puVar4[0xc];
            uVar15 = puVar4[0xd];
            puVar10[-6] = puVar4[8];
            puVar10[-5] = uVar12;
            puVar10[-4] = uVar13;
            puVar10[-3] = uVar16;
            puVar10[-2] = uVar17;
            puVar10[-1] = uVar15;
          }
          iVar2 = iVar2 + -0x38;
          uVar18 = uVar18 + 1;
          local_70 = local_70 + 0xe;
        } while (uVar18 != param_2 - uVar8);
      }
      puVar9 = puVar11 + -0xe;
      iVar2 = 0;
      puVar4 = param_3 + param_2 * 0xe + -0xe;
      do {
        uVar5 = param_3[2];
        uVar18 = puVar11[2];
        uVar3 = uVar5;
        if (uVar18 < uVar5) {
          uVar3 = uVar18;
        }
        uVar3 = FUN_016dd50a(puVar11[1],param_3[1],uVar3);
        if (uVar3 == 0) {
          uVar3 = uVar18 - uVar5;
        }
        puVar20 = puVar11;
        if (uVar3 < 0x80000000) {
          puVar20 = param_3;
        }
        puVar10 = (undefined4 *)((int)param_1 + iVar2);
        uVar12 = puVar20[1];
        uVar13 = puVar20[2];
        uVar16 = puVar20[3];
        *puVar10 = *puVar20;
        puVar10[1] = uVar12;
        puVar10[2] = uVar13;
        puVar10[3] = uVar16;
        uVar12 = puVar20[5];
        uVar13 = puVar20[6];
        uVar16 = puVar20[7];
        uVar17 = puVar20[8];
        puVar10[4] = puVar20[4];
        puVar10[5] = uVar12;
        puVar10[6] = uVar13;
        puVar10[7] = uVar16;
        puVar10[8] = uVar17;
        uVar12 = puVar20[10];
        uVar13 = puVar20[0xb];
        uVar16 = puVar20[0xc];
        uVar17 = puVar20[0xd];
        puVar10[9] = puVar20[9];
        puVar10[10] = uVar12;
        puVar10[0xb] = uVar13;
        puVar10[0xc] = uVar16;
        puVar10[0xd] = uVar17;
        uVar5 = puVar9[2];
        uVar14 = puVar4[2];
        uVar18 = uVar5;
        if (uVar14 < uVar5) {
          uVar18 = uVar14;
        }
        uVar18 = FUN_016dd50a(puVar4[1],puVar9[1],uVar18);
        if (uVar18 == 0) {
          uVar18 = uVar14 - uVar5;
        }
        puVar10 = (undefined4 *)((int)param_1 + ((param_2 * 0x38 + -0x38) - iVar2));
        puVar20 = puVar9;
        if (uVar18 < 0x80000000) {
          puVar20 = puVar4;
        }
        uVar12 = puVar20[1];
        uVar13 = puVar20[2];
        uVar16 = puVar20[3];
        *puVar10 = *puVar20;
        puVar10[1] = uVar12;
        puVar10[2] = uVar13;
        puVar10[3] = uVar16;
        uVar12 = puVar20[5];
        uVar13 = puVar20[6];
        uVar16 = puVar20[7];
        uVar17 = puVar20[8];
        puVar10[4] = puVar20[4];
        puVar10[5] = uVar12;
        puVar10[6] = uVar13;
        puVar10[7] = uVar16;
        puVar10[8] = uVar17;
        uVar12 = puVar20[10];
        uVar13 = puVar20[0xb];
        uVar16 = puVar20[0xc];
        uVar17 = puVar20[0xd];
        puVar10[9] = puVar20[9];
        puVar10[10] = uVar12;
        puVar10[0xb] = uVar13;
        puVar10[0xc] = uVar16;
        puVar10[0xd] = uVar17;
        puVar11 = puVar11 + ((int)uVar3 >> 0x1f) * -0xe;
        iVar2 = iVar2 + 0x38;
        puVar9 = puVar9 + ((int)uVar18 >> 0x1f) * 0xe;
        puVar4 = puVar4 + ~((int)uVar18 >> 0x1f) * 0xe;
        uVar8 = uVar8 - 1;
        param_3 = param_3 + (uVar3 >> 0x1f ^ 1) * 0xe;
      } while (uVar8 != 0);
      puVar9 = puVar9 + 0xe;
      if ((param_2 & 1) != 0) {
        bVar21 = puVar9 <= param_3;
        puVar20 = puVar11;
        if (!bVar21) {
          puVar20 = param_3;
        }
        param_1 = (undefined4 *)((int)param_1 + iVar2);
        uVar12 = puVar20[1];
        uVar13 = puVar20[2];
        uVar16 = puVar20[3];
        *param_1 = *puVar20;
        param_1[1] = uVar12;
        param_1[2] = uVar13;
        param_1[3] = uVar16;
        uVar12 = puVar20[5];
        uVar13 = puVar20[6];
        uVar16 = puVar20[7];
        uVar17 = puVar20[8];
        param_1[4] = puVar20[4];
        param_1[5] = uVar12;
        param_1[6] = uVar13;
        param_1[7] = uVar16;
        param_1[8] = uVar17;
        uVar12 = puVar20[10];
        uVar13 = puVar20[0xb];
        uVar16 = puVar20[0xc];
        uVar17 = puVar20[0xd];
        param_1[9] = puVar20[9];
        param_1[10] = uVar12;
        param_1[0xb] = uVar13;
        param_1[0xc] = uVar16;
        param_1[0xd] = uVar17;
        puVar11 = puVar11 + (uint)bVar21 * 0xe;
        param_3 = param_3 + (uint)!bVar21 * 0xe;
      }
      bVar21 = param_3 == puVar9;
      if (bVar21) {
        puVar9 = puVar4 + 0xe;
      }
      if (bVar21 && puVar11 == puVar9) {
        return;
      }
      FUN_00fb7254();
    }
LAB_016c9a0c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16c9a0c);
    (*pcVar1)();
  }
  local_84 = param_6;
LAB_016c8fe8:
  uVar8 = param_2;
  do {
    if (param_5 == 0) {
      FUN_016cae58(param_1,uVar8,param_3,param_4,1);
      return;
    }
    puVar9 = param_1 + (uVar8 >> 3) * 0x62;
    puVar11 = param_1 + ((uVar8 >> 3) * 8 - (uVar8 >> 3)) * 8;
    if (uVar8 < 0x40) {
      uVar5 = puVar11[2];
      uVar13 = param_1[1];
      uVar18 = param_1[2];
      uVar12 = puVar11[1];
      uVar3 = uVar5;
      if (uVar18 < uVar5) {
        uVar3 = uVar18;
      }
      uVar3 = FUN_016dd50a(uVar13,uVar12,uVar3);
      uVar16 = puVar9[1];
      uVar14 = puVar9[2];
      if (uVar3 == 0) {
        uVar3 = uVar18 - uVar5;
      }
      uVar19 = uVar14;
      if (uVar18 < uVar14) {
        uVar19 = uVar18;
      }
      uVar19 = FUN_016dd50a(uVar13,uVar16,uVar19);
      if (uVar19 == 0) {
        uVar19 = uVar18 - uVar14;
      }
      puVar4 = param_1;
      if (-1 < (int)(uVar19 ^ uVar3)) {
        uVar18 = uVar14;
        if (uVar5 < uVar14) {
          uVar18 = uVar5;
        }
        uVar18 = FUN_016dd50a(uVar12,uVar16,uVar18);
        if (uVar18 == 0) {
          uVar18 = uVar5 - uVar14;
        }
        puVar4 = puVar11;
        if ((int)(uVar18 ^ uVar3) < 0) {
          puVar4 = puVar9;
        }
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_016c9a50(param_1,puVar11,puVar9);
    }
    param_5 = param_5 + -1;
    uVar3 = ((uint)((int)puVar4 - (int)param_1) >> 3) * -0x49249249;
    local_60 = *puVar4;
    uStack_5c = puVar4[1];
    uStack_58 = puVar4[2];
    uStack_54 = puVar4[3];
    local_50 = puVar4[4];
    uStack_4c = puVar4[5];
    uStack_48 = puVar4[6];
    uStack_44 = puVar4[7];
    uStack_40 = puVar4[8];
    local_3c = puVar4[9];
    uStack_38 = puVar4[10];
    uStack_34 = puVar4[0xb];
    uStack_30 = puVar4[0xc];
    uStack_2c = puVar4[0xd];
    if (local_84 != 0) {
      uVar5 = puVar4[2];
      uVar14 = *(uint *)(local_84 + 8);
      uVar18 = uVar5;
      if (uVar14 < uVar5) {
        uVar18 = uVar14;
      }
      uVar18 = FUN_016dd50a(*(undefined4 *)(local_84 + 4),puVar4[1],uVar18);
      if (uVar18 == 0) {
        uVar18 = uVar14 - uVar5;
      }
      if (uVar18 < 0x80000000) break;
    }
    if (param_4 < uVar8) goto LAB_016c9a0c;
    param_2 = 0;
    puVar11 = param_3 + uVar8 * 0xe;
    puVar9 = param_1;
    uVar18 = uVar3;
    while( true ) {
      for (puVar20 = puVar9; puVar20 < param_1 + uVar18 * 0xe; puVar20 = puVar20 + 0xe) {
        uVar19 = puVar4[2];
        uVar14 = puVar20[2];
        uVar5 = uVar19;
        if (uVar14 < uVar19) {
          uVar5 = uVar14;
        }
        iVar2 = FUN_016dd50a(puVar20[1],puVar4[1],uVar5);
        puVar11 = puVar11 + -0xe;
        if (iVar2 == 0) {
          iVar2 = uVar14 - uVar19;
        }
        puVar9 = puVar11;
        if (iVar2 < 0) {
          puVar9 = param_3;
        }
        puVar9 = puVar9 + param_2 * 0xe;
        uVar12 = puVar20[1];
        uVar13 = puVar20[2];
        uVar16 = puVar20[3];
        *puVar9 = *puVar20;
        puVar9[1] = uVar12;
        puVar9[2] = uVar13;
        puVar9[3] = uVar16;
        uVar12 = puVar20[5];
        uVar13 = puVar20[6];
        uVar16 = puVar20[7];
        uVar17 = puVar20[8];
        puVar9[4] = puVar20[4];
        puVar9[5] = uVar12;
        puVar9[6] = uVar13;
        puVar9[7] = uVar16;
        puVar9[8] = uVar17;
        uVar12 = puVar20[10];
        uVar13 = puVar20[0xb];
        uVar16 = puVar20[0xc];
        uVar17 = puVar20[0xd];
        puVar9[9] = puVar20[9];
        puVar9[10] = uVar12;
        puVar9[0xb] = uVar13;
        puVar9[0xc] = uVar16;
        puVar9[0xd] = uVar17;
        param_2 = param_2 - (iVar2 >> 0x1f);
      }
      if (uVar18 == uVar8) break;
      puVar11 = puVar11 + -0xe;
      uVar12 = puVar20[1];
      uVar13 = puVar20[2];
      uVar16 = puVar20[3];
      puVar10 = puVar11 + param_2 * 0xe;
      puVar9 = puVar20 + 0xe;
      *puVar10 = *puVar20;
      puVar10[1] = uVar12;
      puVar10[2] = uVar13;
      puVar10[3] = uVar16;
      uVar12 = puVar20[5];
      uVar13 = puVar20[6];
      uVar16 = puVar20[7];
      uVar17 = puVar20[8];
      puVar10[4] = puVar20[4];
      puVar10[5] = uVar12;
      puVar10[6] = uVar13;
      puVar10[7] = uVar16;
      puVar10[8] = uVar17;
      uVar12 = puVar20[10];
      uVar13 = puVar20[0xb];
      uVar16 = puVar20[0xc];
      uVar17 = puVar20[0xd];
      puVar10[9] = puVar20[9];
      puVar10[10] = uVar12;
      puVar10[0xb] = uVar13;
      puVar10[0xc] = uVar16;
      puVar10[0xd] = uVar17;
      uVar18 = uVar8;
    }
    FUN_016dd1aa(param_1,param_3,param_2 * 0x38);
    iVar2 = uVar8 - param_2;
    if (iVar2 != 0) {
      puVar11 = param_1 + param_2 * 0xe;
      iVar6 = iVar2;
      puVar9 = param_3 + uVar8 * 0xe + -0xe;
      do {
        uVar12 = puVar9[1];
        uVar13 = puVar9[2];
        uVar16 = puVar9[3];
        iVar6 = iVar6 + -1;
        *puVar11 = *puVar9;
        puVar11[1] = uVar12;
        puVar11[2] = uVar13;
        puVar11[3] = uVar16;
        uVar12 = puVar9[5];
        uVar13 = puVar9[6];
        uVar16 = puVar9[7];
        uVar17 = puVar9[8];
        puVar11[4] = puVar9[4];
        puVar11[5] = uVar12;
        puVar11[6] = uVar13;
        puVar11[7] = uVar16;
        puVar11[8] = uVar17;
        uVar12 = puVar9[10];
        uVar13 = puVar9[0xb];
        uVar16 = puVar9[0xc];
        uVar17 = puVar9[0xd];
        puVar11[9] = puVar9[9];
        puVar11[10] = uVar12;
        puVar11[0xb] = uVar13;
        puVar11[0xc] = uVar16;
        puVar11[0xd] = uVar17;
        puVar11 = puVar11 + 0xe;
        puVar9 = puVar9 + -0xe;
      } while (iVar6 != 0);
    }
    if (param_2 == 0) break;
    if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
    }
    FUN_016c8f4c(param_1 + param_2 * 0xe,iVar2,param_3,param_4,param_5,&local_60);
    uVar8 = param_2;
    if (param_2 < 0x21) goto LAB_016c8f6c;
  } while( true );
  if (param_4 < uVar8) goto LAB_016c9a0c;
  uVar18 = 0;
  puVar11 = param_3 + uVar8 * 0xe;
  puVar9 = param_1;
  while( true ) {
    for (puVar20 = puVar9; puVar20 < param_1 + uVar3 * 0xe; puVar20 = puVar20 + 0xe) {
      uVar19 = puVar20[2];
      uVar14 = puVar4[2];
      uVar5 = uVar19;
      if (uVar14 < uVar19) {
        uVar5 = uVar14;
      }
      uVar5 = FUN_016dd50a(puVar4[1],puVar20[1],uVar5);
      puVar11 = puVar11 + -0xe;
      if (uVar5 == 0) {
        uVar5 = uVar14 - uVar19;
      }
      uVar14 = uVar18;
      puVar9 = puVar11;
      if (uVar5 < 0x80000000) {
        uVar14 = uVar18 + 1;
        puVar9 = param_3;
      }
      puVar9 = puVar9 + uVar18 * 0xe;
      uVar12 = puVar20[1];
      uVar13 = puVar20[2];
      uVar16 = puVar20[3];
      *puVar9 = *puVar20;
      puVar9[1] = uVar12;
      puVar9[2] = uVar13;
      puVar9[3] = uVar16;
      uVar12 = puVar20[5];
      uVar13 = puVar20[6];
      uVar16 = puVar20[7];
      uVar17 = puVar20[8];
      puVar9[4] = puVar20[4];
      puVar9[5] = uVar12;
      puVar9[6] = uVar13;
      puVar9[7] = uVar16;
      puVar9[8] = uVar17;
      uVar12 = puVar20[10];
      uVar13 = puVar20[0xb];
      uVar16 = puVar20[0xc];
      uVar17 = puVar20[0xd];
      puVar9[9] = puVar20[9];
      puVar9[10] = uVar12;
      puVar9[0xb] = uVar13;
      puVar9[0xc] = uVar16;
      puVar9[0xd] = uVar17;
      uVar18 = uVar14;
    }
    if (uVar3 == uVar8) break;
    uVar12 = puVar20[1];
    uVar13 = puVar20[2];
    uVar16 = puVar20[3];
    puVar9 = puVar20 + 0xe;
    puVar10 = param_3 + uVar18 * 0xe;
    uVar18 = uVar18 + 1;
    *puVar10 = *puVar20;
    puVar10[1] = uVar12;
    puVar10[2] = uVar13;
    puVar10[3] = uVar16;
    puVar11 = puVar11 + -0xe;
    uVar12 = puVar20[5];
    uVar13 = puVar20[6];
    uVar16 = puVar20[7];
    uVar17 = puVar20[8];
    puVar10[4] = puVar20[4];
    puVar10[5] = uVar12;
    puVar10[6] = uVar13;
    puVar10[7] = uVar16;
    puVar10[8] = uVar17;
    uVar12 = puVar20[10];
    uVar13 = puVar20[0xb];
    uVar16 = puVar20[0xc];
    uVar17 = puVar20[0xd];
    puVar10[9] = puVar20[9];
    puVar10[10] = uVar12;
    puVar10[0xb] = uVar13;
    puVar10[0xc] = uVar16;
    puVar10[0xd] = uVar17;
    uVar3 = uVar8;
  }
  FUN_016dd1aa(param_1,param_3,uVar18 * 0x38);
  param_2 = uVar8 - uVar18;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar18 * 0xe;
  puVar11 = param_1;
  uVar3 = param_2;
  puVar9 = param_3 + uVar8 * 0xe + -0xe;
  do {
    uVar12 = puVar9[1];
    uVar13 = puVar9[2];
    uVar16 = puVar9[3];
    uVar3 = uVar3 - 1;
    *puVar11 = *puVar9;
    puVar11[1] = uVar12;
    puVar11[2] = uVar13;
    puVar11[3] = uVar16;
    uVar12 = puVar9[5];
    uVar13 = puVar9[6];
    uVar16 = puVar9[7];
    uVar17 = puVar9[8];
    puVar11[4] = puVar9[4];
    puVar11[5] = uVar12;
    puVar11[6] = uVar13;
    puVar11[7] = uVar16;
    puVar11[8] = uVar17;
    uVar12 = puVar9[10];
    uVar13 = puVar9[0xb];
    uVar16 = puVar9[0xc];
    uVar17 = puVar9[0xd];
    puVar11[9] = puVar9[9];
    puVar11[10] = uVar12;
    puVar11[0xb] = uVar13;
    puVar11[0xc] = uVar16;
    puVar11[0xd] = uVar17;
    puVar11 = puVar11 + 0xe;
    puVar9 = puVar9 + -0xe;
  } while (uVar3 != 0);
  if (uVar8 < uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar18,uVar8,uVar8,&DAT_018af348);
  }
  local_84 = 0;
  if (param_2 < 0x21) goto LAB_016c8f6c;
  goto LAB_016c8fe8;
}

