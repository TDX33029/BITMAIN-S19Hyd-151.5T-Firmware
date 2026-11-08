// FUN_00b8fad4 @ 00b8fad4 size=3952 calls_out=8 calls_in=2
// strings: 

void FUN_00b8fad4(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  bool bVar24;
  bool bVar25;
  uint *local_54;
  uint *local_44;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_2 < 0x21) {
LAB_00b8fafc:
    uVar19 = param_2 >> 1;
    if (uVar19 != 0) {
      puVar5 = param_3 + param_2 * 4;
      if (param_2 < 0x10) {
        if (param_2 < 8) {
          uVar3 = param_1[1];
          uVar13 = param_1[2];
          uVar17 = param_1[3];
          *param_3 = *param_1;
          param_3[2] = uVar13;
          puVar6 = param_1 + uVar19 * 4;
          uVar15 = *puVar6;
          param_3[3] = uVar17;
          param_3[1] = uVar3;
          uVar13 = puVar6[1];
          uVar17 = puVar6[2];
          uVar3 = puVar6[3];
          puVar6 = param_3 + uVar19 * 4;
          *puVar6 = uVar15;
          puVar6[1] = uVar13;
          puVar6[2] = uVar17;
          puVar6[3] = uVar3;
          uVar3 = 1;
        }
        else {
          bVar25 = param_1[8] <= param_1[0xc];
          if (param_1[0xc] == param_1[8]) {
            bVar25 = param_1[9] <= param_1[0xd];
          }
          bVar24 = *param_1 <= param_1[4];
          if (param_1[4] == *param_1) {
            bVar24 = param_1[1] <= param_1[5];
          }
          uVar13 = (uint)!bVar24;
          puVar6 = param_1 + uVar13 * 4;
          uVar3 = 2;
          if (!bVar25) {
            uVar3 = 3;
          }
          uVar15 = 3;
          if (!bVar25) {
            uVar15 = 2;
          }
          puVar12 = param_1 + uVar15 * 4;
          puVar8 = param_1 + uVar3 * 4;
          uVar17 = uVar13 ^ 1;
          puVar4 = param_1 + uVar17 * 4;
          bVar25 = *puVar6 <= *puVar8;
          if (*puVar8 == *puVar6) {
            bVar25 = puVar6[1] <= puVar8[1];
          }
          uVar20 = uVar3;
          if (!bVar25) {
            uVar20 = uVar17;
          }
          puVar9 = puVar8;
          if (!bVar25) {
            puVar9 = puVar4;
          }
          bVar24 = *puVar4 <= *puVar12;
          if (*puVar12 == *puVar4) {
            bVar24 = puVar4[1] <= puVar12[1];
          }
          puVar21 = puVar8;
          if (bVar24) {
            uVar3 = uVar17;
            puVar21 = puVar4;
            uVar15 = uVar20;
            puVar4 = puVar12;
            puVar12 = puVar9;
          }
          uVar17 = puVar12[1];
          if (!bVar25) {
            uVar3 = uVar13;
          }
          uVar13 = param_1[uVar15 * 4];
          if (bVar25) {
            puVar8 = puVar6;
          }
          else {
            puVar21 = puVar6;
          }
          uVar22 = param_1[uVar3 * 4];
          uVar15 = puVar21[1];
          uVar3 = *puVar8;
          uVar20 = puVar8[1];
          param_3[2] = puVar8[2];
          *param_3 = uVar3;
          bVar25 = uVar22 <= uVar13;
          if (uVar13 == uVar22) {
            bVar25 = uVar15 <= uVar17;
          }
          param_3[3] = puVar8[3];
          if (bVar25) {
            puVar6 = puVar12;
          }
          else {
            puVar6 = puVar21;
            puVar21 = puVar12;
          }
          uVar15 = *puVar21;
          uVar13 = puVar21[1];
          uVar3 = puVar21[3];
          param_3[6] = puVar21[2];
          param_3[4] = uVar15;
          uVar15 = *puVar6;
          uVar17 = puVar6[2];
          param_3[7] = uVar3;
          param_3[5] = uVar13;
          uVar3 = puVar6[1];
          uVar13 = puVar6[3];
          param_3[8] = uVar15;
          param_3[9] = uVar3;
          param_3[10] = uVar17;
          param_3[0xb] = uVar13;
          uVar3 = *puVar4;
          uVar13 = puVar4[1];
          uVar15 = puVar4[2];
          uVar17 = puVar4[3];
          param_3[1] = uVar20;
          param_3[0xc] = uVar3;
          param_3[0xd] = uVar13;
          param_3[0xe] = uVar15;
          param_3[0xf] = uVar17;
          puVar6 = param_1 + uVar19 * 4;
          bVar25 = puVar6[8] <= puVar6[0xc];
          if (puVar6[0xc] == puVar6[8]) {
            bVar25 = puVar6[9] <= puVar6[0xd];
          }
          bVar24 = *puVar6 <= puVar6[4];
          if (puVar6[4] == *puVar6) {
            bVar24 = puVar6[1] <= puVar6[5];
          }
          uVar13 = (uint)!bVar24;
          uVar3 = 2;
          puVar4 = puVar6 + uVar13 * 4;
          if (!bVar25) {
            uVar3 = 3;
          }
          uVar15 = uVar13 ^ 1;
          uVar17 = 3;
          if (!bVar25) {
            uVar17 = 2;
          }
          puVar9 = puVar6 + uVar17 * 4;
          puVar12 = puVar6 + uVar3 * 4;
          puVar8 = puVar6 + uVar15 * 4;
          bVar25 = *puVar4 <= *puVar12;
          if (*puVar12 == *puVar4) {
            bVar25 = puVar4[1] <= puVar12[1];
          }
          puVar21 = puVar12;
          uVar20 = uVar3;
          if (!bVar25) {
            puVar21 = puVar8;
            uVar20 = uVar15;
          }
          bVar24 = *puVar8 <= *puVar9;
          if (*puVar9 == *puVar8) {
            bVar24 = puVar8[1] <= puVar9[1];
          }
          puVar14 = puVar8;
          puVar2 = puVar9;
          if (!bVar24) {
            puVar14 = puVar12;
            uVar20 = uVar17;
            puVar2 = puVar8;
            puVar21 = puVar9;
          }
          uVar17 = puVar6[uVar20 * 4];
          uVar20 = puVar21[1];
          if (bVar24) {
            uVar3 = uVar15;
          }
          if (!bVar25) {
            uVar3 = uVar13;
          }
          uVar3 = puVar6[uVar3 * 4];
          if (bVar25) {
            puVar12 = puVar4;
          }
          else {
            puVar14 = puVar4;
          }
          uVar22 = puVar12[1];
          uVar11 = puVar14[1];
          uVar13 = puVar12[2];
          uVar15 = puVar12[3];
          puVar6 = param_3 + uVar19 * 4;
          *puVar6 = *puVar12;
          puVar6[2] = uVar13;
          puVar6[3] = uVar15;
          puVar6[1] = uVar22;
          bVar25 = uVar3 <= uVar17;
          if (uVar17 == uVar3) {
            bVar25 = uVar11 <= uVar20;
          }
          if (bVar25) {
            puVar4 = puVar14;
            puVar14 = puVar21;
          }
          else {
            puVar4 = puVar21;
          }
          uVar13 = *puVar4;
          uVar15 = puVar4[1];
          uVar3 = puVar4[3];
          puVar6[6] = puVar4[2];
          puVar6[4] = uVar13;
          uVar13 = *puVar14;
          uVar17 = puVar14[2];
          puVar6[7] = uVar3;
          puVar6[5] = uVar15;
          uVar3 = puVar14[1];
          uVar15 = puVar14[3];
          puVar6[8] = uVar13;
          puVar6[9] = uVar3;
          puVar6[10] = uVar17;
          puVar6[0xb] = uVar15;
          uVar3 = puVar2[1];
          uVar13 = puVar2[2];
          uVar15 = puVar2[3];
          puVar6[0xc] = *puVar2;
          puVar6[0xd] = uVar3;
          puVar6[0xe] = uVar13;
          puVar6[0xf] = uVar15;
          uVar3 = 4;
        }
      }
      else {
        FUN_00b8c0f4(param_1,param_3,puVar5);
        FUN_00b8c0f4(param_1 + uVar19 * 4,param_3 + uVar19 * 4,puVar5 + 0x20);
        uVar3 = 8;
      }
      if (uVar3 < uVar19) {
        iVar23 = uVar3 << 4;
        uVar13 = uVar3;
        do {
          puVar6 = param_1 + uVar13 * 4;
          uVar20 = *puVar6;
          uVar22 = puVar6[1];
          uVar17 = puVar6[2];
          uVar15 = puVar6[3];
          puVar6 = param_3 + uVar13 * 4;
          *puVar6 = uVar20;
          puVar6[2] = uVar17;
          puVar6[3] = uVar15;
          puVar6[1] = uVar22;
          bVar25 = puVar6[-4] <= uVar20;
          if (uVar20 == puVar6[-4]) {
            bVar25 = puVar6[-3] <= uVar22;
          }
          if (!bVar25) {
            uVar15 = puVar6[2];
            uVar17 = puVar6[3];
            iVar7 = iVar23;
            do {
              *(undefined4 *)((int)param_3 + iVar7) = *(undefined4 *)((int)param_3 + iVar7 + -0x10);
              *(undefined4 *)((int)param_3 + iVar7 + 4) =
                   *(undefined4 *)((int)param_3 + iVar7 + -0xc);
              *(undefined4 *)((int)param_3 + iVar7 + 8) = *(undefined4 *)((int)param_3 + iVar7 + -8)
              ;
              *(undefined4 *)((int)param_3 + iVar7 + 0xc) =
                   *(undefined4 *)((int)param_3 + iVar7 + -4);
              if (iVar7 == 0x10) {
                puVar6 = param_3;
                goto LAB_00b90694;
              }
              uVar11 = *(uint *)((int)param_3 + iVar7 + -0x20);
              iVar10 = iVar7 + -0x1c;
              iVar7 = iVar7 + -0x10;
              bVar25 = uVar11 <= uVar20;
              if (uVar20 == uVar11) {
                bVar25 = *(uint *)((int)param_3 + iVar10) <= uVar22;
              }
            } while (!bVar25);
            puVar6 = (uint *)((int)param_3 + iVar7);
LAB_00b90694:
            *puVar6 = uVar20;
            puVar6[1] = uVar22;
            puVar6[2] = uVar15;
            puVar6[3] = uVar17;
          }
          uVar13 = uVar13 + 1;
          iVar23 = iVar23 + 0x10;
        } while (uVar13 != uVar19);
      }
      puVar6 = param_3 + uVar19 * 4;
      if (uVar3 < param_2 - uVar19) {
        iVar23 = 0x10;
        uVar13 = uVar3;
        local_44 = puVar6;
        do {
          puVar4 = param_1 + uVar19 * 4 + uVar13 * 4;
          uVar20 = *puVar4;
          uVar22 = puVar4[1];
          uVar15 = puVar4[2];
          uVar17 = puVar4[3];
          puVar4 = puVar6 + uVar13 * 4;
          *puVar4 = uVar20;
          puVar4[2] = uVar15;
          puVar4[1] = uVar22;
          puVar4[3] = uVar17;
          bVar25 = puVar4[-4] <= uVar20;
          if (uVar20 == puVar4[-4]) {
            bVar25 = puVar4[-3] <= uVar22;
          }
          if (!bVar25) {
            uVar15 = puVar4[3];
            uVar17 = puVar4[2];
            iVar7 = iVar23;
            puVar4 = local_44;
            do {
              uVar16 = puVar4[uVar3 * 4 + -1];
              uVar11 = puVar4[uVar3 * 4 + -3];
              uVar18 = puVar4[uVar3 * 4 + -2];
              puVar4[uVar3 * 4] = puVar4[uVar3 * 4 + -4];
              puVar4[uVar3 * 4 + 1] = uVar11;
              puVar4[uVar3 * 4 + 2] = uVar18;
              puVar4[uVar3 * 4 + 3] = uVar16;
              if (uVar3 * 0x10 == iVar7) {
                puVar4 = puVar6;
                goto LAB_00b907b0;
              }
              puVar12 = puVar4 + uVar3 * 4 + -8;
              puVar8 = puVar4 + uVar3 * 4 + -7;
              iVar7 = iVar7 + 0x10;
              puVar4 = puVar4 + -4;
              bVar25 = *puVar12 <= uVar20;
              if (uVar20 == *puVar12) {
                bVar25 = *puVar8 <= uVar22;
              }
            } while (!bVar25);
            puVar4 = puVar4 + uVar3 * 4;
LAB_00b907b0:
            puVar4[2] = uVar17;
            *puVar4 = uVar20;
            puVar4[1] = uVar22;
            puVar4[3] = uVar15;
          }
          uVar13 = uVar13 + 1;
          iVar23 = iVar23 + -0x10;
          local_44 = local_44 + 4;
        } while (uVar13 != param_2 - uVar19);
      }
      puVar4 = puVar6 + -4;
      iVar23 = 0;
      do {
        puVar12 = puVar5 + -4;
        bVar25 = *param_3 <= *puVar6;
        if (*puVar6 == *param_3) {
          bVar25 = param_3[1] <= puVar6[1];
        }
        uVar3 = (uint)!bVar25;
        puVar8 = param_3;
        if (uVar3 != 0) {
          puVar8 = puVar6;
        }
        puVar6 = puVar6 + uVar3 * 4;
        uVar13 = puVar8[1];
        uVar15 = puVar8[2];
        uVar17 = puVar8[3];
        puVar9 = (uint *)((int)param_1 + iVar23);
        *puVar9 = *puVar8;
        puVar9[1] = uVar13;
        puVar9[2] = uVar15;
        puVar9[3] = uVar17;
        bVar25 = *puVar4 <= *puVar12;
        if (*puVar12 == *puVar4) {
          bVar25 = puVar4[1] <= puVar5[-3];
        }
        uVar13 = (uint)!bVar25;
        puVar8 = puVar12;
        if (uVar13 != 0) {
          puVar8 = puVar4;
        }
        puVar4 = puVar4 + uVar13 * -4;
        puVar5 = puVar12 + uVar13 * 4;
        uVar13 = puVar8[2];
        puVar12 = (uint *)((int)param_1 + ((param_2 * 0x10 + -0x10) - iVar23));
        *puVar12 = *puVar8;
        iVar23 = iVar23 + 0x10;
        uVar15 = puVar8[1];
        uVar19 = uVar19 - 1;
        puVar12[3] = puVar8[3];
        puVar12[1] = uVar15;
        param_3 = param_3 + (uVar3 ^ 1) * 4;
        puVar12[2] = uVar13;
      } while (uVar19 != 0);
      puVar4 = puVar4 + 4;
      puVar12 = puVar5;
      if ((param_2 & 1) != 0) {
        bVar25 = puVar4 <= param_3;
        puVar12 = puVar6;
        if (!bVar25) {
          puVar12 = param_3;
        }
        param_1 = (uint *)((int)param_1 + iVar23);
        uVar19 = *puVar12;
        uVar3 = puVar12[1];
        uVar13 = puVar12[2];
        param_1[3] = puVar12[3];
        *param_1 = uVar19;
        param_1[1] = uVar3;
        param_1[2] = uVar13;
        puVar6 = puVar6 + (uint)bVar25 * 4;
        param_3 = param_3 + (int)(uint)!bVar25 * 4;
        puVar12 = (uint *)(uint)!bVar25;
      }
      if (param_3 == puVar4) {
        puVar12 = puVar5;
      }
      if (param_3 != puVar4 || puVar6 != puVar12) {
        FUN_00fb7254();
LAB_00b90a28:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb90a28);
        (*pcVar1)();
      }
    }
    return;
  }
  local_54 = param_6;
LAB_00b8fb54:
  uVar19 = param_2;
  do {
    if (param_5 == 0) {
      FUN_00b8f43c(param_1,uVar19,param_3,param_4,1);
      return;
    }
    puVar5 = param_1 + (uVar19 >> 3) * 0x10;
    puVar6 = param_1 + ((uVar19 >> 3) * 8 - (uVar19 >> 3)) * 4;
    if (uVar19 < 0x40) {
      uVar3 = *param_1;
      uVar13 = *puVar5;
      bVar25 = uVar13 <= uVar3;
      if (uVar3 == uVar13) {
        bVar25 = puVar5[1] <= param_1[1];
      }
      uVar15 = *puVar6;
      bVar24 = uVar15 <= uVar3;
      if (uVar3 == uVar15) {
        bVar24 = puVar6[1] <= param_1[1];
      }
      puVar4 = param_1;
      if (!bVar25 == !bVar24) {
        bVar24 = uVar15 <= uVar13;
        if (uVar13 == uVar15) {
          bVar24 = puVar6[1] <= puVar5[1];
        }
        puVar4 = puVar5;
        if (!bVar25 != !bVar24) {
          puVar4 = puVar6;
        }
      }
    }
    else {
      puVar4 = (uint *)FUN_00b9809c(param_1);
    }
    local_38 = *puVar4;
    uStack_34 = puVar4[1];
    uStack_30 = puVar4[2];
    uStack_2c = puVar4[3];
    param_5 = param_5 + -1;
    uVar3 = (uint)((int)puVar4 - (int)param_1) >> 4;
    if (local_54 != (uint *)0x0) {
      bVar25 = *puVar4 <= *local_54;
      if (*local_54 == *puVar4) {
        bVar25 = puVar4[1] <= local_54[1];
      }
      if (bVar25) break;
    }
    if (param_4 < uVar19) goto LAB_00b90a28;
    puVar5 = param_3 + uVar19 * 4;
    param_2 = 0;
    puVar6 = param_1;
    uVar13 = uVar3;
    while( true ) {
      iVar23 = uVar13 - 3;
      if (uVar13 < 3) {
        iVar23 = 0;
      }
      for (; puVar6 < param_1 + iVar23 * 4; puVar6 = puVar6 + 0x10) {
        uVar15 = puVar6[1];
        uVar22 = puVar6[2];
        uVar20 = *puVar6;
        uVar17 = puVar6[3];
        bVar25 = *puVar4 <= uVar20;
        if (uVar20 == *puVar4) {
          bVar25 = puVar4[1] <= uVar15;
        }
        iVar7 = param_2 + !bVar25;
        puVar12 = param_3;
        if (!bVar25 == 0) {
          puVar12 = puVar5 + -4;
        }
        puVar12 = puVar12 + param_2 * 4;
        *puVar12 = uVar20;
        puVar12[1] = uVar15;
        puVar12[2] = uVar22;
        puVar12[3] = uVar17;
        uVar15 = puVar6[5];
        uVar17 = puVar6[7];
        bVar25 = *puVar4 <= puVar6[4];
        if (puVar6[4] == *puVar4) {
          bVar25 = puVar4[1] <= uVar15;
        }
        puVar12 = param_3;
        if (!bVar25 == 0) {
          puVar12 = puVar5 + -8;
        }
        uVar20 = puVar6[6];
        iVar10 = iVar7 + (uint)!bVar25;
        puVar12 = puVar12 + iVar7 * 4;
        *puVar12 = puVar6[4];
        puVar12[1] = uVar15;
        puVar12[2] = uVar20;
        puVar12[3] = uVar17;
        uVar17 = puVar6[9];
        uVar20 = puVar6[0xb];
        uVar15 = puVar6[10];
        bVar25 = *puVar4 <= puVar6[8];
        if (puVar6[8] == *puVar4) {
          bVar25 = puVar4[1] <= uVar17;
        }
        puVar12 = param_3;
        if (!bVar25 == 0) {
          puVar12 = puVar5 + -0xc;
        }
        puVar5 = puVar5 + -0x10;
        puVar12 = puVar12 + iVar10 * 4;
        *puVar12 = puVar6[8];
        puVar12[2] = uVar15;
        puVar12[3] = uVar20;
        iVar10 = iVar10 + (uint)!bVar25;
        puVar12[1] = uVar17;
        uVar15 = puVar6[0xd];
        uVar17 = puVar6[0xe];
        bVar25 = *puVar4 <= puVar6[0xc];
        if (puVar6[0xc] == *puVar4) {
          bVar25 = puVar4[1] <= puVar6[0xd];
        }
        puVar12 = puVar5;
        if (!bVar25 != 0) {
          puVar12 = param_3;
        }
        uVar20 = puVar6[0xf];
        puVar12 = puVar12 + iVar10 * 4;
        *puVar12 = puVar6[0xc];
        param_2 = iVar10 + (uint)!bVar25;
        puVar12[1] = uVar15;
        puVar12[2] = uVar17;
        puVar12[3] = uVar20;
      }
      for (; puVar6 < param_1 + uVar13 * 4; puVar6 = puVar6 + 4) {
        uVar15 = *puVar6;
        uVar20 = puVar6[1];
        puVar5 = puVar5 + -4;
        uVar17 = puVar6[2];
        bVar25 = *puVar4 <= uVar15;
        if (uVar15 == *puVar4) {
          bVar25 = puVar4[1] <= uVar20;
        }
        uVar22 = puVar6[3];
        puVar12 = puVar5;
        if (!bVar25 != 0) {
          puVar12 = param_3;
        }
        puVar12 = puVar12 + param_2 * 4;
        *puVar12 = uVar15;
        param_2 = param_2 + !bVar25;
        puVar12[1] = uVar20;
        puVar12[2] = uVar17;
        puVar12[3] = uVar22;
      }
      if (uVar13 == uVar19) break;
      puVar5 = puVar5 + -4;
      uVar13 = puVar6[1];
      uVar17 = puVar6[2];
      uVar15 = puVar6[3];
      puVar12 = puVar5 + param_2 * 4;
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 4;
      puVar12[1] = uVar13;
      puVar12[2] = uVar17;
      puVar12[3] = uVar15;
      uVar13 = uVar19;
    }
    FUN_016dd1aa(param_1,param_3,param_2 << 4);
    iVar23 = uVar19 - param_2;
    if (iVar23 != 0) {
      puVar6 = param_1 + param_2 * 4;
      puVar5 = param_3 + uVar19 * 4 + -4;
      iVar7 = iVar23;
      do {
        uVar17 = *puVar5;
        iVar7 = iVar7 + -1;
        uVar15 = puVar5[1];
        uVar13 = puVar5[2];
        uVar20 = puVar5[3];
        puVar5 = puVar5 + -4;
        *puVar6 = uVar17;
        puVar6[1] = uVar15;
        puVar6[2] = uVar13;
        puVar6[3] = uVar20;
        puVar6 = puVar6 + 4;
      } while (iVar7 != 0);
    }
    if (param_2 == 0) break;
    if (uVar19 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
    }
    FUN_00b8fad4(param_1 + param_2 * 4,iVar23,param_3,param_4,param_5,&local_38);
    uVar19 = param_2;
    if (param_2 < 0x21) goto LAB_00b8fafc;
  } while( true );
  if (param_4 < uVar19) goto LAB_00b90a28;
  puVar5 = param_3 + uVar19 * 4;
  uVar13 = 0;
  puVar6 = param_1;
  while( true ) {
    iVar23 = uVar3 - 3;
    if (uVar3 < 3) {
      iVar23 = 0;
    }
    for (; puVar6 < param_1 + iVar23 * 4; puVar6 = puVar6 + 0x10) {
      uVar15 = *puVar6;
      uVar20 = puVar6[1];
      uVar17 = puVar6[2];
      uVar22 = puVar6[3];
      bVar25 = *puVar4 < uVar15;
      if (*puVar4 == uVar15) {
        bVar25 = puVar4[1] < uVar20;
      }
      puVar12 = param_3;
      if (!bVar25 == 0) {
        puVar12 = puVar5 + -4;
      }
      puVar12 = puVar12 + uVar13 * 4;
      *puVar12 = uVar15;
      iVar7 = uVar13 + !bVar25;
      uVar13 = puVar6[5];
      puVar12[1] = uVar20;
      puVar12[2] = uVar17;
      puVar12[3] = uVar22;
      uVar15 = puVar6[7];
      bVar25 = *puVar4 < puVar6[4];
      if (*puVar4 == puVar6[4]) {
        bVar25 = puVar4[1] < uVar13;
      }
      uVar17 = puVar6[6];
      puVar12 = param_3;
      if (!bVar25 == 0) {
        puVar12 = puVar5 + -8;
      }
      iVar10 = iVar7 + (uint)!bVar25;
      puVar12 = puVar12 + iVar7 * 4;
      *puVar12 = puVar6[4];
      puVar12[1] = uVar13;
      puVar12[2] = uVar17;
      puVar12[3] = uVar15;
      uVar15 = puVar6[9];
      uVar17 = puVar6[0xb];
      uVar13 = puVar6[10];
      bVar25 = *puVar4 < puVar6[8];
      if (*puVar4 == puVar6[8]) {
        bVar25 = puVar4[1] < uVar15;
      }
      puVar12 = param_3;
      if (!bVar25 == 0) {
        puVar12 = puVar5 + -0xc;
      }
      puVar5 = puVar5 + -0x10;
      puVar12 = puVar12 + iVar10 * 4;
      *puVar12 = puVar6[8];
      puVar12[1] = uVar15;
      puVar12[2] = uVar13;
      puVar12[3] = uVar17;
      iVar10 = iVar10 + (uint)!bVar25;
      uVar15 = puVar6[0xd];
      bVar25 = *puVar4 < puVar6[0xc];
      if (*puVar4 == puVar6[0xc]) {
        bVar25 = puVar4[1] < puVar6[0xd];
      }
      uVar17 = puVar6[0xe];
      puVar12 = puVar5;
      if (!bVar25 != 0) {
        puVar12 = param_3;
      }
      uVar20 = puVar6[0xf];
      puVar12 = puVar12 + iVar10 * 4;
      *puVar12 = puVar6[0xc];
      uVar13 = iVar10 + (uint)!bVar25;
      puVar12[1] = uVar15;
      puVar12[2] = uVar17;
      puVar12[3] = uVar20;
    }
    while (puVar6 < param_1 + uVar3 * 4) {
      uVar15 = *puVar6;
      uVar20 = puVar6[1];
      puVar5 = puVar5 + -4;
      uVar17 = puVar6[2];
      uVar22 = puVar6[3];
      bVar25 = *puVar4 < uVar15;
      if (*puVar4 == uVar15) {
        bVar25 = puVar4[1] < uVar20;
      }
      puVar6 = puVar6 + 4;
      puVar12 = puVar5;
      if (!bVar25 != 0) {
        puVar12 = param_3;
      }
      puVar12 = puVar12 + uVar13 * 4;
      *puVar12 = uVar15;
      uVar13 = uVar13 + !bVar25;
      puVar12[1] = uVar20;
      puVar12[2] = uVar17;
      puVar12[3] = uVar22;
    }
    if (uVar3 == uVar19) break;
    puVar5 = puVar5 + -4;
    uVar3 = *puVar6;
    uVar15 = puVar6[1];
    uVar20 = puVar6[2];
    uVar17 = puVar6[3];
    puVar6 = puVar6 + 4;
    puVar12 = param_3 + uVar13 * 4;
    *puVar12 = uVar3;
    uVar13 = uVar13 + 1;
    puVar12[1] = uVar15;
    puVar12[2] = uVar20;
    puVar12[3] = uVar17;
    uVar3 = uVar19;
  }
  FUN_016dd1aa(param_1,param_3,uVar13 << 4);
  param_2 = uVar19 - uVar13;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar13 * 4;
  puVar6 = param_3 + uVar19 * 4 + -4;
  uVar3 = param_2;
  puVar5 = param_1;
  do {
    uVar15 = *puVar6;
    uVar22 = puVar6[1];
    uVar3 = uVar3 - 1;
    uVar20 = puVar6[2];
    uVar17 = puVar6[3];
    puVar6 = puVar6 + -4;
    *puVar5 = uVar15;
    puVar5[1] = uVar22;
    puVar5[2] = uVar20;
    puVar5[3] = uVar17;
    puVar5 = puVar5 + 4;
  } while (uVar3 != 0);
  if (uVar19 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar13,uVar19,uVar19,&DAT_018af348);
  }
  local_54 = (uint *)0x0;
  if (param_2 < 0x21) goto LAB_00b8fafc;
  goto LAB_00b8fb54;
}

